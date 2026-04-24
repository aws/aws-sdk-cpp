/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboardsPaginationBase.h>
#include <aws/bcm-dashboards/BCMDashboardsServiceClientModel.h>
#include <aws/bcm-dashboards/BCMDashboardsWaiter.h>
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace BCMDashboards {
/**
 * <p>Amazon Web Services Billing and Cost Management Dashboards is a service that
 * enables you to create, manage, and share dashboards that combine multiple
 * visualizations of your Amazon Web Services cost and usage data. You can combine
 * multiple data sources including Cost Explorer, Savings Plans, and Reserved
 * Instance metrics into unified dashboards, helping you analyze spending patterns
 * and share cost insights across your organization.</p> <p>You can use the Amazon
 * Web Services Billing and Cost Management Dashboards API to programmatically
 * create, manage, and share dashboards. This includes creating custom dashboards,
 * configuring widgets, managing dashboard permissions, and sharing dashboards
 * across accounts in your organization.</p>
 */
class AWS_BCMDASHBOARDS_API BCMDashboardsClient : public Aws::Client::AWSJsonClient,
                                                  public Aws::Client::ClientWithAsyncTemplateMethods<BCMDashboardsClient>,
                                                  public BCMDashboardsPaginationBase<BCMDashboardsClient>,
                                                  public BCMDashboardsWaiter<BCMDashboardsClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef BCMDashboardsClientConfiguration ClientConfigurationType;
  typedef BCMDashboardsEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  BCMDashboardsClient(const Aws::BCMDashboards::BCMDashboardsClientConfiguration& clientConfiguration =
                          Aws::BCMDashboards::BCMDashboardsClientConfiguration(),
                      std::shared_ptr<BCMDashboardsEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  BCMDashboardsClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<BCMDashboardsEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::BCMDashboards::BCMDashboardsClientConfiguration& clientConfiguration =
                          Aws::BCMDashboards::BCMDashboardsClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  BCMDashboardsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<BCMDashboardsEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::BCMDashboards::BCMDashboardsClientConfiguration& clientConfiguration =
                          Aws::BCMDashboards::BCMDashboardsClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  BCMDashboardsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  BCMDashboardsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  BCMDashboardsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~BCMDashboardsClient();

  /**
   * <p>Creates a new dashboard that can contain multiple widgets displaying cost and
   * usage data. You can add custom widgets or use predefined widgets, arranging them
   * in your preferred layout.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/CreateDashboard">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDashboardOutcome CreateDashboard(const Model::CreateDashboardRequest& request) const;

  /**
   * A Callable wrapper for CreateDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateDashboardRequestT = Model::CreateDashboardRequest>
  Model::CreateDashboardOutcomeCallable CreateDashboardCallable(const CreateDashboardRequestT& request) const {
    return SubmitCallable(&BCMDashboardsClient::CreateDashboard, request);
  }

  /**
   * An Async wrapper for CreateDashboard that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateDashboardRequestT = Model::CreateDashboardRequest>
  void CreateDashboardAsync(const CreateDashboardRequestT& request, const CreateDashboardResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BCMDashboardsClient::CreateDashboard, request, handler, context);
  }

  /**
   * <p>Creates a new scheduled report for a dashboard. A scheduled report
   * automatically generates and delivers dashboard snapshots on a recurring
   * schedule. Reports are delivered within 15 minutes of the scheduled delivery
   * time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/CreateScheduledReport">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateScheduledReportOutcome CreateScheduledReport(const Model::CreateScheduledReportRequest& request) const;

  /**
   * A Callable wrapper for CreateScheduledReport that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateScheduledReportRequestT = Model::CreateScheduledReportRequest>
  Model::CreateScheduledReportOutcomeCallable CreateScheduledReportCallable(const CreateScheduledReportRequestT& request) const {
    return SubmitCallable(&BCMDashboardsClient::CreateScheduledReport, request);
  }

  /**
   * An Async wrapper for CreateScheduledReport that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateScheduledReportRequestT = Model::CreateScheduledReportRequest>
  void CreateScheduledReportAsync(const CreateScheduledReportRequestT& request, const CreateScheduledReportResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BCMDashboardsClient::CreateScheduledReport, request, handler, context);
  }

  /**
   * <p>Deletes a specified dashboard. This action cannot be undone.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/DeleteDashboard">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteDashboardOutcome DeleteDashboard(const Model::DeleteDashboardRequest& request) const;

  /**
   * A Callable wrapper for DeleteDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteDashboardRequestT = Model::DeleteDashboardRequest>
  Model::DeleteDashboardOutcomeCallable DeleteDashboardCallable(const DeleteDashboardRequestT& request) const {
    return SubmitCallable(&BCMDashboardsClient::DeleteDashboard, request);
  }

  /**
   * An Async wrapper for DeleteDashboard that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteDashboardRequestT = Model::DeleteDashboardRequest>
  void DeleteDashboardAsync(const DeleteDashboardRequestT& request, const DeleteDashboardResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BCMDashboardsClient::DeleteDashboard, request, handler, context);
  }

  /**
   * <p>Deletes a specified scheduled report. This is an irreversible
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/DeleteScheduledReport">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteScheduledReportOutcome DeleteScheduledReport(const Model::DeleteScheduledReportRequest& request) const;

  /**
   * A Callable wrapper for DeleteScheduledReport that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteScheduledReportRequestT = Model::DeleteScheduledReportRequest>
  Model::DeleteScheduledReportOutcomeCallable DeleteScheduledReportCallable(const DeleteScheduledReportRequestT& request) const {
    return SubmitCallable(&BCMDashboardsClient::DeleteScheduledReport, request);
  }

  /**
   * An Async wrapper for DeleteScheduledReport that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteScheduledReportRequestT = Model::DeleteScheduledReportRequest>
  void DeleteScheduledReportAsync(const DeleteScheduledReportRequestT& request, const DeleteScheduledReportResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BCMDashboardsClient::DeleteScheduledReport, request, handler, context);
  }

  /**
   * <p>Triggers an immediate execution of a scheduled report, outside of its regular
   * schedule. The scheduled report must be in <code>ENABLED</code> state. Calling
   * this operation on a <code>DISABLED</code> scheduled report returns a
   * <code>ValidationException</code>.</p>  <p>If a <code>clientToken</code> is
   * provided, the service uses it for idempotency. Requests with the same client
   * token will not trigger a new execution within the same minute.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/ExecuteScheduledReport">AWS
   * API Reference</a></p>
   */
  virtual Model::ExecuteScheduledReportOutcome ExecuteScheduledReport(const Model::ExecuteScheduledReportRequest& request) const;

  /**
   * A Callable wrapper for ExecuteScheduledReport that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ExecuteScheduledReportRequestT = Model::ExecuteScheduledReportRequest>
  Model::ExecuteScheduledReportOutcomeCallable ExecuteScheduledReportCallable(const ExecuteScheduledReportRequestT& request) const {
    return SubmitCallable(&BCMDashboardsClient::ExecuteScheduledReport, request);
  }

  /**
   * An Async wrapper for ExecuteScheduledReport that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ExecuteScheduledReportRequestT = Model::ExecuteScheduledReportRequest>
  void ExecuteScheduledReportAsync(const ExecuteScheduledReportRequestT& request,
                                   const ExecuteScheduledReportResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BCMDashboardsClient::ExecuteScheduledReport, request, handler, context);
  }

  /**
   * <p>Retrieves the configuration and metadata of a specified dashboard, including
   * its widgets and layout settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/GetDashboard">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDashboardOutcome GetDashboard(const Model::GetDashboardRequest& request) const;

  /**
   * A Callable wrapper for GetDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetDashboardRequestT = Model::GetDashboardRequest>
  Model::GetDashboardOutcomeCallable GetDashboardCallable(const GetDashboardRequestT& request) const {
    return SubmitCallable(&BCMDashboardsClient::GetDashboard, request);
  }

  /**
   * An Async wrapper for GetDashboard that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetDashboardRequestT = Model::GetDashboardRequest>
  void GetDashboardAsync(const GetDashboardRequestT& request, const GetDashboardResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BCMDashboardsClient::GetDashboard, request, handler, context);
  }

  /**
   * <p>Retrieves the resource-based policy attached to a dashboard, showing sharing
   * configurations and permissions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/GetResourcePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

  /**
   * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
  Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const {
    return SubmitCallable(&BCMDashboardsClient::GetResourcePolicy, request);
  }

  /**
   * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
  void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BCMDashboardsClient::GetResourcePolicy, request, handler, context);
  }

  /**
   * <p>Retrieves the configuration and metadata of a specified scheduled
   * report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/GetScheduledReport">AWS
   * API Reference</a></p>
   */
  virtual Model::GetScheduledReportOutcome GetScheduledReport(const Model::GetScheduledReportRequest& request) const;

  /**
   * A Callable wrapper for GetScheduledReport that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetScheduledReportRequestT = Model::GetScheduledReportRequest>
  Model::GetScheduledReportOutcomeCallable GetScheduledReportCallable(const GetScheduledReportRequestT& request) const {
    return SubmitCallable(&BCMDashboardsClient::GetScheduledReport, request);
  }

  /**
   * An Async wrapper for GetScheduledReport that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetScheduledReportRequestT = Model::GetScheduledReportRequest>
  void GetScheduledReportAsync(const GetScheduledReportRequestT& request, const GetScheduledReportResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BCMDashboardsClient::GetScheduledReport, request, handler, context);
  }

  /**
   * <p>Returns a list of all dashboards in your account.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/ListDashboards">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDashboardsOutcome ListDashboards(const Model::ListDashboardsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListDashboards that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListDashboardsRequestT = Model::ListDashboardsRequest>
  Model::ListDashboardsOutcomeCallable ListDashboardsCallable(const ListDashboardsRequestT& request = {}) const {
    return SubmitCallable(&BCMDashboardsClient::ListDashboards, request);
  }

  /**
   * An Async wrapper for ListDashboards that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListDashboardsRequestT = Model::ListDashboardsRequest>
  void ListDashboardsAsync(const ListDashboardsResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const ListDashboardsRequestT& request = {}) const {
    return SubmitAsync(&BCMDashboardsClient::ListDashboards, request, handler, context);
  }

  /**
   * <p>Returns a list of scheduled reports in your account.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/ListScheduledReports">AWS
   * API Reference</a></p>
   */
  virtual Model::ListScheduledReportsOutcome ListScheduledReports(const Model::ListScheduledReportsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListScheduledReports that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListScheduledReportsRequestT = Model::ListScheduledReportsRequest>
  Model::ListScheduledReportsOutcomeCallable ListScheduledReportsCallable(const ListScheduledReportsRequestT& request = {}) const {
    return SubmitCallable(&BCMDashboardsClient::ListScheduledReports, request);
  }

  /**
   * An Async wrapper for ListScheduledReports that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListScheduledReportsRequestT = Model::ListScheduledReportsRequest>
  void ListScheduledReportsAsync(const ListScheduledReportsResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                 const ListScheduledReportsRequestT& request = {}) const {
    return SubmitAsync(&BCMDashboardsClient::ListScheduledReports, request, handler, context);
  }

  /**
   * <p>Returns a list of all tags associated with a specified dashboard
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&BCMDashboardsClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BCMDashboardsClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Adds or updates tags for a specified dashboard resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&BCMDashboardsClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BCMDashboardsClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes specified tags from a dashboard resource.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&BCMDashboardsClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BCMDashboardsClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates an existing dashboard's properties, including its name, description,
   * and widget configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/UpdateDashboard">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateDashboardOutcome UpdateDashboard(const Model::UpdateDashboardRequest& request) const;

  /**
   * A Callable wrapper for UpdateDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateDashboardRequestT = Model::UpdateDashboardRequest>
  Model::UpdateDashboardOutcomeCallable UpdateDashboardCallable(const UpdateDashboardRequestT& request) const {
    return SubmitCallable(&BCMDashboardsClient::UpdateDashboard, request);
  }

  /**
   * An Async wrapper for UpdateDashboard that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateDashboardRequestT = Model::UpdateDashboardRequest>
  void UpdateDashboardAsync(const UpdateDashboardRequestT& request, const UpdateDashboardResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BCMDashboardsClient::UpdateDashboard, request, handler, context);
  }

  /**
   * <p>Updates an existing scheduled report's properties, including its name,
   * description, schedule configuration, and widget settings. Only the parameters
   * included in the request are updated; all other properties remain
   * unchanged.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/UpdateScheduledReport">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateScheduledReportOutcome UpdateScheduledReport(const Model::UpdateScheduledReportRequest& request) const;

  /**
   * A Callable wrapper for UpdateScheduledReport that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateScheduledReportRequestT = Model::UpdateScheduledReportRequest>
  Model::UpdateScheduledReportOutcomeCallable UpdateScheduledReportCallable(const UpdateScheduledReportRequestT& request) const {
    return SubmitCallable(&BCMDashboardsClient::UpdateScheduledReport, request);
  }

  /**
   * An Async wrapper for UpdateScheduledReport that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateScheduledReportRequestT = Model::UpdateScheduledReportRequest>
  void UpdateScheduledReportAsync(const UpdateScheduledReportRequestT& request, const UpdateScheduledReportResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BCMDashboardsClient::UpdateScheduledReport, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<BCMDashboardsEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<BCMDashboardsClient>;
  void init(const BCMDashboardsClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, BCMDashboardsError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  BCMDashboardsClientConfiguration m_clientConfiguration;
  std::shared_ptr<BCMDashboardsEndpointProviderBase> m_endpointProvider;
};

}  // namespace BCMDashboards
}  // namespace Aws
