/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCAClient.h>
#include <aws/acm-pca/model/AuditReportStatus.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityAuditReportRequest.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityAuditReportResult.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCsrRequest.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCsrResult.h>
#include <aws/acm-pca/model/GetCertificateRequest.h>
#include <aws/acm-pca/model/GetCertificateResult.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ACMPCA {

template <typename DerivedClient = ACMPCAClient>
class ACMPCAWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeCertificateAuthorityAuditReportOutcome> WaitUntilAuditReportCreated(
      const Model::DescribeCertificateAuthorityAuditReportRequest& request) {
    using OutcomeT = Model::DescribeCertificateAuthorityAuditReportOutcome;
    using RequestT = Model::DescribeCertificateAuthorityAuditReportRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AuditReportCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCESS"),
        [](const Model::DescribeCertificateAuthorityAuditReportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AuditReportStatusMapper::GetNameForAuditReportStatus(result.GetAuditReportStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AuditReportCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeCertificateAuthorityAuditReportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AuditReportStatusMapper::GetNameForAuditReportStatus(result.GetAuditReportStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "AuditReportCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("AccessDeniedException")));

    auto operation = [this](const RequestT& req) {
      return static_cast<DerivedClient*>(this)->DescribeCertificateAuthorityAuditReport(req);
    };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 60, std::move(acceptors), operation, "WaitUntilAuditReportCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetCertificateOutcome> WaitUntilCertificateIssued(const Model::GetCertificateRequest& request) {
    using OutcomeT = Model::GetCertificateOutcome;
    using RequestT = Model::GetCertificateRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("CertificateIssuedWaiter", Aws::Utils::WaiterState::SUCCESS, false));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("CertificateIssuedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("RequestInProgressException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("CertificateIssuedWaiter", Aws::Utils::WaiterState::FAILURE,
                                                                                Aws::String("AccessDeniedException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetCertificate(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 60, std::move(acceptors), operation, "WaitUntilCertificateIssued");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetCertificateAuthorityCsrOutcome> WaitUntilCertificateAuthorityCSRCreated(
      const Model::GetCertificateAuthorityCsrRequest& request) {
    using OutcomeT = Model::GetCertificateAuthorityCsrOutcome;
    using RequestT = Model::GetCertificateAuthorityCsrRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("CertificateAuthorityCSRCreatedWaiter",
                                                                                Aws::Utils::WaiterState::SUCCESS, false));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "CertificateAuthorityCSRCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("RequestInProgressException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "CertificateAuthorityCSRCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("AccessDeniedException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetCertificateAuthorityCsr(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 60, std::move(acceptors), operation, "WaitUntilCertificateAuthorityCSRCreated");
    return waiter.Wait(request);
  }
};
}  // namespace ACMPCA
}  // namespace Aws
