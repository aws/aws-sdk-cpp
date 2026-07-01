/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACMClient.h>
#include <aws/acm/model/AcmeDomainValidationStatus.h>
#include <aws/acm/model/AcmeEndpointStatus.h>
#include <aws/acm/model/CertificateStatus.h>
#include <aws/acm/model/DescribeAcmeDomainValidationRequest.h>
#include <aws/acm/model/DescribeAcmeDomainValidationResult.h>
#include <aws/acm/model/DescribeAcmeEndpointRequest.h>
#include <aws/acm/model/DescribeAcmeEndpointResult.h>
#include <aws/acm/model/DescribeCertificateRequest.h>
#include <aws/acm/model/DescribeCertificateResult.h>
#include <aws/acm/model/DomainStatus.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ACM {

template <typename DerivedClient = ACMClient>
class ACMWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeAcmeDomainValidationOutcome> WaitUntilAcmeDomainValidationValidated(
      const Model::DescribeAcmeDomainValidationRequest& request) {
    using OutcomeT = Model::DescribeAcmeDomainValidationOutcome;
    using RequestT = Model::DescribeAcmeDomainValidationRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AcmeDomainValidationValidatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("VALID"),
        [](const Model::DescribeAcmeDomainValidationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AcmeDomainValidationStatusMapper::GetNameForAcmeDomainValidationStatus(
                     result.GetAcmeDomainValidation().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AcmeDomainValidationValidatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("INVALID"),
        [](const Model::DescribeAcmeDomainValidationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AcmeDomainValidationStatusMapper::GetNameForAcmeDomainValidationStatus(
                     result.GetAcmeDomainValidation().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AcmeDomainValidationValidatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("VALIDATING"),
        [](const Model::DescribeAcmeDomainValidationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AcmeDomainValidationStatusMapper::GetNameForAcmeDomainValidationStatus(
                     result.GetAcmeDomainValidation().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAcmeDomainValidation(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 60, std::move(acceptors), operation, "WaitUntilAcmeDomainValidationValidated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAcmeDomainValidationOutcome> WaitUntilAcmeDomainValidationDeleted(
      const Model::DescribeAcmeDomainValidationRequest& request) {
    using OutcomeT = Model::DescribeAcmeDomainValidationOutcome;
    using RequestT = Model::DescribeAcmeDomainValidationRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "AcmeDomainValidationDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AcmeDomainValidationDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::DescribeAcmeDomainValidationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AcmeDomainValidationStatusMapper::GetNameForAcmeDomainValidationStatus(
                     result.GetAcmeDomainValidation().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAcmeDomainValidation(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 60, std::move(acceptors), operation, "WaitUntilAcmeDomainValidationDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAcmeEndpointOutcome> WaitUntilAcmeEndpointActive(
      const Model::DescribeAcmeEndpointRequest& request) {
    using OutcomeT = Model::DescribeAcmeEndpointOutcome;
    using RequestT = Model::DescribeAcmeEndpointRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AcmeEndpointActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeAcmeEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AcmeEndpointStatusMapper::GetNameForAcmeEndpointStatus(result.GetAcmeEndpoint().GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AcmeEndpointActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeAcmeEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AcmeEndpointStatusMapper::GetNameForAcmeEndpointStatus(result.GetAcmeEndpoint().GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AcmeEndpointActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::DescribeAcmeEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AcmeEndpointStatusMapper::GetNameForAcmeEndpointStatus(result.GetAcmeEndpoint().GetStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAcmeEndpoint(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 60, std::move(acceptors), operation, "WaitUntilAcmeEndpointActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAcmeEndpointOutcome> WaitUntilAcmeEndpointDeleted(
      const Model::DescribeAcmeEndpointRequest& request) {
    using OutcomeT = Model::DescribeAcmeEndpointOutcome;
    using RequestT = Model::DescribeAcmeEndpointRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "AcmeEndpointDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AcmeEndpointDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::DescribeAcmeEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AcmeEndpointStatusMapper::GetNameForAcmeEndpointStatus(result.GetAcmeEndpoint().GetStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAcmeEndpoint(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 60, std::move(acceptors), operation, "WaitUntilAcmeEndpointDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeCertificateOutcome> WaitUntilCertificateValidated(
      const Model::DescribeCertificateRequest& request) {
    using OutcomeT = Model::DescribeCertificateOutcome;
    using RequestT = Model::DescribeCertificateRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CertificateValidatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCESS"),
        [](const Model::DescribeCertificateOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetCertificate().GetDomainValidationOptions().begin(),
                             result.GetCertificate().GetDomainValidationOptions().end(), [&](const Model::DomainValidation& item) {
                               return Model::DomainStatusMapper::GetNameForDomainStatus(item.GetValidationStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CertificateValidatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("PENDING_VALIDATION"),
        [](const Model::DescribeCertificateOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetCertificate().GetDomainValidationOptions().begin(),
                             result.GetCertificate().GetDomainValidationOptions().end(), [&](const Model::DomainValidation& item) {
                               return Model::DomainStatusMapper::GetNameForDomainStatus(item.GetValidationStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CertificateValidatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeCertificateOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::CertificateStatusMapper::GetNameForCertificateStatus(result.GetCertificate().GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "CertificateValidatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeCertificate(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 2, std::move(acceptors), operation, "WaitUntilCertificateValidated");
    return waiter.Wait(request);
  }
};
}  // namespace ACM
}  // namespace Aws
