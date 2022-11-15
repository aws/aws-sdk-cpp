/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cloudhsmv2/CloudHSMV2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cloudhsmv2/CloudHSMV2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudHSMV2Client header */
#include <aws/cloudhsmv2/model/CopyBackupToRegionResult.h>
#include <aws/cloudhsmv2/model/CreateClusterResult.h>
#include <aws/cloudhsmv2/model/CreateHsmResult.h>
#include <aws/cloudhsmv2/model/DeleteBackupResult.h>
#include <aws/cloudhsmv2/model/DeleteClusterResult.h>
#include <aws/cloudhsmv2/model/DeleteHsmResult.h>
#include <aws/cloudhsmv2/model/DescribeBackupsResult.h>
#include <aws/cloudhsmv2/model/DescribeClustersResult.h>
#include <aws/cloudhsmv2/model/InitializeClusterResult.h>
#include <aws/cloudhsmv2/model/ListTagsResult.h>
#include <aws/cloudhsmv2/model/ModifyBackupAttributesResult.h>
#include <aws/cloudhsmv2/model/ModifyClusterResult.h>
#include <aws/cloudhsmv2/model/RestoreBackupResult.h>
#include <aws/cloudhsmv2/model/TagResourceResult.h>
#include <aws/cloudhsmv2/model/UntagResourceResult.h>
/* End of service model headers required in CloudHSMV2Client header */

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

  namespace CloudHSMV2
  {
    using CloudHSMV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudHSMV2EndpointProviderBase = Aws::CloudHSMV2::Endpoint::CloudHSMV2EndpointProviderBase;
    using CloudHSMV2EndpointProvider = Aws::CloudHSMV2::Endpoint::CloudHSMV2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudHSMV2Client header */
      class CopyBackupToRegionRequest;
      class CreateClusterRequest;
      class CreateHsmRequest;
      class DeleteBackupRequest;
      class DeleteClusterRequest;
      class DeleteHsmRequest;
      class DescribeBackupsRequest;
      class DescribeClustersRequest;
      class InitializeClusterRequest;
      class ListTagsRequest;
      class ModifyBackupAttributesRequest;
      class ModifyClusterRequest;
      class RestoreBackupRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in CloudHSMV2Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CopyBackupToRegionResult, CloudHSMV2Error> CopyBackupToRegionOutcome;
      typedef Aws::Utils::Outcome<CreateClusterResult, CloudHSMV2Error> CreateClusterOutcome;
      typedef Aws::Utils::Outcome<CreateHsmResult, CloudHSMV2Error> CreateHsmOutcome;
      typedef Aws::Utils::Outcome<DeleteBackupResult, CloudHSMV2Error> DeleteBackupOutcome;
      typedef Aws::Utils::Outcome<DeleteClusterResult, CloudHSMV2Error> DeleteClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteHsmResult, CloudHSMV2Error> DeleteHsmOutcome;
      typedef Aws::Utils::Outcome<DescribeBackupsResult, CloudHSMV2Error> DescribeBackupsOutcome;
      typedef Aws::Utils::Outcome<DescribeClustersResult, CloudHSMV2Error> DescribeClustersOutcome;
      typedef Aws::Utils::Outcome<InitializeClusterResult, CloudHSMV2Error> InitializeClusterOutcome;
      typedef Aws::Utils::Outcome<ListTagsResult, CloudHSMV2Error> ListTagsOutcome;
      typedef Aws::Utils::Outcome<ModifyBackupAttributesResult, CloudHSMV2Error> ModifyBackupAttributesOutcome;
      typedef Aws::Utils::Outcome<ModifyClusterResult, CloudHSMV2Error> ModifyClusterOutcome;
      typedef Aws::Utils::Outcome<RestoreBackupResult, CloudHSMV2Error> RestoreBackupOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CloudHSMV2Error> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CloudHSMV2Error> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CopyBackupToRegionOutcome> CopyBackupToRegionOutcomeCallable;
      typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
      typedef std::future<CreateHsmOutcome> CreateHsmOutcomeCallable;
      typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;
      typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
      typedef std::future<DeleteHsmOutcome> DeleteHsmOutcomeCallable;
      typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
      typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
      typedef std::future<InitializeClusterOutcome> InitializeClusterOutcomeCallable;
      typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
      typedef std::future<ModifyBackupAttributesOutcome> ModifyBackupAttributesOutcomeCallable;
      typedef std::future<ModifyClusterOutcome> ModifyClusterOutcomeCallable;
      typedef std::future<RestoreBackupOutcome> RestoreBackupOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudHSMV2Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const CloudHSMV2Client*, const Model::CopyBackupToRegionRequest&, const Model::CopyBackupToRegionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyBackupToRegionResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::CreateHsmRequest&, const Model::CreateHsmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHsmResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::DeleteBackupRequest&, const Model::DeleteBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::DeleteHsmRequest&, const Model::DeleteHsmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHsmResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::DescribeBackupsRequest&, const Model::DescribeBackupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBackupsResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::DescribeClustersRequest&, const Model::DescribeClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClustersResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::InitializeClusterRequest&, const Model::InitializeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitializeClusterResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::ModifyBackupAttributesRequest&, const Model::ModifyBackupAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyBackupAttributesResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::ModifyClusterRequest&, const Model::ModifyClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClusterResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::RestoreBackupRequest&, const Model::RestoreBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreBackupResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudHSMV2
} // namespace Aws
