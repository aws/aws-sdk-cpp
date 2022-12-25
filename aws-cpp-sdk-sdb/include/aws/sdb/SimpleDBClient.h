/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sdb/SimpleDBServiceClientModel.h>

namespace Aws
{
namespace SimpleDB
{
  /**
   * Amazon SimpleDB is a web service providing the core database functions of data
   * indexing and querying in the cloud. By offloading the time and effort associated
   * with building and operating a web-scale database, SimpleDB provides developers
   * the freedom to focus on application development. <p> A traditional, clustered
   * relational database requires a sizable upfront capital outlay, is complex to
   * design, and often requires extensive and repetitive database administration.
   * Amazon SimpleDB is dramatically simpler, requiring no schema, automatically
   * indexing your data and providing a simple API for storage and access. This
   * approach eliminates the administrative burden of data modeling, index
   * maintenance, and performance tuning. Developers gain access to this
   * functionality within Amazon's proven computing environment, are able to scale
   * instantly, and pay only for what they use. </p> <p> Visit <a
   * href="http://aws.amazon.com/simpledb/">http://aws.amazon.com/simpledb/</a> for
   * more information. </p>
   */
  class AWS_SIMPLEDB_API SimpleDBClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<SimpleDBClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SimpleDBClient(const Aws::SimpleDB::SimpleDBClientConfiguration& clientConfiguration = Aws::SimpleDB::SimpleDBClientConfiguration(),
                       std::shared_ptr<SimpleDBEndpointProviderBase> endpointProvider = Aws::MakeShared<SimpleDBEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SimpleDBClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<SimpleDBEndpointProviderBase> endpointProvider = Aws::MakeShared<SimpleDBEndpointProvider>(ALLOCATION_TAG),
                       const Aws::SimpleDB::SimpleDBClientConfiguration& clientConfiguration = Aws::SimpleDB::SimpleDBClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SimpleDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<SimpleDBEndpointProviderBase> endpointProvider = Aws::MakeShared<SimpleDBEndpointProvider>(ALLOCATION_TAG),
                       const Aws::SimpleDB::SimpleDBClientConfiguration& clientConfiguration = Aws::SimpleDB::SimpleDBClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SimpleDBClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SimpleDBClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SimpleDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SimpleDBClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p> Performs multiple DeleteAttributes operations in a single call, which
         * reduces round trips and latencies. This enables Amazon SimpleDB to optimize
         * requests, which generally yields better throughput. </p> <p> The following
         * limitations are enforced for this operation: <ul> <li>1 MB request size</li>
         * <li>25 item limit per BatchDeleteAttributes operation</li> </ul> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/BatchDeleteAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteAttributesOutcome BatchDeleteAttributes(const Model::BatchDeleteAttributesRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteAttributesOutcomeCallable BatchDeleteAttributesCallable(const Model::BatchDeleteAttributesRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteAttributesAsync(const Model::BatchDeleteAttributesRequest& request, const BatchDeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>BatchPutAttributes</code> operation creates or replaces attributes
         * within one or more items. By using this operation, the client can perform
         * multiple <a>PutAttribute</a> operation with a single call. This helps yield
         * savings in round trips and latencies, enabling Amazon SimpleDB to optimize
         * requests and generally produce better throughput. </p> <p> The client may
         * specify the item name with the <code>Item.X.ItemName</code> parameter. The
         * client may specify new attributes using a combination of the
         * <code>Item.X.Attribute.Y.Name</code> and <code>Item.X.Attribute.Y.Value</code>
         * parameters. The client may specify the first attribute for the first item using
         * the parameters <code>Item.0.Attribute.0.Name</code> and
         * <code>Item.0.Attribute.0.Value</code>, and for the second attribute for the
         * first item by the parameters <code>Item.0.Attribute.1.Name</code> and
         * <code>Item.0.Attribute.1.Value</code>, and so on. </p> <p> Attributes are
         * uniquely identified within an item by their name/value combination. For example,
         * a single item can have the attributes <code>{ "first_name", "first_value"
         * }</code> and <code>{ "first_name", "second_value" }</code>. However, it cannot
         * have two attribute instances where both the <code>Item.X.Attribute.Y.Name</code>
         * and <code>Item.X.Attribute.Y.Value</code> are the same. </p> <p> Optionally, the
         * requester can supply the <code>Replace</code> parameter for each individual
         * value. Setting this value to <code>true</code> will cause the new attribute
         * values to replace the existing attribute values. For example, if an item
         * <code>I</code> has the attributes <code>{ 'a', '1' }, { 'b', '2'}</code> and
         * <code>{ 'b', '3' }</code> and the requester does a BatchPutAttributes of
         * <code>{'I', 'b', '4' }</code> with the Replace parameter set to true, the final
         * attributes of the item will be <code>{ 'a', '1' }</code> and <code>{ 'b', '4'
         * }</code>, replacing the previous values of the 'b' attribute with the new value.
         * </p>  This operation is vulnerable to exceeding the maximum URL size
         * when making a REST request using the HTTP GET method. This operation does not
         * support conditions using <code>Expected.X.Name</code>,
         * <code>Expected.X.Value</code>, or <code>Expected.X.Exists</code>. 
         * <p> You can execute multiple <code>BatchPutAttributes</code> operations and
         * other operations in parallel. However, large numbers of concurrent
         * <code>BatchPutAttributes</code> calls can result in Service Unavailable (503)
         * responses. </p> <p> The following limitations are enforced for this operation:
         * <ul> <li>256 attribute name-value pairs per item</li> <li>1 MB request size</li>
         * <li>1 billion attributes per domain</li> <li>10 GB of total user data storage
         * per domain</li> <li>25 item limit per <code>BatchPutAttributes</code>
         * operation</li> </ul> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/BatchPutAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutAttributesOutcome BatchPutAttributes(const Model::BatchPutAttributesRequest& request) const;

        /**
         * A Callable wrapper for BatchPutAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutAttributesOutcomeCallable BatchPutAttributesCallable(const Model::BatchPutAttributesRequest& request) const;

        /**
         * An Async wrapper for BatchPutAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchPutAttributesAsync(const Model::BatchPutAttributesRequest& request, const BatchPutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>CreateDomain</code> operation creates a new domain. The domain
         * name should be unique among the domains associated with the Access Key ID
         * provided in the request. The <code>CreateDomain</code> operation may take 10 or
         * more seconds to complete. </p> <p> The client can create up to 100 domains per
         * account. </p> <p> If the client requires additional domains, go to <a
         * href="http://aws.amazon.com/contact-us/simpledb-limit-request/">
         * http://aws.amazon.com/contact-us/simpledb-limit-request/</a>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request) const;

        /**
         * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes one or more attributes associated with an item. If all attributes of
         * the item are deleted, the item is deleted. </p> <p>
         * <code>DeleteAttributes</code> is an idempotent operation; running it multiple
         * times on the same item or attribute does not result in an error response. </p>
         * <p> Because Amazon SimpleDB makes multiple copies of item data and uses an
         * eventual consistency update model, performing a <a>GetAttributes</a> or
         * <a>Select</a> operation (read) immediately after a <code>DeleteAttributes</code>
         * or <a>PutAttributes</a> operation (write) might not return updated item data.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/DeleteAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAttributesOutcome DeleteAttributes(const Model::DeleteAttributesRequest& request) const;

        /**
         * A Callable wrapper for DeleteAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAttributesOutcomeCallable DeleteAttributesCallable(const Model::DeleteAttributesRequest& request) const;

        /**
         * An Async wrapper for DeleteAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAttributesAsync(const Model::DeleteAttributesRequest& request, const DeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>DeleteDomain</code> operation deletes a domain. Any items (and
         * their attributes) in the domain are deleted as well. The
         * <code>DeleteDomain</code> operation might take 10 or more seconds to complete.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request) const;

        /**
         * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns information about the domain, including when the domain was created,
         * the number of items and attributes in the domain, and the size of the attribute
         * names and values. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/DomainMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DomainMetadataOutcome DomainMetadata(const Model::DomainMetadataRequest& request) const;

        /**
         * A Callable wrapper for DomainMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DomainMetadataOutcomeCallable DomainMetadataCallable(const Model::DomainMetadataRequest& request) const;

        /**
         * An Async wrapper for DomainMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DomainMetadataAsync(const Model::DomainMetadataRequest& request, const DomainMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns all of the attributes associated with the specified item.
         * Optionally, the attributes returned can be limited to one or more attributes by
         * specifying an attribute name parameter. </p> <p> If the item does not exist on
         * the replica that was accessed for this operation, an empty set is returned. The
         * system does not return an error as it cannot guarantee the item does not exist
         * on other replicas. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/GetAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAttributesOutcome GetAttributes(const Model::GetAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAttributesOutcomeCallable GetAttributesCallable(const Model::GetAttributesRequest& request) const;

        /**
         * An Async wrapper for GetAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAttributesAsync(const Model::GetAttributesRequest& request, const GetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>ListDomains</code> operation lists all domains associated with the
         * Access Key ID. It returns domain names up to the limit set by <a
         * href="#MaxNumberOfDomains">MaxNumberOfDomains</a>. A <a
         * href="#NextToken">NextToken</a> is returned if there are more than
         * <code>MaxNumberOfDomains</code> domains. Calling <code>ListDomains</code>
         * successive times with the <code>NextToken</code> provided by the operation
         * returns up to <code>MaxNumberOfDomains</code> more domain names with each
         * successive operation call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/ListDomains">AWS API
         * Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * A Callable wrapper for ListDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainsOutcomeCallable ListDomainsCallable(const Model::ListDomainsRequest& request) const;

        /**
         * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainsAsync(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The PutAttributes operation creates or replaces attributes in an item. The
         * client may specify new attributes using a combination of the
         * <code>Attribute.X.Name</code> and <code>Attribute.X.Value</code> parameters. The
         * client specifies the first attribute by the parameters
         * <code>Attribute.0.Name</code> and <code>Attribute.0.Value</code>, the second
         * attribute by the parameters <code>Attribute.1.Name</code> and
         * <code>Attribute.1.Value</code>, and so on. </p> <p> Attributes are uniquely
         * identified in an item by their name/value combination. For example, a single
         * item can have the attributes <code>{ "first_name", "first_value" }</code> and
         * <code>{ "first_name", second_value" }</code>. However, it cannot have two
         * attribute instances where both the <code>Attribute.X.Name</code> and
         * <code>Attribute.X.Value</code> are the same. </p> <p> Optionally, the requestor
         * can supply the <code>Replace</code> parameter for each individual attribute.
         * Setting this value to <code>true</code> causes the new attribute value to
         * replace the existing attribute value(s). For example, if an item has the
         * attributes <code>{ 'a', '1' }</code>, <code>{ 'b', '2'}</code> and <code>{ 'b',
         * '3' }</code> and the requestor calls <code>PutAttributes</code> using the
         * attributes <code>{ 'b', '4' }</code> with the <code>Replace</code> parameter set
         * to true, the final attributes of the item are changed to <code>{ 'a', '1'
         * }</code> and <code>{ 'b', '4' }</code>, which replaces the previous values of
         * the 'b' attribute with the new value. </p> <p> You cannot specify an empty
         * string as an attribute name. </p> <p> Because Amazon SimpleDB makes multiple
         * copies of client data and uses an eventual consistency update model, an
         * immediate <a>GetAttributes</a> or <a>Select</a> operation (read) immediately
         * after a <a>PutAttributes</a> or <a>DeleteAttributes</a> operation (write) might
         * not return the updated data. </p> <p> The following limitations are enforced for
         * this operation: <ul> <li>256 total attribute name-value pairs per item</li>
         * <li>One billion attributes per domain</li> <li>10 GB of total user data storage
         * per domain</li> </ul> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/PutAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAttributesOutcome PutAttributes(const Model::PutAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAttributesOutcomeCallable PutAttributesCallable(const Model::PutAttributesRequest& request) const;

        /**
         * An Async wrapper for PutAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAttributesAsync(const Model::PutAttributesRequest& request, const PutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>Select</code> operation returns a set of attributes for
         * <code>ItemNames</code> that match the select expression. <code>Select</code> is
         * similar to the standard SQL SELECT statement. </p> <p> The total size of the
         * response cannot exceed 1 MB in total size. Amazon SimpleDB automatically adjusts
         * the number of items returned per page to enforce this limit. For example, if the
         * client asks to retrieve 2500 items, but each individual item is 10 kB in size,
         * the system returns 100 items and an appropriate <code>NextToken</code> so the
         * client can access the next page of results. </p> <p> For information on how to
         * construct select expressions, see Using Select to Create Amazon SimpleDB Queries
         * in the Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/Select">AWS API
         * Reference</a></p>
         */
        virtual Model::SelectOutcome Select(const Model::SelectRequest& request) const;

        /**
         * A Callable wrapper for Select that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SelectOutcomeCallable SelectCallable(const Model::SelectRequest& request) const;

        /**
         * An Async wrapper for Select that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SelectAsync(const Model::SelectRequest& request, const SelectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<SimpleDBEndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<SimpleDBClient>;
        void init(const SimpleDBClientConfiguration& clientConfiguration);

        SimpleDBClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<SimpleDBEndpointProviderBase> m_endpointProvider;
  };

} // namespace SimpleDB
} // namespace Aws
