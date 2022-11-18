/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediastore/MediaStoreServiceClientModel.h>
#include <aws/mediastore/MediaStoreLegacyAsyncMacros.h>

namespace Aws
{
namespace MediaStore
{
  /**
   * <p>An AWS Elemental MediaStore container is a namespace that holds folders and
   * objects. You use a container endpoint to create, read, and delete objects. </p>
   */
  class AWS_MEDIASTORE_API MediaStoreClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaStoreClient(const Aws::MediaStore::MediaStoreClientConfiguration& clientConfiguration = Aws::MediaStore::MediaStoreClientConfiguration(),
                         std::shared_ptr<MediaStoreEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaStoreEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaStoreClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<MediaStoreEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaStoreEndpointProvider>(ALLOCATION_TAG),
                         const Aws::MediaStore::MediaStoreClientConfiguration& clientConfiguration = Aws::MediaStore::MediaStoreClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaStoreClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<MediaStoreEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaStoreEndpointProvider>(ALLOCATION_TAG),
                         const Aws::MediaStore::MediaStoreClientConfiguration& clientConfiguration = Aws::MediaStore::MediaStoreClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaStoreClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaStoreClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaStoreClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MediaStoreClient();


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
         * <p>Creates a storage container to hold objects. A container is similar to a
         * bucket in the Amazon S3 service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/CreateContainer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContainerOutcome CreateContainer(const Model::CreateContainerRequest& request) const;


        /**
         * <p>Deletes the specified container. Before you make a
         * <code>DeleteContainer</code> request, delete any objects in the container or in
         * any folders in the container. You can delete only empty containers.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteContainer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContainerOutcome DeleteContainer(const Model::DeleteContainerRequest& request) const;


        /**
         * <p>Deletes the access policy that is associated with the specified
         * container.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteContainerPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContainerPolicyOutcome DeleteContainerPolicy(const Model::DeleteContainerPolicyRequest& request) const;


        /**
         * <p>Deletes the cross-origin resource sharing (CORS) configuration information
         * that is set for the container.</p> <p>To use this operation, you must have
         * permission to perform the <code>MediaStore:DeleteCorsPolicy</code> action. The
         * container owner has this permission by default and can grant this permission to
         * others.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteCorsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCorsPolicyOutcome DeleteCorsPolicy(const Model::DeleteCorsPolicyRequest& request) const;


        /**
         * <p>Removes an object lifecycle policy from a container. It takes up to 20
         * minutes for the change to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLifecyclePolicyOutcome DeleteLifecyclePolicy(const Model::DeleteLifecyclePolicyRequest& request) const;


        /**
         * <p>Deletes the metric policy that is associated with the specified container. If
         * there is no metric policy associated with the container, MediaStore doesn't send
         * metrics to CloudWatch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteMetricPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMetricPolicyOutcome DeleteMetricPolicy(const Model::DeleteMetricPolicyRequest& request) const;


        /**
         * <p>Retrieves the properties of the requested container. This request is commonly
         * used to retrieve the endpoint of a container. An endpoint is a value assigned by
         * the service when a new container is created. A container's endpoint does not
         * change after it has been assigned. The <code>DescribeContainer</code> request
         * returns a single <code>Container</code> object based on
         * <code>ContainerName</code>. To return all <code>Container</code> objects that
         * are associated with a specified AWS account, use
         * <a>ListContainers</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DescribeContainer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContainerOutcome DescribeContainer(const Model::DescribeContainerRequest& request) const;


        /**
         * <p>Retrieves the access policy for the specified container. For information
         * about the data that is included in an access policy, see the <a
         * href="https://aws.amazon.com/documentation/iam/">AWS Identity and Access
         * Management User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/GetContainerPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerPolicyOutcome GetContainerPolicy(const Model::GetContainerPolicyRequest& request) const;


        /**
         * <p>Returns the cross-origin resource sharing (CORS) configuration information
         * that is set for the container.</p> <p>To use this operation, you must have
         * permission to perform the <code>MediaStore:GetCorsPolicy</code> action. By
         * default, the container owner has this permission and can grant it to
         * others.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/GetCorsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCorsPolicyOutcome GetCorsPolicy(const Model::GetCorsPolicyRequest& request) const;


        /**
         * <p>Retrieves the object lifecycle policy that is assigned to a
         * container.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/GetLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLifecyclePolicyOutcome GetLifecyclePolicy(const Model::GetLifecyclePolicyRequest& request) const;


        /**
         * <p>Returns the metric policy for the specified container. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/GetMetricPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricPolicyOutcome GetMetricPolicy(const Model::GetMetricPolicyRequest& request) const;


        /**
         * <p>Lists the properties of all containers in AWS Elemental MediaStore. </p>
         * <p>You can query to receive all the containers in one response. Or you can
         * include the <code>MaxResults</code> parameter to receive a limited number of
         * containers in each response. In this case, the response includes a token. To get
         * the next set of containers, send the command again, this time with the
         * <code>NextToken</code> parameter (with the returned token as its value). The
         * next set of responses appears, with a token if there are still more containers
         * to receive. </p> <p>See also <a>DescribeContainer</a>, which gets the properties
         * of one container. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/ListContainers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContainersOutcome ListContainers(const Model::ListContainersRequest& request) const;


        /**
         * <p>Returns a list of the tags assigned to the specified container.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Creates an access policy for the specified container to restrict the users
         * and clients that can access it. For information about the data that is included
         * in an access policy, see the <a
         * href="https://aws.amazon.com/documentation/iam/">AWS Identity and Access
         * Management User Guide</a>.</p> <p>For this release of the REST API, you can
         * create only one policy for a container. If you enter
         * <code>PutContainerPolicy</code> twice, the second command modifies the existing
         * policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/PutContainerPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutContainerPolicyOutcome PutContainerPolicy(const Model::PutContainerPolicyRequest& request) const;


        /**
         * <p>Sets the cross-origin resource sharing (CORS) configuration on a container so
         * that the container can service cross-origin requests. For example, you might
         * want to enable a request whose origin is http://www.example.com to access your
         * AWS Elemental MediaStore container at my.example.container.com by using the
         * browser's XMLHttpRequest capability.</p> <p>To enable CORS on a container, you
         * attach a CORS policy to the container. In the CORS policy, you configure rules
         * that identify origins and the HTTP methods that can be executed on your
         * container. The policy can contain up to 398,000 characters. You can add up to
         * 100 rules to a CORS policy. If more than one rule applies, the service uses the
         * first applicable rule listed.</p> <p>To learn more about CORS, see <a
         * href="https://docs.aws.amazon.com/mediastore/latest/ug/cors-policy.html">Cross-Origin
         * Resource Sharing (CORS) in AWS Elemental MediaStore</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/PutCorsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCorsPolicyOutcome PutCorsPolicy(const Model::PutCorsPolicyRequest& request) const;


        /**
         * <p>Writes an object lifecycle policy to a container. If the container already
         * has an object lifecycle policy, the service replaces the existing policy with
         * the new policy. It takes up to 20 minutes for the change to take effect.</p>
         * <p>For information about how to construct an object lifecycle policy, see <a
         * href="https://docs.aws.amazon.com/mediastore/latest/ug/policies-object-lifecycle-components.html">Components
         * of an Object Lifecycle Policy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/PutLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLifecyclePolicyOutcome PutLifecyclePolicy(const Model::PutLifecyclePolicyRequest& request) const;


        /**
         * <p>The metric policy that you want to add to the container. A metric policy
         * allows AWS Elemental MediaStore to send metrics to Amazon CloudWatch. It takes
         * up to 20 minutes for the new policy to take effect.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/PutMetricPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMetricPolicyOutcome PutMetricPolicy(const Model::PutMetricPolicyRequest& request) const;


        /**
         * <p>Starts access logging on the specified container. When you enable access
         * logging on a container, MediaStore delivers access logs for objects stored in
         * that container to Amazon CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/StartAccessLogging">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAccessLoggingOutcome StartAccessLogging(const Model::StartAccessLoggingRequest& request) const;


        /**
         * <p>Stops access logging on the specified container. When you stop access logging
         * on a container, MediaStore stops sending access logs to Amazon CloudWatch Logs.
         * These access logs are not saved and are not retrievable.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/StopAccessLogging">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAccessLoggingOutcome StopAccessLogging(const Model::StopAccessLoggingRequest& request) const;


        /**
         * <p>Adds tags to the specified AWS Elemental MediaStore container. Tags are
         * key:value pairs that you can associate with AWS resources. For example, the tag
         * key might be "customer" and the tag value might be "companyA." You can specify
         * one or more tags to add to each container. You can add up to 50 tags to each
         * container. For more information about tagging, including naming and usage
         * conventions, see <a
         * href="https://docs.aws.amazon.com/mediastore/latest/ug/tagging.html">Tagging
         * Resources in MediaStore</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from the specified container. You can specify one or more tags
         * to remove. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaStoreEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MediaStoreClientConfiguration& clientConfiguration);

      MediaStoreClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaStoreEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaStore
} // namespace Aws
