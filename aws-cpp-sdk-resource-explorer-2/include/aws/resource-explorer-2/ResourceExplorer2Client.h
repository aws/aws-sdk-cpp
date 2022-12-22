/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resource-explorer-2/ResourceExplorer2ServiceClientModel.h>

namespace Aws
{
namespace ResourceExplorer2
{
  /**
   * <p>Amazon Web Services Resource Explorer is a resource search and discovery
   * service. By using Resource Explorer, you can explore your resources using an
   * internet search engine-like experience. Examples of resources include Amazon
   * Relational Database Service (Amazon RDS) instances, Amazon Simple Storage
   * Service (Amazon S3) buckets, or Amazon DynamoDB tables. You can search for your
   * resources using resource metadata like names, tags, and IDs. Resource Explorer
   * can search across all of the Amazon Web Services Regions in your account in
   * which you turn the service on, to simplify your cross-Region workloads.</p>
   * <p>Resource Explorer scans the resources in each of the Amazon Web Services
   * Regions in your Amazon Web Services account in which you turn on Resource
   * Explorer. Resource Explorer <a
   * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/getting-started-terms-and-concepts.html#term-index">creates
   * and maintains an index</a> in each Region, with the details of that Region's
   * resources.</p> <p>You can <a
   * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region.html">search
   * across all of the indexed Regions in your account</a> by designating one of your
   * Amazon Web Services Regions to contain the aggregator index for the account.
   * When you <a
   * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region-turn-on.html">promote
   * a local index in a Region to become the aggregator index for the account</a>,
   * Resource Explorer automatically replicates the index information from all local
   * indexes in the other Regions to the aggregator index. Therefore, the Region with
   * the aggregator index has a copy of all resource information for all Regions in
   * the account where you turned on Resource Explorer. As a result, views in the
   * aggregator index Region include resources from all of the indexed Regions in
   * your account.</p> <p>For more information about Amazon Web Services Resource
   * Explorer, including how to enable and configure the service, see the <a
   * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/">Amazon
   * Web Services Resource Explorer User Guide</a>.</p>
   */
  class AWS_RESOURCEEXPLORER2_API ResourceExplorer2Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ResourceExplorer2Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceExplorer2Client(const Aws::ResourceExplorer2::ResourceExplorer2ClientConfiguration& clientConfiguration = Aws::ResourceExplorer2::ResourceExplorer2ClientConfiguration(),
                                std::shared_ptr<ResourceExplorer2EndpointProviderBase> endpointProvider = Aws::MakeShared<ResourceExplorer2EndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceExplorer2Client(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<ResourceExplorer2EndpointProviderBase> endpointProvider = Aws::MakeShared<ResourceExplorer2EndpointProvider>(ALLOCATION_TAG),
                                const Aws::ResourceExplorer2::ResourceExplorer2ClientConfiguration& clientConfiguration = Aws::ResourceExplorer2::ResourceExplorer2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResourceExplorer2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<ResourceExplorer2EndpointProviderBase> endpointProvider = Aws::MakeShared<ResourceExplorer2EndpointProvider>(ALLOCATION_TAG),
                                const Aws::ResourceExplorer2::ResourceExplorer2ClientConfiguration& clientConfiguration = Aws::ResourceExplorer2::ResourceExplorer2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceExplorer2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceExplorer2Client(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResourceExplorer2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ResourceExplorer2Client();

        /**
         * <p>Sets the specified view as the default for the Amazon Web Services Region in
         * which you call this operation. When a user performs a <a>Search</a> that doesn't
         * explicitly specify which view to use, then Amazon Web Services Resource Explorer
         * automatically chooses this default view for searches performed in this Amazon
         * Web Services Region.</p> <p>If an Amazon Web Services Region doesn't have a
         * default view configured, then users must explicitly specify a view with every
         * <code>Search</code> operation performed in that Region.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/AssociateDefaultView">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDefaultViewOutcome AssociateDefaultView(const Model::AssociateDefaultViewRequest& request) const;

        /**
         * A Callable wrapper for AssociateDefaultView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDefaultViewOutcomeCallable AssociateDefaultViewCallable(const Model::AssociateDefaultViewRequest& request) const;

        /**
         * An Async wrapper for AssociateDefaultView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDefaultViewAsync(const Model::AssociateDefaultViewRequest& request, const AssociateDefaultViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details about a list of views.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/BatchGetView">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetViewOutcome BatchGetView(const Model::BatchGetViewRequest& request) const;

        /**
         * A Callable wrapper for BatchGetView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetViewOutcomeCallable BatchGetViewCallable(const Model::BatchGetViewRequest& request) const;

        /**
         * An Async wrapper for BatchGetView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetViewAsync(const Model::BatchGetViewRequest& request, const BatchGetViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Turns on Amazon Web Services Resource Explorer in the Amazon Web Services
         * Region in which you called this operation by creating an index. Resource
         * Explorer begins discovering the resources in this Region and stores the details
         * about the resources in the index so that they can be queried by using the
         * <a>Search</a> operation. You can create only one index in a Region.</p> 
         * <p>This operation creates only a <i>local</i> index. To promote the local index
         * in one Amazon Web Services Region into the aggregator index for the Amazon Web
         * Services account, use the <a>UpdateIndexType</a> operation. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region.html">Turning
         * on cross-Region search by creating an aggregator index</a> in the <i>Amazon Web
         * Services Resource Explorer User Guide</i>.</p>  <p>For more details about
         * what happens when you turn on Resource Explorer in an Amazon Web Services
         * Region, see <a
         * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-service-activate.html">Turn
         * on Resource Explorer to index your resources in an Amazon Web Services
         * Region</a> in the <i>Amazon Web Services Resource Explorer User Guide</i>.</p>
         * <p>If this is the first Amazon Web Services Region in which you've created an
         * index for Resource Explorer, then this operation also <a
         * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/security_iam_service-linked-roles.html">creates
         * a service-linked role</a> in your Amazon Web Services account that allows
         * Resource Explorer to enumerate your resources to populate the index.</p> <ul>
         * <li> <p> <b>Action</b>: <code>resource-explorer-2:CreateIndex</code> </p> <p>
         * <b>Resource</b>: The ARN of the index (as it will exist after the operation
         * completes) in the Amazon Web Services Region and account in which you're trying
         * to create the index. Use the wildcard character (<code>*</code>) at the end of
         * the string to match the eventual UUID. For example, the following
         * <code>Resource</code> element restricts the role or user to creating an index in
         * only the <code>us-east-2</code> Region of the specified account.</p> <p>
         * <code>"Resource":
         * "arn:aws:resource-explorer-2:us-west-2:<i>&lt;account-id&gt;</i>:index/ *"</code>
         * </p> <p>Alternatively, you can use <code>"Resource": "*"</code> to allow the
         * role or user to create an index in any Region.</p> </li> <li> <p> <b>Action</b>:
         * <code>iam:CreateServiceLinkedRole</code> </p> <p> <b>Resource</b>: No specific
         * resource (*). </p> <p>This permission is required only the first time you create
         * an index to turn on Resource Explorer in the account. Resource Explorer uses
         * this to create the <a
         * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/security_iam_service-linked-roles.html">service-linked
         * role needed to index the resources in your account</a>. Resource Explorer uses
         * the same service-linked role for all additional indexes you create
         * afterwards.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/CreateIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIndexOutcome CreateIndex(const Model::CreateIndexRequest& request) const;

        /**
         * A Callable wrapper for CreateIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIndexOutcomeCallable CreateIndexCallable(const Model::CreateIndexRequest& request) const;

        /**
         * An Async wrapper for CreateIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIndexAsync(const Model::CreateIndexRequest& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a view that users can query by using the <a>Search</a> operation.
         * Results from queries that you make using this view include only resources that
         * match the view's <code>Filters</code>. For more information about Amazon Web
         * Services Resource Explorer views, see <a
         * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-views.html">Managing
         * views</a> in the <i>Amazon Web Services Resource Explorer User Guide</i>.</p>
         * <p>Only the principals with an IAM identity-based policy that grants
         * <code>Allow</code> to the <code>Search</code> action on a <code>Resource</code>
         * with the <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
         * resource name (ARN)</a> of this view can <a>Search</a> using views you create
         * with this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/CreateView">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateViewOutcome CreateView(const Model::CreateViewRequest& request) const;

        /**
         * A Callable wrapper for CreateView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateViewOutcomeCallable CreateViewCallable(const Model::CreateViewRequest& request) const;

        /**
         * An Async wrapper for CreateView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateViewAsync(const Model::CreateViewRequest& request, const CreateViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified index and turns off Amazon Web Services Resource
         * Explorer in the specified Amazon Web Services Region. When you delete an index,
         * Resource Explorer stops discovering and indexing resources in that Region.
         * Resource Explorer also deletes all views in that Region. These actions occur as
         * asynchronous background tasks. You can check to see when the actions are
         * complete by using the <a>GetIndex</a> operation and checking the
         * <code>Status</code> response value.</p>  <p>If the index you delete is the
         * aggregator index for the Amazon Web Services account, you must wait 24 hours
         * before you can promote another local index to be the aggregator index for the
         * account. Users can't perform account-wide searches using Resource Explorer until
         * another aggregator index is configured.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/DeleteIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIndexOutcome DeleteIndex(const Model::DeleteIndexRequest& request) const;

        /**
         * A Callable wrapper for DeleteIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIndexOutcomeCallable DeleteIndexCallable(const Model::DeleteIndexRequest& request) const;

        /**
         * An Async wrapper for DeleteIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIndexAsync(const Model::DeleteIndexRequest& request, const DeleteIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified view.</p> <p>If the specified view is the default view
         * for its Amazon Web Services Region, then all <a>Search</a> operations in that
         * Region must explicitly specify the view to use until you configure a new default
         * by calling the <a>AssociateDefaultView</a> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/DeleteView">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteViewOutcome DeleteView(const Model::DeleteViewRequest& request) const;

        /**
         * A Callable wrapper for DeleteView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteViewOutcomeCallable DeleteViewCallable(const Model::DeleteViewRequest& request) const;

        /**
         * An Async wrapper for DeleteView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteViewAsync(const Model::DeleteViewRequest& request, const DeleteViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>After you call this operation, the affected Amazon Web Services Region no
         * longer has a default view. All <a>Search</a> operations in that Region must
         * explicitly specify a view or the operation fails. You can configure a new
         * default by calling the <a>AssociateDefaultView</a> operation.</p> <p>If an
         * Amazon Web Services Region doesn't have a default view configured, then users
         * must explicitly specify a view with every <code>Search</code> operation
         * performed in that Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/DisassociateDefaultView">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDefaultViewOutcome DisassociateDefaultView() const;

        /**
         * A Callable wrapper for DisassociateDefaultView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateDefaultViewOutcomeCallable DisassociateDefaultViewCallable() const;

        /**
         * An Async wrapper for DisassociateDefaultView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateDefaultViewAsync(const DisassociateDefaultViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Retrieves the Amazon Resource Name (ARN) of the view that is the default for
         * the Amazon Web Services Region in which you call this operation. You can then
         * call <a>GetView</a> to retrieve the details of that view.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/GetDefaultView">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDefaultViewOutcome GetDefaultView() const;

        /**
         * A Callable wrapper for GetDefaultView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDefaultViewOutcomeCallable GetDefaultViewCallable() const;

        /**
         * An Async wrapper for GetDefaultView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDefaultViewAsync(const GetDefaultViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Retrieves details about the Amazon Web Services Resource Explorer index in
         * the Amazon Web Services Region in which you invoked the operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/GetIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIndexOutcome GetIndex() const;

        /**
         * A Callable wrapper for GetIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIndexOutcomeCallable GetIndexCallable() const;

        /**
         * An Async wrapper for GetIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIndexAsync(const GetIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Retrieves details of the specified view.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/GetView">AWS
         * API Reference</a></p>
         */
        virtual Model::GetViewOutcome GetView(const Model::GetViewRequest& request) const;

        /**
         * A Callable wrapper for GetView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetViewOutcomeCallable GetViewCallable(const Model::GetViewRequest& request) const;

        /**
         * An Async wrapper for GetView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetViewAsync(const Model::GetViewRequest& request, const GetViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of all of the indexes in Amazon Web Services Regions that
         * are currently collecting resource information for Amazon Web Services Resource
         * Explorer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/ListIndexes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIndexesOutcome ListIndexes(const Model::ListIndexesRequest& request) const;

        /**
         * A Callable wrapper for ListIndexes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIndexesOutcomeCallable ListIndexesCallable(const Model::ListIndexesRequest& request) const;

        /**
         * An Async wrapper for ListIndexes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIndexesAsync(const Model::ListIndexesRequest& request, const ListIndexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of all resource types currently supported by Amazon Web
         * Services Resource Explorer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/ListSupportedResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSupportedResourceTypesOutcome ListSupportedResourceTypes(const Model::ListSupportedResourceTypesRequest& request) const;

        /**
         * A Callable wrapper for ListSupportedResourceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSupportedResourceTypesOutcomeCallable ListSupportedResourceTypesCallable(const Model::ListSupportedResourceTypesRequest& request) const;

        /**
         * An Async wrapper for ListSupportedResourceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSupportedResourceTypesAsync(const Model::ListSupportedResourceTypesRequest& request, const ListSupportedResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that are attached to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/ListTagsForResource">AWS
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
         * <p>Lists the <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
         * resource names (ARNs)</a> of the views available in the Amazon Web Services
         * Region in which you call this operation.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a paginated operation. These operations can occasionally return an empty
         * set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/ListViews">AWS
         * API Reference</a></p>
         */
        virtual Model::ListViewsOutcome ListViews(const Model::ListViewsRequest& request) const;

        /**
         * A Callable wrapper for ListViews that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListViewsOutcomeCallable ListViewsCallable(const Model::ListViewsRequest& request) const;

        /**
         * An Async wrapper for ListViews that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListViewsAsync(const Model::ListViewsRequest& request, const ListViewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for resources and displays details about all resources that match
         * the specified criteria. You must specify a query string.</p> <p>All search
         * queries must use a view. If you don't explicitly specify a view, then Amazon Web
         * Services Resource Explorer uses the default view for the Amazon Web Services
         * Region in which you call this operation. The results are the logical
         * intersection of the results that match both the <code>QueryString</code>
         * parameter supplied to this operation and the <code>SearchFilter</code> parameter
         * attached to the view.</p> <p>For the complete syntax supported by the
         * <code>QueryString</code> parameter, see <a
         * href="https://docs.aws.amazon.com/resource-explorer/latest/APIReference/about-query-syntax.html">Search
         * query syntax reference for Resource Explorer</a>.</p> <p>If your search results
         * are empty, or are missing results that you think should be there, see <a
         * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/troubleshooting_search.html">Troubleshooting
         * Resource Explorer search</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/Search">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchOutcome Search(const Model::SearchRequest& request) const;

        /**
         * A Callable wrapper for Search that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchOutcomeCallable SearchCallable(const Model::SearchRequest& request) const;

        /**
         * An Async wrapper for Search that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchAsync(const Model::SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tag key and value pairs to an Amazon Web Services Resource
         * Explorer view or index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/TagResource">AWS
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
         * <p>Removes one or more tag key and value pairs from an Amazon Web Services
         * Resource Explorer view or index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/UntagResource">AWS
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
         * <p>Changes the type of the index from one of the following types to the other.
         * For more information about indexes and the role they perform in Amazon Web
         * Services Resource Explorer, see <a
         * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region.html">Turning
         * on cross-Region search by creating an aggregator index</a> in the <i>Amazon Web
         * Services Resource Explorer User Guide</i>.</p> <ul> <li> <p> <b>
         * <code>AGGREGATOR</code> index type</b> </p> <p>The index contains information
         * about resources from all Amazon Web Services Regions in the Amazon Web Services
         * account in which you've created a Resource Explorer index. Resource information
         * from all other Regions is replicated to this Region's index.</p> <p>When you
         * change the index type to <code>AGGREGATOR</code>, Resource Explorer turns on
         * replication of all discovered resource information from the other Amazon Web
         * Services Regions in your account to this index. You can then, from this Region
         * only, perform resource search queries that span all Amazon Web Services Regions
         * in the Amazon Web Services account. Turning on replication from all other
         * Regions is performed by asynchronous background tasks. You can check the status
         * of the asynchronous tasks by using the <a>GetIndex</a> operation. When the
         * asynchronous tasks complete, the <code>Status</code> response of that operation
         * changes from <code>UPDATING</code> to <code>ACTIVE</code>. After that, you can
         * start to see results from other Amazon Web Services Regions in query results.
         * However, it can take several hours for replication from all other Regions to
         * complete.</p>  <p>You can have only one aggregator index per Amazon
         * Web Services account. Before you can promote a different index to be the
         * aggregator index for the account, you must first demote the existing aggregator
         * index to type <code>LOCAL</code>.</p>  </li> <li> <p> <b>
         * <code>LOCAL</code> index type</b> </p> <p>The index contains information about
         * resources in only the Amazon Web Services Region in which the index exists. If
         * an aggregator index in another Region exists, then information in this local
         * index is replicated to the aggregator index.</p> <p>When you change the index
         * type to <code>LOCAL</code>, Resource Explorer turns off the replication of
         * resource information from all other Amazon Web Services Regions in the Amazon
         * Web Services account to this Region. The aggregator index remains in the
         * <code>UPDATING</code> state until all replication with other Regions
         * successfully stops. You can check the status of the asynchronous task by using
         * the <a>GetIndex</a> operation. When Resource Explorer successfully stops all
         * replication with other Regions, the <code>Status</code> response of that
         * operation changes from <code>UPDATING</code> to <code>ACTIVE</code>. Separately,
         * the resource information from other Regions that was previously stored in the
         * index is deleted within 30 days by another background task. Until that
         * asynchronous task completes, some results from other Regions can continue to
         * appear in search results.</p>  <p>After you demote an aggregator
         * index to a local index, you must wait 24 hours before you can promote another
         * index to be the new aggregator index for the account.</p>  </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/UpdateIndexType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIndexTypeOutcome UpdateIndexType(const Model::UpdateIndexTypeRequest& request) const;

        /**
         * A Callable wrapper for UpdateIndexType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIndexTypeOutcomeCallable UpdateIndexTypeCallable(const Model::UpdateIndexTypeRequest& request) const;

        /**
         * An Async wrapper for UpdateIndexType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIndexTypeAsync(const Model::UpdateIndexTypeRequest& request, const UpdateIndexTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies some of the details of a view. You can change the filter string and
         * the list of included properties. You can't change the name of the
         * view.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/UpdateView">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateViewOutcome UpdateView(const Model::UpdateViewRequest& request) const;

        /**
         * A Callable wrapper for UpdateView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateViewOutcomeCallable UpdateViewCallable(const Model::UpdateViewRequest& request) const;

        /**
         * An Async wrapper for UpdateView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateViewAsync(const Model::UpdateViewRequest& request, const UpdateViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ResourceExplorer2EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ResourceExplorer2Client>;
      void init(const ResourceExplorer2ClientConfiguration& clientConfiguration);

      ResourceExplorer2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ResourceExplorer2EndpointProviderBase> m_endpointProvider;
  };

} // namespace ResourceExplorer2
} // namespace Aws
