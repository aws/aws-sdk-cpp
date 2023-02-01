/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/elasticfilesystem/EFSErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/elasticfilesystem/EFSEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in EFSClient header */
#include <aws/elasticfilesystem/model/CreateAccessPointResult.h>
#include <aws/elasticfilesystem/model/CreateFileSystemResult.h>
#include <aws/elasticfilesystem/model/CreateMountTargetResult.h>
#include <aws/elasticfilesystem/model/CreateReplicationConfigurationResult.h>
#include <aws/elasticfilesystem/model/DescribeAccessPointsResult.h>
#include <aws/elasticfilesystem/model/DescribeAccountPreferencesResult.h>
#include <aws/elasticfilesystem/model/DescribeBackupPolicyResult.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemPolicyResult.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemsResult.h>
#include <aws/elasticfilesystem/model/DescribeLifecycleConfigurationResult.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetSecurityGroupsResult.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetsResult.h>
#include <aws/elasticfilesystem/model/DescribeReplicationConfigurationsResult.h>
#include <aws/elasticfilesystem/model/ListTagsForResourceResult.h>
#include <aws/elasticfilesystem/model/PutAccountPreferencesResult.h>
#include <aws/elasticfilesystem/model/PutBackupPolicyResult.h>
#include <aws/elasticfilesystem/model/PutFileSystemPolicyResult.h>
#include <aws/elasticfilesystem/model/PutLifecycleConfigurationResult.h>
#include <aws/elasticfilesystem/model/UpdateFileSystemResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in EFSClient header */

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

  namespace EFS
  {
    using EFSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using EFSEndpointProviderBase = Aws::EFS::Endpoint::EFSEndpointProviderBase;
    using EFSEndpointProvider = Aws::EFS::Endpoint::EFSEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in EFSClient header */
      class CreateAccessPointRequest;
      class CreateFileSystemRequest;
      class CreateMountTargetRequest;
      class CreateReplicationConfigurationRequest;
      class DeleteAccessPointRequest;
      class DeleteFileSystemRequest;
      class DeleteFileSystemPolicyRequest;
      class DeleteMountTargetRequest;
      class DeleteReplicationConfigurationRequest;
      class DescribeAccessPointsRequest;
      class DescribeAccountPreferencesRequest;
      class DescribeBackupPolicyRequest;
      class DescribeFileSystemPolicyRequest;
      class DescribeFileSystemsRequest;
      class DescribeLifecycleConfigurationRequest;
      class DescribeMountTargetSecurityGroupsRequest;
      class DescribeMountTargetsRequest;
      class DescribeReplicationConfigurationsRequest;
      class ListTagsForResourceRequest;
      class ModifyMountTargetSecurityGroupsRequest;
      class PutAccountPreferencesRequest;
      class PutBackupPolicyRequest;
      class PutFileSystemPolicyRequest;
      class PutLifecycleConfigurationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateFileSystemRequest;
      /* End of service model forward declarations required in EFSClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAccessPointResult, EFSError> CreateAccessPointOutcome;
      typedef Aws::Utils::Outcome<CreateFileSystemResult, EFSError> CreateFileSystemOutcome;
      typedef Aws::Utils::Outcome<CreateMountTargetResult, EFSError> CreateMountTargetOutcome;
      typedef Aws::Utils::Outcome<CreateReplicationConfigurationResult, EFSError> CreateReplicationConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EFSError> DeleteAccessPointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EFSError> DeleteFileSystemOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EFSError> DeleteFileSystemPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EFSError> DeleteMountTargetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EFSError> DeleteReplicationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeAccessPointsResult, EFSError> DescribeAccessPointsOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountPreferencesResult, EFSError> DescribeAccountPreferencesOutcome;
      typedef Aws::Utils::Outcome<DescribeBackupPolicyResult, EFSError> DescribeBackupPolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeFileSystemPolicyResult, EFSError> DescribeFileSystemPolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeFileSystemsResult, EFSError> DescribeFileSystemsOutcome;
      typedef Aws::Utils::Outcome<DescribeLifecycleConfigurationResult, EFSError> DescribeLifecycleConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeMountTargetSecurityGroupsResult, EFSError> DescribeMountTargetSecurityGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeMountTargetsResult, EFSError> DescribeMountTargetsOutcome;
      typedef Aws::Utils::Outcome<DescribeReplicationConfigurationsResult, EFSError> DescribeReplicationConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, EFSError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EFSError> ModifyMountTargetSecurityGroupsOutcome;
      typedef Aws::Utils::Outcome<PutAccountPreferencesResult, EFSError> PutAccountPreferencesOutcome;
      typedef Aws::Utils::Outcome<PutBackupPolicyResult, EFSError> PutBackupPolicyOutcome;
      typedef Aws::Utils::Outcome<PutFileSystemPolicyResult, EFSError> PutFileSystemPolicyOutcome;
      typedef Aws::Utils::Outcome<PutLifecycleConfigurationResult, EFSError> PutLifecycleConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EFSError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EFSError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateFileSystemResult, EFSError> UpdateFileSystemOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAccessPointOutcome> CreateAccessPointOutcomeCallable;
      typedef std::future<CreateFileSystemOutcome> CreateFileSystemOutcomeCallable;
      typedef std::future<CreateMountTargetOutcome> CreateMountTargetOutcomeCallable;
      typedef std::future<CreateReplicationConfigurationOutcome> CreateReplicationConfigurationOutcomeCallable;
      typedef std::future<DeleteAccessPointOutcome> DeleteAccessPointOutcomeCallable;
      typedef std::future<DeleteFileSystemOutcome> DeleteFileSystemOutcomeCallable;
      typedef std::future<DeleteFileSystemPolicyOutcome> DeleteFileSystemPolicyOutcomeCallable;
      typedef std::future<DeleteMountTargetOutcome> DeleteMountTargetOutcomeCallable;
      typedef std::future<DeleteReplicationConfigurationOutcome> DeleteReplicationConfigurationOutcomeCallable;
      typedef std::future<DescribeAccessPointsOutcome> DescribeAccessPointsOutcomeCallable;
      typedef std::future<DescribeAccountPreferencesOutcome> DescribeAccountPreferencesOutcomeCallable;
      typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
      typedef std::future<DescribeFileSystemPolicyOutcome> DescribeFileSystemPolicyOutcomeCallable;
      typedef std::future<DescribeFileSystemsOutcome> DescribeFileSystemsOutcomeCallable;
      typedef std::future<DescribeLifecycleConfigurationOutcome> DescribeLifecycleConfigurationOutcomeCallable;
      typedef std::future<DescribeMountTargetSecurityGroupsOutcome> DescribeMountTargetSecurityGroupsOutcomeCallable;
      typedef std::future<DescribeMountTargetsOutcome> DescribeMountTargetsOutcomeCallable;
      typedef std::future<DescribeReplicationConfigurationsOutcome> DescribeReplicationConfigurationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ModifyMountTargetSecurityGroupsOutcome> ModifyMountTargetSecurityGroupsOutcomeCallable;
      typedef std::future<PutAccountPreferencesOutcome> PutAccountPreferencesOutcomeCallable;
      typedef std::future<PutBackupPolicyOutcome> PutBackupPolicyOutcomeCallable;
      typedef std::future<PutFileSystemPolicyOutcome> PutFileSystemPolicyOutcomeCallable;
      typedef std::future<PutLifecycleConfigurationOutcome> PutLifecycleConfigurationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateFileSystemOutcome> UpdateFileSystemOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class EFSClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const EFSClient*, const Model::CreateAccessPointRequest&, const Model::CreateAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessPointResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::CreateFileSystemRequest&, const Model::CreateFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFileSystemResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::CreateMountTargetRequest&, const Model::CreateMountTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMountTargetResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::CreateReplicationConfigurationRequest&, const Model::CreateReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DeleteAccessPointRequest&, const Model::DeleteAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPointResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DeleteFileSystemRequest&, const Model::DeleteFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFileSystemResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DeleteFileSystemPolicyRequest&, const Model::DeleteFileSystemPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFileSystemPolicyResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DeleteMountTargetRequest&, const Model::DeleteMountTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMountTargetResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DeleteReplicationConfigurationRequest&, const Model::DeleteReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DescribeAccessPointsRequest&, const Model::DescribeAccessPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccessPointsResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DescribeAccountPreferencesRequest&, const Model::DescribeAccountPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountPreferencesResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DescribeBackupPolicyRequest&, const Model::DescribeBackupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBackupPolicyResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DescribeFileSystemPolicyRequest&, const Model::DescribeFileSystemPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFileSystemPolicyResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DescribeFileSystemsRequest&, const Model::DescribeFileSystemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFileSystemsResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DescribeLifecycleConfigurationRequest&, const Model::DescribeLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DescribeMountTargetSecurityGroupsRequest&, const Model::DescribeMountTargetSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMountTargetSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DescribeMountTargetsRequest&, const Model::DescribeMountTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMountTargetsResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DescribeReplicationConfigurationsRequest&, const Model::DescribeReplicationConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationConfigurationsResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::ModifyMountTargetSecurityGroupsRequest&, const Model::ModifyMountTargetSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyMountTargetSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::PutAccountPreferencesRequest&, const Model::PutAccountPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountPreferencesResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::PutBackupPolicyRequest&, const Model::PutBackupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBackupPolicyResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::PutFileSystemPolicyRequest&, const Model::PutFileSystemPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFileSystemPolicyResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::PutLifecycleConfigurationRequest&, const Model::PutLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::UpdateFileSystemRequest&, const Model::UpdateFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFileSystemResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace EFS
} // namespace Aws
