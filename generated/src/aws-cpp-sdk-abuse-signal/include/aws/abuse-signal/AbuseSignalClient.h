/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignalPaginationBase.h>
#include <aws/abuse-signal/AbuseSignalServiceClientModel.h>
#include <aws/abuse-signal/AbuseSignalWaiter.h>
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace AbuseSignal {
/**
 * <p><fullname>Amazon Web Services Abuse Signal</fullname> <p>Amazon Web Services
 * Abuse Signal API provides programmatic means to report suspected abuse of Amazon
 * Web Services resources. You can use the API to submit abuse reports about Amazon
 * Web Services resources and to track the status of your reports. Amazon Web
 * Services Trust &amp; Safety uses the information that you provide to investigate
 * and try to resolve the incident that you reported.</p> <p>You submit reports in
 * the eXtended Abuse Reporting Format (XARF), an open standard for structured
 * abuse reporting. For more information, see <a
 * href="https://xarf.org/docs/introduction/">XARF on the XARF website</a>. Reports
 * can cover a wide range of abuse categories, including spam, phishing,
 * distributed denial of service (DDoS), malware distribution, and copyright
 * infringement.</p> <p>With the Amazon Web Services Abuse Signal API, you can:</p>
 * <ul> <li> <p> <b>Submit abuse reports</b> – Create structured abuse reports by
 * using the XARF format, with full support for all XARF v4 report types.</p> </li>
 * <li> <p> <b>Track report status</b> – Monitor the processing status of submitted
 * reports, from submission through resolution.</p> </li> <li> <p> <b>List and
 * filter reports</b> – Retrieve the status of all reports, with optional filtering
 * by correlation ID.</p> </li> <li> <p> <b>Retry submissions safely</b> – Safely
 * retry report submissions without creating duplicates by using client tokens.</p>
 * </li> </ul>  <p> <b>Cross-Region data residency:</b> By submitting a
 * report, you instruct Amazon Web Services to store it in all supported Regions
 * (<code>us-east-1</code>, <code>us-west-2</code>, and <code>eu-west-2</code>),
 * including across the United States and Europe. If data must remain in a single
 * Region, do not include it in the report.</p> </p>
 */
class AWS_ABUSESIGNAL_API AbuseSignalClient : public Aws::Client::AWSJsonClient,
                                              public Aws::Client::ClientWithAsyncTemplateMethods<AbuseSignalClient>,
                                              public AbuseSignalPaginationBase<AbuseSignalClient>,
                                              public AbuseSignalWaiter<AbuseSignalClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef AbuseSignalClientConfiguration ClientConfigurationType;
  typedef AbuseSignalEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  AbuseSignalClient(
      const Aws::AbuseSignal::AbuseSignalClientConfiguration& clientConfiguration = Aws::AbuseSignal::AbuseSignalClientConfiguration(),
      std::shared_ptr<AbuseSignalEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  AbuseSignalClient(
      const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<AbuseSignalEndpointProviderBase> endpointProvider = nullptr,
      const Aws::AbuseSignal::AbuseSignalClientConfiguration& clientConfiguration = Aws::AbuseSignal::AbuseSignalClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  AbuseSignalClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<AbuseSignalEndpointProviderBase> endpointProvider = nullptr,
      const Aws::AbuseSignal::AbuseSignalClientConfiguration& clientConfiguration = Aws::AbuseSignal::AbuseSignalClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  AbuseSignalClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  AbuseSignalClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  AbuseSignalClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~AbuseSignalClient();

  /**
   * <p>Submits a structured report. Amazon Web Services validates it and returns a
   * report ID. A successful response confirms that Amazon Web Services received your
   * report. It doesn't mean that Amazon Web Services has reached an outcome. Use
   * <a>GetAbuseReportStatus</a> with the report ID to check the report's status and
   * outcome.</p> <p>This operation is idempotent within a time window. If you
   * provide a <code>clientToken</code>, duplicate requests within 24 hours return
   * the existing report ID. If you omit it, the service generates a token scoped to
   * 5 minutes.</p>  <p> <b>Cross-Region data residency:</b> By submitting
   * a report, you instruct Amazon Web Services to store it in all supported Regions
   * (<code>us-east-1</code>, <code>us-west-2</code>, and <code>eu-west-2</code>),
   * including across the United States and Europe. If data must remain in a single
   * Region, do not include it in the report.</p> <p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/CreateAbuseReport">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAbuseReportOutcome CreateAbuseReport(const Model::CreateAbuseReportRequest& request) const;

  /**
   * A Callable wrapper for CreateAbuseReport that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateAbuseReportRequestT = Model::CreateAbuseReportRequest>
  Model::CreateAbuseReportOutcomeCallable CreateAbuseReportCallable(const CreateAbuseReportRequestT& request) const {
    return SubmitCallable(&AbuseSignalClient::CreateAbuseReport, request);
  }

  /**
   * An Async wrapper for CreateAbuseReport that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateAbuseReportRequestT = Model::CreateAbuseReportRequest>
  void CreateAbuseReportAsync(const CreateAbuseReportRequestT& request, const CreateAbuseReportResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AbuseSignalClient::CreateAbuseReport, request, handler, context);
  }

  /**
   * <p>Retrieves the current processing status of a previously submitted abuse
   * report, including the status, submission timestamp, and last-update time.</p>
   * <p>You can poll this operation to track the report's status.
   * <code>PROCESSING</code> confirms that Amazon Web Services received your report
   * and is processing it. <code>COMPLETED</code> means Amazon Web Services finished
   * resolving the report, and the response includes a <code>reasonCode</code>. The
   * time to reach <code>COMPLETED</code> may vary and can take up to several days
   * depending on the scope and complexity of the suspected abuse.</p>  <p>
   * <code>COMPLETED</code> is the only terminal status. To wait for a report, use
   * the <code>ReportProcessing</code> waiter, which succeeds when the report reaches
   * <code>PROCESSING</code> or <code>COMPLETED</code>. If you poll this operation
   * yourself, wait 1–5 seconds between calls.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/GetAbuseReportStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAbuseReportStatusOutcome GetAbuseReportStatus(const Model::GetAbuseReportStatusRequest& request) const;

  /**
   * A Callable wrapper for GetAbuseReportStatus that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAbuseReportStatusRequestT = Model::GetAbuseReportStatusRequest>
  Model::GetAbuseReportStatusOutcomeCallable GetAbuseReportStatusCallable(const GetAbuseReportStatusRequestT& request) const {
    return SubmitCallable(&AbuseSignalClient::GetAbuseReportStatus, request);
  }

  /**
   * An Async wrapper for GetAbuseReportStatus that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetAbuseReportStatusRequestT = Model::GetAbuseReportStatusRequest>
  void GetAbuseReportStatusAsync(const GetAbuseReportStatusRequestT& request, const GetAbuseReportStatusResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AbuseSignalClient::GetAbuseReportStatus, request, handler, context);
  }

  /**
   * <p>Lists abuse report statuses for the calling account, ordered by submission
   * time, with optional filtering and pagination.</p> <p>Use the
   * <code>correlationId</code> parameter to filter results by the reporter-provided
   * correlation ID that was specified during report submission.</p> <p>Results are
   * paginated. Use <code>nextToken</code> to retrieve additional
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/ListAbuseReportStatuses">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAbuseReportStatusesOutcome ListAbuseReportStatuses(const Model::ListAbuseReportStatusesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAbuseReportStatuses that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAbuseReportStatusesRequestT = Model::ListAbuseReportStatusesRequest>
  Model::ListAbuseReportStatusesOutcomeCallable ListAbuseReportStatusesCallable(const ListAbuseReportStatusesRequestT& request = {}) const {
    return SubmitCallable(&AbuseSignalClient::ListAbuseReportStatuses, request);
  }

  /**
   * An Async wrapper for ListAbuseReportStatuses that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAbuseReportStatusesRequestT = Model::ListAbuseReportStatusesRequest>
  void ListAbuseReportStatusesAsync(const ListAbuseReportStatusesResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                    const ListAbuseReportStatusesRequestT& request = {}) const {
    return SubmitAsync(&AbuseSignalClient::ListAbuseReportStatuses, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<AbuseSignalEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<AbuseSignalClient>;
  void init(const AbuseSignalClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, AbuseSignalError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  AbuseSignalClientConfiguration m_clientConfiguration;
  std::shared_ptr<AbuseSignalEndpointProviderBase> m_endpointProvider;
};

}  // namespace AbuseSignal
}  // namespace Aws
