/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxyPaginationBase.h>
#include <aws/elb-proxy/ELBProxyServiceClientModel.h>
#include <aws/elb-proxy/ELBProxyWaiter.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>

namespace Aws {
namespace ELBProxy {
/**
 * <p>Elastic Load Balancing for Envoy is a fully managed service that runs the
 * open-source Envoy proxy on your behalf. You bring your Envoy configuration, and
 * AWS provisions the proxy, scales it, upgrades the Envoy version, patches the
 * operating system, and monitors its health. The proxy runs on Amazon EC2
 * instances inside your own virtual private cloud (VPC), so you keep full control
 * of your network, security groups, and IAM.</p>
 */
class AWS_ELBPROXY_API ELBProxyClient : public Aws::Client::AWSRpcV2CborClient,
                                        public Aws::Client::ClientWithAsyncTemplateMethods<ELBProxyClient>,
                                        public ELBProxyPaginationBase<ELBProxyClient>,
                                        public ELBProxyWaiter<ELBProxyClient> {
 public:
  typedef Aws::Client::AWSRpcV2CborClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef ELBProxyClientConfiguration ClientConfigurationType;
  typedef ELBProxyEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ELBProxyClient(const Aws::ELBProxy::ELBProxyClientConfiguration& clientConfiguration = Aws::ELBProxy::ELBProxyClientConfiguration(),
                 std::shared_ptr<ELBProxyEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ELBProxyClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<ELBProxyEndpointProviderBase> endpointProvider = nullptr,
                 const Aws::ELBProxy::ELBProxyClientConfiguration& clientConfiguration = Aws::ELBProxy::ELBProxyClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ELBProxyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 std::shared_ptr<ELBProxyEndpointProviderBase> endpointProvider = nullptr,
                 const Aws::ELBProxy::ELBProxyClientConfiguration& clientConfiguration = Aws::ELBProxy::ELBProxyClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ELBProxyClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ELBProxyClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ELBProxyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~ELBProxyClient();

  /**
   * <p>Associates an ACM certificate with the specified Proxy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/AssociateCertificate">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateCertificateOutcome AssociateCertificate(const Model::AssociateCertificateRequest& request) const;

  /**
   * A Callable wrapper for AssociateCertificate that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AssociateCertificateRequestT = Model::AssociateCertificateRequest>
  Model::AssociateCertificateOutcomeCallable AssociateCertificateCallable(const AssociateCertificateRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::AssociateCertificate, request);
  }

  /**
   * An Async wrapper for AssociateCertificate that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename AssociateCertificateRequestT = Model::AssociateCertificateRequest>
  void AssociateCertificateAsync(const AssociateCertificateRequestT& request, const AssociateCertificateResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::AssociateCertificate, request, handler, context);
  }

  /**
   * <p>Creates a proxy. A proxy is a fully managed, Envoy-based proxy that runs your
   * Envoy configuration on Amazon EC2 instances inside your own virtual private
   * cloud (VPC). AWS provisions and scales the proxy, upgrades the Envoy version,
   * patches the operating system, and monitors its health.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/CreateProxy">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateProxyOutcome CreateProxy(const Model::CreateProxyRequest& request) const;

  /**
   * A Callable wrapper for CreateProxy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateProxyRequestT = Model::CreateProxyRequest>
  Model::CreateProxyOutcomeCallable CreateProxyCallable(const CreateProxyRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::CreateProxy, request);
  }

  /**
   * An Async wrapper for CreateProxy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateProxyRequestT = Model::CreateProxyRequest>
  void CreateProxyAsync(const CreateProxyRequestT& request, const CreateProxyResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::CreateProxy, request, handler, context);
  }

  /**
   * <p>Deletes a proxy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/DeleteProxy">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteProxyOutcome DeleteProxy(const Model::DeleteProxyRequest& request) const;

  /**
   * A Callable wrapper for DeleteProxy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteProxyRequestT = Model::DeleteProxyRequest>
  Model::DeleteProxyOutcomeCallable DeleteProxyCallable(const DeleteProxyRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::DeleteProxy, request);
  }

  /**
   * An Async wrapper for DeleteProxy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteProxyRequestT = Model::DeleteProxyRequest>
  void DeleteProxyAsync(const DeleteProxyRequestT& request, const DeleteProxyResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::DeleteProxy, request, handler, context);
  }

  /**
   * <p>Disassociates an ACM certificate from the specified proxy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/DisassociateCertificate">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateCertificateOutcome DisassociateCertificate(const Model::DisassociateCertificateRequest& request) const;

  /**
   * A Callable wrapper for DisassociateCertificate that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DisassociateCertificateRequestT = Model::DisassociateCertificateRequest>
  Model::DisassociateCertificateOutcomeCallable DisassociateCertificateCallable(const DisassociateCertificateRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::DisassociateCertificate, request);
  }

  /**
   * An Async wrapper for DisassociateCertificate that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DisassociateCertificateRequestT = Model::DisassociateCertificateRequest>
  void DisassociateCertificateAsync(const DisassociateCertificateRequestT& request,
                                    const DisassociateCertificateResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::DisassociateCertificate, request, handler, context);
  }

  /**
   * <p>Retrieves information about the specified proxy.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/GetProxy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetProxyOutcome GetProxy(const Model::GetProxyRequest& request) const;

  /**
   * A Callable wrapper for GetProxy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetProxyRequestT = Model::GetProxyRequest>
  Model::GetProxyOutcomeCallable GetProxyCallable(const GetProxyRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::GetProxy, request);
  }

  /**
   * An Async wrapper for GetProxy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetProxyRequestT = Model::GetProxyRequest>
  void GetProxyAsync(const GetProxyRequestT& request, const GetProxyResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::GetProxy, request, handler, context);
  }

  /**
   * <p>Retrieves the attributes for the specified proxy.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/GetProxyAttributes">AWS
   * API Reference</a></p>
   */
  virtual Model::GetProxyAttributesOutcome GetProxyAttributes(const Model::GetProxyAttributesRequest& request) const;

  /**
   * A Callable wrapper for GetProxyAttributes that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetProxyAttributesRequestT = Model::GetProxyAttributesRequest>
  Model::GetProxyAttributesOutcomeCallable GetProxyAttributesCallable(const GetProxyAttributesRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::GetProxyAttributes, request);
  }

  /**
   * An Async wrapper for GetProxyAttributes that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetProxyAttributesRequestT = Model::GetProxyAttributesRequest>
  void GetProxyAttributesAsync(const GetProxyAttributesRequestT& request, const GetProxyAttributesResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::GetProxyAttributes, request, handler, context);
  }

  /**
   * <p>Retrieves the configuration file, the configuration archive, or both for the
   * specified proxy. This operation is separate from GetProxy so that you can grant
   * access to proxy metadata without granting access to the configuration
   * content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/GetProxyConfigurationContents">AWS
   * API Reference</a></p>
   */
  virtual Model::GetProxyConfigurationContentsOutcome GetProxyConfigurationContents(
      const Model::GetProxyConfigurationContentsRequest& request) const;

  /**
   * A Callable wrapper for GetProxyConfigurationContents that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetProxyConfigurationContentsRequestT = Model::GetProxyConfigurationContentsRequest>
  Model::GetProxyConfigurationContentsOutcomeCallable GetProxyConfigurationContentsCallable(
      const GetProxyConfigurationContentsRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::GetProxyConfigurationContents, request);
  }

  /**
   * An Async wrapper for GetProxyConfigurationContents that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetProxyConfigurationContentsRequestT = Model::GetProxyConfigurationContentsRequest>
  void GetProxyConfigurationContentsAsync(const GetProxyConfigurationContentsRequestT& request,
                                          const GetProxyConfigurationContentsResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::GetProxyConfigurationContents, request, handler, context);
  }

  /**
   * <p>Retrieves information about the specified proxy update.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/GetProxyUpdate">AWS
   * API Reference</a></p>
   */
  virtual Model::GetProxyUpdateOutcome GetProxyUpdate(const Model::GetProxyUpdateRequest& request) const;

  /**
   * A Callable wrapper for GetProxyUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetProxyUpdateRequestT = Model::GetProxyUpdateRequest>
  Model::GetProxyUpdateOutcomeCallable GetProxyUpdateCallable(const GetProxyUpdateRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::GetProxyUpdate, request);
  }

  /**
   * An Async wrapper for GetProxyUpdate that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetProxyUpdateRequestT = Model::GetProxyUpdateRequest>
  void GetProxyUpdateAsync(const GetProxyUpdateRequestT& request, const GetProxyUpdateResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::GetProxyUpdate, request, handler, context);
  }

  /**
   * <p>Lists the ACM certificate associations for the specified proxy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ListCertificateAssociations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCertificateAssociationsOutcome ListCertificateAssociations(
      const Model::ListCertificateAssociationsRequest& request) const;

  /**
   * A Callable wrapper for ListCertificateAssociations that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListCertificateAssociationsRequestT = Model::ListCertificateAssociationsRequest>
  Model::ListCertificateAssociationsOutcomeCallable ListCertificateAssociationsCallable(
      const ListCertificateAssociationsRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::ListCertificateAssociations, request);
  }

  /**
   * An Async wrapper for ListCertificateAssociations that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListCertificateAssociationsRequestT = Model::ListCertificateAssociationsRequest>
  void ListCertificateAssociationsAsync(const ListCertificateAssociationsRequestT& request,
                                        const ListCertificateAssociationsResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::ListCertificateAssociations, request, handler, context);
  }

  /**
   * <p>Lists the proxies owned by the caller account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ListProxies">AWS
   * API Reference</a></p>
   */
  virtual Model::ListProxiesOutcome ListProxies(const Model::ListProxiesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListProxies that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListProxiesRequestT = Model::ListProxiesRequest>
  Model::ListProxiesOutcomeCallable ListProxiesCallable(const ListProxiesRequestT& request = {}) const {
    return SubmitCallable(&ELBProxyClient::ListProxies, request);
  }

  /**
   * An Async wrapper for ListProxies that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListProxiesRequestT = Model::ListProxiesRequest>
  void ListProxiesAsync(const ListProxiesResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                        const ListProxiesRequestT& request = {}) const {
    return SubmitAsync(&ELBProxyClient::ListProxies, request, handler, context);
  }

  /**
   * <p>Lists the updates for the specified proxy, most recently submitted
   * first.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ListProxyUpdates">AWS
   * API Reference</a></p>
   */
  virtual Model::ListProxyUpdatesOutcome ListProxyUpdates(const Model::ListProxyUpdatesRequest& request) const;

  /**
   * A Callable wrapper for ListProxyUpdates that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListProxyUpdatesRequestT = Model::ListProxyUpdatesRequest>
  Model::ListProxyUpdatesOutcomeCallable ListProxyUpdatesCallable(const ListProxyUpdatesRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::ListProxyUpdates, request);
  }

  /**
   * An Async wrapper for ListProxyUpdates that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListProxyUpdatesRequestT = Model::ListProxyUpdatesRequest>
  void ListProxyUpdatesAsync(const ListProxyUpdatesRequestT& request, const ListProxyUpdatesResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::ListProxyUpdates, request, handler, context);
  }

  /**
   * <p>Lists the available proxy versions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ListProxyVersions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListProxyVersionsOutcome ListProxyVersions(const Model::ListProxyVersionsRequest& request) const;

  /**
   * A Callable wrapper for ListProxyVersions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListProxyVersionsRequestT = Model::ListProxyVersionsRequest>
  Model::ListProxyVersionsOutcomeCallable ListProxyVersionsCallable(const ListProxyVersionsRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::ListProxyVersions, request);
  }

  /**
   * An Async wrapper for ListProxyVersions that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListProxyVersionsRequestT = Model::ListProxyVersionsRequest>
  void ListProxyVersionsAsync(const ListProxyVersionsRequestT& request, const ListProxyVersionsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::ListProxyVersions, request, handler, context);
  }

  /**
   * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes the specified tags from the specified resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the attributes for the specified proxy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/UpdateProxyAttributes">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateProxyAttributesOutcome UpdateProxyAttributes(const Model::UpdateProxyAttributesRequest& request) const;

  /**
   * A Callable wrapper for UpdateProxyAttributes that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateProxyAttributesRequestT = Model::UpdateProxyAttributesRequest>
  Model::UpdateProxyAttributesOutcomeCallable UpdateProxyAttributesCallable(const UpdateProxyAttributesRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::UpdateProxyAttributes, request);
  }

  /**
   * An Async wrapper for UpdateProxyAttributes that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateProxyAttributesRequestT = Model::UpdateProxyAttributesRequest>
  void UpdateProxyAttributesAsync(const UpdateProxyAttributesRequestT& request, const UpdateProxyAttributesResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::UpdateProxyAttributes, request, handler, context);
  }

  /**
   * <p>Updates the configuration for the specified proxy. You can update the
   * configuration file, the configuration archive, or both.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/UpdateProxyConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateProxyConfigurationOutcome UpdateProxyConfiguration(const Model::UpdateProxyConfigurationRequest& request) const;

  /**
   * A Callable wrapper for UpdateProxyConfiguration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateProxyConfigurationRequestT = Model::UpdateProxyConfigurationRequest>
  Model::UpdateProxyConfigurationOutcomeCallable UpdateProxyConfigurationCallable(const UpdateProxyConfigurationRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::UpdateProxyConfiguration, request);
  }

  /**
   * An Async wrapper for UpdateProxyConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateProxyConfigurationRequestT = Model::UpdateProxyConfigurationRequest>
  void UpdateProxyConfigurationAsync(const UpdateProxyConfigurationRequestT& request,
                                     const UpdateProxyConfigurationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::UpdateProxyConfiguration, request, handler, context);
  }

  /**
   * <p>Updates the network configuration for the specified proxy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/UpdateProxyNetworkConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateProxyNetworkConfigurationOutcome UpdateProxyNetworkConfiguration(
      const Model::UpdateProxyNetworkConfigurationRequest& request) const;

  /**
   * A Callable wrapper for UpdateProxyNetworkConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateProxyNetworkConfigurationRequestT = Model::UpdateProxyNetworkConfigurationRequest>
  Model::UpdateProxyNetworkConfigurationOutcomeCallable UpdateProxyNetworkConfigurationCallable(
      const UpdateProxyNetworkConfigurationRequestT& request) const {
    return SubmitCallable(&ELBProxyClient::UpdateProxyNetworkConfiguration, request);
  }

  /**
   * An Async wrapper for UpdateProxyNetworkConfiguration that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdateProxyNetworkConfigurationRequestT = Model::UpdateProxyNetworkConfigurationRequest>
  void UpdateProxyNetworkConfigurationAsync(const UpdateProxyNetworkConfigurationRequestT& request,
                                            const UpdateProxyNetworkConfigurationResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ELBProxyClient::UpdateProxyNetworkConfiguration, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<ELBProxyEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<ELBProxyClient>;
  void init(const ELBProxyClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, ELBProxyError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  ELBProxyClientConfiguration m_clientConfiguration;
  std::shared_ptr<ELBProxyEndpointProviderBase> m_endpointProvider;
};

}  // namespace ELBProxy
}  // namespace Aws
