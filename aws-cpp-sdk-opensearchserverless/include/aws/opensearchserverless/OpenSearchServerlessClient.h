/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/OpenSearchServerlessServiceClientModel.h>

namespace Aws
{
namespace OpenSearchServerless
{
  /**
   * <p>Use the Amazon OpenSearch Serverless API to create, configure, and manage
   * OpenSearch Serverless collections and security policies.</p> <p>OpenSearch
   * Serverless is an on-demand, pre-provisioned serverless configuration for Amazon
   * OpenSearch Service. OpenSearch Serverless removes the operational complexities
   * of provisioning, configuring, and tuning your OpenSearch clusters. It enables
   * you to easily search and analyze petabytes of data without having to worry about
   * the underlying infrastructure and data management.</p> <p> To learn more about
   * OpenSearch Serverless, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-overview.html">What
   * is Amazon OpenSearch Serverless?</a> </p>
   */
  class AWS_OPENSEARCHSERVERLESS_API OpenSearchServerlessClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<OpenSearchServerlessClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServerlessClient(const Aws::OpenSearchServerless::OpenSearchServerlessClientConfiguration& clientConfiguration = Aws::OpenSearchServerless::OpenSearchServerlessClientConfiguration(),
                                   std::shared_ptr<OpenSearchServerlessEndpointProviderBase> endpointProvider = Aws::MakeShared<OpenSearchServerlessEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServerlessClient(const Aws::Auth::AWSCredentials& credentials,
                                   std::shared_ptr<OpenSearchServerlessEndpointProviderBase> endpointProvider = Aws::MakeShared<OpenSearchServerlessEndpointProvider>(ALLOCATION_TAG),
                                   const Aws::OpenSearchServerless::OpenSearchServerlessClientConfiguration& clientConfiguration = Aws::OpenSearchServerless::OpenSearchServerlessClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OpenSearchServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<OpenSearchServerlessEndpointProviderBase> endpointProvider = Aws::MakeShared<OpenSearchServerlessEndpointProvider>(ALLOCATION_TAG),
                                   const Aws::OpenSearchServerless::OpenSearchServerlessClientConfiguration& clientConfiguration = Aws::OpenSearchServerless::OpenSearchServerlessClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServerlessClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServerlessClient(const Aws::Auth::AWSCredentials& credentials,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OpenSearchServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~OpenSearchServerlessClient();

        /**
         * <p>Returns attributes for one or more collections, including the collection
         * endpoint and the OpenSearch Dashboards endpoint. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-manage.html">Creating
         * and managing Amazon OpenSearch Serverless collections</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/BatchGetCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetCollectionOutcome BatchGetCollection(const Model::BatchGetCollectionRequest& request) const;

        /**
         * A Callable wrapper for BatchGetCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetCollectionOutcomeCallable BatchGetCollectionCallable(const Model::BatchGetCollectionRequest& request) const;

        /**
         * An Async wrapper for BatchGetCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetCollectionAsync(const Model::BatchGetCollectionRequest& request, const BatchGetCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns attributes for one or more VPC endpoints associated with the current
         * account. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-vpc.html">Access
         * Amazon OpenSearch Serverless using an interface endpoint</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/BatchGetVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetVpcEndpointOutcome BatchGetVpcEndpoint(const Model::BatchGetVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for BatchGetVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetVpcEndpointOutcomeCallable BatchGetVpcEndpointCallable(const Model::BatchGetVpcEndpointRequest& request) const;

        /**
         * An Async wrapper for BatchGetVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetVpcEndpointAsync(const Model::BatchGetVpcEndpointRequest& request, const BatchGetVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a data access policy for OpenSearch Serverless. Access policies limit
         * access to collections and the resources within them, and allow a user to access
         * that data irrespective of the access mechanism or network source. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-data-access.html">Data
         * access control for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CreateAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPolicyOutcome CreateAccessPolicy(const Model::CreateAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessPolicyOutcomeCallable CreateAccessPolicyCallable(const Model::CreateAccessPolicyRequest& request) const;

        /**
         * An Async wrapper for CreateAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessPolicyAsync(const Model::CreateAccessPolicyRequest& request, const CreateAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new OpenSearch Serverless collection. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-manage.html">Creating
         * and managing Amazon OpenSearch Serverless collections</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CreateCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCollectionOutcome CreateCollection(const Model::CreateCollectionRequest& request) const;

        /**
         * A Callable wrapper for CreateCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCollectionOutcomeCallable CreateCollectionCallable(const Model::CreateCollectionRequest& request) const;

        /**
         * An Async wrapper for CreateCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCollectionAsync(const Model::CreateCollectionRequest& request, const CreateCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies a security configuration for OpenSearch Serverless. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-saml.html">SAML
         * authentication for Amazon OpenSearch Serverless</a>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CreateSecurityConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityConfigOutcome CreateSecurityConfig(const Model::CreateSecurityConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateSecurityConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSecurityConfigOutcomeCallable CreateSecurityConfigCallable(const Model::CreateSecurityConfigRequest& request) const;

        /**
         * An Async wrapper for CreateSecurityConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSecurityConfigAsync(const Model::CreateSecurityConfigRequest& request, const CreateSecurityConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a security policy to be used by one or more OpenSearch Serverless
         * collections. Security policies provide access to a collection and its OpenSearch
         * Dashboards endpoint from public networks or specific VPC endpoints. They also
         * allow you to secure a collection with a KMS encryption key. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-network.html">Network
         * access for Amazon OpenSearch Serverless</a> and <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-encryption.html">Encryption
         * at rest for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CreateSecurityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityPolicyOutcome CreateSecurityPolicy(const Model::CreateSecurityPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateSecurityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSecurityPolicyOutcomeCallable CreateSecurityPolicyCallable(const Model::CreateSecurityPolicyRequest& request) const;

        /**
         * An Async wrapper for CreateSecurityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSecurityPolicyAsync(const Model::CreateSecurityPolicyRequest& request, const CreateSecurityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an OpenSearch Serverless-managed interface VPC endpoint. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-vpc.html">Access
         * Amazon OpenSearch Serverless using an interface endpoint</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CreateVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcEndpointOutcome CreateVpcEndpoint(const Model::CreateVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcEndpointOutcomeCallable CreateVpcEndpointCallable(const Model::CreateVpcEndpointRequest& request) const;

        /**
         * An Async wrapper for CreateVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcEndpointAsync(const Model::CreateVpcEndpointRequest& request, const CreateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an OpenSearch Serverless access policy. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-data-access.html">Data
         * access control for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/DeleteAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPolicyOutcome DeleteAccessPolicy(const Model::DeleteAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessPolicyOutcomeCallable DeleteAccessPolicyCallable(const Model::DeleteAccessPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessPolicyAsync(const Model::DeleteAccessPolicyRequest& request, const DeleteAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an OpenSearch Serverless collection. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-manage.html">Creating
         * and managing Amazon OpenSearch Serverless collections</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/DeleteCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCollectionOutcome DeleteCollection(const Model::DeleteCollectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCollectionOutcomeCallable DeleteCollectionCallable(const Model::DeleteCollectionRequest& request) const;

        /**
         * An Async wrapper for DeleteCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCollectionAsync(const Model::DeleteCollectionRequest& request, const DeleteCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a security configuration for OpenSearch Serverless. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-saml.html">SAML
         * authentication for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/DeleteSecurityConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityConfigOutcome DeleteSecurityConfig(const Model::DeleteSecurityConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteSecurityConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSecurityConfigOutcomeCallable DeleteSecurityConfigCallable(const Model::DeleteSecurityConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteSecurityConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSecurityConfigAsync(const Model::DeleteSecurityConfigRequest& request, const DeleteSecurityConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an OpenSearch Serverless security policy.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/DeleteSecurityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityPolicyOutcome DeleteSecurityPolicy(const Model::DeleteSecurityPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteSecurityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSecurityPolicyOutcomeCallable DeleteSecurityPolicyCallable(const Model::DeleteSecurityPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteSecurityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSecurityPolicyAsync(const Model::DeleteSecurityPolicyRequest& request, const DeleteSecurityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an OpenSearch Serverless-managed interface endpoint. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-vpc.html">Access
         * Amazon OpenSearch Serverless using an interface endpoint</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/DeleteVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcEndpointOutcome DeleteVpcEndpoint(const Model::DeleteVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcEndpointOutcomeCallable DeleteVpcEndpointCallable(const Model::DeleteVpcEndpointRequest& request) const;

        /**
         * An Async wrapper for DeleteVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcEndpointAsync(const Model::DeleteVpcEndpointRequest& request, const DeleteVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an OpenSearch Serverless access policy. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-data-access.html">Data
         * access control for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/GetAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPolicyOutcome GetAccessPolicy(const Model::GetAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessPolicyOutcomeCallable GetAccessPolicyCallable(const Model::GetAccessPolicyRequest& request) const;

        /**
         * An Async wrapper for GetAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessPolicyAsync(const Model::GetAccessPolicyRequest& request, const GetAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns account-level settings related to OpenSearch
         * Serverless.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/GetAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const Model::GetAccountSettingsRequest& request) const;

        /**
         * An Async wrapper for GetAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountSettingsAsync(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns statistical information about your OpenSearch Serverless access
         * policies, security configurations, and security policies.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/GetPoliciesStats">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPoliciesStatsOutcome GetPoliciesStats(const Model::GetPoliciesStatsRequest& request) const;

        /**
         * A Callable wrapper for GetPoliciesStats that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPoliciesStatsOutcomeCallable GetPoliciesStatsCallable(const Model::GetPoliciesStatsRequest& request) const;

        /**
         * An Async wrapper for GetPoliciesStats that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPoliciesStatsAsync(const Model::GetPoliciesStatsRequest& request, const GetPoliciesStatsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about an OpenSearch Serverless security configuration.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-saml.html">SAML
         * authentication for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/GetSecurityConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSecurityConfigOutcome GetSecurityConfig(const Model::GetSecurityConfigRequest& request) const;

        /**
         * A Callable wrapper for GetSecurityConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSecurityConfigOutcomeCallable GetSecurityConfigCallable(const Model::GetSecurityConfigRequest& request) const;

        /**
         * An Async wrapper for GetSecurityConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSecurityConfigAsync(const Model::GetSecurityConfigRequest& request, const GetSecurityConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a configured OpenSearch Serverless security policy.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-network.html">Network
         * access for Amazon OpenSearch Serverless</a> and <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-encryption.html">Encryption
         * at rest for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/GetSecurityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSecurityPolicyOutcome GetSecurityPolicy(const Model::GetSecurityPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetSecurityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSecurityPolicyOutcomeCallable GetSecurityPolicyCallable(const Model::GetSecurityPolicyRequest& request) const;

        /**
         * An Async wrapper for GetSecurityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSecurityPolicyAsync(const Model::GetSecurityPolicyRequest& request, const GetSecurityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a list of OpenSearch Serverless access
         * policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/ListAccessPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPoliciesOutcome ListAccessPolicies(const Model::ListAccessPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListAccessPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessPoliciesOutcomeCallable ListAccessPoliciesCallable(const Model::ListAccessPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListAccessPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessPoliciesAsync(const Model::ListAccessPoliciesRequest& request, const ListAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all OpenSearch Serverless collections. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-manage.html">Creating
         * and managing Amazon OpenSearch Serverless collections</a>.</p>  <p>Make
         * sure to include an empty request body {} if you don't include any collection
         * filters in the request.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/ListCollections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCollectionsOutcome ListCollections(const Model::ListCollectionsRequest& request) const;

        /**
         * A Callable wrapper for ListCollections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCollectionsOutcomeCallable ListCollectionsCallable(const Model::ListCollectionsRequest& request) const;

        /**
         * An Async wrapper for ListCollections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCollectionsAsync(const Model::ListCollectionsRequest& request, const ListCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about configured OpenSearch Serverless security
         * configurations. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-saml.html">SAML
         * authentication for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/ListSecurityConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityConfigsOutcome ListSecurityConfigs(const Model::ListSecurityConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecurityConfigsOutcomeCallable ListSecurityConfigsCallable(const Model::ListSecurityConfigsRequest& request) const;

        /**
         * An Async wrapper for ListSecurityConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecurityConfigsAsync(const Model::ListSecurityConfigsRequest& request, const ListSecurityConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about configured OpenSearch Serverless security
         * policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/ListSecurityPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityPoliciesOutcome ListSecurityPolicies(const Model::ListSecurityPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecurityPoliciesOutcomeCallable ListSecurityPoliciesCallable(const Model::ListSecurityPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListSecurityPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecurityPoliciesAsync(const Model::ListSecurityPoliciesRequest& request, const ListSecurityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the tags for an OpenSearch Serverless resource. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/tag-collection.html">Tagging
         * Amazon OpenSearch Serverless collections</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/ListTagsForResource">AWS
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
         * <p>Returns the OpenSearch Serverless-managed interface VPC endpoints associated
         * with the current account. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-vpc.html">Access
         * Amazon OpenSearch Serverless using an interface endpoint</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/ListVpcEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcEndpointsOutcome ListVpcEndpoints(const Model::ListVpcEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListVpcEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVpcEndpointsOutcomeCallable ListVpcEndpointsCallable(const Model::ListVpcEndpointsRequest& request) const;

        /**
         * An Async wrapper for ListVpcEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVpcEndpointsAsync(const Model::ListVpcEndpointsRequest& request, const ListVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates tags with an OpenSearch Serverless resource. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/tag-collection.html">Tagging
         * Amazon OpenSearch Serverless collections</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/TagResource">AWS
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
         * <p>Removes a tag or set of tags from an OpenSearch Serverless resource. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/tag-collection.html">Tagging
         * Amazon OpenSearch Serverless collections</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UntagResource">AWS
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
         * <p>Updates an OpenSearch Serverless access policy. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-data-access.html">Data
         * access control for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UpdateAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccessPolicyOutcome UpdateAccessPolicy(const Model::UpdateAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccessPolicyOutcomeCallable UpdateAccessPolicyCallable(const Model::UpdateAccessPolicyRequest& request) const;

        /**
         * An Async wrapper for UpdateAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccessPolicyAsync(const Model::UpdateAccessPolicyRequest& request, const UpdateAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the OpenSearch Serverless settings for the current Amazon Web Services
         * account. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-overview.html#serverless-scaling">Autoscaling</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UpdateAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountSettingsOutcome UpdateAccountSettings(const Model::UpdateAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccountSettingsOutcomeCallable UpdateAccountSettingsCallable(const Model::UpdateAccountSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountSettingsAsync(const Model::UpdateAccountSettingsRequest& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an OpenSearch Serverless collection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UpdateCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCollectionOutcome UpdateCollection(const Model::UpdateCollectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCollectionOutcomeCallable UpdateCollectionCallable(const Model::UpdateCollectionRequest& request) const;

        /**
         * An Async wrapper for UpdateCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCollectionAsync(const Model::UpdateCollectionRequest& request, const UpdateCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a security configuration for OpenSearch Serverless. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-saml.html">SAML
         * authentication for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UpdateSecurityConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityConfigOutcome UpdateSecurityConfig(const Model::UpdateSecurityConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateSecurityConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSecurityConfigOutcomeCallable UpdateSecurityConfigCallable(const Model::UpdateSecurityConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateSecurityConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSecurityConfigAsync(const Model::UpdateSecurityConfigRequest& request, const UpdateSecurityConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an OpenSearch Serverless security policy. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-network.html">Network
         * access for Amazon OpenSearch Serverless</a> and <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-encryption.html">Encryption
         * at rest for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UpdateSecurityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityPolicyOutcome UpdateSecurityPolicy(const Model::UpdateSecurityPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateSecurityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSecurityPolicyOutcomeCallable UpdateSecurityPolicyCallable(const Model::UpdateSecurityPolicyRequest& request) const;

        /**
         * An Async wrapper for UpdateSecurityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSecurityPolicyAsync(const Model::UpdateSecurityPolicyRequest& request, const UpdateSecurityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an OpenSearch Serverless-managed interface endpoint. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-vpc.html">Access
         * Amazon OpenSearch Serverless using an interface endpoint</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UpdateVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVpcEndpointOutcome UpdateVpcEndpoint(const Model::UpdateVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVpcEndpointOutcomeCallable UpdateVpcEndpointCallable(const Model::UpdateVpcEndpointRequest& request) const;

        /**
         * An Async wrapper for UpdateVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVpcEndpointAsync(const Model::UpdateVpcEndpointRequest& request, const UpdateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OpenSearchServerlessEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<OpenSearchServerlessClient>;
      void init(const OpenSearchServerlessClientConfiguration& clientConfiguration);

      OpenSearchServerlessClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OpenSearchServerlessEndpointProviderBase> m_endpointProvider;
  };

} // namespace OpenSearchServerless
} // namespace Aws
