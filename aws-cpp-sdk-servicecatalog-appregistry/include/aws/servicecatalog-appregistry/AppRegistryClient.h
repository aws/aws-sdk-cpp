/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/servicecatalog-appregistry/AppRegistryServiceClientModel.h>

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
  class AWS_APPREGISTRY_API AppRegistryClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AppRegistryClient>
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
         * A Callable wrapper for AssociateAttributeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateAttributeGroupOutcomeCallable AssociateAttributeGroupCallable(const Model::AssociateAttributeGroupRequest& request) const;

        /**
         * An Async wrapper for AssociateAttributeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for AssociateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateResourceOutcomeCallable AssociateResourceCallable(const Model::AssociateResourceRequest& request) const;

        /**
         * An Async wrapper for AssociateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateAttributeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAttributeGroupOutcomeCallable CreateAttributeGroupCallable(const Model::CreateAttributeGroupRequest& request) const;

        /**
         * An Async wrapper for CreateAttributeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteAttributeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAttributeGroupOutcomeCallable DeleteAttributeGroupCallable(const Model::DeleteAttributeGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteAttributeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DisassociateAttributeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateAttributeGroupOutcomeCallable DisassociateAttributeGroupCallable(const Model::DisassociateAttributeGroupRequest& request) const;

        /**
         * An Async wrapper for DisassociateAttributeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DisassociateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateResourceOutcomeCallable DisassociateResourceCallable(const Model::DisassociateResourceRequest& request) const;

        /**
         * An Async wrapper for DisassociateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationOutcomeCallable GetApplicationCallable(const Model::GetApplicationRequest& request) const;

        /**
         * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the resource associated with the application.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/GetAssociatedResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssociatedResourceOutcome GetAssociatedResource(const Model::GetAssociatedResourceRequest& request) const;

        /**
         * A Callable wrapper for GetAssociatedResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssociatedResourceOutcomeCallable GetAssociatedResourceCallable(const Model::GetAssociatedResourceRequest& request) const;

        /**
         * An Async wrapper for GetAssociatedResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssociatedResourceAsync(const Model::GetAssociatedResourceRequest& request, const GetAssociatedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an attribute group, either by its name or its ID. The attribute
         * group can be specified either by its unique ID or by its name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/GetAttributeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAttributeGroupOutcome GetAttributeGroup(const Model::GetAttributeGroupRequest& request) const;

        /**
         * A Callable wrapper for GetAttributeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAttributeGroupOutcomeCallable GetAttributeGroupCallable(const Model::GetAttributeGroupRequest& request) const;

        /**
         * An Async wrapper for GetAttributeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAttributeGroupAsync(const Model::GetAttributeGroupRequest& request, const GetAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListAssociatedAttributeGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociatedAttributeGroupsOutcomeCallable ListAssociatedAttributeGroupsCallable(const Model::ListAssociatedAttributeGroupsRequest& request) const;

        /**
         * An Async wrapper for ListAssociatedAttributeGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociatedAttributeGroupsAsync(const Model::ListAssociatedAttributeGroupsRequest& request, const ListAssociatedAttributeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListAssociatedResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociatedResourcesOutcomeCallable ListAssociatedResourcesCallable(const Model::ListAssociatedResourcesRequest& request) const;

        /**
         * An Async wrapper for ListAssociatedResources that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListAttributeGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttributeGroupsOutcomeCallable ListAttributeGroupsCallable(const Model::ListAttributeGroupsRequest& request) const;

        /**
         * An Async wrapper for ListAttributeGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttributeGroupsAsync(const Model::ListAttributeGroupsRequest& request, const ListAttributeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the details of all attribute groups associated with a specific
         * application. The results display in pages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListAttributeGroupsForApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttributeGroupsForApplicationOutcome ListAttributeGroupsForApplication(const Model::ListAttributeGroupsForApplicationRequest& request) const;

        /**
         * A Callable wrapper for ListAttributeGroupsForApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttributeGroupsForApplicationOutcomeCallable ListAttributeGroupsForApplicationCallable(const Model::ListAttributeGroupsForApplicationRequest& request) const;

        /**
         * An Async wrapper for ListAttributeGroupsForApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttributeGroupsForApplicationAsync(const Model::ListAttributeGroupsForApplicationRequest& request, const ListAttributeGroupsForApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the tags on the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Associates a <code>TagKey</code> configuration to an account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/PutConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationOutcome PutConfiguration(const Model::PutConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationOutcomeCallable PutConfigurationCallable(const Model::PutConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationAsync(const Model::PutConfigurationRequest& request, const PutConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for SyncResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SyncResourceOutcomeCallable SyncResourceCallable(const Model::SyncResourceRequest& request) const;

        /**
         * An Async wrapper for SyncResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SyncResourceAsync(const Model::SyncResourceRequest& request, const SyncResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a resource.</p> <p>This operation returns an empty response
         * if the call was successful.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing application with new attributes.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateAttributeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAttributeGroupOutcomeCallable UpdateAttributeGroupCallable(const Model::UpdateAttributeGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateAttributeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAttributeGroupAsync(const Model::UpdateAttributeGroupRequest& request, const UpdateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppRegistryEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AppRegistryClient>;
      void init(const AppRegistryClientConfiguration& clientConfiguration);

      AppRegistryClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppRegistryEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppRegistry
} // namespace Aws
