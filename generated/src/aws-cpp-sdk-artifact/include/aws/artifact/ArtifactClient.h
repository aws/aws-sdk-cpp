/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/ArtifactPaginationBase.h>
#include <aws/artifact/ArtifactServiceClientModel.h>
#include <aws/artifact/ArtifactWaiter.h>
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace Artifact {
/**
 * <p>This reference provides descriptions of the low-level AWS Artifact Service
 * API.</p>
 */
class AWS_ARTIFACT_API ArtifactClient : public Aws::Client::AWSJsonClient,
                                        public Aws::Client::ClientWithAsyncTemplateMethods<ArtifactClient>,
                                        public ArtifactPaginationBase<ArtifactClient>,
                                        public ArtifactWaiter<ArtifactClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef ArtifactClientConfiguration ClientConfigurationType;
  typedef ArtifactEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ArtifactClient(const Aws::Artifact::ArtifactClientConfiguration& clientConfiguration = Aws::Artifact::ArtifactClientConfiguration(),
                 std::shared_ptr<ArtifactEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ArtifactClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<ArtifactEndpointProviderBase> endpointProvider = nullptr,
                 const Aws::Artifact::ArtifactClientConfiguration& clientConfiguration = Aws::Artifact::ArtifactClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ArtifactClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 std::shared_ptr<ArtifactEndpointProviderBase> endpointProvider = nullptr,
                 const Aws::Artifact::ArtifactClientConfiguration& clientConfiguration = Aws::Artifact::ArtifactClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ArtifactClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ArtifactClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ArtifactClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~ArtifactClient();

  /**
   * <p>Create a new compliance inquiry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/CreateComplianceInquiry">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateComplianceInquiryOutcome CreateComplianceInquiry(const Model::CreateComplianceInquiryRequest& request) const;

  /**
   * A Callable wrapper for CreateComplianceInquiry that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateComplianceInquiryRequestT = Model::CreateComplianceInquiryRequest>
  Model::CreateComplianceInquiryOutcomeCallable CreateComplianceInquiryCallable(const CreateComplianceInquiryRequestT& request) const {
    return SubmitCallable(&ArtifactClient::CreateComplianceInquiry, request);
  }

  /**
   * An Async wrapper for CreateComplianceInquiry that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateComplianceInquiryRequestT = Model::CreateComplianceInquiryRequest>
  void CreateComplianceInquiryAsync(const CreateComplianceInquiryRequestT& request,
                                    const CreateComplianceInquiryResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ArtifactClient::CreateComplianceInquiry, request, handler, context);
  }

  /**
   * <p>Export a compliance inquiry report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/ExportComplianceInquiry">AWS
   * API Reference</a></p>
   */
  virtual Model::ExportComplianceInquiryOutcome ExportComplianceInquiry(const Model::ExportComplianceInquiryRequest& request) const;

  /**
   * A Callable wrapper for ExportComplianceInquiry that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ExportComplianceInquiryRequestT = Model::ExportComplianceInquiryRequest>
  Model::ExportComplianceInquiryOutcomeCallable ExportComplianceInquiryCallable(const ExportComplianceInquiryRequestT& request) const {
    return SubmitCallable(&ArtifactClient::ExportComplianceInquiry, request);
  }

  /**
   * An Async wrapper for ExportComplianceInquiry that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ExportComplianceInquiryRequestT = Model::ExportComplianceInquiryRequest>
  void ExportComplianceInquiryAsync(const ExportComplianceInquiryRequestT& request,
                                    const ExportComplianceInquiryResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ArtifactClient::ExportComplianceInquiry, request, handler, context);
  }

  /**
   * <p>Get the account settings for Artifact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/GetAccountSettings">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request = {}) const;

  /**
   * A Callable wrapper for GetAccountSettings that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAccountSettingsRequestT = Model::GetAccountSettingsRequest>
  Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const GetAccountSettingsRequestT& request = {}) const {
    return SubmitCallable(&ArtifactClient::GetAccountSettings, request);
  }

  /**
   * An Async wrapper for GetAccountSettings that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetAccountSettingsRequestT = Model::GetAccountSettingsRequest>
  void GetAccountSettingsAsync(const GetAccountSettingsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const GetAccountSettingsRequestT& request = {}) const {
    return SubmitAsync(&ArtifactClient::GetAccountSettings, request, handler, context);
  }

  /**
   * <p>Get the metadata for a single compliance inquiry.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/GetComplianceInquiryMetadata">AWS
   * API Reference</a></p>
   */
  virtual Model::GetComplianceInquiryMetadataOutcome GetComplianceInquiryMetadata(
      const Model::GetComplianceInquiryMetadataRequest& request) const;

  /**
   * A Callable wrapper for GetComplianceInquiryMetadata that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetComplianceInquiryMetadataRequestT = Model::GetComplianceInquiryMetadataRequest>
  Model::GetComplianceInquiryMetadataOutcomeCallable GetComplianceInquiryMetadataCallable(
      const GetComplianceInquiryMetadataRequestT& request) const {
    return SubmitCallable(&ArtifactClient::GetComplianceInquiryMetadata, request);
  }

  /**
   * An Async wrapper for GetComplianceInquiryMetadata that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetComplianceInquiryMetadataRequestT = Model::GetComplianceInquiryMetadataRequest>
  void GetComplianceInquiryMetadataAsync(const GetComplianceInquiryMetadataRequestT& request,
                                         const GetComplianceInquiryMetadataResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ArtifactClient::GetComplianceInquiryMetadata, request, handler, context);
  }

  /**
   * <p>Get the content for a single report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/GetReport">AWS
   * API Reference</a></p>
   */
  virtual Model::GetReportOutcome GetReport(const Model::GetReportRequest& request) const;

  /**
   * A Callable wrapper for GetReport that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetReportRequestT = Model::GetReportRequest>
  Model::GetReportOutcomeCallable GetReportCallable(const GetReportRequestT& request) const {
    return SubmitCallable(&ArtifactClient::GetReport, request);
  }

  /**
   * An Async wrapper for GetReport that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetReportRequestT = Model::GetReportRequest>
  void GetReportAsync(const GetReportRequestT& request, const GetReportResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ArtifactClient::GetReport, request, handler, context);
  }

  /**
   * <p>Get the metadata for a single report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/GetReportMetadata">AWS
   * API Reference</a></p>
   */
  virtual Model::GetReportMetadataOutcome GetReportMetadata(const Model::GetReportMetadataRequest& request) const;

  /**
   * A Callable wrapper for GetReportMetadata that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetReportMetadataRequestT = Model::GetReportMetadataRequest>
  Model::GetReportMetadataOutcomeCallable GetReportMetadataCallable(const GetReportMetadataRequestT& request) const {
    return SubmitCallable(&ArtifactClient::GetReportMetadata, request);
  }

  /**
   * An Async wrapper for GetReportMetadata that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetReportMetadataRequestT = Model::GetReportMetadataRequest>
  void GetReportMetadataAsync(const GetReportMetadataRequestT& request, const GetReportMetadataResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ArtifactClient::GetReportMetadata, request, handler, context);
  }

  /**
   * <p>Get the Term content associated with a single report.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/GetTermForReport">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTermForReportOutcome GetTermForReport(const Model::GetTermForReportRequest& request) const;

  /**
   * A Callable wrapper for GetTermForReport that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetTermForReportRequestT = Model::GetTermForReportRequest>
  Model::GetTermForReportOutcomeCallable GetTermForReportCallable(const GetTermForReportRequestT& request) const {
    return SubmitCallable(&ArtifactClient::GetTermForReport, request);
  }

  /**
   * An Async wrapper for GetTermForReport that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetTermForReportRequestT = Model::GetTermForReportRequest>
  void GetTermForReportAsync(const GetTermForReportRequestT& request, const GetTermForReportResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ArtifactClient::GetTermForReport, request, handler, context);
  }

  /**
   * <p>List available compliance inquiries.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/ListComplianceInquiries">AWS
   * API Reference</a></p>
   */
  virtual Model::ListComplianceInquiriesOutcome ListComplianceInquiries(const Model::ListComplianceInquiriesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListComplianceInquiries that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListComplianceInquiriesRequestT = Model::ListComplianceInquiriesRequest>
  Model::ListComplianceInquiriesOutcomeCallable ListComplianceInquiriesCallable(const ListComplianceInquiriesRequestT& request = {}) const {
    return SubmitCallable(&ArtifactClient::ListComplianceInquiries, request);
  }

  /**
   * An Async wrapper for ListComplianceInquiries that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListComplianceInquiriesRequestT = Model::ListComplianceInquiriesRequest>
  void ListComplianceInquiriesAsync(const ListComplianceInquiriesResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                    const ListComplianceInquiriesRequestT& request = {}) const {
    return SubmitAsync(&ArtifactClient::ListComplianceInquiries, request, handler, context);
  }

  /**
   * <p>List queries within a compliance inquiry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/ListComplianceInquiryQueries">AWS
   * API Reference</a></p>
   */
  virtual Model::ListComplianceInquiryQueriesOutcome ListComplianceInquiryQueries(
      const Model::ListComplianceInquiryQueriesRequest& request) const;

  /**
   * A Callable wrapper for ListComplianceInquiryQueries that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListComplianceInquiryQueriesRequestT = Model::ListComplianceInquiryQueriesRequest>
  Model::ListComplianceInquiryQueriesOutcomeCallable ListComplianceInquiryQueriesCallable(
      const ListComplianceInquiryQueriesRequestT& request) const {
    return SubmitCallable(&ArtifactClient::ListComplianceInquiryQueries, request);
  }

  /**
   * An Async wrapper for ListComplianceInquiryQueries that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListComplianceInquiryQueriesRequestT = Model::ListComplianceInquiryQueriesRequest>
  void ListComplianceInquiryQueriesAsync(const ListComplianceInquiryQueriesRequestT& request,
                                         const ListComplianceInquiryQueriesResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ArtifactClient::ListComplianceInquiryQueries, request, handler, context);
  }

  /**
   * <p>List active customer-agreements applicable to calling identity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/ListCustomerAgreements">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCustomerAgreementsOutcome ListCustomerAgreements(const Model::ListCustomerAgreementsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListCustomerAgreements that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListCustomerAgreementsRequestT = Model::ListCustomerAgreementsRequest>
  Model::ListCustomerAgreementsOutcomeCallable ListCustomerAgreementsCallable(const ListCustomerAgreementsRequestT& request = {}) const {
    return SubmitCallable(&ArtifactClient::ListCustomerAgreements, request);
  }

  /**
   * An Async wrapper for ListCustomerAgreements that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListCustomerAgreementsRequestT = Model::ListCustomerAgreementsRequest>
  void ListCustomerAgreementsAsync(const ListCustomerAgreementsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const ListCustomerAgreementsRequestT& request = {}) const {
    return SubmitAsync(&ArtifactClient::ListCustomerAgreements, request, handler, context);
  }

  /**
   * <p>List available report versions for a given report.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/ListReportVersions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListReportVersionsOutcome ListReportVersions(const Model::ListReportVersionsRequest& request) const;

  /**
   * A Callable wrapper for ListReportVersions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListReportVersionsRequestT = Model::ListReportVersionsRequest>
  Model::ListReportVersionsOutcomeCallable ListReportVersionsCallable(const ListReportVersionsRequestT& request) const {
    return SubmitCallable(&ArtifactClient::ListReportVersions, request);
  }

  /**
   * An Async wrapper for ListReportVersions that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListReportVersionsRequestT = Model::ListReportVersionsRequest>
  void ListReportVersionsAsync(const ListReportVersionsRequestT& request, const ListReportVersionsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ArtifactClient::ListReportVersions, request, handler, context);
  }

  /**
   * <p>List available reports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/ListReports">AWS
   * API Reference</a></p>
   */
  virtual Model::ListReportsOutcome ListReports(const Model::ListReportsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListReports that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListReportsRequestT = Model::ListReportsRequest>
  Model::ListReportsOutcomeCallable ListReportsCallable(const ListReportsRequestT& request = {}) const {
    return SubmitCallable(&ArtifactClient::ListReports, request);
  }

  /**
   * An Async wrapper for ListReports that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListReportsRequestT = Model::ListReportsRequest>
  void ListReportsAsync(const ListReportsResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                        const ListReportsRequestT& request = {}) const {
    return SubmitAsync(&ArtifactClient::ListReports, request, handler, context);
  }

  /**
   * <p>List tags for a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&ArtifactClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ArtifactClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Put the account settings for Artifact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/PutAccountSettings">AWS
   * API Reference</a></p>
   */
  virtual Model::PutAccountSettingsOutcome PutAccountSettings(const Model::PutAccountSettingsRequest& request = {}) const;

  /**
   * A Callable wrapper for PutAccountSettings that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutAccountSettingsRequestT = Model::PutAccountSettingsRequest>
  Model::PutAccountSettingsOutcomeCallable PutAccountSettingsCallable(const PutAccountSettingsRequestT& request = {}) const {
    return SubmitCallable(&ArtifactClient::PutAccountSettings, request);
  }

  /**
   * An Async wrapper for PutAccountSettings that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename PutAccountSettingsRequestT = Model::PutAccountSettingsRequest>
  void PutAccountSettingsAsync(const PutAccountSettingsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const PutAccountSettingsRequestT& request = {}) const {
    return SubmitAsync(&ArtifactClient::PutAccountSettings, request, handler, context);
  }

  /**
   * <p>Add tags to a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&ArtifactClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ArtifactClient::TagResource, request, handler, context);
  }

  /**
   * <p>Remove tags from a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&ArtifactClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ArtifactClient::UntagResource, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<ArtifactEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<ArtifactClient>;
  void init(const ArtifactClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, ArtifactError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  ArtifactClientConfiguration m_clientConfiguration;
  std::shared_ptr<ArtifactEndpointProviderBase> m_endpointProvider;
};

}  // namespace Artifact
}  // namespace Aws
