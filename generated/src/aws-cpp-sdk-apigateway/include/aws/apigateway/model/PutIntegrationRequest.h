/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/IntegrationType.h>
#include <aws/apigateway/model/ConnectionType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/ContentHandlingStrategy.h>
#include <aws/apigateway/model/TlsConfig.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Sets up a method's integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutIntegrationRequest">AWS
   * API Reference</a></p>
   */
  class PutIntegrationRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API PutIntegrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutIntegration"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }
    inline PutIntegrationRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}
    inline PutIntegrationRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}
    inline PutIntegrationRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a put integration request's resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline PutIntegrationRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline PutIntegrationRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline PutIntegrationRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the HTTP method for the integration.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }
    inline PutIntegrationRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}
    inline PutIntegrationRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}
    inline PutIntegrationRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a put integration input's type.</p>
     */
    inline const IntegrationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const IntegrationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(IntegrationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline PutIntegrationRequest& WithType(const IntegrationType& value) { SetType(value); return *this;}
    inline PutIntegrationRequest& WithType(IntegrationType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP method for the integration.</p>
     */
    inline const Aws::String& GetIntegrationHttpMethod() const{ return m_integrationHttpMethod; }
    inline bool IntegrationHttpMethodHasBeenSet() const { return m_integrationHttpMethodHasBeenSet; }
    inline void SetIntegrationHttpMethod(const Aws::String& value) { m_integrationHttpMethodHasBeenSet = true; m_integrationHttpMethod = value; }
    inline void SetIntegrationHttpMethod(Aws::String&& value) { m_integrationHttpMethodHasBeenSet = true; m_integrationHttpMethod = std::move(value); }
    inline void SetIntegrationHttpMethod(const char* value) { m_integrationHttpMethodHasBeenSet = true; m_integrationHttpMethod.assign(value); }
    inline PutIntegrationRequest& WithIntegrationHttpMethod(const Aws::String& value) { SetIntegrationHttpMethod(value); return *this;}
    inline PutIntegrationRequest& WithIntegrationHttpMethod(Aws::String&& value) { SetIntegrationHttpMethod(std::move(value)); return *this;}
    inline PutIntegrationRequest& WithIntegrationHttpMethod(const char* value) { SetIntegrationHttpMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies Uniform Resource Identifier (URI) of the integration endpoint. For
     * HTTP or <code>HTTP_PROXY</code> integrations, the URI must be a fully formed,
     * encoded HTTP(S) URL according to the RFC-3986 specification, for either standard
     * integration, where <code>connectionType</code> is not <code>VPC_LINK</code>, or
     * private integration, where <code>connectionType</code> is <code>VPC_LINK</code>.
     * For a private HTTP integration, the URI is not used for routing. For
     * <code>AWS</code> or <code>AWS_PROXY</code> integrations, the URI is of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:path|action/{service_api</code>}.
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
     * the S3 API of <code>GetObject</code>, the <code>uri</code> can be either
     * <code>arn:aws:apigateway:us-west-2:s3:action/GetObject&amp;Bucket={bucket}&amp;Key={key}</code>
     * or <code>arn:aws:apigateway:us-west-2:s3:path/{bucket}/{key}</code>.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }
    inline PutIntegrationRequest& WithUri(const Aws::String& value) { SetUri(value); return *this;}
    inline PutIntegrationRequest& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}
    inline PutIntegrationRequest& WithUri(const char* value) { SetUri(value); return *this;}
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
    inline PutIntegrationRequest& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}
    inline PutIntegrationRequest& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VpcLink used for the integration. Specify this value only if
     * you specify <code>VPC_LINK</code> as the connection type.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }
    inline PutIntegrationRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline PutIntegrationRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline PutIntegrationRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline const Aws::String& GetCredentials() const{ return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    inline void SetCredentials(const Aws::String& value) { m_credentialsHasBeenSet = true; m_credentials = value; }
    inline void SetCredentials(Aws::String&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }
    inline void SetCredentials(const char* value) { m_credentialsHasBeenSet = true; m_credentials.assign(value); }
    inline PutIntegrationRequest& WithCredentials(const Aws::String& value) { SetCredentials(value); return *this;}
    inline PutIntegrationRequest& WithCredentials(Aws::String&& value) { SetCredentials(std::move(value)); return *this;}
    inline PutIntegrationRequest& WithCredentials(const char* value) { SetCredentials(value); return *this;}
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
    inline PutIntegrationRequest& WithRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestParameters(value); return *this;}
    inline PutIntegrationRequest& WithRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestParameters(std::move(value)); return *this;}
    inline PutIntegrationRequest& AddRequestParameters(const Aws::String& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }
    inline PutIntegrationRequest& AddRequestParameters(Aws::String&& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }
    inline PutIntegrationRequest& AddRequestParameters(const Aws::String& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }
    inline PutIntegrationRequest& AddRequestParameters(Aws::String&& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline PutIntegrationRequest& AddRequestParameters(const char* key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }
    inline PutIntegrationRequest& AddRequestParameters(Aws::String&& key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }
    inline PutIntegrationRequest& AddRequestParameters(const char* key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }
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
    inline PutIntegrationRequest& WithRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestTemplates(value); return *this;}
    inline PutIntegrationRequest& WithRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestTemplates(std::move(value)); return *this;}
    inline PutIntegrationRequest& AddRequestTemplates(const Aws::String& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, value); return *this; }
    inline PutIntegrationRequest& AddRequestTemplates(Aws::String&& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), value); return *this; }
    inline PutIntegrationRequest& AddRequestTemplates(const Aws::String& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, std::move(value)); return *this; }
    inline PutIntegrationRequest& AddRequestTemplates(Aws::String&& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), std::move(value)); return *this; }
    inline PutIntegrationRequest& AddRequestTemplates(const char* key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, std::move(value)); return *this; }
    inline PutIntegrationRequest& AddRequestTemplates(Aws::String&& key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), value); return *this; }
    inline PutIntegrationRequest& AddRequestTemplates(const char* key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p>
     */
    inline const Aws::String& GetPassthroughBehavior() const{ return m_passthroughBehavior; }
    inline bool PassthroughBehaviorHasBeenSet() const { return m_passthroughBehaviorHasBeenSet; }
    inline void SetPassthroughBehavior(const Aws::String& value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior = value; }
    inline void SetPassthroughBehavior(Aws::String&& value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior = std::move(value); }
    inline void SetPassthroughBehavior(const char* value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior.assign(value); }
    inline PutIntegrationRequest& WithPassthroughBehavior(const Aws::String& value) { SetPassthroughBehavior(value); return *this;}
    inline PutIntegrationRequest& WithPassthroughBehavior(Aws::String&& value) { SetPassthroughBehavior(std::move(value)); return *this;}
    inline PutIntegrationRequest& WithPassthroughBehavior(const char* value) { SetPassthroughBehavior(value); return *this;}
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
    inline PutIntegrationRequest& WithCacheNamespace(const Aws::String& value) { SetCacheNamespace(value); return *this;}
    inline PutIntegrationRequest& WithCacheNamespace(Aws::String&& value) { SetCacheNamespace(std::move(value)); return *this;}
    inline PutIntegrationRequest& WithCacheNamespace(const char* value) { SetCacheNamespace(value); return *this;}
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
    inline PutIntegrationRequest& WithCacheKeyParameters(const Aws::Vector<Aws::String>& value) { SetCacheKeyParameters(value); return *this;}
    inline PutIntegrationRequest& WithCacheKeyParameters(Aws::Vector<Aws::String>&& value) { SetCacheKeyParameters(std::move(value)); return *this;}
    inline PutIntegrationRequest& AddCacheKeyParameters(const Aws::String& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(value); return *this; }
    inline PutIntegrationRequest& AddCacheKeyParameters(Aws::String&& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(std::move(value)); return *this; }
    inline PutIntegrationRequest& AddCacheKeyParameters(const char* value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(value); return *this; }
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
    inline PutIntegrationRequest& WithContentHandling(const ContentHandlingStrategy& value) { SetContentHandling(value); return *this;}
    inline PutIntegrationRequest& WithContentHandling(ContentHandlingStrategy&& value) { SetContentHandling(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds.</p>
     */
    inline int GetTimeoutInMillis() const{ return m_timeoutInMillis; }
    inline bool TimeoutInMillisHasBeenSet() const { return m_timeoutInMillisHasBeenSet; }
    inline void SetTimeoutInMillis(int value) { m_timeoutInMillisHasBeenSet = true; m_timeoutInMillis = value; }
    inline PutIntegrationRequest& WithTimeoutInMillis(int value) { SetTimeoutInMillis(value); return *this;}
    ///@}

    ///@{
    
    inline const TlsConfig& GetTlsConfig() const{ return m_tlsConfig; }
    inline bool TlsConfigHasBeenSet() const { return m_tlsConfigHasBeenSet; }
    inline void SetTlsConfig(const TlsConfig& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = value; }
    inline void SetTlsConfig(TlsConfig&& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = std::move(value); }
    inline PutIntegrationRequest& WithTlsConfig(const TlsConfig& value) { SetTlsConfig(value); return *this;}
    inline PutIntegrationRequest& WithTlsConfig(TlsConfig&& value) { SetTlsConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    IntegrationType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_integrationHttpMethod;
    bool m_integrationHttpMethodHasBeenSet = false;

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

    Aws::String m_cacheNamespace;
    bool m_cacheNamespaceHasBeenSet = false;

    Aws::Vector<Aws::String> m_cacheKeyParameters;
    bool m_cacheKeyParametersHasBeenSet = false;

    ContentHandlingStrategy m_contentHandling;
    bool m_contentHandlingHasBeenSet = false;

    int m_timeoutInMillis;
    bool m_timeoutInMillisHasBeenSet = false;

    TlsConfig m_tlsConfig;
    bool m_tlsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
