/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/model/IntegrationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/ConnectionType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/ContentHandlingStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/TlsConfig.h>
#include <aws/apigateway/model/IntegrationResponse.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents an <code>HTTP</code>, <code>HTTP_PROXY</code>, <code>AWS</code>,
   * <code>AWS_PROXY</code>, or Mock integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Integration">AWS
   * API Reference</a></p>
   */
  class Integration
  {
  public:
    AWS_APIGATEWAY_API Integration() = default;
    AWS_APIGATEWAY_API Integration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Integration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies an API method integration type. The valid value is one of the
     * following:</p> <p>For the HTTP and HTTP proxy integrations, each integration can
     * specify a protocol (<code>http/https</code>), port and path. Standard 80 and 443
     * ports are supported as well as custom ports above 1024. An HTTP or HTTP proxy
     * integration with a <code>connectionType</code> of <code>VPC_LINK</code> is
     * referred to as a private integration and uses a VpcLink to connect API Gateway
     * to a network load balancer of a VPC.</p>
     */
    inline IntegrationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(IntegrationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Integration& WithType(IntegrationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the integration's HTTP method type. For the Type property, if you
     * specify <code>MOCK</code>, this property is optional. For Lambda integrations,
     * you must set the integration method to <code>POST</code>. For all other types,
     * you must specify this property.</p>
     */
    inline const Aws::String& GetHttpMethod() const { return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    template<typename HttpMethodT = Aws::String>
    void SetHttpMethod(HttpMethodT&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::forward<HttpMethodT>(value); }
    template<typename HttpMethodT = Aws::String>
    Integration& WithHttpMethod(HttpMethodT&& value) { SetHttpMethod(std::forward<HttpMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies Uniform Resource Identifier (URI) of the integration endpoint.</p>
     * <p>For <code>HTTP</code> or <code>HTTP_PROXY</code> integrations, the URI must
     * be a fully formed, encoded HTTP(S) URL according to the RFC-3986 specification
     * for standard integrations. If <code>connectionType</code> is
     * <code>VPC_LINK</code> specify the Network Load Balancer DNS name. For
     * <code>AWS</code> or <code>AWS_PROXY</code> integrations, the URI is of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:path|action/{service_api}</code>.
     * Here, {Region} is the API Gateway region (e.g., us-east-1); {service} is the
     * name of the integrated Amazon Web Services service (e.g., s3); and {subdomain}
     * is a designated subdomain supported by certain Amazon Web Services service for
     * fast host-name lookup. action can be used for an Amazon Web Services service
     * action-based API, using an Action={name}&amp;{p1}={v1}&amp;p2={v2}... query
     * string. The ensuing {service_api} refers to a supported action {name} plus any
     * required input parameters. Alternatively, path can be used for an Amazon Web
     * Services service path-based API. The ensuing service_api refers to the path to
     * an Amazon Web Services service resource, including the region of the integrated
     * Amazon Web Services service, if applicable. For example, for integration with
     * the S3 API of GetObject, the uri can be either
     * <code>arn:aws:apigateway:us-west-2:s3:action/GetObject&amp;Bucket={bucket}&amp;Key={key}</code>
     * or <code>arn:aws:apigateway:us-west-2:s3:path/{bucket}/{key}</code> </p>
     */
    inline const Aws::String& GetUri() const { return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    template<typename UriT = Aws::String>
    void SetUri(UriT&& value) { m_uriHasBeenSet = true; m_uri = std::forward<UriT>(value); }
    template<typename UriT = Aws::String>
    Integration& WithUri(UriT&& value) { SetUri(std::forward<UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the network connection to the integration endpoint. The valid
     * value is <code>INTERNET</code> for connections through the public routable
     * internet or <code>VPC_LINK</code> for private connections between API Gateway
     * and a network load balancer in a VPC. The default value is
     * <code>INTERNET</code>.</p>
     */
    inline ConnectionType GetConnectionType() const { return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(ConnectionType value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline Integration& WithConnectionType(ConnectionType value) { SetConnectionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VpcLink used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    Integration& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported Amazon Web Services services, specify null.</p>
     */
    inline const Aws::String& GetCredentials() const { return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    template<typename CredentialsT = Aws::String>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = Aws::String>
    Integration& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map specifying request parameters that are passed from the method
     * request to the back end. The key is an integration request parameter name and
     * the associated value is a method request parameter value or static value that
     * must be enclosed within single quotes and pre-encoded as required by the back
     * end. The method request parameter value must match the pattern of
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * <code>querystring</code>, <code>path</code>, or <code>header</code> and
     * <code>name</code> must be a valid and unique method request parameter name.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestParameters() const { return m_requestParameters; }
    inline bool RequestParametersHasBeenSet() const { return m_requestParametersHasBeenSet; }
    template<typename RequestParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetRequestParameters(RequestParametersT&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::forward<RequestParametersT>(value); }
    template<typename RequestParametersT = Aws::Map<Aws::String, Aws::String>>
    Integration& WithRequestParameters(RequestParametersT&& value) { SetRequestParameters(std::forward<RequestParametersT>(value)); return *this;}
    template<typename RequestParametersKeyT = Aws::String, typename RequestParametersValueT = Aws::String>
    Integration& AddRequestParameters(RequestParametersKeyT&& key, RequestParametersValueT&& value) {
      m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::forward<RequestParametersKeyT>(key), std::forward<RequestParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestTemplates() const { return m_requestTemplates; }
    inline bool RequestTemplatesHasBeenSet() const { return m_requestTemplatesHasBeenSet; }
    template<typename RequestTemplatesT = Aws::Map<Aws::String, Aws::String>>
    void SetRequestTemplates(RequestTemplatesT&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = std::forward<RequestTemplatesT>(value); }
    template<typename RequestTemplatesT = Aws::Map<Aws::String, Aws::String>>
    Integration& WithRequestTemplates(RequestTemplatesT&& value) { SetRequestTemplates(std::forward<RequestTemplatesT>(value)); return *this;}
    template<typename RequestTemplatesKeyT = Aws::String, typename RequestTemplatesValueT = Aws::String>
    Integration& AddRequestTemplates(RequestTemplatesKeyT&& key, RequestTemplatesValueT&& value) {
      m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::forward<RequestTemplatesKeyT>(key), std::forward<RequestTemplatesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies how the method request body of an unmapped content type will be
     * passed through the integration request to the back end without transformation. A
     * content type is unmapped if no mapping template is defined in the integration or
     * the content type does not match any of the mapped content types, as specified in
     * <code>requestTemplates</code>. The valid value is one of the following:
     * <code>WHEN_NO_MATCH</code>: passes the method request body through the
     * integration request to the back end without transformation when the method
     * request content type does not match any content type associated with the mapping
     * templates defined in the integration request. <code>WHEN_NO_TEMPLATES</code>:
     * passes the method request body through the integration request to the back end
     * without transformation when no mapping template is defined in the integration
     * request. If a template is defined when this option is selected, the method
     * request of an unmapped content-type will be rejected with an HTTP 415
     * Unsupported Media Type response. <code>NEVER</code>: rejects the method request
     * with an HTTP 415 Unsupported Media Type response when either the method request
     * content type does not match any content type associated with the mapping
     * templates defined in the integration request or no mapping template is defined
     * in the integration request.</p>
     */
    inline const Aws::String& GetPassthroughBehavior() const { return m_passthroughBehavior; }
    inline bool PassthroughBehaviorHasBeenSet() const { return m_passthroughBehaviorHasBeenSet; }
    template<typename PassthroughBehaviorT = Aws::String>
    void SetPassthroughBehavior(PassthroughBehaviorT&& value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior = std::forward<PassthroughBehaviorT>(value); }
    template<typename PassthroughBehaviorT = Aws::String>
    Integration& WithPassthroughBehavior(PassthroughBehaviorT&& value) { SetPassthroughBehavior(std::forward<PassthroughBehaviorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <p>If this property is not defined, the request
     * payload will be passed through from the method request to integration request
     * without modification, provided that the <code>passthroughBehavior</code> is
     * configured to support payload pass-through.</p>
     */
    inline ContentHandlingStrategy GetContentHandling() const { return m_contentHandling; }
    inline bool ContentHandlingHasBeenSet() const { return m_contentHandlingHasBeenSet; }
    inline void SetContentHandling(ContentHandlingStrategy value) { m_contentHandlingHasBeenSet = true; m_contentHandling = value; }
    inline Integration& WithContentHandling(ContentHandlingStrategy value) { SetContentHandling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds. You can increase the default value to longer
     * than 29 seconds for Regional or private APIs only.</p>
     */
    inline int GetTimeoutInMillis() const { return m_timeoutInMillis; }
    inline bool TimeoutInMillisHasBeenSet() const { return m_timeoutInMillisHasBeenSet; }
    inline void SetTimeoutInMillis(int value) { m_timeoutInMillisHasBeenSet = true; m_timeoutInMillis = value; }
    inline Integration& WithTimeoutInMillis(int value) { SetTimeoutInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a group of related cached parameters. By default, API Gateway uses
     * the resource ID as the <code>cacheNamespace</code>. You can specify the same
     * <code>cacheNamespace</code> across resources to return the same cached data for
     * requests to different resources.</p>
     */
    inline const Aws::String& GetCacheNamespace() const { return m_cacheNamespace; }
    inline bool CacheNamespaceHasBeenSet() const { return m_cacheNamespaceHasBeenSet; }
    template<typename CacheNamespaceT = Aws::String>
    void SetCacheNamespace(CacheNamespaceT&& value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace = std::forward<CacheNamespaceT>(value); }
    template<typename CacheNamespaceT = Aws::String>
    Integration& WithCacheNamespace(CacheNamespaceT&& value) { SetCacheNamespace(std::forward<CacheNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of request parameters whose values API Gateway caches. To be valid
     * values for <code>cacheKeyParameters</code>, these parameters must also be
     * specified for Method <code>requestParameters</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheKeyParameters() const { return m_cacheKeyParameters; }
    inline bool CacheKeyParametersHasBeenSet() const { return m_cacheKeyParametersHasBeenSet; }
    template<typename CacheKeyParametersT = Aws::Vector<Aws::String>>
    void SetCacheKeyParameters(CacheKeyParametersT&& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters = std::forward<CacheKeyParametersT>(value); }
    template<typename CacheKeyParametersT = Aws::Vector<Aws::String>>
    Integration& WithCacheKeyParameters(CacheKeyParametersT&& value) { SetCacheKeyParameters(std::forward<CacheKeyParametersT>(value)); return *this;}
    template<typename CacheKeyParametersT = Aws::String>
    Integration& AddCacheKeyParameters(CacheKeyParametersT&& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.emplace_back(std::forward<CacheKeyParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline const Aws::Map<Aws::String, IntegrationResponse>& GetIntegrationResponses() const { return m_integrationResponses; }
    inline bool IntegrationResponsesHasBeenSet() const { return m_integrationResponsesHasBeenSet; }
    template<typename IntegrationResponsesT = Aws::Map<Aws::String, IntegrationResponse>>
    void SetIntegrationResponses(IntegrationResponsesT&& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses = std::forward<IntegrationResponsesT>(value); }
    template<typename IntegrationResponsesT = Aws::Map<Aws::String, IntegrationResponse>>
    Integration& WithIntegrationResponses(IntegrationResponsesT&& value) { SetIntegrationResponses(std::forward<IntegrationResponsesT>(value)); return *this;}
    template<typename IntegrationResponsesKeyT = Aws::String, typename IntegrationResponsesValueT = IntegrationResponse>
    Integration& AddIntegrationResponses(IntegrationResponsesKeyT&& key, IntegrationResponsesValueT&& value) {
      m_integrationResponsesHasBeenSet = true; m_integrationResponses.emplace(std::forward<IntegrationResponsesKeyT>(key), std::forward<IntegrationResponsesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the TLS configuration for an integration.</p>
     */
    inline const TlsConfig& GetTlsConfig() const { return m_tlsConfig; }
    inline bool TlsConfigHasBeenSet() const { return m_tlsConfigHasBeenSet; }
    template<typename TlsConfigT = TlsConfig>
    void SetTlsConfig(TlsConfigT&& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = std::forward<TlsConfigT>(value); }
    template<typename TlsConfigT = TlsConfig>
    Integration& WithTlsConfig(TlsConfigT&& value) { SetTlsConfig(std::forward<TlsConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    Integration& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IntegrationType m_type{IntegrationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    ConnectionType m_connectionType{ConnectionType::NOT_SET};
    bool m_connectionTypeHasBeenSet = false;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::String m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestParameters;
    bool m_requestParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestTemplates;
    bool m_requestTemplatesHasBeenSet = false;

    Aws::String m_passthroughBehavior;
    bool m_passthroughBehaviorHasBeenSet = false;

    ContentHandlingStrategy m_contentHandling{ContentHandlingStrategy::NOT_SET};
    bool m_contentHandlingHasBeenSet = false;

    int m_timeoutInMillis{0};
    bool m_timeoutInMillisHasBeenSet = false;

    Aws::String m_cacheNamespace;
    bool m_cacheNamespaceHasBeenSet = false;

    Aws::Vector<Aws::String> m_cacheKeyParameters;
    bool m_cacheKeyParametersHasBeenSet = false;

    Aws::Map<Aws::String, IntegrationResponse> m_integrationResponses;
    bool m_integrationResponsesHasBeenSet = false;

    TlsConfig m_tlsConfig;
    bool m_tlsConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
