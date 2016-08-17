/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/servicecatalog/model/DescribeProductResult.h>
#include <aws/servicecatalog/model/DescribeProductViewResult.h>
#include <aws/servicecatalog/model/DescribeProvisioningParametersResult.h>
#include <aws/servicecatalog/model/DescribeRecordResult.h>
#include <aws/servicecatalog/model/ListLaunchPathsResult.h>
#include <aws/servicecatalog/model/ListRecordHistoryResult.h>
#include <aws/servicecatalog/model/ProvisionProductResult.h>
#include <aws/servicecatalog/model/ScanProvisionedProductsResult.h>
#include <aws/servicecatalog/model/SearchProductsResult.h>
#include <aws/servicecatalog/model/TerminateProvisionedProductResult.h>
#include <aws/servicecatalog/model/UpdateProvisionedProductResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace ServiceCatalog
{

namespace Model
{
        class DescribeProductRequest;
        class DescribeProductViewRequest;
        class DescribeProvisioningParametersRequest;
        class DescribeRecordRequest;
        class ListLaunchPathsRequest;
        class ListRecordHistoryRequest;
        class ProvisionProductRequest;
        class ScanProvisionedProductsRequest;
        class SearchProductsRequest;
        class TerminateProvisionedProductRequest;
        class UpdateProvisionedProductRequest;

        typedef Aws::Utils::Outcome<DescribeProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProductOutcome;
        typedef Aws::Utils::Outcome<DescribeProductViewResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProductViewOutcome;
        typedef Aws::Utils::Outcome<DescribeProvisioningParametersResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeProvisioningParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeRecordResult, Aws::Client::AWSError<ServiceCatalogErrors>> DescribeRecordOutcome;
        typedef Aws::Utils::Outcome<ListLaunchPathsResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListLaunchPathsOutcome;
        typedef Aws::Utils::Outcome<ListRecordHistoryResult, Aws::Client::AWSError<ServiceCatalogErrors>> ListRecordHistoryOutcome;
        typedef Aws::Utils::Outcome<ProvisionProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> ProvisionProductOutcome;
        typedef Aws::Utils::Outcome<ScanProvisionedProductsResult, Aws::Client::AWSError<ServiceCatalogErrors>> ScanProvisionedProductsOutcome;
        typedef Aws::Utils::Outcome<SearchProductsResult, Aws::Client::AWSError<ServiceCatalogErrors>> SearchProductsOutcome;
        typedef Aws::Utils::Outcome<TerminateProvisionedProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> TerminateProvisionedProductOutcome;
        typedef Aws::Utils::Outcome<UpdateProvisionedProductResult, Aws::Client::AWSError<ServiceCatalogErrors>> UpdateProvisionedProductOutcome;

        typedef std::future<DescribeProductOutcome> DescribeProductOutcomeCallable;
        typedef std::future<DescribeProductViewOutcome> DescribeProductViewOutcomeCallable;
        typedef std::future<DescribeProvisioningParametersOutcome> DescribeProvisioningParametersOutcomeCallable;
        typedef std::future<DescribeRecordOutcome> DescribeRecordOutcomeCallable;
        typedef std::future<ListLaunchPathsOutcome> ListLaunchPathsOutcomeCallable;
        typedef std::future<ListRecordHistoryOutcome> ListRecordHistoryOutcomeCallable;
        typedef std::future<ProvisionProductOutcome> ProvisionProductOutcomeCallable;
        typedef std::future<ScanProvisionedProductsOutcome> ScanProvisionedProductsOutcomeCallable;
        typedef std::future<SearchProductsOutcome> SearchProductsOutcomeCallable;
        typedef std::future<TerminateProvisionedProductOutcome> TerminateProvisionedProductOutcomeCallable;
        typedef std::future<UpdateProvisionedProductOutcome> UpdateProvisionedProductOutcomeCallable;
} // namespace Model

  class ServiceCatalogClient;

    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProductRequest&, const Model::DescribeProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProductViewRequest&, const Model::DescribeProductViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductViewResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProvisioningParametersRequest&, const Model::DescribeProvisioningParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisioningParametersResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeRecordRequest&, const Model::DescribeRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecordResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListLaunchPathsRequest&, const Model::ListLaunchPathsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLaunchPathsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListRecordHistoryRequest&, const Model::ListRecordHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecordHistoryResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ProvisionProductRequest&, const Model::ProvisionProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ProvisionProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ScanProvisionedProductsRequest&, const Model::ScanProvisionedProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ScanProvisionedProductsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::SearchProductsRequest&, const Model::SearchProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchProductsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::TerminateProvisionedProductRequest&, const Model::TerminateProvisionedProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateProvisionedProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateProvisionedProductRequest&, const Model::UpdateProvisionedProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProvisionedProductResponseReceivedHandler;

  /**
   * <fullname>AWS Service Catalog</fullname> <p> <b>Overview</b> </p> <p> <a
   * href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> allows
   * organizations to create and manage catalogs of IT services that are approved for
   * use on AWS. This documentation provides reference material for the AWS Service
   * Catalog end user API. To get the most out of this documentation, you need to be
   * familiar with the terminology discussed in <a
   * href="http://docs.aws.amazon.com/servicecatalog/latest/userguide/what-is_concepts.html">AWS
   * Service Catalog Concepts</a>.</p> <p> <i>Additional Resources</i> </p> <ul> <li>
   * <p> <a
   * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">AWS
   * Service Catalog Administrator Guide</a> </p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/servicecatalog/latest/userguide/introduction.html">AWS
   * Service Catalog User Guide</a> </p> </li> </ul>
   */
  class AWS_SERVICECATALOG_API ServiceCatalogClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceCatalogClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceCatalogClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServiceCatalogClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~ServiceCatalogClient();

        /**
         * <p>Retrieves information about a specified product.</p> <p>This operation is
         * functionally identical to <a>DescribeProductView</a> except that it takes as
         * input <code>ProductId</code> instead of <code>ProductViewId</code>.</p>
         */
        virtual Model::DescribeProductOutcome DescribeProduct(const Model::DescribeProductRequest& request) const;

        /**
         * <p>Retrieves information about a specified product.</p> <p>This operation is
         * functionally identical to <a>DescribeProductView</a> except that it takes as
         * input <code>ProductId</code> instead of <code>ProductViewId</code>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProductOutcomeCallable DescribeProductCallable(const Model::DescribeProductRequest& request) const;

        /**
         * <p>Retrieves information about a specified product.</p> <p>This operation is
         * functionally identical to <a>DescribeProductView</a> except that it takes as
         * input <code>ProductId</code> instead of <code>ProductViewId</code>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProductAsync(const Model::DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a specified product.</p> <p>This operation is
         * functionally identical to <a>DescribeProduct</a> except that it takes as input
         * <code>ProductViewId</code> instead of <code>ProductId</code>.</p>
         */
        virtual Model::DescribeProductViewOutcome DescribeProductView(const Model::DescribeProductViewRequest& request) const;

        /**
         * <p>Retrieves information about a specified product.</p> <p>This operation is
         * functionally identical to <a>DescribeProduct</a> except that it takes as input
         * <code>ProductViewId</code> instead of <code>ProductId</code>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProductViewOutcomeCallable DescribeProductViewCallable(const Model::DescribeProductViewRequest& request) const;

        /**
         * <p>Retrieves information about a specified product.</p> <p>This operation is
         * functionally identical to <a>DescribeProduct</a> except that it takes as input
         * <code>ProductViewId</code> instead of <code>ProductId</code>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProductViewAsync(const Model::DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about parameters required to provision a specified
         * product in a specified manner. Use this operation to obtain the list of
         * <code>ProvisioningArtifactParameters</code> parameters available to call the
         * <a>ProvisionProduct</a> operation for the specified product.</p>
         */
        virtual Model::DescribeProvisioningParametersOutcome DescribeProvisioningParameters(const Model::DescribeProvisioningParametersRequest& request) const;

        /**
         * <p>Provides information about parameters required to provision a specified
         * product in a specified manner. Use this operation to obtain the list of
         * <code>ProvisioningArtifactParameters</code> parameters available to call the
         * <a>ProvisionProduct</a> operation for the specified product.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProvisioningParametersOutcomeCallable DescribeProvisioningParametersCallable(const Model::DescribeProvisioningParametersRequest& request) const;

        /**
         * <p>Provides information about parameters required to provision a specified
         * product in a specified manner. Use this operation to obtain the list of
         * <code>ProvisioningArtifactParameters</code> parameters available to call the
         * <a>ProvisionProduct</a> operation for the specified product.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProvisioningParametersAsync(const Model::DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a paginated list of the full details of a specific request. Use
         * this operation after calling a request operation (<a>ProvisionProduct</a>,
         * <a>TerminateProvisionedProduct</a>, or <a>UpdateProvisionedProduct</a>). </p>
         */
        virtual Model::DescribeRecordOutcome DescribeRecord(const Model::DescribeRecordRequest& request) const;

        /**
         * <p>Retrieves a paginated list of the full details of a specific request. Use
         * this operation after calling a request operation (<a>ProvisionProduct</a>,
         * <a>TerminateProvisionedProduct</a>, or <a>UpdateProvisionedProduct</a>). </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecordOutcomeCallable DescribeRecordCallable(const Model::DescribeRecordRequest& request) const;

        /**
         * <p>Retrieves a paginated list of the full details of a specific request. Use
         * this operation after calling a request operation (<a>ProvisionProduct</a>,
         * <a>TerminateProvisionedProduct</a>, or <a>UpdateProvisionedProduct</a>). </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecordAsync(const Model::DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of all paths to a specified product. A path is how
         * the user has access to a specified product, and is necessary when provisioning a
         * product. A path also determines the constraints put on the product.</p>
         */
        virtual Model::ListLaunchPathsOutcome ListLaunchPaths(const Model::ListLaunchPathsRequest& request) const;

        /**
         * <p>Returns a paginated list of all paths to a specified product. A path is how
         * the user has access to a specified product, and is necessary when provisioning a
         * product. A path also determines the constraints put on the product.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLaunchPathsOutcomeCallable ListLaunchPathsCallable(const Model::ListLaunchPathsRequest& request) const;

        /**
         * <p>Returns a paginated list of all paths to a specified product. A path is how
         * the user has access to a specified product, and is necessary when provisioning a
         * product. A path also determines the constraints put on the product.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLaunchPathsAsync(const Model::ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of all performed requests, in the form of
         * RecordDetails objects that are filtered as specified.</p>
         */
        virtual Model::ListRecordHistoryOutcome ListRecordHistory(const Model::ListRecordHistoryRequest& request) const;

        /**
         * <p>Returns a paginated list of all performed requests, in the form of
         * RecordDetails objects that are filtered as specified.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecordHistoryOutcomeCallable ListRecordHistoryCallable(const Model::ListRecordHistoryRequest& request) const;

        /**
         * <p>Returns a paginated list of all performed requests, in the form of
         * RecordDetails objects that are filtered as specified.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecordHistoryAsync(const Model::ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a <i>Provision</i> of a specified product. A
         * <i>ProvisionedProduct</i> is a resourced instance for a product. For example,
         * provisioning a CloudFormation-template-backed product results in launching a
         * CloudFormation stack and all the underlying resources that come with it. </p>
         * <p>You can check the status of this request using the <a>DescribeRecord</a>
         * operation.</p>
         */
        virtual Model::ProvisionProductOutcome ProvisionProduct(const Model::ProvisionProductRequest& request) const;

        /**
         * <p>Requests a <i>Provision</i> of a specified product. A
         * <i>ProvisionedProduct</i> is a resourced instance for a product. For example,
         * provisioning a CloudFormation-template-backed product results in launching a
         * CloudFormation stack and all the underlying resources that come with it. </p>
         * <p>You can check the status of this request using the <a>DescribeRecord</a>
         * operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ProvisionProductOutcomeCallable ProvisionProductCallable(const Model::ProvisionProductRequest& request) const;

        /**
         * <p>Requests a <i>Provision</i> of a specified product. A
         * <i>ProvisionedProduct</i> is a resourced instance for a product. For example,
         * provisioning a CloudFormation-template-backed product results in launching a
         * CloudFormation stack and all the underlying resources that come with it. </p>
         * <p>You can check the status of this request using the <a>DescribeRecord</a>
         * operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ProvisionProductAsync(const Model::ProvisionProductRequest& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of all the ProvisionedProduct objects that are
         * currently available (not terminated). </p>
         */
        virtual Model::ScanProvisionedProductsOutcome ScanProvisionedProducts(const Model::ScanProvisionedProductsRequest& request) const;

        /**
         * <p>Returns a paginated list of all the ProvisionedProduct objects that are
         * currently available (not terminated). </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ScanProvisionedProductsOutcomeCallable ScanProvisionedProductsCallable(const Model::ScanProvisionedProductsRequest& request) const;

        /**
         * <p>Returns a paginated list of all the ProvisionedProduct objects that are
         * currently available (not terminated). </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ScanProvisionedProductsAsync(const Model::ScanProvisionedProductsRequest& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list all of the <code>Products</code> objects to which
         * the caller has access. </p> <p>The output of this operation can be used as input
         * for other operations, such as <a>DescribeProductView</a>.</p>
         */
        virtual Model::SearchProductsOutcome SearchProducts(const Model::SearchProductsRequest& request) const;

        /**
         * <p>Returns a paginated list all of the <code>Products</code> objects to which
         * the caller has access. </p> <p>The output of this operation can be used as input
         * for other operations, such as <a>DescribeProductView</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchProductsOutcomeCallable SearchProductsCallable(const Model::SearchProductsRequest& request) const;

        /**
         * <p>Returns a paginated list all of the <code>Products</code> objects to which
         * the caller has access. </p> <p>The output of this operation can be used as input
         * for other operations, such as <a>DescribeProductView</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchProductsAsync(const Model::SearchProductsRequest& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests termination of an existing ProvisionedProduct object. If there are
         * <code>Tags</code> associated with the object, they are terminated when the
         * ProvisionedProduct object is terminated. </p> <p>This operation does not delete
         * any records associated with the ProvisionedProduct object.</p> <p>You can check
         * the status of this request using the <a>DescribeRecord</a> operation.</p>
         */
        virtual Model::TerminateProvisionedProductOutcome TerminateProvisionedProduct(const Model::TerminateProvisionedProductRequest& request) const;

        /**
         * <p>Requests termination of an existing ProvisionedProduct object. If there are
         * <code>Tags</code> associated with the object, they are terminated when the
         * ProvisionedProduct object is terminated. </p> <p>This operation does not delete
         * any records associated with the ProvisionedProduct object.</p> <p>You can check
         * the status of this request using the <a>DescribeRecord</a> operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateProvisionedProductOutcomeCallable TerminateProvisionedProductCallable(const Model::TerminateProvisionedProductRequest& request) const;

        /**
         * <p>Requests termination of an existing ProvisionedProduct object. If there are
         * <code>Tags</code> associated with the object, they are terminated when the
         * ProvisionedProduct object is terminated. </p> <p>This operation does not delete
         * any records associated with the ProvisionedProduct object.</p> <p>You can check
         * the status of this request using the <a>DescribeRecord</a> operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateProvisionedProductAsync(const Model::TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests updates to the configuration of an existing ProvisionedProduct
         * object. If there are tags associated with the object, they cannot be updated or
         * added with this operation. Depending on the specific updates requested, this
         * operation may update with no interruption, with some interruption, or replace
         * the ProvisionedProduct object entirely. </p> <p>You can check the status of this
         * request using the <a>DescribeRecord</a> operation.</p>
         */
        virtual Model::UpdateProvisionedProductOutcome UpdateProvisionedProduct(const Model::UpdateProvisionedProductRequest& request) const;

        /**
         * <p>Requests updates to the configuration of an existing ProvisionedProduct
         * object. If there are tags associated with the object, they cannot be updated or
         * added with this operation. Depending on the specific updates requested, this
         * operation may update with no interruption, with some interruption, or replace
         * the ProvisionedProduct object entirely. </p> <p>You can check the status of this
         * request using the <a>DescribeRecord</a> operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProvisionedProductOutcomeCallable UpdateProvisionedProductCallable(const Model::UpdateProvisionedProductRequest& request) const;

        /**
         * <p>Requests updates to the configuration of an existing ProvisionedProduct
         * object. If there are tags associated with the object, they cannot be updated or
         * added with this operation. Depending on the specific updates requested, this
         * operation may update with no interruption, with some interruption, or replace
         * the ProvisionedProduct object entirely. </p> <p>You can check the status of this
         * request using the <a>DescribeRecord</a> operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProvisionedProductAsync(const Model::UpdateProvisionedProductRequest& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void DescribeProductAsyncHelper(const Model::DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProductViewAsyncHelper(const Model::DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProvisioningParametersAsyncHelper(const Model::DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRecordAsyncHelper(const Model::DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLaunchPathsAsyncHelper(const Model::ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecordHistoryAsyncHelper(const Model::ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ProvisionProductAsyncHelper(const Model::ProvisionProductRequest& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ScanProvisionedProductsAsyncHelper(const Model::ScanProvisionedProductsRequest& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchProductsAsyncHelper(const Model::SearchProductsRequest& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateProvisionedProductAsyncHelper(const Model::TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProvisionedProductAsyncHelper(const Model::UpdateProvisionedProductRequest& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace ServiceCatalog
} // namespace Aws
