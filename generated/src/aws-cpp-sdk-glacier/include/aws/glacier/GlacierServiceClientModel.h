/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/glacier/GlacierErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/glacier/GlacierEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in GlacierClient header */
#include <aws/glacier/model/CompleteMultipartUploadResult.h>
#include <aws/glacier/model/CreateVaultResult.h>
#include <aws/glacier/model/DescribeJobResult.h>
#include <aws/glacier/model/DescribeVaultResult.h>
#include <aws/glacier/model/GetDataRetrievalPolicyResult.h>
#include <aws/glacier/model/GetJobOutputResult.h>
#include <aws/glacier/model/GetVaultAccessPolicyResult.h>
#include <aws/glacier/model/GetVaultLockResult.h>
#include <aws/glacier/model/GetVaultNotificationsResult.h>
#include <aws/glacier/model/InitiateJobResult.h>
#include <aws/glacier/model/InitiateMultipartUploadResult.h>
#include <aws/glacier/model/InitiateVaultLockResult.h>
#include <aws/glacier/model/ListJobsResult.h>
#include <aws/glacier/model/ListMultipartUploadsResult.h>
#include <aws/glacier/model/ListPartsResult.h>
#include <aws/glacier/model/ListProvisionedCapacityResult.h>
#include <aws/glacier/model/ListTagsForVaultResult.h>
#include <aws/glacier/model/ListVaultsResult.h>
#include <aws/glacier/model/PurchaseProvisionedCapacityResult.h>
#include <aws/glacier/model/UploadArchiveResult.h>
#include <aws/glacier/model/UploadMultipartPartResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in GlacierClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace Glacier
  {
    using GlacierClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using GlacierEndpointProviderBase = Aws::Glacier::Endpoint::GlacierEndpointProviderBase;
    using GlacierEndpointProvider = Aws::Glacier::Endpoint::GlacierEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in GlacierClient header */
      class AbortMultipartUploadRequest;
      class AbortVaultLockRequest;
      class AddTagsToVaultRequest;
      class CompleteMultipartUploadRequest;
      class CompleteVaultLockRequest;
      class CreateVaultRequest;
      class DeleteArchiveRequest;
      class DeleteVaultRequest;
      class DeleteVaultAccessPolicyRequest;
      class DeleteVaultNotificationsRequest;
      class DescribeJobRequest;
      class DescribeVaultRequest;
      class GetDataRetrievalPolicyRequest;
      class GetJobOutputRequest;
      class GetVaultAccessPolicyRequest;
      class GetVaultLockRequest;
      class GetVaultNotificationsRequest;
      class InitiateJobRequest;
      class InitiateMultipartUploadRequest;
      class InitiateVaultLockRequest;
      class ListJobsRequest;
      class ListMultipartUploadsRequest;
      class ListPartsRequest;
      class ListProvisionedCapacityRequest;
      class ListTagsForVaultRequest;
      class ListVaultsRequest;
      class PurchaseProvisionedCapacityRequest;
      class RemoveTagsFromVaultRequest;
      class SetDataRetrievalPolicyRequest;
      class SetVaultAccessPolicyRequest;
      class SetVaultNotificationsRequest;
      class UploadArchiveRequest;
      class UploadMultipartPartRequest;
      /* End of service model forward declarations required in GlacierClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, GlacierError> AbortMultipartUploadOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlacierError> AbortVaultLockOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlacierError> AddTagsToVaultOutcome;
      typedef Aws::Utils::Outcome<CompleteMultipartUploadResult, GlacierError> CompleteMultipartUploadOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlacierError> CompleteVaultLockOutcome;
      typedef Aws::Utils::Outcome<CreateVaultResult, GlacierError> CreateVaultOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlacierError> DeleteArchiveOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlacierError> DeleteVaultOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlacierError> DeleteVaultAccessPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlacierError> DeleteVaultNotificationsOutcome;
      typedef Aws::Utils::Outcome<DescribeJobResult, GlacierError> DescribeJobOutcome;
      typedef Aws::Utils::Outcome<DescribeVaultResult, GlacierError> DescribeVaultOutcome;
      typedef Aws::Utils::Outcome<GetDataRetrievalPolicyResult, GlacierError> GetDataRetrievalPolicyOutcome;
      typedef Aws::Utils::Outcome<GetJobOutputResult, GlacierError> GetJobOutputOutcome;
      typedef Aws::Utils::Outcome<GetVaultAccessPolicyResult, GlacierError> GetVaultAccessPolicyOutcome;
      typedef Aws::Utils::Outcome<GetVaultLockResult, GlacierError> GetVaultLockOutcome;
      typedef Aws::Utils::Outcome<GetVaultNotificationsResult, GlacierError> GetVaultNotificationsOutcome;
      typedef Aws::Utils::Outcome<InitiateJobResult, GlacierError> InitiateJobOutcome;
      typedef Aws::Utils::Outcome<InitiateMultipartUploadResult, GlacierError> InitiateMultipartUploadOutcome;
      typedef Aws::Utils::Outcome<InitiateVaultLockResult, GlacierError> InitiateVaultLockOutcome;
      typedef Aws::Utils::Outcome<ListJobsResult, GlacierError> ListJobsOutcome;
      typedef Aws::Utils::Outcome<ListMultipartUploadsResult, GlacierError> ListMultipartUploadsOutcome;
      typedef Aws::Utils::Outcome<ListPartsResult, GlacierError> ListPartsOutcome;
      typedef Aws::Utils::Outcome<ListProvisionedCapacityResult, GlacierError> ListProvisionedCapacityOutcome;
      typedef Aws::Utils::Outcome<ListTagsForVaultResult, GlacierError> ListTagsForVaultOutcome;
      typedef Aws::Utils::Outcome<ListVaultsResult, GlacierError> ListVaultsOutcome;
      typedef Aws::Utils::Outcome<PurchaseProvisionedCapacityResult, GlacierError> PurchaseProvisionedCapacityOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlacierError> RemoveTagsFromVaultOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlacierError> SetDataRetrievalPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlacierError> SetVaultAccessPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlacierError> SetVaultNotificationsOutcome;
      typedef Aws::Utils::Outcome<UploadArchiveResult, GlacierError> UploadArchiveOutcome;
      typedef Aws::Utils::Outcome<UploadMultipartPartResult, GlacierError> UploadMultipartPartOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AbortMultipartUploadOutcome> AbortMultipartUploadOutcomeCallable;
      typedef std::future<AbortVaultLockOutcome> AbortVaultLockOutcomeCallable;
      typedef std::future<AddTagsToVaultOutcome> AddTagsToVaultOutcomeCallable;
      typedef std::future<CompleteMultipartUploadOutcome> CompleteMultipartUploadOutcomeCallable;
      typedef std::future<CompleteVaultLockOutcome> CompleteVaultLockOutcomeCallable;
      typedef std::future<CreateVaultOutcome> CreateVaultOutcomeCallable;
      typedef std::future<DeleteArchiveOutcome> DeleteArchiveOutcomeCallable;
      typedef std::future<DeleteVaultOutcome> DeleteVaultOutcomeCallable;
      typedef std::future<DeleteVaultAccessPolicyOutcome> DeleteVaultAccessPolicyOutcomeCallable;
      typedef std::future<DeleteVaultNotificationsOutcome> DeleteVaultNotificationsOutcomeCallable;
      typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
      typedef std::future<DescribeVaultOutcome> DescribeVaultOutcomeCallable;
      typedef std::future<GetDataRetrievalPolicyOutcome> GetDataRetrievalPolicyOutcomeCallable;
      typedef std::future<GetJobOutputOutcome> GetJobOutputOutcomeCallable;
      typedef std::future<GetVaultAccessPolicyOutcome> GetVaultAccessPolicyOutcomeCallable;
      typedef std::future<GetVaultLockOutcome> GetVaultLockOutcomeCallable;
      typedef std::future<GetVaultNotificationsOutcome> GetVaultNotificationsOutcomeCallable;
      typedef std::future<InitiateJobOutcome> InitiateJobOutcomeCallable;
      typedef std::future<InitiateMultipartUploadOutcome> InitiateMultipartUploadOutcomeCallable;
      typedef std::future<InitiateVaultLockOutcome> InitiateVaultLockOutcomeCallable;
      typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
      typedef std::future<ListMultipartUploadsOutcome> ListMultipartUploadsOutcomeCallable;
      typedef std::future<ListPartsOutcome> ListPartsOutcomeCallable;
      typedef std::future<ListProvisionedCapacityOutcome> ListProvisionedCapacityOutcomeCallable;
      typedef std::future<ListTagsForVaultOutcome> ListTagsForVaultOutcomeCallable;
      typedef std::future<ListVaultsOutcome> ListVaultsOutcomeCallable;
      typedef std::future<PurchaseProvisionedCapacityOutcome> PurchaseProvisionedCapacityOutcomeCallable;
      typedef std::future<RemoveTagsFromVaultOutcome> RemoveTagsFromVaultOutcomeCallable;
      typedef std::future<SetDataRetrievalPolicyOutcome> SetDataRetrievalPolicyOutcomeCallable;
      typedef std::future<SetVaultAccessPolicyOutcome> SetVaultAccessPolicyOutcomeCallable;
      typedef std::future<SetVaultNotificationsOutcome> SetVaultNotificationsOutcomeCallable;
      typedef std::future<UploadArchiveOutcome> UploadArchiveOutcomeCallable;
      typedef std::future<UploadMultipartPartOutcome> UploadMultipartPartOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class GlacierClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const GlacierClient*, const Model::AbortMultipartUploadRequest&, const Model::AbortMultipartUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AbortMultipartUploadResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::AbortVaultLockRequest&, const Model::AbortVaultLockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AbortVaultLockResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::AddTagsToVaultRequest&, const Model::AddTagsToVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToVaultResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::CompleteMultipartUploadRequest&, const Model::CompleteMultipartUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompleteMultipartUploadResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::CompleteVaultLockRequest&, const Model::CompleteVaultLockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompleteVaultLockResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::CreateVaultRequest&, const Model::CreateVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVaultResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::DeleteArchiveRequest&, const Model::DeleteArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteArchiveResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::DeleteVaultRequest&, const Model::DeleteVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVaultResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::DeleteVaultAccessPolicyRequest&, const Model::DeleteVaultAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVaultAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::DeleteVaultNotificationsRequest&, const Model::DeleteVaultNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVaultNotificationsResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::DescribeJobRequest&, const Model::DescribeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::DescribeVaultRequest&, const Model::DescribeVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVaultResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::GetDataRetrievalPolicyRequest&, const Model::GetDataRetrievalPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataRetrievalPolicyResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::GetJobOutputRequest&, Model::GetJobOutputOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobOutputResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::GetVaultAccessPolicyRequest&, const Model::GetVaultAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVaultAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::GetVaultLockRequest&, const Model::GetVaultLockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVaultLockResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::GetVaultNotificationsRequest&, const Model::GetVaultNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVaultNotificationsResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::InitiateJobRequest&, const Model::InitiateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitiateJobResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::InitiateMultipartUploadRequest&, const Model::InitiateMultipartUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitiateMultipartUploadResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::InitiateVaultLockRequest&, const Model::InitiateVaultLockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitiateVaultLockResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::ListMultipartUploadsRequest&, const Model::ListMultipartUploadsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMultipartUploadsResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::ListPartsRequest&, const Model::ListPartsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPartsResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::ListProvisionedCapacityRequest&, const Model::ListProvisionedCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisionedCapacityResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::ListTagsForVaultRequest&, const Model::ListTagsForVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForVaultResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::ListVaultsRequest&, const Model::ListVaultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVaultsResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::PurchaseProvisionedCapacityRequest&, const Model::PurchaseProvisionedCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseProvisionedCapacityResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::RemoveTagsFromVaultRequest&, const Model::RemoveTagsFromVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromVaultResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::SetDataRetrievalPolicyRequest&, const Model::SetDataRetrievalPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetDataRetrievalPolicyResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::SetVaultAccessPolicyRequest&, const Model::SetVaultAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetVaultAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::SetVaultNotificationsRequest&, const Model::SetVaultNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetVaultNotificationsResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::UploadArchiveRequest&, const Model::UploadArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadArchiveResponseReceivedHandler;
    typedef std::function<void(const GlacierClient*, const Model::UploadMultipartPartRequest&, const Model::UploadMultipartPartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadMultipartPartResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Glacier
} // namespace Aws
