/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/AppRegistryErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/servicecatalog-appregistry/model/AssociateAttributeGroupResult.h>
#include <aws/servicecatalog-appregistry/model/AssociateResourceResult.h>
#include <aws/servicecatalog-appregistry/model/CreateApplicationResult.h>
#include <aws/servicecatalog-appregistry/model/CreateAttributeGroupResult.h>
#include <aws/servicecatalog-appregistry/model/DeleteApplicationResult.h>
#include <aws/servicecatalog-appregistry/model/DeleteAttributeGroupResult.h>
#include <aws/servicecatalog-appregistry/model/DisassociateAttributeGroupResult.h>
#include <aws/servicecatalog-appregistry/model/DisassociateResourceResult.h>
#include <aws/servicecatalog-appregistry/model/GetApplicationResult.h>
#include <aws/servicecatalog-appregistry/model/GetAttributeGroupResult.h>
#include <aws/servicecatalog-appregistry/model/ListApplicationsResult.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedAttributeGroupsResult.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedResourcesResult.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsResult.h>
#include <aws/servicecatalog-appregistry/model/UpdateApplicationResult.h>
#include <aws/servicecatalog-appregistry/model/UpdateAttributeGroupResult.h>
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

namespace AppRegistry
{

namespace Model
{
        class AssociateAttributeGroupRequest;
        class AssociateResourceRequest;
        class CreateApplicationRequest;
        class CreateAttributeGroupRequest;
        class DeleteApplicationRequest;
        class DeleteAttributeGroupRequest;
        class DisassociateAttributeGroupRequest;
        class DisassociateResourceRequest;
        class GetApplicationRequest;
        class GetAttributeGroupRequest;
        class ListApplicationsRequest;
        class ListAssociatedAttributeGroupsRequest;
        class ListAssociatedResourcesRequest;
        class ListAttributeGroupsRequest;
        class UpdateApplicationRequest;
        class UpdateAttributeGroupRequest;

        typedef Aws::Utils::Outcome<AssociateAttributeGroupResult, AppRegistryError> AssociateAttributeGroupOutcome;
        typedef Aws::Utils::Outcome<AssociateResourceResult, AppRegistryError> AssociateResourceOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationResult, AppRegistryError> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateAttributeGroupResult, AppRegistryError> CreateAttributeGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationResult, AppRegistryError> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteAttributeGroupResult, AppRegistryError> DeleteAttributeGroupOutcome;
        typedef Aws::Utils::Outcome<DisassociateAttributeGroupResult, AppRegistryError> DisassociateAttributeGroupOutcome;
        typedef Aws::Utils::Outcome<DisassociateResourceResult, AppRegistryError> DisassociateResourceOutcome;
        typedef Aws::Utils::Outcome<GetApplicationResult, AppRegistryError> GetApplicationOutcome;
        typedef Aws::Utils::Outcome<GetAttributeGroupResult, AppRegistryError> GetAttributeGroupOutcome;
        typedef Aws::Utils::Outcome<ListApplicationsResult, AppRegistryError> ListApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListAssociatedAttributeGroupsResult, AppRegistryError> ListAssociatedAttributeGroupsOutcome;
        typedef Aws::Utils::Outcome<ListAssociatedResourcesResult, AppRegistryError> ListAssociatedResourcesOutcome;
        typedef Aws::Utils::Outcome<ListAttributeGroupsResult, AppRegistryError> ListAttributeGroupsOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationResult, AppRegistryError> UpdateApplicationOutcome;
        typedef Aws::Utils::Outcome<UpdateAttributeGroupResult, AppRegistryError> UpdateAttributeGroupOutcome;

        typedef std::future<AssociateAttributeGroupOutcome> AssociateAttributeGroupOutcomeCallable;
        typedef std::future<AssociateResourceOutcome> AssociateResourceOutcomeCallable;
        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<CreateAttributeGroupOutcome> CreateAttributeGroupOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<DeleteAttributeGroupOutcome> DeleteAttributeGroupOutcomeCallable;
        typedef std::future<DisassociateAttributeGroupOutcome> DisassociateAttributeGroupOutcomeCallable;
        typedef std::future<DisassociateResourceOutcome> DisassociateResourceOutcomeCallable;
        typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
        typedef std::future<GetAttributeGroupOutcome> GetAttributeGroupOutcomeCallable;
        typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
        typedef std::future<ListAssociatedAttributeGroupsOutcome> ListAssociatedAttributeGroupsOutcomeCallable;
        typedef std::future<ListAssociatedResourcesOutcome> ListAssociatedResourcesOutcomeCallable;
        typedef std::future<ListAttributeGroupsOutcome> ListAttributeGroupsOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
        typedef std::future<UpdateAttributeGroupOutcome> UpdateAttributeGroupOutcomeCallable;
} // namespace Model

  class AppRegistryClient;

    typedef std::function<void(const AppRegistryClient*, const Model::AssociateAttributeGroupRequest&, const Model::AssociateAttributeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAttributeGroupResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::AssociateResourceRequest&, const Model::AssociateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateResourceResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::CreateAttributeGroupRequest&, const Model::CreateAttributeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAttributeGroupResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::DeleteAttributeGroupRequest&, const Model::DeleteAttributeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAttributeGroupResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::DisassociateAttributeGroupRequest&, const Model::DisassociateAttributeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAttributeGroupResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::DisassociateResourceRequest&, const Model::DisassociateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateResourceResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::GetAttributeGroupRequest&, const Model::GetAttributeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAttributeGroupResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::ListAssociatedAttributeGroupsRequest&, const Model::ListAssociatedAttributeGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociatedAttributeGroupsResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::ListAssociatedResourcesRequest&, const Model::ListAssociatedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociatedResourcesResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::ListAttributeGroupsRequest&, const Model::ListAttributeGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttributeGroupsResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::UpdateAttributeGroupRequest&, const Model::UpdateAttributeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAttributeGroupResponseReceivedHandler;

  /**
   * <p> AWS Service Catalog AppRegistry enables organizations to understand the
   * application context of their AWS resources. AppRegistry provides a repository of
   * your applications, their resources, and the application metadata that you use
   * within your enterprise.</p>
   */
  class AWS_APPREGISTRY_API AppRegistryClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppRegistryClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppRegistryClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppRegistryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AppRegistryClient();


        /**
         * <p>Associates an attribute group with an application to augment the
         * application's metadata with the group's attributes. This feature enables
         * applications to be described with user-defined details that are
         * machine-readable, such as third-party integrations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/AssociateAttributeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAttributeGroupOutcome AssociateAttributeGroup(const Model::AssociateAttributeGroupRequest& request) const;

        /**
         * <p>Associates an attribute group with an application to augment the
         * application's metadata with the group's attributes. This feature enables
         * applications to be described with user-defined details that are
         * machine-readable, such as third-party integrations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/AssociateAttributeGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateAttributeGroupOutcomeCallable AssociateAttributeGroupCallable(const Model::AssociateAttributeGroupRequest& request) const;

        /**
         * <p>Associates an attribute group with an application to augment the
         * application's metadata with the group's attributes. This feature enables
         * applications to be described with user-defined details that are
         * machine-readable, such as third-party integrations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/AssociateAttributeGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateAttributeGroupAsync(const Model::AssociateAttributeGroupRequest& request, const AssociateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a resource with an application. Both the resource and the
         * application can be specified either by ID or name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/AssociateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResourceOutcome AssociateResource(const Model::AssociateResourceRequest& request) const;

        /**
         * <p>Associates a resource with an application. Both the resource and the
         * application can be specified either by ID or name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/AssociateResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateResourceOutcomeCallable AssociateResourceCallable(const Model::AssociateResourceRequest& request) const;

        /**
         * <p>Associates a resource with an application. Both the resource and the
         * application can be specified either by ID or name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/AssociateResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateResourceAsync(const Model::AssociateResourceRequest& request, const AssociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new application that is the top-level node in a hierarchy of
         * related cloud resource abstractions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates a new application that is the top-level node in a hierarchy of
         * related cloud resource abstractions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/CreateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates a new application that is the top-level node in a hierarchy of
         * related cloud resource abstractions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/CreateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new attribute group as a container for user-defined attributes.
         * This feature enables users to have full control over their cloud application's
         * metadata in a rich machine-readable format to facilitate integration with
         * automated workflows and third-party tools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/CreateAttributeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAttributeGroupOutcome CreateAttributeGroup(const Model::CreateAttributeGroupRequest& request) const;

        /**
         * <p>Creates a new attribute group as a container for user-defined attributes.
         * This feature enables users to have full control over their cloud application's
         * metadata in a rich machine-readable format to facilitate integration with
         * automated workflows and third-party tools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/CreateAttributeGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAttributeGroupOutcomeCallable CreateAttributeGroupCallable(const Model::CreateAttributeGroupRequest& request) const;

        /**
         * <p>Creates a new attribute group as a container for user-defined attributes.
         * This feature enables users to have full control over their cloud application's
         * metadata in a rich machine-readable format to facilitate integration with
         * automated workflows and third-party tools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/CreateAttributeGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAttributeGroupAsync(const Model::CreateAttributeGroupRequest& request, const CreateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an application that is specified either by its application ID or
         * name. All associated attribute groups and resources must be disassociated from
         * it before deleting an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes an application that is specified either by its application ID or
         * name. All associated attribute groups and resources must be disassociated from
         * it before deleting an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes an application that is specified either by its application ID or
         * name. All associated attribute groups and resources must be disassociated from
         * it before deleting an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an attribute group, specified either by its attribute group ID or
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/DeleteAttributeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAttributeGroupOutcome DeleteAttributeGroup(const Model::DeleteAttributeGroupRequest& request) const;

        /**
         * <p>Deletes an attribute group, specified either by its attribute group ID or
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/DeleteAttributeGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAttributeGroupOutcomeCallable DeleteAttributeGroupCallable(const Model::DeleteAttributeGroupRequest& request) const;

        /**
         * <p>Deletes an attribute group, specified either by its attribute group ID or
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/DeleteAttributeGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAttributeGroupAsync(const Model::DeleteAttributeGroupRequest& request, const DeleteAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an attribute group from an application to remove the extra
         * attributes contained in the attribute group from the application's metadata.
         * This operation reverts <code>AssociateAttributeGroup</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/DisassociateAttributeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAttributeGroupOutcome DisassociateAttributeGroup(const Model::DisassociateAttributeGroupRequest& request) const;

        /**
         * <p>Disassociates an attribute group from an application to remove the extra
         * attributes contained in the attribute group from the application's metadata.
         * This operation reverts <code>AssociateAttributeGroup</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/DisassociateAttributeGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateAttributeGroupOutcomeCallable DisassociateAttributeGroupCallable(const Model::DisassociateAttributeGroupRequest& request) const;

        /**
         * <p>Disassociates an attribute group from an application to remove the extra
         * attributes contained in the attribute group from the application's metadata.
         * This operation reverts <code>AssociateAttributeGroup</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/DisassociateAttributeGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateAttributeGroupAsync(const Model::DisassociateAttributeGroupRequest& request, const DisassociateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a resource from application. Both the resource and the
         * application can be specified either by ID or name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/DisassociateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResourceOutcome DisassociateResource(const Model::DisassociateResourceRequest& request) const;

        /**
         * <p>Disassociates a resource from application. Both the resource and the
         * application can be specified either by ID or name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/DisassociateResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateResourceOutcomeCallable DisassociateResourceCallable(const Model::DisassociateResourceRequest& request) const;

        /**
         * <p>Disassociates a resource from application. Both the resource and the
         * application can be specified either by ID or name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/DisassociateResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateResourceAsync(const Model::DisassociateResourceRequest& request, const DisassociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves metadata information about one of your applications. The
         * application can be specified either by its unique ID or by its name (which is
         * unique within one account in one region at a given point in time). Specify by ID
         * in automated workflows if you want to make sure that the exact same application
         * is returned or a <code>ResourceNotFoundException</code> is thrown, avoiding the
         * ABA addressing problem.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * <p>Retrieves metadata information about one of your applications. The
         * application can be specified either by its unique ID or by its name (which is
         * unique within one account in one region at a given point in time). Specify by ID
         * in automated workflows if you want to make sure that the exact same application
         * is returned or a <code>ResourceNotFoundException</code> is thrown, avoiding the
         * ABA addressing problem.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/GetApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationOutcomeCallable GetApplicationCallable(const Model::GetApplicationRequest& request) const;

        /**
         * <p>Retrieves metadata information about one of your applications. The
         * application can be specified either by its unique ID or by its name (which is
         * unique within one account in one region at a given point in time). Specify by ID
         * in automated workflows if you want to make sure that the exact same application
         * is returned or a <code>ResourceNotFoundException</code> is thrown, avoiding the
         * ABA addressing problem.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/GetApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an attribute group, either by its name or its ID. The attribute
         * group can be specified either by its unique ID or by its name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/GetAttributeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAttributeGroupOutcome GetAttributeGroup(const Model::GetAttributeGroupRequest& request) const;

        /**
         * <p>Retrieves an attribute group, either by its name or its ID. The attribute
         * group can be specified either by its unique ID or by its name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/GetAttributeGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAttributeGroupOutcomeCallable GetAttributeGroupCallable(const Model::GetAttributeGroupRequest& request) const;

        /**
         * <p>Retrieves an attribute group, either by its name or its ID. The attribute
         * group can be specified either by its unique ID or by its name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/GetAttributeGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAttributeGroupAsync(const Model::GetAttributeGroupRequest& request, const GetAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of all of your applications. Results are
         * paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Retrieves a list of all of your applications. Results are
         * paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListApplications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Retrieves a list of all of your applications. Results are
         * paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListApplications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all attribute groups that are associated with specified application.
         * Results are paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListAssociatedAttributeGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedAttributeGroupsOutcome ListAssociatedAttributeGroups(const Model::ListAssociatedAttributeGroupsRequest& request) const;

        /**
         * <p>Lists all attribute groups that are associated with specified application.
         * Results are paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListAssociatedAttributeGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociatedAttributeGroupsOutcomeCallable ListAssociatedAttributeGroupsCallable(const Model::ListAssociatedAttributeGroupsRequest& request) const;

        /**
         * <p>Lists all attribute groups that are associated with specified application.
         * Results are paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListAssociatedAttributeGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociatedAttributeGroupsAsync(const Model::ListAssociatedAttributeGroupsRequest& request, const ListAssociatedAttributeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all resources that are associated with specified application. Results
         * are paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListAssociatedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedResourcesOutcome ListAssociatedResources(const Model::ListAssociatedResourcesRequest& request) const;

        /**
         * <p>Lists all resources that are associated with specified application. Results
         * are paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListAssociatedResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociatedResourcesOutcomeCallable ListAssociatedResourcesCallable(const Model::ListAssociatedResourcesRequest& request) const;

        /**
         * <p>Lists all resources that are associated with specified application. Results
         * are paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListAssociatedResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociatedResourcesAsync(const Model::ListAssociatedResourcesRequest& request, const ListAssociatedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all attribute groups which you have access to. Results are
         * paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListAttributeGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttributeGroupsOutcome ListAttributeGroups(const Model::ListAttributeGroupsRequest& request) const;

        /**
         * <p>Lists all attribute groups which you have access to. Results are
         * paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListAttributeGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttributeGroupsOutcomeCallable ListAttributeGroupsCallable(const Model::ListAttributeGroupsRequest& request) const;

        /**
         * <p>Lists all attribute groups which you have access to. Results are
         * paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListAttributeGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttributeGroupsAsync(const Model::ListAttributeGroupsRequest& request, const ListAttributeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing application with new attributes.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates an existing application with new attributes.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates an existing application with new attributes.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing attribute group with new details. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/UpdateAttributeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAttributeGroupOutcome UpdateAttributeGroup(const Model::UpdateAttributeGroupRequest& request) const;

        /**
         * <p>Updates an existing attribute group with new details. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/UpdateAttributeGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAttributeGroupOutcomeCallable UpdateAttributeGroupCallable(const Model::UpdateAttributeGroupRequest& request) const;

        /**
         * <p>Updates an existing attribute group with new details. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/UpdateAttributeGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAttributeGroupAsync(const Model::UpdateAttributeGroupRequest& request, const UpdateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateAttributeGroupAsyncHelper(const Model::AssociateAttributeGroupRequest& request, const AssociateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateResourceAsyncHelper(const Model::AssociateResourceRequest& request, const AssociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAttributeGroupAsyncHelper(const Model::CreateAttributeGroupRequest& request, const CreateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAttributeGroupAsyncHelper(const Model::DeleteAttributeGroupRequest& request, const DeleteAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateAttributeGroupAsyncHelper(const Model::DisassociateAttributeGroupRequest& request, const DisassociateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateResourceAsyncHelper(const Model::DisassociateResourceRequest& request, const DisassociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApplicationAsyncHelper(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAttributeGroupAsyncHelper(const Model::GetAttributeGroupRequest& request, const GetAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationsAsyncHelper(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssociatedAttributeGroupsAsyncHelper(const Model::ListAssociatedAttributeGroupsRequest& request, const ListAssociatedAttributeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssociatedResourcesAsyncHelper(const Model::ListAssociatedResourcesRequest& request, const ListAssociatedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttributeGroupsAsyncHelper(const Model::ListAttributeGroupsRequest& request, const ListAttributeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationAsyncHelper(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAttributeGroupAsyncHelper(const Model::UpdateAttributeGroupRequest& request, const UpdateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AppRegistry
} // namespace Aws
