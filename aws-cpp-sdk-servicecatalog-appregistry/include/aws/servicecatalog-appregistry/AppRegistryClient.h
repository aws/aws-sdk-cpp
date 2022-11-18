/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/servicecatalog-appregistry/AppRegistryServiceClientModel.h>
#include <aws/servicecatalog-appregistry/AppRegistryLegacyAsyncMacros.h>

namespace Aws
{
namespace AppRegistry
{
  /**
   * <p> Amazon Web Services Service Catalog AppRegistry enables organizations to
   * understand the application context of their Amazon Web Services resources.
   * AppRegistry provides a repository of your applications, their resources, and the
   * application metadata that you use within your enterprise.</p>
   */
  class AWS_APPREGISTRY_API AppRegistryClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppRegistryClient(const Aws::AppRegistry::AppRegistryClientConfiguration& clientConfiguration = Aws::AppRegistry::AppRegistryClientConfiguration(),
                          std::shared_ptr<AppRegistryEndpointProviderBase> endpointProvider = Aws::MakeShared<AppRegistryEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppRegistryClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<AppRegistryEndpointProviderBase> endpointProvider = Aws::MakeShared<AppRegistryEndpointProvider>(ALLOCATION_TAG),
                          const Aws::AppRegistry::AppRegistryClientConfiguration& clientConfiguration = Aws::AppRegistry::AppRegistryClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppRegistryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<AppRegistryEndpointProviderBase> endpointProvider = Aws::MakeShared<AppRegistryEndpointProvider>(ALLOCATION_TAG),
                          const Aws::AppRegistry::AppRegistryClientConfiguration& clientConfiguration = Aws::AppRegistry::AppRegistryClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppRegistryClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppRegistryClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppRegistryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AppRegistryClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Associates a resource with an application. Both the resource and the
         * application can be specified either by ID or name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/AssociateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResourceOutcome AssociateResource(const Model::AssociateResourceRequest& request) const;


        /**
         * <p>Creates a new application that is the top-level node in a hierarchy of
         * related cloud resource abstractions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;


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
         * <p>Deletes an application that is specified either by its application ID or
         * name. All associated attribute groups and resources must be disassociated from
         * it before deleting an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;


        /**
         * <p>Deletes an attribute group, specified either by its attribute group ID or
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/DeleteAttributeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAttributeGroupOutcome DeleteAttributeGroup(const Model::DeleteAttributeGroupRequest& request) const;


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
         * <p>Disassociates a resource from application. Both the resource and the
         * application can be specified either by ID or name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/DisassociateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResourceOutcome DisassociateResource(const Model::DisassociateResourceRequest& request) const;


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
         * <p>Gets the resource associated with the application.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/GetAssociatedResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssociatedResourceOutcome GetAssociatedResource(const Model::GetAssociatedResourceRequest& request) const;


        /**
         * <p>Retrieves an attribute group, either by its name or its ID. The attribute
         * group can be specified either by its unique ID or by its name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/GetAttributeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAttributeGroupOutcome GetAttributeGroup(const Model::GetAttributeGroupRequest& request) const;


        /**
         * <p> Retrieves a <code>TagKey</code> configuration from an account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/GetConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationOutcome GetConfiguration() const;

        /**
         * A Callable wrapper for GetConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConfigurationOutcomeCallable GetConfigurationCallable() const;

        /**
         * An Async wrapper for GetConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConfigurationAsync(const GetConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Retrieves a list of all of your applications. Results are
         * paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;


        /**
         * <p>Lists all attribute groups that are associated with specified application.
         * Results are paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListAssociatedAttributeGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedAttributeGroupsOutcome ListAssociatedAttributeGroups(const Model::ListAssociatedAttributeGroupsRequest& request) const;


        /**
         * <p> Lists all of the resources that are associated with the specified
         * application. Results are paginated. </p>  <p> If you share an application,
         * and a consumer account associates a tag query to the application, all of the
         * users who can access the application can also view the tag values in all
         * accounts that are associated with it using this API. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListAssociatedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedResourcesOutcome ListAssociatedResources(const Model::ListAssociatedResourcesRequest& request) const;


        /**
         * <p>Lists all attribute groups which you have access to. Results are
         * paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListAttributeGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttributeGroupsOutcome ListAttributeGroups(const Model::ListAttributeGroupsRequest& request) const;


        /**
         * <p>Lists the details of all attribute groups associated with a specific
         * application. The results display in pages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListAttributeGroupsForApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttributeGroupsForApplicationOutcome ListAttributeGroupsForApplication(const Model::ListAttributeGroupsForApplicationRequest& request) const;


        /**
         * <p>Lists all of the tags on the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p> Associates a <code>TagKey</code> configuration to an account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/PutConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationOutcome PutConfiguration(const Model::PutConfigurationRequest& request) const;


        /**
         * <p>Syncs the resource with current AppRegistry records.</p> <p>Specifically, the
         * resource’s AppRegistry system tags sync with its associated application. We
         * remove the resource's AppRegistry system tags if it does not associate with the
         * application. The caller must have permissions to read and update the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/SyncResource">AWS
         * API Reference</a></p>
         */
        virtual Model::SyncResourceOutcome SyncResource(const Model::SyncResourceRequest& request) const;


        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified resource.</p>
         * <p>Each tag consists of a key and an optional value. If a tag with the same key
         * is already associated with the resource, this action updates its value.</p>
         * <p>This operation returns an empty response if the call was
         * successful.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from a resource.</p> <p>This operation returns an empty response
         * if the call was successful.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates an existing application with new attributes.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;


        /**
         * <p>Updates an existing attribute group with new details. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/UpdateAttributeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAttributeGroupOutcome UpdateAttributeGroup(const Model::UpdateAttributeGroupRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppRegistryEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const AppRegistryClientConfiguration& clientConfiguration);

      AppRegistryClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppRegistryEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppRegistry
} // namespace Aws
