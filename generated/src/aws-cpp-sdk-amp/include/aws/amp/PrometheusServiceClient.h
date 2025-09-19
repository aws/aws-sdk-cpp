/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/amp/PrometheusServiceServiceClientModel.h>

namespace Aws
{
namespace PrometheusService
{
  /**
   * <p>Amazon Managed Service for Prometheus is a serverless, Prometheus-compatible
   * monitoring service for container metrics that makes it easier to securely
   * monitor container environments at scale. With Amazon Managed Service for
   * Prometheus, you can use the same open-source Prometheus data model and query
   * language that you use today to monitor the performance of your containerized
   * workloads, and also enjoy improved scalability, availability, and security
   * without having to manage the underlying infrastructure.</p> <p>For more
   * information about Amazon Managed Service for Prometheus, see the <a
   * href="https://docs.aws.amazon.com/prometheus/latest/userguide/what-is-Amazon-Managed-Service-Prometheus.html">Amazon
   * Managed Service for Prometheus</a> User Guide.</p> <p>Amazon Managed Service for
   * Prometheus includes two APIs.</p> <ul> <li> <p>Use the Amazon Web Services API
   * described in this guide to manage Amazon Managed Service for Prometheus
   * resources, such as workspaces, rule groups, and alert managers.</p> </li> <li>
   * <p>Use the <a
   * href="https://docs.aws.amazon.com/prometheus/latest/userguide/AMP-APIReference.html#AMP-APIReference-Prometheus-Compatible-Apis">Prometheus-compatible
   * API</a> to work within your Prometheus workspace.</p> </li> </ul>
   */
  class AWS_PROMETHEUSSERVICE_API PrometheusServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PrometheusServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PrometheusServiceClientConfiguration ClientConfigurationType;
      typedef PrometheusServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrometheusServiceClient(const Aws::PrometheusService::PrometheusServiceClientConfiguration& clientConfiguration = Aws::PrometheusService::PrometheusServiceClientConfiguration(),
                                std::shared_ptr<PrometheusServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrometheusServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<PrometheusServiceEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::PrometheusService::PrometheusServiceClientConfiguration& clientConfiguration = Aws::PrometheusService::PrometheusServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PrometheusServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<PrometheusServiceEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::PrometheusService::PrometheusServiceClientConfiguration& clientConfiguration = Aws::PrometheusService::PrometheusServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrometheusServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrometheusServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PrometheusServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PrometheusServiceClient();

        /**
         * <p>The <code>CreateAlertManagerDefinition</code> operation creates the alert
         * manager definition in a workspace. If a workspace already has an alert manager
         * definition, don't use this operation to update it. Instead, use
         * <code>PutAlertManagerDefinition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateAlertManagerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAlertManagerDefinitionOutcome CreateAlertManagerDefinition(const Model::CreateAlertManagerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateAlertManagerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAlertManagerDefinitionRequestT = Model::CreateAlertManagerDefinitionRequest>
        Model::CreateAlertManagerDefinitionOutcomeCallable CreateAlertManagerDefinitionCallable(const CreateAlertManagerDefinitionRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::CreateAlertManagerDefinition, request);
        }

        /**
         * An Async wrapper for CreateAlertManagerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAlertManagerDefinitionRequestT = Model::CreateAlertManagerDefinitionRequest>
        void CreateAlertManagerDefinitionAsync(const CreateAlertManagerDefinitionRequestT& request, const CreateAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::CreateAlertManagerDefinition, request, handler, context);
        }

        /**
         * <p>The <code>CreateLoggingConfiguration</code> operation creates rules and
         * alerting logging configuration for the workspace. Use this operation to set the
         * CloudWatch log group to which the logs will be published to.</p>  <p>These
         * logging configurations are only for rules and alerting logs.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoggingConfigurationOutcome CreateLoggingConfiguration(const Model::CreateLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLoggingConfigurationRequestT = Model::CreateLoggingConfigurationRequest>
        Model::CreateLoggingConfigurationOutcomeCallable CreateLoggingConfigurationCallable(const CreateLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::CreateLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for CreateLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLoggingConfigurationRequestT = Model::CreateLoggingConfigurationRequest>
        void CreateLoggingConfigurationAsync(const CreateLoggingConfigurationRequestT& request, const CreateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::CreateLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a query logging configuration for the specified workspace. This
         * operation enables logging of queries that exceed the specified QSP
         * threshold.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateQueryLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQueryLoggingConfigurationOutcome CreateQueryLoggingConfiguration(const Model::CreateQueryLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateQueryLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateQueryLoggingConfigurationRequestT = Model::CreateQueryLoggingConfigurationRequest>
        Model::CreateQueryLoggingConfigurationOutcomeCallable CreateQueryLoggingConfigurationCallable(const CreateQueryLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::CreateQueryLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for CreateQueryLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateQueryLoggingConfigurationRequestT = Model::CreateQueryLoggingConfigurationRequest>
        void CreateQueryLoggingConfigurationAsync(const CreateQueryLoggingConfigurationRequestT& request, const CreateQueryLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::CreateQueryLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>The <code>CreateRuleGroupsNamespace</code> operation creates a rule groups
         * namespace within a workspace. A rule groups namespace is associated with exactly
         * one rules file. A workspace can have multiple rule groups namespaces.</p> <p>Use
         * this operation only to create new rule groups namespaces. To update an existing
         * rule groups namespace, use <code>PutRuleGroupsNamespace</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleGroupsNamespaceOutcome CreateRuleGroupsNamespace(const Model::CreateRuleGroupsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for CreateRuleGroupsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRuleGroupsNamespaceRequestT = Model::CreateRuleGroupsNamespaceRequest>
        Model::CreateRuleGroupsNamespaceOutcomeCallable CreateRuleGroupsNamespaceCallable(const CreateRuleGroupsNamespaceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::CreateRuleGroupsNamespace, request);
        }

        /**
         * An Async wrapper for CreateRuleGroupsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRuleGroupsNamespaceRequestT = Model::CreateRuleGroupsNamespaceRequest>
        void CreateRuleGroupsNamespaceAsync(const CreateRuleGroupsNamespaceRequestT& request, const CreateRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::CreateRuleGroupsNamespace, request, handler, context);
        }

        /**
         * <p>The <code>CreateScraper</code> operation creates a scraper to collect
         * metrics. A scraper pulls metrics from Prometheus-compatible sources within an
         * Amazon EKS cluster, and sends them to your Amazon Managed Service for Prometheus
         * workspace. Scrapers are flexible, and can be configured to control what metrics
         * are collected, the frequency of collection, what transformations are applied to
         * the metrics, and more.</p> <p>An IAM role will be created for you that Amazon
         * Managed Service for Prometheus uses to access the metrics in your cluster. You
         * must configure this role with a policy that allows it to scrape metrics from
         * your cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/prometheus/latest/userguide/AMP-collector-how-to.html#AMP-collector-eks-setup">Configuring
         * your Amazon EKS cluster</a> in the <i>Amazon Managed Service for Prometheus User
         * Guide</i>.</p> <p>The <code>scrapeConfiguration</code> parameter contains the
         * base-64 encoded YAML configuration for the scraper.</p> <p>When creating a
         * scraper, the service creates a <code>Network Interface</code> in each
         * <b>Availability Zone</b> that are passed into <code>CreateScraper</code> through
         * subnets. These network interfaces are used to connect to the Amazon EKS cluster
         * within the VPC for scraping metrics.</p>  <p>For more information about
         * collectors, including what metrics are collected, and how to configure the
         * scraper, see <a
         * href="https://docs.aws.amazon.com/prometheus/latest/userguide/AMP-collector-how-to.html">Using
         * an Amazon Web Services managed collector</a> in the <i>Amazon Managed Service
         * for Prometheus User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateScraper">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScraperOutcome CreateScraper(const Model::CreateScraperRequest& request) const;

        /**
         * A Callable wrapper for CreateScraper that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateScraperRequestT = Model::CreateScraperRequest>
        Model::CreateScraperOutcomeCallable CreateScraperCallable(const CreateScraperRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::CreateScraper, request);
        }

        /**
         * An Async wrapper for CreateScraper that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateScraperRequestT = Model::CreateScraperRequest>
        void CreateScraperAsync(const CreateScraperRequestT& request, const CreateScraperResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::CreateScraper, request, handler, context);
        }

        /**
         * <p>Creates a Prometheus workspace. A workspace is a logical space dedicated to
         * the storage and querying of Prometheus metrics. You can have one or more
         * workspaces in each Region in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspaceOutcome CreateWorkspace(const Model::CreateWorkspaceRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkspaceRequestT = Model::CreateWorkspaceRequest>
        Model::CreateWorkspaceOutcomeCallable CreateWorkspaceCallable(const CreateWorkspaceRequestT& request = {}) const
        {
            return SubmitCallable(&PrometheusServiceClient::CreateWorkspace, request);
        }

        /**
         * An Async wrapper for CreateWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkspaceRequestT = Model::CreateWorkspaceRequest>
        void CreateWorkspaceAsync(const CreateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateWorkspaceRequestT& request = {}) const
        {
            return SubmitAsync(&PrometheusServiceClient::CreateWorkspace, request, handler, context);
        }

        /**
         * <p>Deletes the alert manager definition from a workspace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteAlertManagerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlertManagerDefinitionOutcome DeleteAlertManagerDefinition(const Model::DeleteAlertManagerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlertManagerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAlertManagerDefinitionRequestT = Model::DeleteAlertManagerDefinitionRequest>
        Model::DeleteAlertManagerDefinitionOutcomeCallable DeleteAlertManagerDefinitionCallable(const DeleteAlertManagerDefinitionRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DeleteAlertManagerDefinition, request);
        }

        /**
         * An Async wrapper for DeleteAlertManagerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAlertManagerDefinitionRequestT = Model::DeleteAlertManagerDefinitionRequest>
        void DeleteAlertManagerDefinitionAsync(const DeleteAlertManagerDefinitionRequestT& request, const DeleteAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DeleteAlertManagerDefinition, request, handler, context);
        }

        /**
         * <p>Deletes the rules and alerting logging configuration for a workspace.</p>
         *  <p>These logging configurations are only for rules and alerting logs.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoggingConfigurationOutcome DeleteLoggingConfiguration(const Model::DeleteLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLoggingConfigurationRequestT = Model::DeleteLoggingConfigurationRequest>
        Model::DeleteLoggingConfigurationOutcomeCallable DeleteLoggingConfigurationCallable(const DeleteLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DeleteLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLoggingConfigurationRequestT = Model::DeleteLoggingConfigurationRequest>
        void DeleteLoggingConfigurationAsync(const DeleteLoggingConfigurationRequestT& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DeleteLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the query logging configuration for the specified
         * workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteQueryLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueryLoggingConfigurationOutcome DeleteQueryLoggingConfiguration(const Model::DeleteQueryLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueryLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteQueryLoggingConfigurationRequestT = Model::DeleteQueryLoggingConfigurationRequest>
        Model::DeleteQueryLoggingConfigurationOutcomeCallable DeleteQueryLoggingConfigurationCallable(const DeleteQueryLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DeleteQueryLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteQueryLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQueryLoggingConfigurationRequestT = Model::DeleteQueryLoggingConfigurationRequest>
        void DeleteQueryLoggingConfigurationAsync(const DeleteQueryLoggingConfigurationRequestT& request, const DeleteQueryLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DeleteQueryLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the resource-based policy attached to an Amazon Managed Service for
         * Prometheus workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Deletes one rule groups namespace and its associated rule groups
         * definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleGroupsNamespaceOutcome DeleteRuleGroupsNamespace(const Model::DeleteRuleGroupsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteRuleGroupsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRuleGroupsNamespaceRequestT = Model::DeleteRuleGroupsNamespaceRequest>
        Model::DeleteRuleGroupsNamespaceOutcomeCallable DeleteRuleGroupsNamespaceCallable(const DeleteRuleGroupsNamespaceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DeleteRuleGroupsNamespace, request);
        }

        /**
         * An Async wrapper for DeleteRuleGroupsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRuleGroupsNamespaceRequestT = Model::DeleteRuleGroupsNamespaceRequest>
        void DeleteRuleGroupsNamespaceAsync(const DeleteRuleGroupsNamespaceRequestT& request, const DeleteRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DeleteRuleGroupsNamespace, request, handler, context);
        }

        /**
         * <p>The <code>DeleteScraper</code> operation deletes one scraper, and stops any
         * metrics collection that the scraper performs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteScraper">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScraperOutcome DeleteScraper(const Model::DeleteScraperRequest& request) const;

        /**
         * A Callable wrapper for DeleteScraper that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteScraperRequestT = Model::DeleteScraperRequest>
        Model::DeleteScraperOutcomeCallable DeleteScraperCallable(const DeleteScraperRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DeleteScraper, request);
        }

        /**
         * An Async wrapper for DeleteScraper that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteScraperRequestT = Model::DeleteScraperRequest>
        void DeleteScraperAsync(const DeleteScraperRequestT& request, const DeleteScraperResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DeleteScraper, request, handler, context);
        }

        /**
         * <p>Deletes the logging configuration for a Amazon Managed Service for Prometheus
         * scraper.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteScraperLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScraperLoggingConfigurationOutcome DeleteScraperLoggingConfiguration(const Model::DeleteScraperLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteScraperLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteScraperLoggingConfigurationRequestT = Model::DeleteScraperLoggingConfigurationRequest>
        Model::DeleteScraperLoggingConfigurationOutcomeCallable DeleteScraperLoggingConfigurationCallable(const DeleteScraperLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DeleteScraperLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteScraperLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteScraperLoggingConfigurationRequestT = Model::DeleteScraperLoggingConfigurationRequest>
        void DeleteScraperLoggingConfigurationAsync(const DeleteScraperLoggingConfigurationRequestT& request, const DeleteScraperLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DeleteScraperLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes an existing workspace. </p>  <p>When you delete a workspace,
         * the data that has been ingested into it is not immediately deleted. It will be
         * permanently deleted within one month.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceOutcome DeleteWorkspace(const Model::DeleteWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkspaceRequestT = Model::DeleteWorkspaceRequest>
        Model::DeleteWorkspaceOutcomeCallable DeleteWorkspaceCallable(const DeleteWorkspaceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DeleteWorkspace, request);
        }

        /**
         * An Async wrapper for DeleteWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkspaceRequestT = Model::DeleteWorkspaceRequest>
        void DeleteWorkspaceAsync(const DeleteWorkspaceRequestT& request, const DeleteWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DeleteWorkspace, request, handler, context);
        }

        /**
         * <p>Retrieves the full information about the alert manager definition for a
         * workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeAlertManagerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlertManagerDefinitionOutcome DescribeAlertManagerDefinition(const Model::DescribeAlertManagerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeAlertManagerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAlertManagerDefinitionRequestT = Model::DescribeAlertManagerDefinitionRequest>
        Model::DescribeAlertManagerDefinitionOutcomeCallable DescribeAlertManagerDefinitionCallable(const DescribeAlertManagerDefinitionRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DescribeAlertManagerDefinition, request);
        }

        /**
         * An Async wrapper for DescribeAlertManagerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAlertManagerDefinitionRequestT = Model::DescribeAlertManagerDefinitionRequest>
        void DescribeAlertManagerDefinitionAsync(const DescribeAlertManagerDefinitionRequestT& request, const DescribeAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DescribeAlertManagerDefinition, request, handler, context);
        }

        /**
         * <p>Returns complete information about the current rules and alerting logging
         * configuration of the workspace.</p>  <p>These logging configurations are
         * only for rules and alerting logs.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoggingConfigurationOutcome DescribeLoggingConfiguration(const Model::DescribeLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLoggingConfigurationRequestT = Model::DescribeLoggingConfigurationRequest>
        Model::DescribeLoggingConfigurationOutcomeCallable DescribeLoggingConfigurationCallable(const DescribeLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DescribeLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLoggingConfigurationRequestT = Model::DescribeLoggingConfigurationRequest>
        void DescribeLoggingConfigurationAsync(const DescribeLoggingConfigurationRequestT& request, const DescribeLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DescribeLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves the details of the query logging configuration for the specified
         * workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeQueryLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQueryLoggingConfigurationOutcome DescribeQueryLoggingConfiguration(const Model::DescribeQueryLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeQueryLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeQueryLoggingConfigurationRequestT = Model::DescribeQueryLoggingConfigurationRequest>
        Model::DescribeQueryLoggingConfigurationOutcomeCallable DescribeQueryLoggingConfigurationCallable(const DescribeQueryLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DescribeQueryLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeQueryLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeQueryLoggingConfigurationRequestT = Model::DescribeQueryLoggingConfigurationRequest>
        void DescribeQueryLoggingConfigurationAsync(const DescribeQueryLoggingConfigurationRequestT& request, const DescribeQueryLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DescribeQueryLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Returns information about the resource-based policy attached to an Amazon
         * Managed Service for Prometheus workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourcePolicyOutcome DescribeResourcePolicy(const Model::DescribeResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DescribeResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeResourcePolicyRequestT = Model::DescribeResourcePolicyRequest>
        Model::DescribeResourcePolicyOutcomeCallable DescribeResourcePolicyCallable(const DescribeResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DescribeResourcePolicy, request);
        }

        /**
         * An Async wrapper for DescribeResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeResourcePolicyRequestT = Model::DescribeResourcePolicyRequest>
        void DescribeResourcePolicyAsync(const DescribeResourcePolicyRequestT& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DescribeResourcePolicy, request, handler, context);
        }

        /**
         * <p>Returns complete information about one rule groups namespace. To retrieve a
         * list of rule groups namespaces, use
         * <code>ListRuleGroupsNamespaces</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuleGroupsNamespaceOutcome DescribeRuleGroupsNamespace(const Model::DescribeRuleGroupsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for DescribeRuleGroupsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRuleGroupsNamespaceRequestT = Model::DescribeRuleGroupsNamespaceRequest>
        Model::DescribeRuleGroupsNamespaceOutcomeCallable DescribeRuleGroupsNamespaceCallable(const DescribeRuleGroupsNamespaceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DescribeRuleGroupsNamespace, request);
        }

        /**
         * An Async wrapper for DescribeRuleGroupsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRuleGroupsNamespaceRequestT = Model::DescribeRuleGroupsNamespaceRequest>
        void DescribeRuleGroupsNamespaceAsync(const DescribeRuleGroupsNamespaceRequestT& request, const DescribeRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DescribeRuleGroupsNamespace, request, handler, context);
        }

        /**
         * <p>The <code>DescribeScraper</code> operation displays information about an
         * existing scraper.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeScraper">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScraperOutcome DescribeScraper(const Model::DescribeScraperRequest& request) const;

        /**
         * A Callable wrapper for DescribeScraper that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeScraperRequestT = Model::DescribeScraperRequest>
        Model::DescribeScraperOutcomeCallable DescribeScraperCallable(const DescribeScraperRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DescribeScraper, request);
        }

        /**
         * An Async wrapper for DescribeScraper that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeScraperRequestT = Model::DescribeScraperRequest>
        void DescribeScraperAsync(const DescribeScraperRequestT& request, const DescribeScraperResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DescribeScraper, request, handler, context);
        }

        /**
         * <p>Describes the logging configuration for a Amazon Managed Service for
         * Prometheus scraper.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeScraperLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScraperLoggingConfigurationOutcome DescribeScraperLoggingConfiguration(const Model::DescribeScraperLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeScraperLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeScraperLoggingConfigurationRequestT = Model::DescribeScraperLoggingConfigurationRequest>
        Model::DescribeScraperLoggingConfigurationOutcomeCallable DescribeScraperLoggingConfigurationCallable(const DescribeScraperLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DescribeScraperLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeScraperLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeScraperLoggingConfigurationRequestT = Model::DescribeScraperLoggingConfigurationRequest>
        void DescribeScraperLoggingConfigurationAsync(const DescribeScraperLoggingConfigurationRequestT& request, const DescribeScraperLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DescribeScraperLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Returns information about an existing workspace. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceOutcome DescribeWorkspace(const Model::DescribeWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkspaceRequestT = Model::DescribeWorkspaceRequest>
        Model::DescribeWorkspaceOutcomeCallable DescribeWorkspaceCallable(const DescribeWorkspaceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DescribeWorkspace, request);
        }

        /**
         * An Async wrapper for DescribeWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkspaceRequestT = Model::DescribeWorkspaceRequest>
        void DescribeWorkspaceAsync(const DescribeWorkspaceRequestT& request, const DescribeWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DescribeWorkspace, request, handler, context);
        }

        /**
         * <p>Use this operation to return information about the configuration of a
         * workspace. The configuration details returned include workspace configuration
         * status, label set limits, and retention period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeWorkspaceConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceConfigurationOutcome DescribeWorkspaceConfiguration(const Model::DescribeWorkspaceConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkspaceConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkspaceConfigurationRequestT = Model::DescribeWorkspaceConfigurationRequest>
        Model::DescribeWorkspaceConfigurationOutcomeCallable DescribeWorkspaceConfigurationCallable(const DescribeWorkspaceConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DescribeWorkspaceConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeWorkspaceConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkspaceConfigurationRequestT = Model::DescribeWorkspaceConfigurationRequest>
        void DescribeWorkspaceConfigurationAsync(const DescribeWorkspaceConfigurationRequestT& request, const DescribeWorkspaceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DescribeWorkspaceConfiguration, request, handler, context);
        }

        /**
         * <p>The <code>GetDefaultScraperConfiguration</code> operation returns the default
         * scraper configuration used when Amazon EKS creates a scraper for
         * you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/GetDefaultScraperConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDefaultScraperConfigurationOutcome GetDefaultScraperConfiguration(const Model::GetDefaultScraperConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for GetDefaultScraperConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDefaultScraperConfigurationRequestT = Model::GetDefaultScraperConfigurationRequest>
        Model::GetDefaultScraperConfigurationOutcomeCallable GetDefaultScraperConfigurationCallable(const GetDefaultScraperConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&PrometheusServiceClient::GetDefaultScraperConfiguration, request);
        }

        /**
         * An Async wrapper for GetDefaultScraperConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDefaultScraperConfigurationRequestT = Model::GetDefaultScraperConfigurationRequest>
        void GetDefaultScraperConfigurationAsync(const GetDefaultScraperConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetDefaultScraperConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&PrometheusServiceClient::GetDefaultScraperConfiguration, request, handler, context);
        }

        /**
         * <p>Returns a list of rule groups namespaces in a workspace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListRuleGroupsNamespaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRuleGroupsNamespacesOutcome ListRuleGroupsNamespaces(const Model::ListRuleGroupsNamespacesRequest& request) const;

        /**
         * A Callable wrapper for ListRuleGroupsNamespaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRuleGroupsNamespacesRequestT = Model::ListRuleGroupsNamespacesRequest>
        Model::ListRuleGroupsNamespacesOutcomeCallable ListRuleGroupsNamespacesCallable(const ListRuleGroupsNamespacesRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::ListRuleGroupsNamespaces, request);
        }

        /**
         * An Async wrapper for ListRuleGroupsNamespaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRuleGroupsNamespacesRequestT = Model::ListRuleGroupsNamespacesRequest>
        void ListRuleGroupsNamespacesAsync(const ListRuleGroupsNamespacesRequestT& request, const ListRuleGroupsNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::ListRuleGroupsNamespaces, request, handler, context);
        }

        /**
         * <p>The <code>ListScrapers</code> operation lists all of the scrapers in your
         * account. This includes scrapers being created or deleted. You can optionally
         * filter the returned list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListScrapers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScrapersOutcome ListScrapers(const Model::ListScrapersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListScrapers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListScrapersRequestT = Model::ListScrapersRequest>
        Model::ListScrapersOutcomeCallable ListScrapersCallable(const ListScrapersRequestT& request = {}) const
        {
            return SubmitCallable(&PrometheusServiceClient::ListScrapers, request);
        }

        /**
         * An Async wrapper for ListScrapers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListScrapersRequestT = Model::ListScrapersRequest>
        void ListScrapersAsync(const ListScrapersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListScrapersRequestT& request = {}) const
        {
            return SubmitAsync(&PrometheusServiceClient::ListScrapers, request, handler, context);
        }

        /**
         * <p>The <code>ListTagsForResource</code> operation returns the tags that are
         * associated with an Amazon Managed Service for Prometheus resource. Currently,
         * the only resources that can be tagged are scrapers, workspaces, and rule groups
         * namespaces. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists all of the Amazon Managed Service for Prometheus workspaces in your
         * account. This includes workspaces being created or deleted. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkspacesOutcome ListWorkspaces(const Model::ListWorkspacesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListWorkspaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkspacesRequestT = Model::ListWorkspacesRequest>
        Model::ListWorkspacesOutcomeCallable ListWorkspacesCallable(const ListWorkspacesRequestT& request = {}) const
        {
            return SubmitCallable(&PrometheusServiceClient::ListWorkspaces, request);
        }

        /**
         * An Async wrapper for ListWorkspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkspacesRequestT = Model::ListWorkspacesRequest>
        void ListWorkspacesAsync(const ListWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListWorkspacesRequestT& request = {}) const
        {
            return SubmitAsync(&PrometheusServiceClient::ListWorkspaces, request, handler, context);
        }

        /**
         * <p>Updates an existing alert manager definition in a workspace. If the workspace
         * does not already have an alert manager definition, don't use this operation to
         * create it. Instead, use <code>CreateAlertManagerDefinition</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/PutAlertManagerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAlertManagerDefinitionOutcome PutAlertManagerDefinition(const Model::PutAlertManagerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for PutAlertManagerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAlertManagerDefinitionRequestT = Model::PutAlertManagerDefinitionRequest>
        Model::PutAlertManagerDefinitionOutcomeCallable PutAlertManagerDefinitionCallable(const PutAlertManagerDefinitionRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::PutAlertManagerDefinition, request);
        }

        /**
         * An Async wrapper for PutAlertManagerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAlertManagerDefinitionRequestT = Model::PutAlertManagerDefinitionRequest>
        void PutAlertManagerDefinitionAsync(const PutAlertManagerDefinitionRequestT& request, const PutAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::PutAlertManagerDefinition, request, handler, context);
        }

        /**
         * <p>Creates or updates a resource-based policy for an Amazon Managed Service for
         * Prometheus workspace. Use resource-based policies to grant permissions to other
         * AWS accounts or services to access your workspace.</p> <p>Only
         * Prometheus-compatible APIs can be used for workspace sharing. You can add
         * non-Prometheus-compatible APIs to the policy, but they will be ignored. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/prometheus/latest/userguide/AMP-APIReference-Prometheus-Compatible-Apis.html">Prometheus-compatible
         * APIs</a> in the <i>Amazon Managed Service for Prometheus User Guide</i>.</p>
         * <p>If your workspace uses customer-managed KMS keys for encryption, you must
         * grant the principals in your resource-based policy access to those KMS keys. You
         * can do this by creating KMS grants. For more information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateGrant.html">CreateGrant</a>
         * in the <i>AWS Key Management Service API Reference</i> and <a
         * href="https://docs.aws.amazon.com/prometheus/latest/userguide/encryption-at-rest-Amazon-Service-Prometheus.html">Encryption
         * at rest</a> in the <i>Amazon Managed Service for Prometheus User Guide</i>.</p>
         * <p>For more information about working with IAM, see <a
         * href="https://docs.aws.amazon.com/prometheus/latest/userguide/security_iam_service-with-iam.html">Using
         * Amazon Managed Service for Prometheus with IAM</a> in the <i>Amazon Managed
         * Service for Prometheus User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Updates an existing rule groups namespace within a workspace. A rule groups
         * namespace is associated with exactly one rules file. A workspace can have
         * multiple rule groups namespaces.</p> <p>Use this operation only to update
         * existing rule groups namespaces. To create a new rule groups namespace, use
         * <code>CreateRuleGroupsNamespace</code>.</p> <p>You can't use this operation to
         * add tags to an existing rule groups namespace. Instead, use
         * <code>TagResource</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/PutRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRuleGroupsNamespaceOutcome PutRuleGroupsNamespace(const Model::PutRuleGroupsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for PutRuleGroupsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRuleGroupsNamespaceRequestT = Model::PutRuleGroupsNamespaceRequest>
        Model::PutRuleGroupsNamespaceOutcomeCallable PutRuleGroupsNamespaceCallable(const PutRuleGroupsNamespaceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::PutRuleGroupsNamespace, request);
        }

        /**
         * An Async wrapper for PutRuleGroupsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRuleGroupsNamespaceRequestT = Model::PutRuleGroupsNamespaceRequest>
        void PutRuleGroupsNamespaceAsync(const PutRuleGroupsNamespaceRequestT& request, const PutRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::PutRuleGroupsNamespace, request, handler, context);
        }

        /**
         * <p>The <code>TagResource</code> operation associates tags with an Amazon Managed
         * Service for Prometheus resource. The only resources that can be tagged are rule
         * groups namespaces, scrapers, and workspaces.</p> <p>If you specify a new tag key
         * for the resource, this tag is appended to the list of tags associated with the
         * resource. If you specify a tag key that is already associated with the resource,
         * the new tag value that you specify replaces the previous value for that tag. To
         * remove a tag, use <code>UntagResource</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from an Amazon Managed Service for Prometheus
         * resource. The only resources that can be tagged are rule groups namespaces,
         * scrapers, and workspaces. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the log group ARN or the workspace ID of the current rules and
         * alerting logging configuration.</p>  <p>These logging configurations are
         * only for rules and alerting logs.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UpdateLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLoggingConfigurationOutcome UpdateLoggingConfiguration(const Model::UpdateLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLoggingConfigurationRequestT = Model::UpdateLoggingConfigurationRequest>
        Model::UpdateLoggingConfigurationOutcomeCallable UpdateLoggingConfigurationCallable(const UpdateLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::UpdateLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLoggingConfigurationRequestT = Model::UpdateLoggingConfigurationRequest>
        void UpdateLoggingConfigurationAsync(const UpdateLoggingConfigurationRequestT& request, const UpdateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::UpdateLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the query logging configuration for the specified
         * workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UpdateQueryLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueryLoggingConfigurationOutcome UpdateQueryLoggingConfiguration(const Model::UpdateQueryLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueryLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQueryLoggingConfigurationRequestT = Model::UpdateQueryLoggingConfigurationRequest>
        Model::UpdateQueryLoggingConfigurationOutcomeCallable UpdateQueryLoggingConfigurationCallable(const UpdateQueryLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::UpdateQueryLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateQueryLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQueryLoggingConfigurationRequestT = Model::UpdateQueryLoggingConfigurationRequest>
        void UpdateQueryLoggingConfigurationAsync(const UpdateQueryLoggingConfigurationRequestT& request, const UpdateQueryLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::UpdateQueryLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Updates an existing scraper.</p> <p>You can't use this function to update the
         * source from which the scraper is collecting metrics. To change the source,
         * delete the scraper and create a new one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UpdateScraper">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScraperOutcome UpdateScraper(const Model::UpdateScraperRequest& request) const;

        /**
         * A Callable wrapper for UpdateScraper that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateScraperRequestT = Model::UpdateScraperRequest>
        Model::UpdateScraperOutcomeCallable UpdateScraperCallable(const UpdateScraperRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::UpdateScraper, request);
        }

        /**
         * An Async wrapper for UpdateScraper that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateScraperRequestT = Model::UpdateScraperRequest>
        void UpdateScraperAsync(const UpdateScraperRequestT& request, const UpdateScraperResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::UpdateScraper, request, handler, context);
        }

        /**
         * <p>Updates the logging configuration for a Amazon Managed Service for Prometheus
         * scraper.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UpdateScraperLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScraperLoggingConfigurationOutcome UpdateScraperLoggingConfiguration(const Model::UpdateScraperLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateScraperLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateScraperLoggingConfigurationRequestT = Model::UpdateScraperLoggingConfigurationRequest>
        Model::UpdateScraperLoggingConfigurationOutcomeCallable UpdateScraperLoggingConfigurationCallable(const UpdateScraperLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::UpdateScraperLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateScraperLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateScraperLoggingConfigurationRequestT = Model::UpdateScraperLoggingConfigurationRequest>
        void UpdateScraperLoggingConfigurationAsync(const UpdateScraperLoggingConfigurationRequestT& request, const UpdateScraperLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::UpdateScraperLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the alias of an existing workspace. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UpdateWorkspaceAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceAliasOutcome UpdateWorkspaceAlias(const Model::UpdateWorkspaceAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkspaceAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkspaceAliasRequestT = Model::UpdateWorkspaceAliasRequest>
        Model::UpdateWorkspaceAliasOutcomeCallable UpdateWorkspaceAliasCallable(const UpdateWorkspaceAliasRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::UpdateWorkspaceAlias, request);
        }

        /**
         * An Async wrapper for UpdateWorkspaceAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkspaceAliasRequestT = Model::UpdateWorkspaceAliasRequest>
        void UpdateWorkspaceAliasAsync(const UpdateWorkspaceAliasRequestT& request, const UpdateWorkspaceAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::UpdateWorkspaceAlias, request, handler, context);
        }

        /**
         * <p>Use this operation to create or update the label sets, label set limits, and
         * retention period of a workspace.</p> <p>You must specify at least one of
         * <code>limitsPerLabelSet</code> or <code>retentionPeriodInDays</code> for the
         * request to be valid.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UpdateWorkspaceConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceConfigurationOutcome UpdateWorkspaceConfiguration(const Model::UpdateWorkspaceConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkspaceConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkspaceConfigurationRequestT = Model::UpdateWorkspaceConfigurationRequest>
        Model::UpdateWorkspaceConfigurationOutcomeCallable UpdateWorkspaceConfigurationCallable(const UpdateWorkspaceConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::UpdateWorkspaceConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateWorkspaceConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkspaceConfigurationRequestT = Model::UpdateWorkspaceConfigurationRequest>
        void UpdateWorkspaceConfigurationAsync(const UpdateWorkspaceConfigurationRequestT& request, const UpdateWorkspaceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::UpdateWorkspaceConfiguration, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PrometheusServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PrometheusServiceClient>;
      void init(const PrometheusServiceClientConfiguration& clientConfiguration);

      PrometheusServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<PrometheusServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace PrometheusService
} // namespace Aws
