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

#include <algorithm>

namespace Aws {
namespace ACMPCA {

template <typename DerivedClient = ACMPCAClient>
class ACMPCAWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeCertificateAuthorityAuditReportOutcome> WaitUntilAuditReportCreated(
      const Model::DescribeCertificateAuthorityAuditReportRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeCertificateAuthorityAuditReportOutcome>> acceptors;
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SUCCESS"),
         [](const Model::DescribeCertificateAuthorityAuditReportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return Model::AuditReportStatusMapper::GetNameForAuditReportStatus(result.GetAuditReportStatus()) == expected.get<Aws::String>();
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
         [](const Model::DescribeCertificateAuthorityAuditReportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return Model::AuditReportStatusMapper::GetNameForAuditReportStatus(result.GetAuditReportStatus()) == expected.get<Aws::String>();
         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("AccessDeniedException")});

    auto operation = [this](const Model::DescribeCertificateAuthorityAuditReportRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeCertificateAuthorityAuditReport(req);
    };
    Aws::Utils::Waiter<Model::DescribeCertificateAuthorityAuditReportRequest, Model::DescribeCertificateAuthorityAuditReportOutcome> waiter(
        3, 60, acceptors, operation, "WaitUntilAuditReportCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetCertificateOutcome> WaitUntilCertificateIssued(const Model::GetCertificateRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetCertificateOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("RequestInProgressException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("AccessDeniedException")});

    auto operation = [this](const Model::GetCertificateRequest& req) { return static_cast<DerivedClient*>(this)->GetCertificate(req); };
    Aws::Utils::Waiter<Model::GetCertificateRequest, Model::GetCertificateOutcome> waiter(1, 60, acceptors, operation,
                                                                                          "WaitUntilCertificateIssued");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetCertificateAuthorityCsrOutcome> WaitUntilCertificateAuthorityCSRCreated(
      const Model::GetCertificateAuthorityCsrRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetCertificateAuthorityCsrOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("RequestInProgressException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("AccessDeniedException")});

    auto operation = [this](const Model::GetCertificateAuthorityCsrRequest& req) {
      return static_cast<DerivedClient*>(this)->GetCertificateAuthorityCsr(req);
    };
    Aws::Utils::Waiter<Model::GetCertificateAuthorityCsrRequest, Model::GetCertificateAuthorityCsrOutcome> waiter(
        3, 60, acceptors, operation, "WaitUntilCertificateAuthorityCSRCreated");
    return waiter.Wait(request);
  }
};
}  // namespace ACMPCA
}  // namespace Aws
