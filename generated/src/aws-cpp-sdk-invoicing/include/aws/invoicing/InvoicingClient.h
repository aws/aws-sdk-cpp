/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/InvoicingPaginationBase.h>
#include <aws/invoicing/InvoicingServiceClientModel.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>

namespace Aws {
namespace Invoicing {
/**
 * <p> <b>Amazon Web Services Invoice Configuration</b> </p> <p>You can use Amazon
 * Web Services Invoice Configuration APIs to programmatically create, update,
 * delete, get, and list invoice units. You can also programmatically fetch the
 * information of the invoice receiver. For example, business legal name, address,
 * and invoicing contacts. </p> <p>You can use Amazon Web Services Invoice
 * Configuration to receive separate Amazon Web Services invoices based your
 * organizational needs. By using Amazon Web Services Invoice Configuration, you
 * can configure invoice units that are groups of Amazon Web Services accounts that
 * represent your business entities, and receive separate invoices for each
 * business entity. You can also assign a unique member or payer account as the
 * invoice receiver for each invoice unit. As you create new accounts within your
 * Organizations using Amazon Web Services Invoice Configuration APIs, you can
 * automate the creation of new invoice units and subsequently automate the
 * addition of new accounts to your invoice units.</p> <p> <b>Amazon Web Services
 * Procurement Portal Preferences</b> </p> <p>You can use Amazon Web Services
 * Procurement Portal Preferences APIs to programmatically create, update, delete,
 * get, and list procurement portal connections and e-invoice delivery settings.
 * You can also programmatically fetch and modify the status of procurement portal
 * configurations. For example, SAP Business Network or Coupa connections,
 * configure e-invoice delivery and purchase order retrieval features.</p> <p>You
 * can use Amazon Web Services Procurement Portal Preferences to connect e-invoice
 * delivery to your procurement portals based on your organizational needs. By
 * using Amazon Web Services Procurement Portal Preferences, you can configure
 * connections to SAP Business Network and Coupa procurement portals that retrieve
 * purchase orders and deliver Amazon Web Services invoices on the same day they
 * are generated. You can also set up testing environments to validate invoice
 * delivery without affecting live transactions, and manage contact information for
 * portal setup and support. </p> <p>Administrative users should understand that
 * billing read-only policies will show all procurement portal connection details.
 * Review your IAM policies to ensure appropriate access controls are in place for
 * procurement portal preferences.</p> <p> <b>Amazon Web Services Invoice
 * Management</b> </p> <p>You can use Amazon Web Services Invoice Management APIs
 * to programmatically list invoice summaries and get invoice documents. You can
 * also programmatically fetch invoice documents with S3 pre-signed URLs.</p>
 * <p>You can use Amazon Web Services Invoice Management to access invoice
 * information based on your organizational needs. By using Amazon Web Services
 * Invoice Management, you can retrieve paginated lists of invoice summaries that
 * include invoice metadata such as invoice IDs, amounts, and currencies without
 * downloading documents. You can also download invoice documents in PDF format
 * using S3 pre-signed URLs with built-in expiration. As you manage invoices across
 * your organization using Amazon Web Services Invoice Management APIs, you can
 * create invoice retrieval processes and integrate invoice data into your
 * financial systems.</p> <p>Service endpoint</p> <p>You can use the following
 * endpoints for Amazon Web Services Invoice Configuration, Amazon Web Services
 * Procurement Portal Preferences, and Amazon Web Services Invoice Management:</p>
 * <ul> <li> <p> <code>https://invoicing.us-east-1.api.aws</code> </p> </li> </ul>
 */
class AWS_INVOICING_API InvoicingClient : public Aws::Client::AWSJsonClient,
                                          public Aws::Client::ClientWithAsyncTemplateMethods<InvoicingClient>,
                                          public InvoicingPaginationBase<InvoicingClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef InvoicingClientConfiguration ClientConfigurationType;
  typedef InvoicingEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  InvoicingClient(const Aws::Invoicing::InvoicingClientConfiguration& clientConfiguration = Aws::Invoicing::InvoicingClientConfiguration(),
                  std::shared_ptr<InvoicingEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  InvoicingClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<InvoicingEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::Invoicing::InvoicingClientConfiguration& clientConfiguration = Aws::Invoicing::InvoicingClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  InvoicingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<InvoicingEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::Invoicing::InvoicingClientConfiguration& clientConfiguration = Aws::Invoicing::InvoicingClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  InvoicingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  InvoicingClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  InvoicingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~InvoicingClient();

  /**
   * <p>This gets the invoice profile associated with a set of accounts. The accounts
   * must be linked accounts under the requester management account
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/BatchGetInvoiceProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetInvoiceProfileOutcome BatchGetInvoiceProfile(const Model::BatchGetInvoiceProfileRequest& request) const;

  /**
   * A Callable wrapper for BatchGetInvoiceProfile that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchGetInvoiceProfileRequestT = Model::BatchGetInvoiceProfileRequest>
  Model::BatchGetInvoiceProfileOutcomeCallable BatchGetInvoiceProfileCallable(const BatchGetInvoiceProfileRequestT& request) const {
    return SubmitCallable(&InvoicingClient::BatchGetInvoiceProfile, request);
  }

  /**
   * An Async wrapper for BatchGetInvoiceProfile that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchGetInvoiceProfileRequestT = Model::BatchGetInvoiceProfileRequest>
  void BatchGetInvoiceProfileAsync(const BatchGetInvoiceProfileRequestT& request,
                                   const BatchGetInvoiceProfileResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InvoicingClient::BatchGetInvoiceProfile, request, handler, context);
  }

  /**
   * <p>This creates a new invoice unit with the provided definition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/CreateInvoiceUnit">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateInvoiceUnitOutcome CreateInvoiceUnit(const Model::CreateInvoiceUnitRequest& request) const;

  /**
   * A Callable wrapper for CreateInvoiceUnit that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateInvoiceUnitRequestT = Model::CreateInvoiceUnitRequest>
  Model::CreateInvoiceUnitOutcomeCallable CreateInvoiceUnitCallable(const CreateInvoiceUnitRequestT& request) const {
    return SubmitCallable(&InvoicingClient::CreateInvoiceUnit, request);
  }

  /**
   * An Async wrapper for CreateInvoiceUnit that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateInvoiceUnitRequestT = Model::CreateInvoiceUnitRequest>
  void CreateInvoiceUnitAsync(const CreateInvoiceUnitRequestT& request, const CreateInvoiceUnitResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InvoicingClient::CreateInvoiceUnit, request, handler, context);
  }

  /**
   * <p>Creates a procurement portal preference configuration for e-invoice delivery
   * and purchase order retrieval. This preference defines how invoices are delivered
   * to a procurement portal and how purchase orders are retrieved.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/CreateProcurementPortalPreference">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateProcurementPortalPreferenceOutcome CreateProcurementPortalPreference(
      const Model::CreateProcurementPortalPreferenceRequest& request) const;

  /**
   * A Callable wrapper for CreateProcurementPortalPreference that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename CreateProcurementPortalPreferenceRequestT = Model::CreateProcurementPortalPreferenceRequest>
  Model::CreateProcurementPortalPreferenceOutcomeCallable CreateProcurementPortalPreferenceCallable(
      const CreateProcurementPortalPreferenceRequestT& request) const {
    return SubmitCallable(&InvoicingClient::CreateProcurementPortalPreference, request);
  }

  /**
   * An Async wrapper for CreateProcurementPortalPreference that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateProcurementPortalPreferenceRequestT = Model::CreateProcurementPortalPreferenceRequest>
  void CreateProcurementPortalPreferenceAsync(const CreateProcurementPortalPreferenceRequestT& request,
                                              const CreateProcurementPortalPreferenceResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InvoicingClient::CreateProcurementPortalPreference, request, handler, context);
  }

  /**
   * <p>This deletes an invoice unit with the provided invoice unit ARN.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/DeleteInvoiceUnit">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteInvoiceUnitOutcome DeleteInvoiceUnit(const Model::DeleteInvoiceUnitRequest& request) const;

  /**
   * A Callable wrapper for DeleteInvoiceUnit that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteInvoiceUnitRequestT = Model::DeleteInvoiceUnitRequest>
  Model::DeleteInvoiceUnitOutcomeCallable DeleteInvoiceUnitCallable(const DeleteInvoiceUnitRequestT& request) const {
    return SubmitCallable(&InvoicingClient::DeleteInvoiceUnit, request);
  }

  /**
   * An Async wrapper for DeleteInvoiceUnit that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteInvoiceUnitRequestT = Model::DeleteInvoiceUnitRequest>
  void DeleteInvoiceUnitAsync(const DeleteInvoiceUnitRequestT& request, const DeleteInvoiceUnitResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InvoicingClient::DeleteInvoiceUnit, request, handler, context);
  }

  /**
   * <p>Deletes an existing procurement portal preference. This action cannot be
   * undone. Active e-invoice delivery and PO retrieval configurations will be
   * terminated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/DeleteProcurementPortalPreference">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteProcurementPortalPreferenceOutcome DeleteProcurementPortalPreference(
      const Model::DeleteProcurementPortalPreferenceRequest& request) const;

  /**
   * A Callable wrapper for DeleteProcurementPortalPreference that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename DeleteProcurementPortalPreferenceRequestT = Model::DeleteProcurementPortalPreferenceRequest>
  Model::DeleteProcurementPortalPreferenceOutcomeCallable DeleteProcurementPortalPreferenceCallable(
      const DeleteProcurementPortalPreferenceRequestT& request) const {
    return SubmitCallable(&InvoicingClient::DeleteProcurementPortalPreference, request);
  }

  /**
   * An Async wrapper for DeleteProcurementPortalPreference that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DeleteProcurementPortalPreferenceRequestT = Model::DeleteProcurementPortalPreferenceRequest>
  void DeleteProcurementPortalPreferenceAsync(const DeleteProcurementPortalPreferenceRequestT& request,
                                              const DeleteProcurementPortalPreferenceResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InvoicingClient::DeleteProcurementPortalPreference, request, handler, context);
  }

  /**
   * <p>Returns a URL to download the invoice document and supplemental documents
   * associated with an invoice. The URLs are pre-signed and have expiration time.
   * For special cases like Brazil, where Amazon Web Services generated invoice
   * identifiers and government provided identifiers do not match, use the Amazon Web
   * Services generated invoice identifier when making API requests. To grant IAM
   * permission to use this operation, the caller needs the
   * <code>invoicing:GetInvoicePDF</code> policy action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/GetInvoicePDF">AWS
   * API Reference</a></p>
   */
  virtual Model::GetInvoicePDFOutcome GetInvoicePDF(const Model::GetInvoicePDFRequest& request) const;

  /**
   * A Callable wrapper for GetInvoicePDF that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetInvoicePDFRequestT = Model::GetInvoicePDFRequest>
  Model::GetInvoicePDFOutcomeCallable GetInvoicePDFCallable(const GetInvoicePDFRequestT& request) const {
    return SubmitCallable(&InvoicingClient::GetInvoicePDF, request);
  }

  /**
   * An Async wrapper for GetInvoicePDF that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetInvoicePDFRequestT = Model::GetInvoicePDFRequest>
  void GetInvoicePDFAsync(const GetInvoicePDFRequestT& request, const GetInvoicePDFResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InvoicingClient::GetInvoicePDF, request, handler, context);
  }

  /**
   * <p>This retrieves the invoice unit definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/GetInvoiceUnit">AWS
   * API Reference</a></p>
   */
  virtual Model::GetInvoiceUnitOutcome GetInvoiceUnit(const Model::GetInvoiceUnitRequest& request) const;

  /**
   * A Callable wrapper for GetInvoiceUnit that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetInvoiceUnitRequestT = Model::GetInvoiceUnitRequest>
  Model::GetInvoiceUnitOutcomeCallable GetInvoiceUnitCallable(const GetInvoiceUnitRequestT& request) const {
    return SubmitCallable(&InvoicingClient::GetInvoiceUnit, request);
  }

  /**
   * An Async wrapper for GetInvoiceUnit that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetInvoiceUnitRequestT = Model::GetInvoiceUnitRequest>
  void GetInvoiceUnitAsync(const GetInvoiceUnitRequestT& request, const GetInvoiceUnitResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InvoicingClient::GetInvoiceUnit, request, handler, context);
  }

  /**
   * <p>Retrieves the details of a specific procurement portal preference
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/GetProcurementPortalPreference">AWS
   * API Reference</a></p>
   */
  virtual Model::GetProcurementPortalPreferenceOutcome GetProcurementPortalPreference(
      const Model::GetProcurementPortalPreferenceRequest& request) const;

  /**
   * A Callable wrapper for GetProcurementPortalPreference that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetProcurementPortalPreferenceRequestT = Model::GetProcurementPortalPreferenceRequest>
  Model::GetProcurementPortalPreferenceOutcomeCallable GetProcurementPortalPreferenceCallable(
      const GetProcurementPortalPreferenceRequestT& request) const {
    return SubmitCallable(&InvoicingClient::GetProcurementPortalPreference, request);
  }

  /**
   * An Async wrapper for GetProcurementPortalPreference that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetProcurementPortalPreferenceRequestT = Model::GetProcurementPortalPreferenceRequest>
  void GetProcurementPortalPreferenceAsync(const GetProcurementPortalPreferenceRequestT& request,
                                           const GetProcurementPortalPreferenceResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InvoicingClient::GetProcurementPortalPreference, request, handler, context);
  }

  /**
   * <p>Retrieves your invoice details programmatically, without line item
   * details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/ListInvoiceSummaries">AWS
   * API Reference</a></p>
   */
  virtual Model::ListInvoiceSummariesOutcome ListInvoiceSummaries(const Model::ListInvoiceSummariesRequest& request) const;

  /**
   * A Callable wrapper for ListInvoiceSummaries that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListInvoiceSummariesRequestT = Model::ListInvoiceSummariesRequest>
  Model::ListInvoiceSummariesOutcomeCallable ListInvoiceSummariesCallable(const ListInvoiceSummariesRequestT& request) const {
    return SubmitCallable(&InvoicingClient::ListInvoiceSummaries, request);
  }

  /**
   * An Async wrapper for ListInvoiceSummaries that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListInvoiceSummariesRequestT = Model::ListInvoiceSummariesRequest>
  void ListInvoiceSummariesAsync(const ListInvoiceSummariesRequestT& request, const ListInvoiceSummariesResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InvoicingClient::ListInvoiceSummaries, request, handler, context);
  }

  /**
   * <p>This fetches a list of all invoice unit definitions for a given account, as
   * of the provided <code>AsOf</code> date.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/ListInvoiceUnits">AWS
   * API Reference</a></p>
   */
  virtual Model::ListInvoiceUnitsOutcome ListInvoiceUnits(const Model::ListInvoiceUnitsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListInvoiceUnits that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListInvoiceUnitsRequestT = Model::ListInvoiceUnitsRequest>
  Model::ListInvoiceUnitsOutcomeCallable ListInvoiceUnitsCallable(const ListInvoiceUnitsRequestT& request = {}) const {
    return SubmitCallable(&InvoicingClient::ListInvoiceUnits, request);
  }

  /**
   * An Async wrapper for ListInvoiceUnits that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListInvoiceUnitsRequestT = Model::ListInvoiceUnitsRequest>
  void ListInvoiceUnitsAsync(const ListInvoiceUnitsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListInvoiceUnitsRequestT& request = {}) const {
    return SubmitAsync(&InvoicingClient::ListInvoiceUnits, request, handler, context);
  }

  /**
   * <p>Retrieves a list of procurement portal preferences associated with the Amazon
   * Web Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/ListProcurementPortalPreferences">AWS
   * API Reference</a></p>
   */
  virtual Model::ListProcurementPortalPreferencesOutcome ListProcurementPortalPreferences(
      const Model::ListProcurementPortalPreferencesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListProcurementPortalPreferences that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename ListProcurementPortalPreferencesRequestT = Model::ListProcurementPortalPreferencesRequest>
  Model::ListProcurementPortalPreferencesOutcomeCallable ListProcurementPortalPreferencesCallable(
      const ListProcurementPortalPreferencesRequestT& request = {}) const {
    return SubmitCallable(&InvoicingClient::ListProcurementPortalPreferences, request);
  }

  /**
   * An Async wrapper for ListProcurementPortalPreferences that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListProcurementPortalPreferencesRequestT = Model::ListProcurementPortalPreferencesRequest>
  void ListProcurementPortalPreferencesAsync(const ListProcurementPortalPreferencesResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                             const ListProcurementPortalPreferencesRequestT& request = {}) const {
    return SubmitAsync(&InvoicingClient::ListProcurementPortalPreferences, request, handler, context);
  }

  /**
   * <p>Lists the tags for a resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&InvoicingClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InvoicingClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Updates an existing procurement portal preference configuration. This
   * operation can modify settings for e-invoice delivery and purchase order
   * retrieval.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/PutProcurementPortalPreference">AWS
   * API Reference</a></p>
   */
  virtual Model::PutProcurementPortalPreferenceOutcome PutProcurementPortalPreference(
      const Model::PutProcurementPortalPreferenceRequest& request) const;

  /**
   * A Callable wrapper for PutProcurementPortalPreference that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename PutProcurementPortalPreferenceRequestT = Model::PutProcurementPortalPreferenceRequest>
  Model::PutProcurementPortalPreferenceOutcomeCallable PutProcurementPortalPreferenceCallable(
      const PutProcurementPortalPreferenceRequestT& request) const {
    return SubmitCallable(&InvoicingClient::PutProcurementPortalPreference, request);
  }

  /**
   * An Async wrapper for PutProcurementPortalPreference that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename PutProcurementPortalPreferenceRequestT = Model::PutProcurementPortalPreferenceRequest>
  void PutProcurementPortalPreferenceAsync(const PutProcurementPortalPreferenceRequestT& request,
                                           const PutProcurementPortalPreferenceResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InvoicingClient::PutProcurementPortalPreference, request, handler, context);
  }

  /**
   * <p>Adds a tag to a resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&InvoicingClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InvoicingClient::TagResource, request, handler, context);
  }

  /**
   * <p> Removes a tag from a resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&InvoicingClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InvoicingClient::UntagResource, request, handler, context);
  }

  /**
   * <p>You can update the invoice unit configuration at any time, and Amazon Web
   * Services will use the latest configuration at the end of the
   * month.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/UpdateInvoiceUnit">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateInvoiceUnitOutcome UpdateInvoiceUnit(const Model::UpdateInvoiceUnitRequest& request) const;

  /**
   * A Callable wrapper for UpdateInvoiceUnit that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateInvoiceUnitRequestT = Model::UpdateInvoiceUnitRequest>
  Model::UpdateInvoiceUnitOutcomeCallable UpdateInvoiceUnitCallable(const UpdateInvoiceUnitRequestT& request) const {
    return SubmitCallable(&InvoicingClient::UpdateInvoiceUnit, request);
  }

  /**
   * An Async wrapper for UpdateInvoiceUnit that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateInvoiceUnitRequestT = Model::UpdateInvoiceUnitRequest>
  void UpdateInvoiceUnitAsync(const UpdateInvoiceUnitRequestT& request, const UpdateInvoiceUnitResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InvoicingClient::UpdateInvoiceUnit, request, handler, context);
  }

  /**
   * <p>Updates the status of a procurement portal preference, including the
   * activation state of e-invoice delivery and purchase order retrieval
   * features.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/UpdateProcurementPortalPreferenceStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateProcurementPortalPreferenceStatusOutcome UpdateProcurementPortalPreferenceStatus(
      const Model::UpdateProcurementPortalPreferenceStatusRequest& request) const;

  /**
   * A Callable wrapper for UpdateProcurementPortalPreferenceStatus that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename UpdateProcurementPortalPreferenceStatusRequestT = Model::UpdateProcurementPortalPreferenceStatusRequest>
  Model::UpdateProcurementPortalPreferenceStatusOutcomeCallable UpdateProcurementPortalPreferenceStatusCallable(
      const UpdateProcurementPortalPreferenceStatusRequestT& request) const {
    return SubmitCallable(&InvoicingClient::UpdateProcurementPortalPreferenceStatus, request);
  }

  /**
   * An Async wrapper for UpdateProcurementPortalPreferenceStatus that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename UpdateProcurementPortalPreferenceStatusRequestT = Model::UpdateProcurementPortalPreferenceStatusRequest>
  void UpdateProcurementPortalPreferenceStatusAsync(const UpdateProcurementPortalPreferenceStatusRequestT& request,
                                                    const UpdateProcurementPortalPreferenceStatusResponseReceivedHandler& handler,
                                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&InvoicingClient::UpdateProcurementPortalPreferenceStatus, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<InvoicingEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<InvoicingClient>;
  void init(const InvoicingClientConfiguration& clientConfiguration);

  InvoicingClientConfiguration m_clientConfiguration;
  std::shared_ptr<InvoicingEndpointProviderBase> m_endpointProvider;
};

}  // namespace Invoicing
}  // namespace Aws
