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
    AWS_APIGATEWAY_API Integration();
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
    inline const IntegrationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const IntegrationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(IntegrationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Integration& WithType(const IntegrationType& value) { SetType(value); return *this;}
    inline Integration& WithType(IntegrationType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the integration's HTTP method type. For the Type property, if you
     * specify <code>MOCK</code>, this property is optional. For Lambda integrations,
     * you must set the integration method to <code>POST</code>. For all other types,
     * you must specify this property.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }
    inline Integration& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}
    inline Integration& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}
    inline Integration& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}
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
    inline const Aws::String& GetUri() const{ return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }
    inline Integration& WithUri(const Aws::String& value) { SetUri(value); return *this;}
    inline Integration& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}
    inline Integration& WithUri(const char* value) { SetUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the network connection to the integration endpoint. The valid
     * value is <code>INTERNET</code> for connections through the public routable
     * internet or <code>VPC_LINK</code> for private connections between API Gateway
     * and a network load balancer in a VPC. The default value is
     * <code>INTERNET</code>.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(const ConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline void SetConnectionType(ConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }
    inline Integration& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}
    inline Integration& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VpcLink used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }
    inline Integration& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline Integration& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline Integration& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
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
    inline const Aws::String& GetCredentials() const{ return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    inline void SetCredentials(const Aws::String& value) { m_credentialsHasBeenSet = true; m_credentials = value; }
    inline void SetCredentials(Aws::String&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }
    inline void SetCredentials(const char* value) { m_credentialsHasBeenSet = true; m_credentials.assign(value); }
    inline Integration& WithCredentials(const Aws::String& value) { SetCredentials(value); return *this;}
    inline Integration& WithCredentials(Aws::String&& value) { SetCredentials(std::move(value)); return *this;}
    inline Integration& WithCredentials(const char* value) { SetCredentials(value); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestParameters() const{ return m_requestParameters; }
    inline bool RequestParametersHasBeenSet() const { return m_requestParametersHasBeenSet; }
    inline void SetRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }
    inline void SetRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::move(value); }
    inline Integration& WithRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestParameters(value); return *this;}
    inline Integration& WithRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestParameters(std::move(value)); return *this;}
    inline Integration& AddRequestParameters(const Aws::String& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }
    inline Integration& AddRequestParameters(Aws::String&& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }
    inline Integration& AddRequestParameters(const Aws::String& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }
    inline Integration& AddRequestParameters(Aws::String&& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline Integration& AddRequestParameters(const char* key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }
    inline Integration& AddRequestParameters(Aws::String&& key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }
    inline Integration& AddRequestParameters(const char* key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestTemplates() const{ return m_requestTemplates; }
    inline bool RequestTemplatesHasBeenSet() const { return m_requestTemplatesHasBeenSet; }
    inline void SetRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = value; }
    inline void SetRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = std::move(value); }
    inline Integration& WithRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestTemplates(value); return *this;}
    inline Integration& WithRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestTemplates(std::move(value)); return *this;}
    inline Integration& AddRequestTemplates(const Aws::String& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, value); return *this; }
    inline Integration& AddRequestTemplates(Aws::String&& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), value); return *this; }
    inline Integration& AddRequestTemplates(const Aws::String& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, std::move(value)); return *this; }
    inline Integration& AddRequestTemplates(Aws::String&& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), std::move(value)); return *this; }
    inline Integration& AddRequestTemplates(const char* key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, std::move(value)); return *this; }
    inline Integration& AddRequestTemplates(Aws::String&& key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), value); return *this; }
    inline Integration& AddRequestTemplates(const char* key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, value); return *this; }
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
    inline const Aws::String& GetPassthroughBehavior() const{ return m_passthroughBehavior; }
    inline bool PassthroughBehaviorHasBeenSet() const { return m_passthroughBehaviorHasBeenSet; }
    inline void SetPassthroughBehavior(const Aws::String& value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior = value; }
    inline void SetPassthroughBehavior(Aws::String&& value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior = std::move(value); }
    inline void SetPassthroughBehavior(const char* value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior.assign(value); }
    inline Integration& WithPassthroughBehavior(const Aws::String& value) { SetPassthroughBehavior(value); return *this;}
    inline Integration& WithPassthroughBehavior(Aws::String&& value) { SetPassthroughBehavior(std::move(value)); return *this;}
    inline Integration& WithPassthroughBehavior(const char* value) { SetPassthroughBehavior(value); return *this;}
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
    inline const ContentHandlingStrategy& GetContentHandling() const{ return m_contentHandling; }
    inline bool ContentHandlingHasBeenSet() const { return m_contentHandlingHasBeenSet; }
    inline void SetContentHandling(const ContentHandlingStrategy& value) { m_contentHandlingHasBeenSet = true; m_contentHandling = value; }
    inline void SetContentHandling(ContentHandlingStrategy&& value) { m_contentHandlingHasBeenSet = true; m_contentHandling = std::move(value); }
    inline Integration& WithContentHandling(const ContentHandlingStrategy& value) { SetContentHandling(value); return *this;}
    inline Integration& WithContentHandling(ContentHandlingStrategy&& value) { SetContentHandling(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds.</p>
     */
    inline int GetTimeoutInMillis() const{ return m_timeoutInMillis; }
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
    inline const Aws::String& GetCacheNamespace() const{ return m_cacheNamespace; }
    inline bool CacheNamespaceHasBeenSet() const { return m_cacheNamespaceHasBeenSet; }
    inline void SetCacheNamespace(const Aws::String& value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace = value; }
    inline void SetCacheNamespace(Aws::String&& value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace = std::move(value); }
    inline void SetCacheNamespace(const char* value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace.assign(value); }
    inline Integration& WithCacheNamespace(const Aws::String& value) { SetCacheNamespace(value); return *this;}
    inline Integration& WithCacheNamespace(Aws::String&& value) { SetCacheNamespace(std::move(value)); return *this;}
    inline Integration& WithCacheNamespace(const char* value) { SetCacheNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of request parameters whose values API Gateway caches. To be valid
     * values for <code>cacheKeyParameters</code>, these parameters must also be
     * specified for Method <code>requestParameters</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheKeyParameters() const{ return m_cacheKeyParameters; }
    inline bool CacheKeyParametersHasBeenSet() const { return m_cacheKeyParametersHasBeenSet; }
    inline void SetCacheKeyParameters(const Aws::Vector<Aws::String>& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters = value; }
    inline void SetCacheKeyParameters(Aws::Vector<Aws::String>&& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters = std::move(value); }
    inline Integration& WithCacheKeyParameters(const Aws::Vector<Aws::String>& value) { SetCacheKeyParameters(value); return *this;}
    inline Integration& WithCacheKeyParameters(Aws::Vector<Aws::String>&& value) { SetCacheKeyParameters(std::move(value)); return *this;}
    inline Integration& AddCacheKeyParameters(const Aws::String& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(value); return *this; }
    inline Integration& AddCacheKeyParameters(Aws::String&& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(std::move(value)); return *this; }
    inline Integration& AddCacheKeyParameters(const char* value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline const Aws::Map<Aws::String, IntegrationResponse>& GetIntegrationResponses() const{ return m_integrationResponses; }
    inline bool IntegrationResponsesHasBeenSet() const { return m_integrationResponsesHasBeenSet; }
    inline void SetIntegrationResponses(const Aws::Map<Aws::String, IntegrationResponse>& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses = value; }
    inline void SetIntegrationResponses(Aws::Map<Aws::String, IntegrationResponse>&& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses = std::move(value); }
    inline Integration& WithIntegrationResponses(const Aws::Map<Aws::String, IntegrationResponse>& value) { SetIntegrationResponses(value); return *this;}
    inline Integration& WithIntegrationResponses(Aws::Map<Aws::String, IntegrationResponse>&& value) { SetIntegrationResponses(std::move(value)); return *this;}
    inline Integration& AddIntegrationResponses(const Aws::String& key, const IntegrationResponse& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses.emplace(key, value); return *this; }
    inline Integration& AddIntegrationResponses(Aws::String&& key, const IntegrationResponse& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses.emplace(std::move(key), value); return *this; }
    inline Integration& AddIntegrationResponses(const Aws::String& key, IntegrationResponse&& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses.emplace(key, std::move(value)); return *this; }
    inline Integration& AddIntegrationResponses(Aws::String&& key, IntegrationResponse&& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses.emplace(std::move(key), std::move(value)); return *this; }
    inline Integration& AddIntegrationResponses(const char* key, IntegrationResponse&& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses.emplace(key, std::move(value)); return *this; }
    inline Integration& AddIntegrationResponses(const char* key, const IntegrationResponse& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the TLS configuration for an integration.</p>
     */
    inline const TlsConfig& GetTlsConfig() const{ return m_tlsConfig; }
    inline bool TlsConfigHasBeenSet() const { return m_tlsConfigHasBeenSet; }
    inline void SetTlsConfig(const TlsConfig& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = value; }
    inline void SetTlsConfig(TlsConfig&& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = std::move(value); }
    inline Integration& WithTlsConfig(const TlsConfig& value) { SetTlsConfig(value); return *this;}
    inline Integration& WithTlsConfig(TlsConfig&& value) { SetTlsConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline Integration& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline Integration& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline Integration& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    IntegrationType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    ConnectionType m_connectionType;
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

    ContentHandlingStrategy m_contentHandling;
    bool m_contentHandlingHasBeenSet = false;

    int m_timeoutInMillis;
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
