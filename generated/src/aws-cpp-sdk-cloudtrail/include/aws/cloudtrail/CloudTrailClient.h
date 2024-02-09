/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloudtrail/CloudTrailServiceClientModel.h>

namespace Aws
{
namespace CloudTrail
{
  /**
   * <fullname>CloudTrail</fullname> <p>This is the CloudTrail API Reference. It
   * provides descriptions of actions, data types, common parameters, and common
   * errors for CloudTrail.</p> <p>CloudTrail is a web service that records Amazon
   * Web Services API calls for your Amazon Web Services account and delivers log
   * files to an Amazon S3 bucket. The recorded information includes the identity of
   * the user, the start time of the Amazon Web Services API call, the source IP
   * address, the request parameters, and the response elements returned by the
   * service.</p>  <p>As an alternative to the API, you can use one of the
   * Amazon Web Services SDKs, which consist of libraries and sample code for various
   * programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The
   * SDKs provide programmatic access to CloudTrail. For example, the SDKs handle
   * cryptographically signing requests, managing errors, and retrying requests
   * automatically. For more information about the Amazon Web Services SDKs,
   * including how to download and install them, see <a
   * href="http://aws.amazon.com/tools/">Tools to Build on Amazon Web
   * Services</a>.</p>  <p>See the <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-user-guide.html">CloudTrail
   * User Guide</a> for information about the data that is included with each Amazon
   * Web Services API call listed in the log files.</p>
   */
  class AWS_CLOUDTRAIL_API CloudTrailClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudTrailClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CloudTrailClientConfiguration ClientConfigurationType;
      typedef CloudTrailEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailClient(const Aws::CloudTrail::CloudTrailClientConfiguration& clientConfiguration = Aws::CloudTrail::CloudTrailClientConfiguration(),
                         std::shared_ptr<CloudTrailEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<CloudTrailEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::CloudTrail::CloudTrailClientConfiguration& clientConfiguration = Aws::CloudTrail::CloudTrailClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudTrailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<CloudTrailEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::CloudTrail::CloudTrailClientConfiguration& clientConfiguration = Aws::CloudTrail::CloudTrailClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudTrailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudTrailClient();

        /**
         * <p>Adds one or more tags to a trail, event data store, or channel, up to a limit
         * of 50. Overwrites an existing tag's value when a new value is specified for an
         * existing tag key. Tag key names must be unique; you cannot have two keys with
         * the same name but different values. If you specify a key without a value, the
         * tag will be created with the specified key and a value of null. You can tag a
         * trail or event data store that applies to all Amazon Web Services Regions only
         * from the Region in which the trail or event data store was created (also known
         * as its home Region).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * A Callable wrapper for AddTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddTagsRequestT = Model::AddTagsRequest>
        Model::AddTagsOutcomeCallable AddTagsCallable(const AddTagsRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::AddTags, request);
        }

        /**
         * An Async wrapper for AddTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsRequestT = Model::AddTagsRequest>
        void AddTagsAsync(const AddTagsRequestT& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::AddTags, request, handler, context);
        }

        /**
         * <p>Cancels a query if the query is not in a terminated state, such as
         * <code>CANCELLED</code>, <code>FAILED</code>, <code>TIMED_OUT</code>, or
         * <code>FINISHED</code>. You must specify an ARN value for
         * <code>EventDataStore</code>. The ID of the query that you want to cancel is also
         * required. When you run <code>CancelQuery</code>, the query status might show as
         * <code>CANCELLED</code> even if the operation is not yet finished.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/CancelQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelQueryOutcome CancelQuery(const Model::CancelQueryRequest& request) const;

        /**
         * A Callable wrapper for CancelQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelQueryRequestT = Model::CancelQueryRequest>
        Model::CancelQueryOutcomeCallable CancelQueryCallable(const CancelQueryRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::CancelQuery, request);
        }

        /**
         * An Async wrapper for CancelQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelQueryRequestT = Model::CancelQueryRequest>
        void CancelQueryAsync(const CancelQueryRequestT& request, const CancelQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::CancelQuery, request, handler, context);
        }

        /**
         * <p>Creates a channel for CloudTrail to ingest events from a partner or external
         * source. After you create a channel, a CloudTrail Lake event data store can log
         * events from the partner or source that you specify.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        Model::CreateChannelOutcomeCallable CreateChannelCallable(const CreateChannelRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::CreateChannel, request);
        }

        /**
         * An Async wrapper for CreateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        void CreateChannelAsync(const CreateChannelRequestT& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::CreateChannel, request, handler, context);
        }

        /**
         * <p>Creates a new event data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/CreateEventDataStore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventDataStoreOutcome CreateEventDataStore(const Model::CreateEventDataStoreRequest& request) const;

        /**
         * A Callable wrapper for CreateEventDataStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEventDataStoreRequestT = Model::CreateEventDataStoreRequest>
        Model::CreateEventDataStoreOutcomeCallable CreateEventDataStoreCallable(const CreateEventDataStoreRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::CreateEventDataStore, request);
        }

        /**
         * An Async wrapper for CreateEventDataStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEventDataStoreRequestT = Model::CreateEventDataStoreRequest>
        void CreateEventDataStoreAsync(const CreateEventDataStoreRequestT& request, const CreateEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::CreateEventDataStore, request, handler, context);
        }

        /**
         * <p>Creates a trail that specifies the settings for delivery of log data to an
         * Amazon S3 bucket. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/CreateTrail">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrailOutcome CreateTrail(const Model::CreateTrailRequest& request) const;

        /**
         * A Callable wrapper for CreateTrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTrailRequestT = Model::CreateTrailRequest>
        Model::CreateTrailOutcomeCallable CreateTrailCallable(const CreateTrailRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::CreateTrail, request);
        }

        /**
         * An Async wrapper for CreateTrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTrailRequestT = Model::CreateTrailRequest>
        void CreateTrailAsync(const CreateTrailRequestT& request, const CreateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::CreateTrail, request, handler, context);
        }

        /**
         * <p>Deletes a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const DeleteChannelRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::DeleteChannel, request);
        }

        /**
         * An Async wrapper for DeleteChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        void DeleteChannelAsync(const DeleteChannelRequestT& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::DeleteChannel, request, handler, context);
        }

        /**
         * <p>Disables the event data store specified by <code>EventDataStore</code>, which
         * accepts an event data store ARN. After you run
         * <code>DeleteEventDataStore</code>, the event data store enters a
         * <code>PENDING_DELETION</code> state, and is automatically deleted after a wait
         * period of seven days. <code>TerminationProtectionEnabled</code> must be set to
         * <code>False</code> on the event data store and the <code>FederationStatus</code>
         * must be <code>DISABLED</code>. You cannot delete an event data store if
         * <code>TerminationProtectionEnabled</code> is <code>True</code> or the
         * <code>FederationStatus</code> is <code>ENABLED</code>.</p> <p>After you run
         * <code>DeleteEventDataStore</code> on an event data store, you cannot run
         * <code>ListQueries</code>, <code>DescribeQuery</code>, or
         * <code>GetQueryResults</code> on queries that are using an event data store in a
         * <code>PENDING_DELETION</code> state. An event data store in the
         * <code>PENDING_DELETION</code> state does not incur costs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DeleteEventDataStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventDataStoreOutcome DeleteEventDataStore(const Model::DeleteEventDataStoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventDataStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventDataStoreRequestT = Model::DeleteEventDataStoreRequest>
        Model::DeleteEventDataStoreOutcomeCallable DeleteEventDataStoreCallable(const DeleteEventDataStoreRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::DeleteEventDataStore, request);
        }

        /**
         * An Async wrapper for DeleteEventDataStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventDataStoreRequestT = Model::DeleteEventDataStoreRequest>
        void DeleteEventDataStoreAsync(const DeleteEventDataStoreRequestT& request, const DeleteEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::DeleteEventDataStore, request, handler, context);
        }

        /**
         * <p> Deletes the resource-based policy attached to the CloudTrail channel.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Deletes a trail. This operation must be called from the Region in which the
         * trail was created. <code>DeleteTrail</code> cannot be called on the shadow
         * trails (replicated trails in other Regions) of a trail that is enabled in all
         * Regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DeleteTrail">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrailOutcome DeleteTrail(const Model::DeleteTrailRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTrailRequestT = Model::DeleteTrailRequest>
        Model::DeleteTrailOutcomeCallable DeleteTrailCallable(const DeleteTrailRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::DeleteTrail, request);
        }

        /**
         * An Async wrapper for DeleteTrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTrailRequestT = Model::DeleteTrailRequest>
        void DeleteTrailAsync(const DeleteTrailRequestT& request, const DeleteTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::DeleteTrail, request, handler, context);
        }

        /**
         * <p>Removes CloudTrail delegated administrator permissions from a member account
         * in an organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DeregisterOrganizationDelegatedAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterOrganizationDelegatedAdminOutcome DeregisterOrganizationDelegatedAdmin(const Model::DeregisterOrganizationDelegatedAdminRequest& request) const;

        /**
         * A Callable wrapper for DeregisterOrganizationDelegatedAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterOrganizationDelegatedAdminRequestT = Model::DeregisterOrganizationDelegatedAdminRequest>
        Model::DeregisterOrganizationDelegatedAdminOutcomeCallable DeregisterOrganizationDelegatedAdminCallable(const DeregisterOrganizationDelegatedAdminRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::DeregisterOrganizationDelegatedAdmin, request);
        }

        /**
         * An Async wrapper for DeregisterOrganizationDelegatedAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterOrganizationDelegatedAdminRequestT = Model::DeregisterOrganizationDelegatedAdminRequest>
        void DeregisterOrganizationDelegatedAdminAsync(const DeregisterOrganizationDelegatedAdminRequestT& request, const DeregisterOrganizationDelegatedAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::DeregisterOrganizationDelegatedAdmin, request, handler, context);
        }

        /**
         * <p>Returns metadata about a query, including query run time in milliseconds,
         * number of events scanned and matched, and query status. If the query results
         * were delivered to an S3 bucket, the response also provides the S3 URI and the
         * delivery status.</p> <p>You must specify either a <code>QueryID</code> or a
         * <code>QueryAlias</code>. Specifying the <code>QueryAlias</code> parameter
         * returns information about the last query run for the alias.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DescribeQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQueryOutcome DescribeQuery(const Model::DescribeQueryRequest& request) const;

        /**
         * A Callable wrapper for DescribeQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeQueryRequestT = Model::DescribeQueryRequest>
        Model::DescribeQueryOutcomeCallable DescribeQueryCallable(const DescribeQueryRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::DescribeQuery, request);
        }

        /**
         * An Async wrapper for DescribeQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeQueryRequestT = Model::DescribeQueryRequest>
        void DescribeQueryAsync(const DescribeQueryRequestT& request, const DescribeQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::DescribeQuery, request, handler, context);
        }

        /**
         * <p>Retrieves settings for one or more trails associated with the current Region
         * for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DescribeTrails">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrailsOutcome DescribeTrails(const Model::DescribeTrailsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTrailsRequestT = Model::DescribeTrailsRequest>
        Model::DescribeTrailsOutcomeCallable DescribeTrailsCallable(const DescribeTrailsRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::DescribeTrails, request);
        }

        /**
         * An Async wrapper for DescribeTrails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTrailsRequestT = Model::DescribeTrailsRequest>
        void DescribeTrailsAsync(const DescribeTrailsRequestT& request, const DescribeTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::DescribeTrails, request, handler, context);
        }

        /**
         * <p> Disables Lake query federation on the specified event data store. When you
         * disable federation, CloudTrail disables the integration with Glue, Lake
         * Formation, and Amazon Athena. After disabling Lake query federation, you can no
         * longer query your event data in Amazon Athena.</p> <p>No CloudTrail Lake data is
         * deleted when you disable federation and you can continue to run queries in
         * CloudTrail Lake.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DisableFederation">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableFederationOutcome DisableFederation(const Model::DisableFederationRequest& request) const;

        /**
         * A Callable wrapper for DisableFederation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableFederationRequestT = Model::DisableFederationRequest>
        Model::DisableFederationOutcomeCallable DisableFederationCallable(const DisableFederationRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::DisableFederation, request);
        }

        /**
         * An Async wrapper for DisableFederation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableFederationRequestT = Model::DisableFederationRequest>
        void DisableFederationAsync(const DisableFederationRequestT& request, const DisableFederationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::DisableFederation, request, handler, context);
        }

        /**
         * <p> Enables Lake query federation on the specified event data store. Federating
         * an event data store lets you view the metadata associated with the event data
         * store in the Glue <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/components-overview.html#data-catalog-intro">Data
         * Catalog</a> and run SQL queries against your event data using Amazon Athena. The
         * table metadata stored in the Glue Data Catalog lets the Athena query engine know
         * how to find, read, and process the data that you want to query.</p> <p>When you
         * enable Lake query federation, CloudTrail creates a managed database named
         * <code>aws:cloudtrail</code> (if the database doesn't already exist) and a
         * managed federated table in the Glue Data Catalog. The event data store ID is
         * used for the table name. CloudTrail registers the role ARN and event data store
         * in <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-federation-lake-formation.html">Lake
         * Formation</a>, the service responsible for allowing fine-grained access control
         * of the federated resources in the Glue Data Catalog.</p> <p>For more information
         * about Lake query federation, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-federation.html">Federate
         * an event data store</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/EnableFederation">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableFederationOutcome EnableFederation(const Model::EnableFederationRequest& request) const;

        /**
         * A Callable wrapper for EnableFederation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableFederationRequestT = Model::EnableFederationRequest>
        Model::EnableFederationOutcomeCallable EnableFederationCallable(const EnableFederationRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::EnableFederation, request);
        }

        /**
         * An Async wrapper for EnableFederation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableFederationRequestT = Model::EnableFederationRequest>
        void EnableFederationAsync(const EnableFederationRequestT& request, const EnableFederationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::EnableFederation, request, handler, context);
        }

        /**
         * <p> Returns information about a specific channel. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelOutcome GetChannel(const Model::GetChannelRequest& request) const;

        /**
         * A Callable wrapper for GetChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChannelRequestT = Model::GetChannelRequest>
        Model::GetChannelOutcomeCallable GetChannelCallable(const GetChannelRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::GetChannel, request);
        }

        /**
         * An Async wrapper for GetChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChannelRequestT = Model::GetChannelRequest>
        void GetChannelAsync(const GetChannelRequestT& request, const GetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::GetChannel, request, handler, context);
        }

        /**
         * <p>Returns information about an event data store specified as either an ARN or
         * the ID portion of the ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetEventDataStore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventDataStoreOutcome GetEventDataStore(const Model::GetEventDataStoreRequest& request) const;

        /**
         * A Callable wrapper for GetEventDataStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEventDataStoreRequestT = Model::GetEventDataStoreRequest>
        Model::GetEventDataStoreOutcomeCallable GetEventDataStoreCallable(const GetEventDataStoreRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::GetEventDataStore, request);
        }

        /**
         * An Async wrapper for GetEventDataStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventDataStoreRequestT = Model::GetEventDataStoreRequest>
        void GetEventDataStoreAsync(const GetEventDataStoreRequestT& request, const GetEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::GetEventDataStore, request, handler, context);
        }

        /**
         * <p>Describes the settings for the event selectors that you configured for your
         * trail. The information returned for your event selectors includes the
         * following:</p> <ul> <li> <p>If your event selector includes read-only events,
         * write-only events, or all events. This applies to both management events and
         * data events.</p> </li> <li> <p>If your event selector includes management
         * events.</p> </li> <li> <p>If your event selector includes data events, the
         * resources on which you are logging data events.</p> </li> </ul> <p>For more
         * information about logging management and data events, see the following topics
         * in the <i>CloudTrail User Guide</i>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-events-with-cloudtrail.html">Logging
         * management events</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Logging
         * data events</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetEventSelectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventSelectorsOutcome GetEventSelectors(const Model::GetEventSelectorsRequest& request) const;

        /**
         * A Callable wrapper for GetEventSelectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEventSelectorsRequestT = Model::GetEventSelectorsRequest>
        Model::GetEventSelectorsOutcomeCallable GetEventSelectorsCallable(const GetEventSelectorsRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::GetEventSelectors, request);
        }

        /**
         * An Async wrapper for GetEventSelectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventSelectorsRequestT = Model::GetEventSelectorsRequest>
        void GetEventSelectorsAsync(const GetEventSelectorsRequestT& request, const GetEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::GetEventSelectors, request, handler, context);
        }

        /**
         * <p> Returns information about a specific import. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetImport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportOutcome GetImport(const Model::GetImportRequest& request) const;

        /**
         * A Callable wrapper for GetImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImportRequestT = Model::GetImportRequest>
        Model::GetImportOutcomeCallable GetImportCallable(const GetImportRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::GetImport, request);
        }

        /**
         * An Async wrapper for GetImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImportRequestT = Model::GetImportRequest>
        void GetImportAsync(const GetImportRequestT& request, const GetImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::GetImport, request, handler, context);
        }

        /**
         * <p>Describes the settings for the Insights event selectors that you configured
         * for your trail or event data store. <code>GetInsightSelectors</code> shows if
         * CloudTrail Insights event logging is enabled on the trail or event data store,
         * and if it is, which Insights types are enabled. If you run
         * <code>GetInsightSelectors</code> on a trail or event data store that does not
         * have Insights events enabled, the operation throws the exception
         * <code>InsightNotEnabledException</code> </p> <p>Specify either the
         * <code>EventDataStore</code> parameter to get Insights event selectors for an
         * event data store, or the <code>TrailName</code> parameter to the get Insights
         * event selectors for a trail. You cannot specify these parameters together.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-insights-events-with-cloudtrail.html">Logging
         * CloudTrail Insights events</a> in the <i>CloudTrail User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetInsightSelectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightSelectorsOutcome GetInsightSelectors(const Model::GetInsightSelectorsRequest& request) const;

        /**
         * A Callable wrapper for GetInsightSelectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInsightSelectorsRequestT = Model::GetInsightSelectorsRequest>
        Model::GetInsightSelectorsOutcomeCallable GetInsightSelectorsCallable(const GetInsightSelectorsRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::GetInsightSelectors, request);
        }

        /**
         * An Async wrapper for GetInsightSelectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInsightSelectorsRequestT = Model::GetInsightSelectorsRequest>
        void GetInsightSelectorsAsync(const GetInsightSelectorsRequestT& request, const GetInsightSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::GetInsightSelectors, request, handler, context);
        }

        /**
         * <p>Gets event data results of a query. You must specify the <code>QueryID</code>
         * value returned by the <code>StartQuery</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetQueryResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryResultsOutcome GetQueryResults(const Model::GetQueryResultsRequest& request) const;

        /**
         * A Callable wrapper for GetQueryResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQueryResultsRequestT = Model::GetQueryResultsRequest>
        Model::GetQueryResultsOutcomeCallable GetQueryResultsCallable(const GetQueryResultsRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::GetQueryResults, request);
        }

        /**
         * An Async wrapper for GetQueryResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueryResultsRequestT = Model::GetQueryResultsRequest>
        void GetQueryResultsAsync(const GetQueryResultsRequestT& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::GetQueryResults, request, handler, context);
        }

        /**
         * <p> Retrieves the JSON text of the resource-based policy document attached to
         * the CloudTrail channel. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::GetResourcePolicy, request);
        }

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::GetResourcePolicy, request, handler, context);
        }

        /**
         * <p>Returns settings information for a specified trail.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetTrail">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrailOutcome GetTrail(const Model::GetTrailRequest& request) const;

        /**
         * A Callable wrapper for GetTrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTrailRequestT = Model::GetTrailRequest>
        Model::GetTrailOutcomeCallable GetTrailCallable(const GetTrailRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::GetTrail, request);
        }

        /**
         * An Async wrapper for GetTrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTrailRequestT = Model::GetTrailRequest>
        void GetTrailAsync(const GetTrailRequestT& request, const GetTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::GetTrail, request, handler, context);
        }

        /**
         * <p>Returns a JSON-formatted list of information about the specified trail.
         * Fields include information on delivery errors, Amazon SNS and Amazon S3 errors,
         * and start and stop logging times for each trail. This operation returns trail
         * status from a single Region. To return trail status from all Regions, you must
         * call the operation on each Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetTrailStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrailStatusOutcome GetTrailStatus(const Model::GetTrailStatusRequest& request) const;

        /**
         * A Callable wrapper for GetTrailStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTrailStatusRequestT = Model::GetTrailStatusRequest>
        Model::GetTrailStatusOutcomeCallable GetTrailStatusCallable(const GetTrailStatusRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::GetTrailStatus, request);
        }

        /**
         * An Async wrapper for GetTrailStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTrailStatusRequestT = Model::GetTrailStatusRequest>
        void GetTrailStatusAsync(const GetTrailStatusRequestT& request, const GetTrailStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::GetTrailStatus, request, handler, context);
        }

        /**
         * <p> Lists the channels in the current account, and their source names.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        Model::ListChannelsOutcomeCallable ListChannelsCallable(const ListChannelsRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::ListChannels, request);
        }

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        void ListChannelsAsync(const ListChannelsRequestT& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::ListChannels, request, handler, context);
        }

        /**
         * <p>Returns information about all event data stores in the account, in the
         * current Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListEventDataStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventDataStoresOutcome ListEventDataStores(const Model::ListEventDataStoresRequest& request) const;

        /**
         * A Callable wrapper for ListEventDataStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEventDataStoresRequestT = Model::ListEventDataStoresRequest>
        Model::ListEventDataStoresOutcomeCallable ListEventDataStoresCallable(const ListEventDataStoresRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::ListEventDataStores, request);
        }

        /**
         * An Async wrapper for ListEventDataStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventDataStoresRequestT = Model::ListEventDataStoresRequest>
        void ListEventDataStoresAsync(const ListEventDataStoresRequestT& request, const ListEventDataStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::ListEventDataStores, request, handler, context);
        }

        /**
         * <p> Returns a list of failures for the specified import. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListImportFailures">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportFailuresOutcome ListImportFailures(const Model::ListImportFailuresRequest& request) const;

        /**
         * A Callable wrapper for ListImportFailures that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImportFailuresRequestT = Model::ListImportFailuresRequest>
        Model::ListImportFailuresOutcomeCallable ListImportFailuresCallable(const ListImportFailuresRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::ListImportFailures, request);
        }

        /**
         * An Async wrapper for ListImportFailures that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImportFailuresRequestT = Model::ListImportFailuresRequest>
        void ListImportFailuresAsync(const ListImportFailuresRequestT& request, const ListImportFailuresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::ListImportFailures, request, handler, context);
        }

        /**
         * <p> Returns information on all imports, or a select set of imports by
         * <code>ImportStatus</code> or <code>Destination</code>. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListImports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportsOutcome ListImports(const Model::ListImportsRequest& request) const;

        /**
         * A Callable wrapper for ListImports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImportsRequestT = Model::ListImportsRequest>
        Model::ListImportsOutcomeCallable ListImportsCallable(const ListImportsRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::ListImports, request);
        }

        /**
         * An Async wrapper for ListImports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImportsRequestT = Model::ListImportsRequest>
        void ListImportsAsync(const ListImportsRequestT& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::ListImports, request, handler, context);
        }

        /**
         * <p>Returns Insights metrics data for trails that have enabled Insights. The
         * request must include the <code>EventSource</code>, <code>EventName</code>, and
         * <code>InsightType</code> parameters.</p> <p>If the <code>InsightType</code> is
         * set to <code>ApiErrorRateInsight</code>, the request must also include the
         * <code>ErrorCode</code> parameter.</p> <p>The following are the available time
         * periods for <code>ListInsightsMetricData</code>. Each cutoff is inclusive.</p>
         * <ul> <li> <p>Data points with a period of 60 seconds (1-minute) are available
         * for 15 days.</p> </li> <li> <p>Data points with a period of 300 seconds
         * (5-minute) are available for 63 days.</p> </li> <li> <p>Data points with a
         * period of 3600 seconds (1 hour) are available for 90 days.</p> </li> </ul>
         * <p>Access to the <code>ListInsightsMetricData</code> API operation is linked to
         * the <code>cloudtrail:LookupEvents</code> action. To use this operation, you must
         * have permissions to perform the <code>cloudtrail:LookupEvents</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListInsightsMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInsightsMetricDataOutcome ListInsightsMetricData(const Model::ListInsightsMetricDataRequest& request) const;

        /**
         * A Callable wrapper for ListInsightsMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInsightsMetricDataRequestT = Model::ListInsightsMetricDataRequest>
        Model::ListInsightsMetricDataOutcomeCallable ListInsightsMetricDataCallable(const ListInsightsMetricDataRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::ListInsightsMetricData, request);
        }

        /**
         * An Async wrapper for ListInsightsMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInsightsMetricDataRequestT = Model::ListInsightsMetricDataRequest>
        void ListInsightsMetricDataAsync(const ListInsightsMetricDataRequestT& request, const ListInsightsMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::ListInsightsMetricData, request, handler, context);
        }

        /**
         * <p>Returns all public keys whose private keys were used to sign the digest files
         * within the specified time range. The public key is needed to validate digest
         * files that were signed with its corresponding private key.</p> 
         * <p>CloudTrail uses different private and public key pairs per Region. Each
         * digest file is signed with a private key unique to its Region. When you validate
         * a digest file from a specific Region, you must look in the same Region for its
         * corresponding public key.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListPublicKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPublicKeysOutcome ListPublicKeys(const Model::ListPublicKeysRequest& request) const;

        /**
         * A Callable wrapper for ListPublicKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPublicKeysRequestT = Model::ListPublicKeysRequest>
        Model::ListPublicKeysOutcomeCallable ListPublicKeysCallable(const ListPublicKeysRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::ListPublicKeys, request);
        }

        /**
         * An Async wrapper for ListPublicKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPublicKeysRequestT = Model::ListPublicKeysRequest>
        void ListPublicKeysAsync(const ListPublicKeysRequestT& request, const ListPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::ListPublicKeys, request, handler, context);
        }

        /**
         * <p>Returns a list of queries and query statuses for the past seven days. You
         * must specify an ARN value for <code>EventDataStore</code>. Optionally, to
         * shorten the list of results, you can specify a time range, formatted as
         * timestamps, by adding <code>StartTime</code> and <code>EndTime</code>
         * parameters, and a <code>QueryStatus</code> value. Valid values for
         * <code>QueryStatus</code> include <code>QUEUED</code>, <code>RUNNING</code>,
         * <code>FINISHED</code>, <code>FAILED</code>, <code>TIMED_OUT</code>, or
         * <code>CANCELLED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListQueries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueriesOutcome ListQueries(const Model::ListQueriesRequest& request) const;

        /**
         * A Callable wrapper for ListQueries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQueriesRequestT = Model::ListQueriesRequest>
        Model::ListQueriesOutcomeCallable ListQueriesCallable(const ListQueriesRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::ListQueries, request);
        }

        /**
         * An Async wrapper for ListQueries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQueriesRequestT = Model::ListQueriesRequest>
        void ListQueriesAsync(const ListQueriesRequestT& request, const ListQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::ListQueries, request, handler, context);
        }

        /**
         * <p>Lists the tags for the specified trails, event data stores, or channels in
         * the current Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        Model::ListTagsOutcomeCallable ListTagsCallable(const ListTagsRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::ListTags, request);
        }

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        void ListTagsAsync(const ListTagsRequestT& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::ListTags, request, handler, context);
        }

        /**
         * <p>Lists trails that are in the current account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListTrails">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrailsOutcome ListTrails(const Model::ListTrailsRequest& request) const;

        /**
         * A Callable wrapper for ListTrails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrailsRequestT = Model::ListTrailsRequest>
        Model::ListTrailsOutcomeCallable ListTrailsCallable(const ListTrailsRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::ListTrails, request);
        }

        /**
         * An Async wrapper for ListTrails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrailsRequestT = Model::ListTrailsRequest>
        void ListTrailsAsync(const ListTrailsRequestT& request, const ListTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::ListTrails, request, handler, context);
        }

        /**
         * <p>Looks up <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-management-events">management
         * events</a> or <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-insights-events">CloudTrail
         * Insights events</a> that are captured by CloudTrail. You can look up events that
         * occurred in a Region within the last 90 days.</p>  <p>
         * <code>LookupEvents</code> returns recent Insights events for trails that enable
         * Insights. To view Insights events for an event data store, you can run queries
         * on your Insights event data store, and you can also view the Lake dashboard for
         * Insights.</p>  <p>Lookup supports the following attributes for management
         * events:</p> <ul> <li> <p>Amazon Web Services access key</p> </li> <li> <p>Event
         * ID</p> </li> <li> <p>Event name</p> </li> <li> <p>Event source</p> </li> <li>
         * <p>Read only</p> </li> <li> <p>Resource name</p> </li> <li> <p>Resource type</p>
         * </li> <li> <p>User name</p> </li> </ul> <p>Lookup supports the following
         * attributes for Insights events:</p> <ul> <li> <p>Event ID</p> </li> <li>
         * <p>Event name</p> </li> <li> <p>Event source</p> </li> </ul> <p>All attributes
         * are optional. The default number of results returned is 50, with a maximum of 50
         * possible. The response includes a token that you can use to get the next page of
         * results.</p>  <p>The rate of lookup requests is limited to two per
         * second, per account, per Region. If this limit is exceeded, a throttling error
         * occurs.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/LookupEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::LookupEventsOutcome LookupEvents(const Model::LookupEventsRequest& request) const;

        /**
         * A Callable wrapper for LookupEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename LookupEventsRequestT = Model::LookupEventsRequest>
        Model::LookupEventsOutcomeCallable LookupEventsCallable(const LookupEventsRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::LookupEvents, request);
        }

        /**
         * An Async wrapper for LookupEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename LookupEventsRequestT = Model::LookupEventsRequest>
        void LookupEventsAsync(const LookupEventsRequestT& request, const LookupEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::LookupEvents, request, handler, context);
        }

        /**
         * <p>Configures an event selector or advanced event selectors for your trail. Use
         * event selectors or advanced event selectors to specify management and data event
         * settings for your trail. If you want your trail to log Insights events, be sure
         * the event selector enables logging of the Insights event types you want
         * configured for your trail. For more information about logging Insights events,
         * see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-insights-events-with-cloudtrail.html">Logging
         * Insights events for trails</a> in the <i>CloudTrail User Guide</i>. By default,
         * trails created without specific event selectors are configured to log all read
         * and write management events, and no data events.</p> <p>When an event occurs in
         * your account, CloudTrail evaluates the event selectors or advanced event
         * selectors in all trails. For each trail, if the event matches any event
         * selector, the trail processes and logs the event. If the event doesn't match any
         * event selector, the trail doesn't log the event.</p> <p>Example</p> <ol> <li>
         * <p>You create an event selector for a trail and specify that you want write-only
         * events.</p> </li> <li> <p>The EC2 <code>GetConsoleOutput</code> and
         * <code>RunInstances</code> API operations occur in your account.</p> </li> <li>
         * <p>CloudTrail evaluates whether the events match your event selectors.</p> </li>
         * <li> <p>The <code>RunInstances</code> is a write-only event and it matches your
         * event selector. The trail logs the event.</p> </li> <li> <p>The
         * <code>GetConsoleOutput</code> is a read-only event that doesn't match your event
         * selector. The trail doesn't log the event. </p> </li> </ol> <p>The
         * <code>PutEventSelectors</code> operation must be called from the Region in which
         * the trail was created; otherwise, an <code>InvalidHomeRegionException</code>
         * exception is thrown.</p> <p>You can configure up to five event selectors for
         * each trail. For more information, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-events-with-cloudtrail.html">Logging
         * management events</a>, <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Logging
         * data events</a>, and <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/WhatIsCloudTrail-Limits.html">Quotas
         * in CloudTrail</a> in the <i>CloudTrail User Guide</i>.</p> <p>You can add
         * advanced event selectors, and conditions for your advanced event selectors, up
         * to a maximum of 500 values for all conditions and selectors on a trail. You can
         * use either <code>AdvancedEventSelectors</code> or <code>EventSelectors</code>,
         * but not both. If you apply <code>AdvancedEventSelectors</code> to a trail, any
         * existing <code>EventSelectors</code> are overwritten. For more information about
         * advanced event selectors, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Logging
         * data events</a> in the <i>CloudTrail User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/PutEventSelectors">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventSelectorsOutcome PutEventSelectors(const Model::PutEventSelectorsRequest& request) const;

        /**
         * A Callable wrapper for PutEventSelectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEventSelectorsRequestT = Model::PutEventSelectorsRequest>
        Model::PutEventSelectorsOutcomeCallable PutEventSelectorsCallable(const PutEventSelectorsRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::PutEventSelectors, request);
        }

        /**
         * An Async wrapper for PutEventSelectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEventSelectorsRequestT = Model::PutEventSelectorsRequest>
        void PutEventSelectorsAsync(const PutEventSelectorsRequestT& request, const PutEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::PutEventSelectors, request, handler, context);
        }

        /**
         * <p>Lets you enable Insights event logging by specifying the Insights selectors
         * that you want to enable on an existing trail or event data store. You also use
         * <code>PutInsightSelectors</code> to turn off Insights event logging, by passing
         * an empty list of Insights types. The valid Insights event types are
         * <code>ApiErrorRateInsight</code> and <code>ApiCallRateInsight</code>.</p> <p>To
         * enable Insights on an event data store, you must specify the ARNs (or ID suffix
         * of the ARNs) for the source event data store (<code>EventDataStore</code>) and
         * the destination event data store (<code>InsightsDestination</code>). The source
         * event data store logs management events and enables Insights. The destination
         * event data store logs Insights events based upon the management event activity
         * of the source event data store. The source and destination event data stores
         * must belong to the same Amazon Web Services account.</p> <p>To log Insights
         * events for a trail, you must specify the name (<code>TrailName</code>) of the
         * CloudTrail trail for which you want to change or add Insights selectors.</p>
         * <p>To log CloudTrail Insights events on API call volume, the trail or event data
         * store must log <code>write</code> management events. To log CloudTrail Insights
         * events on API error rate, the trail or event data store must log
         * <code>read</code> or <code>write</code> management events. You can call
         * <code>GetEventSelectors</code> on a trail to check whether the trail logs
         * management events. You can call <code>GetEventDataStore</code> on an event data
         * store to check whether the event data store logs management events.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-insights-events-with-cloudtrail.html">Logging
         * CloudTrail Insights events</a> in the <i>CloudTrail User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/PutInsightSelectors">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInsightSelectorsOutcome PutInsightSelectors(const Model::PutInsightSelectorsRequest& request) const;

        /**
         * A Callable wrapper for PutInsightSelectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutInsightSelectorsRequestT = Model::PutInsightSelectorsRequest>
        Model::PutInsightSelectorsOutcomeCallable PutInsightSelectorsCallable(const PutInsightSelectorsRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::PutInsightSelectors, request);
        }

        /**
         * An Async wrapper for PutInsightSelectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutInsightSelectorsRequestT = Model::PutInsightSelectorsRequest>
        void PutInsightSelectorsAsync(const PutInsightSelectorsRequestT& request, const PutInsightSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::PutInsightSelectors, request, handler, context);
        }

        /**
         * <p> Attaches a resource-based permission policy to a CloudTrail channel that is
         * used for an integration with an event source outside of Amazon Web Services. For
         * more information about resource-based policies, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/security_iam_resource-based-policy-examples.html">CloudTrail
         * resource-based policy examples</a> in the <i>CloudTrail User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Registers an organization’s member account as the CloudTrail <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-delegated-administrator.html">delegated
         * administrator</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/RegisterOrganizationDelegatedAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterOrganizationDelegatedAdminOutcome RegisterOrganizationDelegatedAdmin(const Model::RegisterOrganizationDelegatedAdminRequest& request) const;

        /**
         * A Callable wrapper for RegisterOrganizationDelegatedAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterOrganizationDelegatedAdminRequestT = Model::RegisterOrganizationDelegatedAdminRequest>
        Model::RegisterOrganizationDelegatedAdminOutcomeCallable RegisterOrganizationDelegatedAdminCallable(const RegisterOrganizationDelegatedAdminRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::RegisterOrganizationDelegatedAdmin, request);
        }

        /**
         * An Async wrapper for RegisterOrganizationDelegatedAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterOrganizationDelegatedAdminRequestT = Model::RegisterOrganizationDelegatedAdminRequest>
        void RegisterOrganizationDelegatedAdminAsync(const RegisterOrganizationDelegatedAdminRequestT& request, const RegisterOrganizationDelegatedAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::RegisterOrganizationDelegatedAdmin, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from a trail, event data store, or
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/RemoveTags">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

        /**
         * A Callable wrapper for RemoveTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveTagsRequestT = Model::RemoveTagsRequest>
        Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const RemoveTagsRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::RemoveTags, request);
        }

        /**
         * An Async wrapper for RemoveTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTagsRequestT = Model::RemoveTagsRequest>
        void RemoveTagsAsync(const RemoveTagsRequestT& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::RemoveTags, request, handler, context);
        }

        /**
         * <p>Restores a deleted event data store specified by <code>EventDataStore</code>,
         * which accepts an event data store ARN. You can only restore a deleted event data
         * store within the seven-day wait period after deletion. Restoring an event data
         * store can take several minutes, depending on the size of the event data
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/RestoreEventDataStore">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreEventDataStoreOutcome RestoreEventDataStore(const Model::RestoreEventDataStoreRequest& request) const;

        /**
         * A Callable wrapper for RestoreEventDataStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreEventDataStoreRequestT = Model::RestoreEventDataStoreRequest>
        Model::RestoreEventDataStoreOutcomeCallable RestoreEventDataStoreCallable(const RestoreEventDataStoreRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::RestoreEventDataStore, request);
        }

        /**
         * An Async wrapper for RestoreEventDataStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreEventDataStoreRequestT = Model::RestoreEventDataStoreRequest>
        void RestoreEventDataStoreAsync(const RestoreEventDataStoreRequestT& request, const RestoreEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::RestoreEventDataStore, request, handler, context);
        }

        /**
         * <p>Starts the ingestion of live events on an event data store specified as
         * either an ARN or the ID portion of the ARN. To start ingestion, the event data
         * store <code>Status</code> must be <code>STOPPED_INGESTION</code> and the
         * <code>eventCategory</code> must be <code>Management</code>, <code>Data</code>,
         * or <code>ConfigurationItem</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StartEventDataStoreIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEventDataStoreIngestionOutcome StartEventDataStoreIngestion(const Model::StartEventDataStoreIngestionRequest& request) const;

        /**
         * A Callable wrapper for StartEventDataStoreIngestion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartEventDataStoreIngestionRequestT = Model::StartEventDataStoreIngestionRequest>
        Model::StartEventDataStoreIngestionOutcomeCallable StartEventDataStoreIngestionCallable(const StartEventDataStoreIngestionRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::StartEventDataStoreIngestion, request);
        }

        /**
         * An Async wrapper for StartEventDataStoreIngestion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartEventDataStoreIngestionRequestT = Model::StartEventDataStoreIngestionRequest>
        void StartEventDataStoreIngestionAsync(const StartEventDataStoreIngestionRequestT& request, const StartEventDataStoreIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::StartEventDataStoreIngestion, request, handler, context);
        }

        /**
         * <p> Starts an import of logged trail events from a source S3 bucket to a
         * destination event data store. By default, CloudTrail only imports events
         * contained in the S3 bucket's <code>CloudTrail</code> prefix and the prefixes
         * inside the <code>CloudTrail</code> prefix, and does not check prefixes for other
         * Amazon Web Services services. If you want to import CloudTrail events contained
         * in another prefix, you must include the prefix in the
         * <code>S3LocationUri</code>. For more considerations about importing trail
         * events, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-copy-trail-to-lake.html#cloudtrail-trail-copy-considerations">Considerations</a>.
         * </p> <p> When you start a new import, the <code>Destinations</code> and
         * <code>ImportSource</code> parameters are required. Before starting a new import,
         * disable any access control lists (ACLs) attached to the source S3 bucket. For
         * more information about disabling ACLs, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/about-object-ownership.html">Controlling
         * ownership of objects and disabling ACLs for your bucket</a>. </p> <p> When you
         * retry an import, the <code>ImportID</code> parameter is required. </p> 
         * <p> If the destination event data store is for an organization, you must use the
         * management account to import trail events. You cannot use the delegated
         * administrator account for the organization. </p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StartImport">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImportOutcome StartImport(const Model::StartImportRequest& request) const;

        /**
         * A Callable wrapper for StartImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartImportRequestT = Model::StartImportRequest>
        Model::StartImportOutcomeCallable StartImportCallable(const StartImportRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::StartImport, request);
        }

        /**
         * An Async wrapper for StartImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartImportRequestT = Model::StartImportRequest>
        void StartImportAsync(const StartImportRequestT& request, const StartImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::StartImport, request, handler, context);
        }

        /**
         * <p>Starts the recording of Amazon Web Services API calls and log file delivery
         * for a trail. For a trail that is enabled in all Regions, this operation must be
         * called from the Region in which the trail was created. This operation cannot be
         * called on the shadow trails (replicated trails in other Regions) of a trail that
         * is enabled in all Regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StartLogging">AWS
         * API Reference</a></p>
         */
        virtual Model::StartLoggingOutcome StartLogging(const Model::StartLoggingRequest& request) const;

        /**
         * A Callable wrapper for StartLogging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartLoggingRequestT = Model::StartLoggingRequest>
        Model::StartLoggingOutcomeCallable StartLoggingCallable(const StartLoggingRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::StartLogging, request);
        }

        /**
         * An Async wrapper for StartLogging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartLoggingRequestT = Model::StartLoggingRequest>
        void StartLoggingAsync(const StartLoggingRequestT& request, const StartLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::StartLogging, request, handler, context);
        }

        /**
         * <p>Starts a CloudTrail Lake query. Use the <code>QueryStatement</code> parameter
         * to provide your SQL query, enclosed in single quotation marks. Use the optional
         * <code>DeliveryS3Uri</code> parameter to deliver the query results to an S3
         * bucket.</p> <p> <code>StartQuery</code> requires you specify either the
         * <code>QueryStatement</code> parameter, or a <code>QueryAlias</code> and any
         * <code>QueryParameters</code>. In the current release, the
         * <code>QueryAlias</code> and <code>QueryParameters</code> parameters are used
         * only for the queries that populate the CloudTrail Lake dashboards.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StartQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::StartQueryOutcome StartQuery(const Model::StartQueryRequest& request) const;

        /**
         * A Callable wrapper for StartQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartQueryRequestT = Model::StartQueryRequest>
        Model::StartQueryOutcomeCallable StartQueryCallable(const StartQueryRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::StartQuery, request);
        }

        /**
         * An Async wrapper for StartQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartQueryRequestT = Model::StartQueryRequest>
        void StartQueryAsync(const StartQueryRequestT& request, const StartQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::StartQuery, request, handler, context);
        }

        /**
         * <p>Stops the ingestion of live events on an event data store specified as either
         * an ARN or the ID portion of the ARN. To stop ingestion, the event data store
         * <code>Status</code> must be <code>ENABLED</code> and the
         * <code>eventCategory</code> must be <code>Management</code>, <code>Data</code>,
         * or <code>ConfigurationItem</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StopEventDataStoreIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEventDataStoreIngestionOutcome StopEventDataStoreIngestion(const Model::StopEventDataStoreIngestionRequest& request) const;

        /**
         * A Callable wrapper for StopEventDataStoreIngestion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopEventDataStoreIngestionRequestT = Model::StopEventDataStoreIngestionRequest>
        Model::StopEventDataStoreIngestionOutcomeCallable StopEventDataStoreIngestionCallable(const StopEventDataStoreIngestionRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::StopEventDataStoreIngestion, request);
        }

        /**
         * An Async wrapper for StopEventDataStoreIngestion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopEventDataStoreIngestionRequestT = Model::StopEventDataStoreIngestionRequest>
        void StopEventDataStoreIngestionAsync(const StopEventDataStoreIngestionRequestT& request, const StopEventDataStoreIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::StopEventDataStoreIngestion, request, handler, context);
        }

        /**
         * <p> Stops a specified import. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StopImport">AWS
         * API Reference</a></p>
         */
        virtual Model::StopImportOutcome StopImport(const Model::StopImportRequest& request) const;

        /**
         * A Callable wrapper for StopImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopImportRequestT = Model::StopImportRequest>
        Model::StopImportOutcomeCallable StopImportCallable(const StopImportRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::StopImport, request);
        }

        /**
         * An Async wrapper for StopImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopImportRequestT = Model::StopImportRequest>
        void StopImportAsync(const StopImportRequestT& request, const StopImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::StopImport, request, handler, context);
        }

        /**
         * <p>Suspends the recording of Amazon Web Services API calls and log file delivery
         * for the specified trail. Under most circumstances, there is no need to use this
         * action. You can update a trail without stopping it first. This action is the
         * only way to stop recording. For a trail enabled in all Regions, this operation
         * must be called from the Region in which the trail was created, or an
         * <code>InvalidHomeRegionException</code> will occur. This operation cannot be
         * called on the shadow trails (replicated trails in other Regions) of a trail
         * enabled in all Regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StopLogging">AWS
         * API Reference</a></p>
         */
        virtual Model::StopLoggingOutcome StopLogging(const Model::StopLoggingRequest& request) const;

        /**
         * A Callable wrapper for StopLogging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopLoggingRequestT = Model::StopLoggingRequest>
        Model::StopLoggingOutcomeCallable StopLoggingCallable(const StopLoggingRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::StopLogging, request);
        }

        /**
         * An Async wrapper for StopLogging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopLoggingRequestT = Model::StopLoggingRequest>
        void StopLoggingAsync(const StopLoggingRequestT& request, const StopLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::StopLogging, request, handler, context);
        }

        /**
         * <p>Updates a channel specified by a required channel ARN or UUID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const UpdateChannelRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::UpdateChannel, request);
        }

        /**
         * An Async wrapper for UpdateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        void UpdateChannelAsync(const UpdateChannelRequestT& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::UpdateChannel, request, handler, context);
        }

        /**
         * <p>Updates an event data store. The required <code>EventDataStore</code> value
         * is an ARN or the ID portion of the ARN. Other parameters are optional, but at
         * least one optional parameter must be specified, or CloudTrail throws an error.
         * <code>RetentionPeriod</code> is in days, and valid values are integers between 7
         * and 3653 if the <code>BillingMode</code> is set to
         * <code>EXTENDABLE_RETENTION_PRICING</code>, or between 7 and 2557 if
         * <code>BillingMode</code> is set to <code>FIXED_RETENTION_PRICING</code>. By
         * default, <code>TerminationProtection</code> is enabled.</p> <p>For event data
         * stores for CloudTrail events, <code>AdvancedEventSelectors</code> includes or
         * excludes management or data events in your event data store. For more
         * information about <code>AdvancedEventSelectors</code>, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/APIReference/API_AdvancedEventSelector.html">AdvancedEventSelectors</a>.</p>
         * <p> For event data stores for CloudTrail Insights events, Config configuration
         * items, Audit Manager evidence, or non-Amazon Web Services events,
         * <code>AdvancedEventSelectors</code> includes events of that type in your event
         * data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/UpdateEventDataStore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventDataStoreOutcome UpdateEventDataStore(const Model::UpdateEventDataStoreRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventDataStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEventDataStoreRequestT = Model::UpdateEventDataStoreRequest>
        Model::UpdateEventDataStoreOutcomeCallable UpdateEventDataStoreCallable(const UpdateEventDataStoreRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::UpdateEventDataStore, request);
        }

        /**
         * An Async wrapper for UpdateEventDataStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEventDataStoreRequestT = Model::UpdateEventDataStoreRequest>
        void UpdateEventDataStoreAsync(const UpdateEventDataStoreRequestT& request, const UpdateEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::UpdateEventDataStore, request, handler, context);
        }

        /**
         * <p>Updates trail settings that control what events you are logging, and how to
         * handle log files. Changes to a trail do not require stopping the CloudTrail
         * service. Use this action to designate an existing bucket for log delivery. If
         * the existing bucket has previously been a target for CloudTrail log files, an
         * IAM policy exists for the bucket. <code>UpdateTrail</code> must be called from
         * the Region in which the trail was created; otherwise, an
         * <code>InvalidHomeRegionException</code> is thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/UpdateTrail">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrailOutcome UpdateTrail(const Model::UpdateTrailRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTrailRequestT = Model::UpdateTrailRequest>
        Model::UpdateTrailOutcomeCallable UpdateTrailCallable(const UpdateTrailRequestT& request) const
        {
            return SubmitCallable(&CloudTrailClient::UpdateTrail, request);
        }

        /**
         * An Async wrapper for UpdateTrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTrailRequestT = Model::UpdateTrailRequest>
        void UpdateTrailAsync(const UpdateTrailRequestT& request, const UpdateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudTrailClient::UpdateTrail, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudTrailEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudTrailClient>;
      void init(const CloudTrailClientConfiguration& clientConfiguration);

      CloudTrailClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudTrailEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudTrail
} // namespace Aws
