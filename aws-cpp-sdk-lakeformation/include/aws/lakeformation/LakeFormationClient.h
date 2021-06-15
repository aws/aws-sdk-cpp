/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/AddLFTagsToResourceResult.h>
#include <aws/lakeformation/model/BatchGrantPermissionsResult.h>
#include <aws/lakeformation/model/BatchRevokePermissionsResult.h>
#include <aws/lakeformation/model/CreateLFTagResult.h>
#include <aws/lakeformation/model/DeleteLFTagResult.h>
#include <aws/lakeformation/model/DeregisterResourceResult.h>
#include <aws/lakeformation/model/DescribeResourceResult.h>
#include <aws/lakeformation/model/GetDataLakeSettingsResult.h>
#include <aws/lakeformation/model/GetEffectivePermissionsForPathResult.h>
#include <aws/lakeformation/model/GetLFTagResult.h>
#include <aws/lakeformation/model/GetResourceLFTagsResult.h>
#include <aws/lakeformation/model/GrantPermissionsResult.h>
#include <aws/lakeformation/model/ListLFTagsResult.h>
#include <aws/lakeformation/model/ListPermissionsResult.h>
#include <aws/lakeformation/model/ListResourcesResult.h>
#include <aws/lakeformation/model/PutDataLakeSettingsResult.h>
#include <aws/lakeformation/model/RegisterResourceResult.h>
#include <aws/lakeformation/model/RemoveLFTagsFromResourceResult.h>
#include <aws/lakeformation/model/RevokePermissionsResult.h>
#include <aws/lakeformation/model/SearchDatabasesByLFTagsResult.h>
#include <aws/lakeformation/model/SearchTablesByLFTagsResult.h>
#include <aws/lakeformation/model/UpdateLFTagResult.h>
#include <aws/lakeformation/model/UpdateResourceResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace LakeFormation
{

namespace Model
{
        class AddLFTagsToResourceRequest;
        class BatchGrantPermissionsRequest;
        class BatchRevokePermissionsRequest;
        class CreateLFTagRequest;
        class DeleteLFTagRequest;
        class DeregisterResourceRequest;
        class DescribeResourceRequest;
        class GetDataLakeSettingsRequest;
        class GetEffectivePermissionsForPathRequest;
        class GetLFTagRequest;
        class GetResourceLFTagsRequest;
        class GrantPermissionsRequest;
        class ListLFTagsRequest;
        class ListPermissionsRequest;
        class ListResourcesRequest;
        class PutDataLakeSettingsRequest;
        class RegisterResourceRequest;
        class RemoveLFTagsFromResourceRequest;
        class RevokePermissionsRequest;
        class SearchDatabasesByLFTagsRequest;
        class SearchTablesByLFTagsRequest;
        class UpdateLFTagRequest;
        class UpdateResourceRequest;

        typedef Aws::Utils::Outcome<AddLFTagsToResourceResult, LakeFormationError> AddLFTagsToResourceOutcome;
        typedef Aws::Utils::Outcome<BatchGrantPermissionsResult, LakeFormationError> BatchGrantPermissionsOutcome;
        typedef Aws::Utils::Outcome<BatchRevokePermissionsResult, LakeFormationError> BatchRevokePermissionsOutcome;
        typedef Aws::Utils::Outcome<CreateLFTagResult, LakeFormationError> CreateLFTagOutcome;
        typedef Aws::Utils::Outcome<DeleteLFTagResult, LakeFormationError> DeleteLFTagOutcome;
        typedef Aws::Utils::Outcome<DeregisterResourceResult, LakeFormationError> DeregisterResourceOutcome;
        typedef Aws::Utils::Outcome<DescribeResourceResult, LakeFormationError> DescribeResourceOutcome;
        typedef Aws::Utils::Outcome<GetDataLakeSettingsResult, LakeFormationError> GetDataLakeSettingsOutcome;
        typedef Aws::Utils::Outcome<GetEffectivePermissionsForPathResult, LakeFormationError> GetEffectivePermissionsForPathOutcome;
        typedef Aws::Utils::Outcome<GetLFTagResult, LakeFormationError> GetLFTagOutcome;
        typedef Aws::Utils::Outcome<GetResourceLFTagsResult, LakeFormationError> GetResourceLFTagsOutcome;
        typedef Aws::Utils::Outcome<GrantPermissionsResult, LakeFormationError> GrantPermissionsOutcome;
        typedef Aws::Utils::Outcome<ListLFTagsResult, LakeFormationError> ListLFTagsOutcome;
        typedef Aws::Utils::Outcome<ListPermissionsResult, LakeFormationError> ListPermissionsOutcome;
        typedef Aws::Utils::Outcome<ListResourcesResult, LakeFormationError> ListResourcesOutcome;
        typedef Aws::Utils::Outcome<PutDataLakeSettingsResult, LakeFormationError> PutDataLakeSettingsOutcome;
        typedef Aws::Utils::Outcome<RegisterResourceResult, LakeFormationError> RegisterResourceOutcome;
        typedef Aws::Utils::Outcome<RemoveLFTagsFromResourceResult, LakeFormationError> RemoveLFTagsFromResourceOutcome;
        typedef Aws::Utils::Outcome<RevokePermissionsResult, LakeFormationError> RevokePermissionsOutcome;
        typedef Aws::Utils::Outcome<SearchDatabasesByLFTagsResult, LakeFormationError> SearchDatabasesByLFTagsOutcome;
        typedef Aws::Utils::Outcome<SearchTablesByLFTagsResult, LakeFormationError> SearchTablesByLFTagsOutcome;
        typedef Aws::Utils::Outcome<UpdateLFTagResult, LakeFormationError> UpdateLFTagOutcome;
        typedef Aws::Utils::Outcome<UpdateResourceResult, LakeFormationError> UpdateResourceOutcome;

        typedef std::future<AddLFTagsToResourceOutcome> AddLFTagsToResourceOutcomeCallable;
        typedef std::future<BatchGrantPermissionsOutcome> BatchGrantPermissionsOutcomeCallable;
        typedef std::future<BatchRevokePermissionsOutcome> BatchRevokePermissionsOutcomeCallable;
        typedef std::future<CreateLFTagOutcome> CreateLFTagOutcomeCallable;
        typedef std::future<DeleteLFTagOutcome> DeleteLFTagOutcomeCallable;
        typedef std::future<DeregisterResourceOutcome> DeregisterResourceOutcomeCallable;
        typedef std::future<DescribeResourceOutcome> DescribeResourceOutcomeCallable;
        typedef std::future<GetDataLakeSettingsOutcome> GetDataLakeSettingsOutcomeCallable;
        typedef std::future<GetEffectivePermissionsForPathOutcome> GetEffectivePermissionsForPathOutcomeCallable;
        typedef std::future<GetLFTagOutcome> GetLFTagOutcomeCallable;
        typedef std::future<GetResourceLFTagsOutcome> GetResourceLFTagsOutcomeCallable;
        typedef std::future<GrantPermissionsOutcome> GrantPermissionsOutcomeCallable;
        typedef std::future<ListLFTagsOutcome> ListLFTagsOutcomeCallable;
        typedef std::future<ListPermissionsOutcome> ListPermissionsOutcomeCallable;
        typedef std::future<ListResourcesOutcome> ListResourcesOutcomeCallable;
        typedef std::future<PutDataLakeSettingsOutcome> PutDataLakeSettingsOutcomeCallable;
        typedef std::future<RegisterResourceOutcome> RegisterResourceOutcomeCallable;
        typedef std::future<RemoveLFTagsFromResourceOutcome> RemoveLFTagsFromResourceOutcomeCallable;
        typedef std::future<RevokePermissionsOutcome> RevokePermissionsOutcomeCallable;
        typedef std::future<SearchDatabasesByLFTagsOutcome> SearchDatabasesByLFTagsOutcomeCallable;
        typedef std::future<SearchTablesByLFTagsOutcome> SearchTablesByLFTagsOutcomeCallable;
        typedef std::future<UpdateLFTagOutcome> UpdateLFTagOutcomeCallable;
        typedef std::future<UpdateResourceOutcome> UpdateResourceOutcomeCallable;
} // namespace Model

  class LakeFormationClient;

    typedef std::function<void(const LakeFormationClient*, const Model::AddLFTagsToResourceRequest&, const Model::AddLFTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddLFTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::BatchGrantPermissionsRequest&, const Model::BatchGrantPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGrantPermissionsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::BatchRevokePermissionsRequest&, const Model::BatchRevokePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchRevokePermissionsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::CreateLFTagRequest&, const Model::CreateLFTagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLFTagResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::DeleteLFTagRequest&, const Model::DeleteLFTagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLFTagResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::DeregisterResourceRequest&, const Model::DeregisterResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterResourceResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::DescribeResourceRequest&, const Model::DescribeResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourceResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GetDataLakeSettingsRequest&, const Model::GetDataLakeSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataLakeSettingsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GetEffectivePermissionsForPathRequest&, const Model::GetEffectivePermissionsForPathOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEffectivePermissionsForPathResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GetLFTagRequest&, const Model::GetLFTagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLFTagResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GetResourceLFTagsRequest&, const Model::GetResourceLFTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceLFTagsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GrantPermissionsRequest&, const Model::GrantPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GrantPermissionsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::ListLFTagsRequest&, const Model::ListLFTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLFTagsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::ListPermissionsRequest&, const Model::ListPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::ListResourcesRequest&, const Model::ListResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::PutDataLakeSettingsRequest&, const Model::PutDataLakeSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDataLakeSettingsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::RegisterResourceRequest&, const Model::RegisterResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterResourceResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::RemoveLFTagsFromResourceRequest&, const Model::RemoveLFTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveLFTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::RevokePermissionsRequest&, const Model::RevokePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokePermissionsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::SearchDatabasesByLFTagsRequest&, const Model::SearchDatabasesByLFTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchDatabasesByLFTagsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::SearchTablesByLFTagsRequest&, const Model::SearchTablesByLFTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchTablesByLFTagsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::UpdateLFTagRequest&, const Model::UpdateLFTagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLFTagResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::UpdateResourceRequest&, const Model::UpdateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceResponseReceivedHandler;

  /**
   * <fullname>AWS Lake Formation</fullname> <p>Defines the public endpoint for the
   * AWS Lake Formation service.</p>
   */
  class AWS_LAKEFORMATION_API LakeFormationClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LakeFormationClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LakeFormationClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LakeFormationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~LakeFormationClient();


        /**
         * <p>Attaches one or more tags to an existing resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/AddLFTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddLFTagsToResourceOutcome AddLFTagsToResource(const Model::AddLFTagsToResourceRequest& request) const;

        /**
         * <p>Attaches one or more tags to an existing resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/AddLFTagsToResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddLFTagsToResourceOutcomeCallable AddLFTagsToResourceCallable(const Model::AddLFTagsToResourceRequest& request) const;

        /**
         * <p>Attaches one or more tags to an existing resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/AddLFTagsToResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddLFTagsToResourceAsync(const Model::AddLFTagsToResourceRequest& request, const AddLFTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Batch operation to grant permissions to the principal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/BatchGrantPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGrantPermissionsOutcome BatchGrantPermissions(const Model::BatchGrantPermissionsRequest& request) const;

        /**
         * <p>Batch operation to grant permissions to the principal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/BatchGrantPermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGrantPermissionsOutcomeCallable BatchGrantPermissionsCallable(const Model::BatchGrantPermissionsRequest& request) const;

        /**
         * <p>Batch operation to grant permissions to the principal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/BatchGrantPermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGrantPermissionsAsync(const Model::BatchGrantPermissionsRequest& request, const BatchGrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Batch operation to revoke permissions from the principal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/BatchRevokePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchRevokePermissionsOutcome BatchRevokePermissions(const Model::BatchRevokePermissionsRequest& request) const;

        /**
         * <p>Batch operation to revoke permissions from the principal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/BatchRevokePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchRevokePermissionsOutcomeCallable BatchRevokePermissionsCallable(const Model::BatchRevokePermissionsRequest& request) const;

        /**
         * <p>Batch operation to revoke permissions from the principal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/BatchRevokePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchRevokePermissionsAsync(const Model::BatchRevokePermissionsRequest& request, const BatchRevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a tag with the specified name and values.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/CreateLFTag">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLFTagOutcome CreateLFTag(const Model::CreateLFTagRequest& request) const;

        /**
         * <p>Creates a tag with the specified name and values.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/CreateLFTag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLFTagOutcomeCallable CreateLFTagCallable(const Model::CreateLFTagRequest& request) const;

        /**
         * <p>Creates a tag with the specified name and values.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/CreateLFTag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLFTagAsync(const Model::CreateLFTagRequest& request, const CreateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified tag key name. If the attribute key does not exist or
         * the tag does not exist, then the operation will not do anything. If the
         * attribute key exists, then the operation checks if any resources are tagged with
         * this attribute key, if yes, the API throws a 400 Exception with the message
         * "Delete not allowed" as the tag key is still attached with resources. You can
         * consider untagging resources with this tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeleteLFTag">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLFTagOutcome DeleteLFTag(const Model::DeleteLFTagRequest& request) const;

        /**
         * <p>Deletes the specified tag key name. If the attribute key does not exist or
         * the tag does not exist, then the operation will not do anything. If the
         * attribute key exists, then the operation checks if any resources are tagged with
         * this attribute key, if yes, the API throws a 400 Exception with the message
         * "Delete not allowed" as the tag key is still attached with resources. You can
         * consider untagging resources with this tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeleteLFTag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLFTagOutcomeCallable DeleteLFTagCallable(const Model::DeleteLFTagRequest& request) const;

        /**
         * <p>Deletes the specified tag key name. If the attribute key does not exist or
         * the tag does not exist, then the operation will not do anything. If the
         * attribute key exists, then the operation checks if any resources are tagged with
         * this attribute key, if yes, the API throws a 400 Exception with the message
         * "Delete not allowed" as the tag key is still attached with resources. You can
         * consider untagging resources with this tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeleteLFTag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLFTagAsync(const Model::DeleteLFTagRequest& request, const DeleteLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters the resource as managed by the Data Catalog.</p> <p>When you
         * deregister a path, Lake Formation removes the path from the inline policy
         * attached to your service-linked role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeregisterResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterResourceOutcome DeregisterResource(const Model::DeregisterResourceRequest& request) const;

        /**
         * <p>Deregisters the resource as managed by the Data Catalog.</p> <p>When you
         * deregister a path, Lake Formation removes the path from the inline policy
         * attached to your service-linked role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeregisterResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterResourceOutcomeCallable DeregisterResourceCallable(const Model::DeregisterResourceRequest& request) const;

        /**
         * <p>Deregisters the resource as managed by the Data Catalog.</p> <p>When you
         * deregister a path, Lake Formation removes the path from the inline policy
         * attached to your service-linked role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeregisterResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterResourceAsync(const Model::DeregisterResourceRequest& request, const DeregisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current data access role for the given resource registered in
         * AWS Lake Formation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DescribeResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceOutcome DescribeResource(const Model::DescribeResourceRequest& request) const;

        /**
         * <p>Retrieves the current data access role for the given resource registered in
         * AWS Lake Formation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DescribeResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourceOutcomeCallable DescribeResourceCallable(const Model::DescribeResourceRequest& request) const;

        /**
         * <p>Retrieves the current data access role for the given resource registered in
         * AWS Lake Formation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DescribeResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourceAsync(const Model::DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of the data lake administrators of a Lake
         * Formation-managed data lake. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetDataLakeSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataLakeSettingsOutcome GetDataLakeSettings(const Model::GetDataLakeSettingsRequest& request) const;

        /**
         * <p>Retrieves the list of the data lake administrators of a Lake
         * Formation-managed data lake. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetDataLakeSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataLakeSettingsOutcomeCallable GetDataLakeSettingsCallable(const Model::GetDataLakeSettingsRequest& request) const;

        /**
         * <p>Retrieves the list of the data lake administrators of a Lake
         * Formation-managed data lake. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetDataLakeSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataLakeSettingsAsync(const Model::GetDataLakeSettingsRequest& request, const GetDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the Lake Formation permissions for a specified table or database
         * resource located at a path in Amazon S3.
         * <code>GetEffectivePermissionsForPath</code> will not return databases and tables
         * if the catalog is encrypted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetEffectivePermissionsForPath">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEffectivePermissionsForPathOutcome GetEffectivePermissionsForPath(const Model::GetEffectivePermissionsForPathRequest& request) const;

        /**
         * <p>Returns the Lake Formation permissions for a specified table or database
         * resource located at a path in Amazon S3.
         * <code>GetEffectivePermissionsForPath</code> will not return databases and tables
         * if the catalog is encrypted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetEffectivePermissionsForPath">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEffectivePermissionsForPathOutcomeCallable GetEffectivePermissionsForPathCallable(const Model::GetEffectivePermissionsForPathRequest& request) const;

        /**
         * <p>Returns the Lake Formation permissions for a specified table or database
         * resource located at a path in Amazon S3.
         * <code>GetEffectivePermissionsForPath</code> will not return databases and tables
         * if the catalog is encrypted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetEffectivePermissionsForPath">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEffectivePermissionsForPathAsync(const Model::GetEffectivePermissionsForPathRequest& request, const GetEffectivePermissionsForPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a tag definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetLFTag">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLFTagOutcome GetLFTag(const Model::GetLFTagRequest& request) const;

        /**
         * <p>Returns a tag definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetLFTag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLFTagOutcomeCallable GetLFTagCallable(const Model::GetLFTagRequest& request) const;

        /**
         * <p>Returns a tag definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetLFTag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLFTagAsync(const Model::GetLFTagRequest& request, const GetLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the tags applied to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetResourceLFTags">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceLFTagsOutcome GetResourceLFTags(const Model::GetResourceLFTagsRequest& request) const;

        /**
         * <p>Returns the tags applied to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetResourceLFTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceLFTagsOutcomeCallable GetResourceLFTagsCallable(const Model::GetResourceLFTagsRequest& request) const;

        /**
         * <p>Returns the tags applied to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetResourceLFTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceLFTagsAsync(const Model::GetResourceLFTagsRequest& request, const GetResourceLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permissions to the principal to access metadata in the Data Catalog
         * and data organized in underlying data storage such as Amazon S3.</p> <p>For
         * information about permissions, see <a
         * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
         * and Access Control to Metadata and Data</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GrantPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::GrantPermissionsOutcome GrantPermissions(const Model::GrantPermissionsRequest& request) const;

        /**
         * <p>Grants permissions to the principal to access metadata in the Data Catalog
         * and data organized in underlying data storage such as Amazon S3.</p> <p>For
         * information about permissions, see <a
         * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
         * and Access Control to Metadata and Data</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GrantPermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GrantPermissionsOutcomeCallable GrantPermissionsCallable(const Model::GrantPermissionsRequest& request) const;

        /**
         * <p>Grants permissions to the principal to access metadata in the Data Catalog
         * and data organized in underlying data storage such as Amazon S3.</p> <p>For
         * information about permissions, see <a
         * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
         * and Access Control to Metadata and Data</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GrantPermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GrantPermissionsAsync(const Model::GrantPermissionsRequest& request, const GrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists tags that the requester has permission to view. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListLFTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLFTagsOutcome ListLFTags(const Model::ListLFTagsRequest& request) const;

        /**
         * <p>Lists tags that the requester has permission to view. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListLFTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLFTagsOutcomeCallable ListLFTagsCallable(const Model::ListLFTagsRequest& request) const;

        /**
         * <p>Lists tags that the requester has permission to view. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListLFTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLFTagsAsync(const Model::ListLFTagsRequest& request, const ListLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the principal permissions on the resource, filtered by the
         * permissions of the caller. For example, if you are granted an ALTER permission,
         * you are able to see only the principal permissions for ALTER.</p> <p>This
         * operation returns only those permissions that have been explicitly granted.</p>
         * <p>For information about permissions, see <a
         * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
         * and Access Control to Metadata and Data</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionsOutcome ListPermissions(const Model::ListPermissionsRequest& request) const;

        /**
         * <p>Returns a list of the principal permissions on the resource, filtered by the
         * permissions of the caller. For example, if you are granted an ALTER permission,
         * you are able to see only the principal permissions for ALTER.</p> <p>This
         * operation returns only those permissions that have been explicitly granted.</p>
         * <p>For information about permissions, see <a
         * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
         * and Access Control to Metadata and Data</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListPermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPermissionsOutcomeCallable ListPermissionsCallable(const Model::ListPermissionsRequest& request) const;

        /**
         * <p>Returns a list of the principal permissions on the resource, filtered by the
         * permissions of the caller. For example, if you are granted an ALTER permission,
         * you are able to see only the principal permissions for ALTER.</p> <p>This
         * operation returns only those permissions that have been explicitly granted.</p>
         * <p>For information about permissions, see <a
         * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
         * and Access Control to Metadata and Data</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListPermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPermissionsAsync(const Model::ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resources registered to be managed by the Data
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesOutcome ListResources(const Model::ListResourcesRequest& request) const;

        /**
         * <p>Lists the resources registered to be managed by the Data
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesOutcomeCallable ListResourcesCallable(const Model::ListResourcesRequest& request) const;

        /**
         * <p>Lists the resources registered to be managed by the Data
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesAsync(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the list of data lake administrators who have admin privileges on all
         * resources managed by Lake Formation. For more information on admin privileges,
         * see <a
         * href="https://docs.aws.amazon.com/lake-formation/latest/dg/lake-formation-permissions.html">Granting
         * Lake Formation Permissions</a>.</p> <p>This API replaces the current list of
         * data lake admins with the new list being passed. To add an admin, fetch the
         * current list and add the new admin to that list and pass that list in this
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/PutDataLakeSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDataLakeSettingsOutcome PutDataLakeSettings(const Model::PutDataLakeSettingsRequest& request) const;

        /**
         * <p>Sets the list of data lake administrators who have admin privileges on all
         * resources managed by Lake Formation. For more information on admin privileges,
         * see <a
         * href="https://docs.aws.amazon.com/lake-formation/latest/dg/lake-formation-permissions.html">Granting
         * Lake Formation Permissions</a>.</p> <p>This API replaces the current list of
         * data lake admins with the new list being passed. To add an admin, fetch the
         * current list and add the new admin to that list and pass that list in this
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/PutDataLakeSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDataLakeSettingsOutcomeCallable PutDataLakeSettingsCallable(const Model::PutDataLakeSettingsRequest& request) const;

        /**
         * <p>Sets the list of data lake administrators who have admin privileges on all
         * resources managed by Lake Formation. For more information on admin privileges,
         * see <a
         * href="https://docs.aws.amazon.com/lake-formation/latest/dg/lake-formation-permissions.html">Granting
         * Lake Formation Permissions</a>.</p> <p>This API replaces the current list of
         * data lake admins with the new list being passed. To add an admin, fetch the
         * current list and add the new admin to that list and pass that list in this
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/PutDataLakeSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDataLakeSettingsAsync(const Model::PutDataLakeSettingsRequest& request, const PutDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers the resource as managed by the Data Catalog.</p> <p>To add or
         * update data, Lake Formation needs read/write access to the chosen Amazon S3
         * path. Choose a role that you know has permission to do this, or choose the
         * AWSServiceRoleForLakeFormationDataAccess service-linked role. When you register
         * the first Amazon S3 path, the service-linked role and a new inline policy are
         * created on your behalf. Lake Formation adds the first path to the inline policy
         * and attaches it to the service-linked role. When you register subsequent paths,
         * Lake Formation adds the path to the existing policy.</p> <p>The following
         * request registers a new location and gives AWS Lake Formation permission to use
         * the service-linked role to access that location.</p> <p> <code>ResourceArn =
         * arn:aws:s3:::my-bucket UseServiceLinkedRole = true</code> </p> <p>If
         * <code>UseServiceLinkedRole</code> is not set to true, you must provide or set
         * the <code>RoleArn</code>:</p> <p>
         * <code>arn:aws:iam::12345:role/my-data-access-role</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RegisterResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterResourceOutcome RegisterResource(const Model::RegisterResourceRequest& request) const;

        /**
         * <p>Registers the resource as managed by the Data Catalog.</p> <p>To add or
         * update data, Lake Formation needs read/write access to the chosen Amazon S3
         * path. Choose a role that you know has permission to do this, or choose the
         * AWSServiceRoleForLakeFormationDataAccess service-linked role. When you register
         * the first Amazon S3 path, the service-linked role and a new inline policy are
         * created on your behalf. Lake Formation adds the first path to the inline policy
         * and attaches it to the service-linked role. When you register subsequent paths,
         * Lake Formation adds the path to the existing policy.</p> <p>The following
         * request registers a new location and gives AWS Lake Formation permission to use
         * the service-linked role to access that location.</p> <p> <code>ResourceArn =
         * arn:aws:s3:::my-bucket UseServiceLinkedRole = true</code> </p> <p>If
         * <code>UseServiceLinkedRole</code> is not set to true, you must provide or set
         * the <code>RoleArn</code>:</p> <p>
         * <code>arn:aws:iam::12345:role/my-data-access-role</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RegisterResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterResourceOutcomeCallable RegisterResourceCallable(const Model::RegisterResourceRequest& request) const;

        /**
         * <p>Registers the resource as managed by the Data Catalog.</p> <p>To add or
         * update data, Lake Formation needs read/write access to the chosen Amazon S3
         * path. Choose a role that you know has permission to do this, or choose the
         * AWSServiceRoleForLakeFormationDataAccess service-linked role. When you register
         * the first Amazon S3 path, the service-linked role and a new inline policy are
         * created on your behalf. Lake Formation adds the first path to the inline policy
         * and attaches it to the service-linked role. When you register subsequent paths,
         * Lake Formation adds the path to the existing policy.</p> <p>The following
         * request registers a new location and gives AWS Lake Formation permission to use
         * the service-linked role to access that location.</p> <p> <code>ResourceArn =
         * arn:aws:s3:::my-bucket UseServiceLinkedRole = true</code> </p> <p>If
         * <code>UseServiceLinkedRole</code> is not set to true, you must provide or set
         * the <code>RoleArn</code>:</p> <p>
         * <code>arn:aws:iam::12345:role/my-data-access-role</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RegisterResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterResourceAsync(const Model::RegisterResourceRequest& request, const RegisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag from the resource. Only database, table, or tableWithColumns
         * resource are allowed. To tag columns, use the column inclusion list in
         * <code>tableWithColumns</code> to specify column input.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RemoveLFTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveLFTagsFromResourceOutcome RemoveLFTagsFromResource(const Model::RemoveLFTagsFromResourceRequest& request) const;

        /**
         * <p>Removes a tag from the resource. Only database, table, or tableWithColumns
         * resource are allowed. To tag columns, use the column inclusion list in
         * <code>tableWithColumns</code> to specify column input.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RemoveLFTagsFromResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveLFTagsFromResourceOutcomeCallable RemoveLFTagsFromResourceCallable(const Model::RemoveLFTagsFromResourceRequest& request) const;

        /**
         * <p>Removes a tag from the resource. Only database, table, or tableWithColumns
         * resource are allowed. To tag columns, use the column inclusion list in
         * <code>tableWithColumns</code> to specify column input.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RemoveLFTagsFromResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveLFTagsFromResourceAsync(const Model::RemoveLFTagsFromResourceRequest& request, const RemoveLFTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes permissions to the principal to access metadata in the Data Catalog
         * and data organized in underlying data storage such as Amazon S3.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RevokePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokePermissionsOutcome RevokePermissions(const Model::RevokePermissionsRequest& request) const;

        /**
         * <p>Revokes permissions to the principal to access metadata in the Data Catalog
         * and data organized in underlying data storage such as Amazon S3.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RevokePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokePermissionsOutcomeCallable RevokePermissionsCallable(const Model::RevokePermissionsRequest& request) const;

        /**
         * <p>Revokes permissions to the principal to access metadata in the Data Catalog
         * and data organized in underlying data storage such as Amazon S3.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RevokePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokePermissionsAsync(const Model::RevokePermissionsRequest& request, const RevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation allows a search on <code>DATABASE</code> resources by
         * <code>TagCondition</code>. This operation is used by admins who want to grant
         * user permissions on certain <code>TagConditions</code>. Before making a grant,
         * the admin can use <code>SearchDatabasesByTags</code> to find all resources where
         * the given <code>TagConditions</code> are valid to verify whether the returned
         * resources can be shared.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/SearchDatabasesByLFTags">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchDatabasesByLFTagsOutcome SearchDatabasesByLFTags(const Model::SearchDatabasesByLFTagsRequest& request) const;

        /**
         * <p>This operation allows a search on <code>DATABASE</code> resources by
         * <code>TagCondition</code>. This operation is used by admins who want to grant
         * user permissions on certain <code>TagConditions</code>. Before making a grant,
         * the admin can use <code>SearchDatabasesByTags</code> to find all resources where
         * the given <code>TagConditions</code> are valid to verify whether the returned
         * resources can be shared.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/SearchDatabasesByLFTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchDatabasesByLFTagsOutcomeCallable SearchDatabasesByLFTagsCallable(const Model::SearchDatabasesByLFTagsRequest& request) const;

        /**
         * <p>This operation allows a search on <code>DATABASE</code> resources by
         * <code>TagCondition</code>. This operation is used by admins who want to grant
         * user permissions on certain <code>TagConditions</code>. Before making a grant,
         * the admin can use <code>SearchDatabasesByTags</code> to find all resources where
         * the given <code>TagConditions</code> are valid to verify whether the returned
         * resources can be shared.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/SearchDatabasesByLFTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchDatabasesByLFTagsAsync(const Model::SearchDatabasesByLFTagsRequest& request, const SearchDatabasesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation allows a search on <code>TABLE</code> resources by
         * <code>LFTag</code>s. This will be used by admins who want to grant user
         * permissions on certain LFTags. Before making a grant, the admin can use
         * <code>SearchTablesByLFTags</code> to find all resources where the given
         * <code>LFTag</code>s are valid to verify whether the returned resources can be
         * shared.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/SearchTablesByLFTags">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchTablesByLFTagsOutcome SearchTablesByLFTags(const Model::SearchTablesByLFTagsRequest& request) const;

        /**
         * <p>This operation allows a search on <code>TABLE</code> resources by
         * <code>LFTag</code>s. This will be used by admins who want to grant user
         * permissions on certain LFTags. Before making a grant, the admin can use
         * <code>SearchTablesByLFTags</code> to find all resources where the given
         * <code>LFTag</code>s are valid to verify whether the returned resources can be
         * shared.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/SearchTablesByLFTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchTablesByLFTagsOutcomeCallable SearchTablesByLFTagsCallable(const Model::SearchTablesByLFTagsRequest& request) const;

        /**
         * <p>This operation allows a search on <code>TABLE</code> resources by
         * <code>LFTag</code>s. This will be used by admins who want to grant user
         * permissions on certain LFTags. Before making a grant, the admin can use
         * <code>SearchTablesByLFTags</code> to find all resources where the given
         * <code>LFTag</code>s are valid to verify whether the returned resources can be
         * shared.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/SearchTablesByLFTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchTablesByLFTagsAsync(const Model::SearchTablesByLFTagsRequest& request, const SearchTablesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the list of possible values for the specified tag key. If the tag
         * does not exist, the operation throws an EntityNotFoundException. The values in
         * the delete key values will be deleted from list of possible values. If any value
         * in the delete key values is attached to a resource, then API errors out with a
         * 400 Exception - "Update not allowed". Untag the attribute before deleting the
         * tag key's value. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UpdateLFTag">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLFTagOutcome UpdateLFTag(const Model::UpdateLFTagRequest& request) const;

        /**
         * <p>Updates the list of possible values for the specified tag key. If the tag
         * does not exist, the operation throws an EntityNotFoundException. The values in
         * the delete key values will be deleted from list of possible values. If any value
         * in the delete key values is attached to a resource, then API errors out with a
         * 400 Exception - "Update not allowed". Untag the attribute before deleting the
         * tag key's value. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UpdateLFTag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLFTagOutcomeCallable UpdateLFTagCallable(const Model::UpdateLFTagRequest& request) const;

        /**
         * <p>Updates the list of possible values for the specified tag key. If the tag
         * does not exist, the operation throws an EntityNotFoundException. The values in
         * the delete key values will be deleted from list of possible values. If any value
         * in the delete key values is attached to a resource, then API errors out with a
         * 400 Exception - "Update not allowed". Untag the attribute before deleting the
         * tag key's value. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UpdateLFTag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLFTagAsync(const Model::UpdateLFTagRequest& request, const UpdateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the data access role used for vending access to the given
         * (registered) resource in AWS Lake Formation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UpdateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceOutcome UpdateResource(const Model::UpdateResourceRequest& request) const;

        /**
         * <p>Updates the data access role used for vending access to the given
         * (registered) resource in AWS Lake Formation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UpdateResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceOutcomeCallable UpdateResourceCallable(const Model::UpdateResourceRequest& request) const;

        /**
         * <p>Updates the data access role used for vending access to the given
         * (registered) resource in AWS Lake Formation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UpdateResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceAsync(const Model::UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddLFTagsToResourceAsyncHelper(const Model::AddLFTagsToResourceRequest& request, const AddLFTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGrantPermissionsAsyncHelper(const Model::BatchGrantPermissionsRequest& request, const BatchGrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchRevokePermissionsAsyncHelper(const Model::BatchRevokePermissionsRequest& request, const BatchRevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLFTagAsyncHelper(const Model::CreateLFTagRequest& request, const CreateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLFTagAsyncHelper(const Model::DeleteLFTagRequest& request, const DeleteLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterResourceAsyncHelper(const Model::DeregisterResourceRequest& request, const DeregisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeResourceAsyncHelper(const Model::DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDataLakeSettingsAsyncHelper(const Model::GetDataLakeSettingsRequest& request, const GetDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEffectivePermissionsForPathAsyncHelper(const Model::GetEffectivePermissionsForPathRequest& request, const GetEffectivePermissionsForPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLFTagAsyncHelper(const Model::GetLFTagRequest& request, const GetLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceLFTagsAsyncHelper(const Model::GetResourceLFTagsRequest& request, const GetResourceLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GrantPermissionsAsyncHelper(const Model::GrantPermissionsRequest& request, const GrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLFTagsAsyncHelper(const Model::ListLFTagsRequest& request, const ListLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPermissionsAsyncHelper(const Model::ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourcesAsyncHelper(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDataLakeSettingsAsyncHelper(const Model::PutDataLakeSettingsRequest& request, const PutDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterResourceAsyncHelper(const Model::RegisterResourceRequest& request, const RegisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveLFTagsFromResourceAsyncHelper(const Model::RemoveLFTagsFromResourceRequest& request, const RemoveLFTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokePermissionsAsyncHelper(const Model::RevokePermissionsRequest& request, const RevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchDatabasesByLFTagsAsyncHelper(const Model::SearchDatabasesByLFTagsRequest& request, const SearchDatabasesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchTablesByLFTagsAsyncHelper(const Model::SearchTablesByLFTagsRequest& request, const SearchTablesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLFTagAsyncHelper(const Model::UpdateLFTagRequest& request, const UpdateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResourceAsyncHelper(const Model::UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LakeFormation
} // namespace Aws
