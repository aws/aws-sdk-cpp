/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/model/IntegrationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/IntegrationResponse.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents a HTTP, AWS, or Mock integration.</p>
   */
  class AWS_APIGATEWAY_API Integration
  {
  public:
    Integration();
    Integration(const Aws::Utils::Json::JsonValue& jsonValue);
    Integration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Specifies the integration's type. The valid value is <code>HTTP</code>,
     * <code>AWS</code>, or <code>MOCK</code>.</p>
     */
    inline const IntegrationType& GetType() const{ return m_type; }

    /**
     * <p>Specifies the integration's type. The valid value is <code>HTTP</code>,
     * <code>AWS</code>, or <code>MOCK</code>.</p>
     */
    inline void SetType(const IntegrationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies the integration's type. The valid value is <code>HTTP</code>,
     * <code>AWS</code>, or <code>MOCK</code>.</p>
     */
    inline void SetType(IntegrationType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies the integration's type. The valid value is <code>HTTP</code>,
     * <code>AWS</code>, or <code>MOCK</code>.</p>
     */
    inline Integration& WithType(const IntegrationType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the integration's type. The valid value is <code>HTTP</code>,
     * <code>AWS</code>, or <code>MOCK</code>.</p>
     */
    inline Integration& WithType(IntegrationType&& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline Integration& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline Integration& WithHttpMethod(Aws::String&& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline Integration& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies the integration's Uniform Resource Identifier (URI). For HTTP
     * integrations, the URI must be a fully formed, encoded HTTP(S) URL according to
     * the <a href="https://www.ietf.org/rfc/rfc3986.txt" target="_blank">RFC-3986
     * specification</a>. For AWS integrations, the URI should be of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:{path|action}/{service_api}</code>.
     * <code>Region</code>, <code>subdomain</code> and <code>service</code> are used to
     * determine the right endpoint. For AWS services that use the <code>Action=</code>
     * query string parameter, <code>service_api</code> should be a valid action for
     * the desired service. For RESTful AWS service APIs, <code>path</code> is used to
     * indicate that the remaining substring in the URI should be treated as the path
     * to the resource, including the initial <code>/</code>.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>Specifies the integration's Uniform Resource Identifier (URI). For HTTP
     * integrations, the URI must be a fully formed, encoded HTTP(S) URL according to
     * the <a href="https://www.ietf.org/rfc/rfc3986.txt" target="_blank">RFC-3986
     * specification</a>. For AWS integrations, the URI should be of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:{path|action}/{service_api}</code>.
     * <code>Region</code>, <code>subdomain</code> and <code>service</code> are used to
     * determine the right endpoint. For AWS services that use the <code>Action=</code>
     * query string parameter, <code>service_api</code> should be a valid action for
     * the desired service. For RESTful AWS service APIs, <code>path</code> is used to
     * indicate that the remaining substring in the URI should be treated as the path
     * to the resource, including the initial <code>/</code>.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>Specifies the integration's Uniform Resource Identifier (URI). For HTTP
     * integrations, the URI must be a fully formed, encoded HTTP(S) URL according to
     * the <a href="https://www.ietf.org/rfc/rfc3986.txt" target="_blank">RFC-3986
     * specification</a>. For AWS integrations, the URI should be of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:{path|action}/{service_api}</code>.
     * <code>Region</code>, <code>subdomain</code> and <code>service</code> are used to
     * determine the right endpoint. For AWS services that use the <code>Action=</code>
     * query string parameter, <code>service_api</code> should be a valid action for
     * the desired service. For RESTful AWS service APIs, <code>path</code> is used to
     * indicate that the remaining substring in the URI should be treated as the path
     * to the resource, including the initial <code>/</code>.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>Specifies the integration's Uniform Resource Identifier (URI). For HTTP
     * integrations, the URI must be a fully formed, encoded HTTP(S) URL according to
     * the <a href="https://www.ietf.org/rfc/rfc3986.txt" target="_blank">RFC-3986
     * specification</a>. For AWS integrations, the URI should be of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:{path|action}/{service_api}</code>.
     * <code>Region</code>, <code>subdomain</code> and <code>service</code> are used to
     * determine the right endpoint. For AWS services that use the <code>Action=</code>
     * query string parameter, <code>service_api</code> should be a valid action for
     * the desired service. For RESTful AWS service APIs, <code>path</code> is used to
     * indicate that the remaining substring in the URI should be treated as the path
     * to the resource, including the initial <code>/</code>.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>Specifies the integration's Uniform Resource Identifier (URI). For HTTP
     * integrations, the URI must be a fully formed, encoded HTTP(S) URL according to
     * the <a href="https://www.ietf.org/rfc/rfc3986.txt" target="_blank">RFC-3986
     * specification</a>. For AWS integrations, the URI should be of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:{path|action}/{service_api}</code>.
     * <code>Region</code>, <code>subdomain</code> and <code>service</code> are used to
     * determine the right endpoint. For AWS services that use the <code>Action=</code>
     * query string parameter, <code>service_api</code> should be a valid action for
     * the desired service. For RESTful AWS service APIs, <code>path</code> is used to
     * indicate that the remaining substring in the URI should be treated as the path
     * to the resource, including the initial <code>/</code>.</p>
     */
    inline Integration& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>Specifies the integration's Uniform Resource Identifier (URI). For HTTP
     * integrations, the URI must be a fully formed, encoded HTTP(S) URL according to
     * the <a href="https://www.ietf.org/rfc/rfc3986.txt" target="_blank">RFC-3986
     * specification</a>. For AWS integrations, the URI should be of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:{path|action}/{service_api}</code>.
     * <code>Region</code>, <code>subdomain</code> and <code>service</code> are used to
     * determine the right endpoint. For AWS services that use the <code>Action=</code>
     * query string parameter, <code>service_api</code> should be a valid action for
     * the desired service. For RESTful AWS service APIs, <code>path</code> is used to
     * indicate that the remaining substring in the URI should be treated as the path
     * to the resource, including the initial <code>/</code>.</p>
     */
    inline Integration& WithUri(Aws::String&& value) { SetUri(value); return *this;}

    /**
     * <p>Specifies the integration's Uniform Resource Identifier (URI). For HTTP
     * integrations, the URI must be a fully formed, encoded HTTP(S) URL according to
     * the <a href="https://www.ietf.org/rfc/rfc3986.txt" target="_blank">RFC-3986
     * specification</a>. For AWS integrations, the URI should be of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:{path|action}/{service_api}</code>.
     * <code>Region</code>, <code>subdomain</code> and <code>service</code> are used to
     * determine the right endpoint. For AWS services that use the <code>Action=</code>
     * query string parameter, <code>service_api</code> should be a valid action for
     * the desired service. For RESTful AWS service APIs, <code>path</code> is used to
     * indicate that the remaining substring in the URI should be treated as the path
     * to the resource, including the initial <code>/</code>.</p>
     */
    inline Integration& WithUri(const char* value) { SetUri(value); return *this;}

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for Amazon API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported AWS services, specify null.</p>
     */
    inline const Aws::String& GetCredentials() const{ return m_credentials; }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for Amazon API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported AWS services, specify null.</p>
     */
    inline void SetCredentials(const Aws::String& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for Amazon API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported AWS services, specify null.</p>
     */
    inline void SetCredentials(Aws::String&& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for Amazon API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported AWS services, specify null.</p>
     */
    inline void SetCredentials(const char* value) { m_credentialsHasBeenSet = true; m_credentials.assign(value); }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for Amazon API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported AWS services, specify null.</p>
     */
    inline Integration& WithCredentials(const Aws::String& value) { SetCredentials(value); return *this;}

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for Amazon API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported AWS services, specify null.</p>
     */
    inline Integration& WithCredentials(Aws::String&& value) { SetCredentials(value); return *this;}

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for Amazon API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported AWS services, specify null.</p>
     */
    inline Integration& WithCredentials(const char* value) { SetCredentials(value); return *this;}

    /**
     * <p>Represents requests parameters that are sent with the backend request.
     * Request parameters are represented as a key/value map, with a destination as the
     * key and a source as the value. A source must match an existing method request
     * parameter, or a static value. Static values must be enclosed with single quotes,
     * and be pre-encoded based on their destination in the request. The destination
     * must match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestParameters() const{ return m_requestParameters; }

    /**
     * <p>Represents requests parameters that are sent with the backend request.
     * Request parameters are represented as a key/value map, with a destination as the
     * key and a source as the value. A source must match an existing method request
     * parameter, or a static value. Static values must be enclosed with single quotes,
     * and be pre-encoded based on their destination in the request. The destination
     * must match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline void SetRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

    /**
     * <p>Represents requests parameters that are sent with the backend request.
     * Request parameters are represented as a key/value map, with a destination as the
     * key and a source as the value. A source must match an existing method request
     * parameter, or a static value. Static values must be enclosed with single quotes,
     * and be pre-encoded based on their destination in the request. The destination
     * must match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline void SetRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

    /**
     * <p>Represents requests parameters that are sent with the backend request.
     * Request parameters are represented as a key/value map, with a destination as the
     * key and a source as the value. A source must match an existing method request
     * parameter, or a static value. Static values must be enclosed with single quotes,
     * and be pre-encoded based on their destination in the request. The destination
     * must match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline Integration& WithRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>Represents requests parameters that are sent with the backend request.
     * Request parameters are represented as a key/value map, with a destination as the
     * key and a source as the value. A source must match an existing method request
     * parameter, or a static value. Static values must be enclosed with single quotes,
     * and be pre-encoded based on their destination in the request. The destination
     * must match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline Integration& WithRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>Represents requests parameters that are sent with the backend request.
     * Request parameters are represented as a key/value map, with a destination as the
     * key and a source as the value. A source must match an existing method request
     * parameter, or a static value. Static values must be enclosed with single quotes,
     * and be pre-encoded based on their destination in the request. The destination
     * must match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline Integration& AddRequestParameters(const Aws::String& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Represents requests parameters that are sent with the backend request.
     * Request parameters are represented as a key/value map, with a destination as the
     * key and a source as the value. A source must match an existing method request
     * parameter, or a static value. Static values must be enclosed with single quotes,
     * and be pre-encoded based on their destination in the request. The destination
     * must match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline Integration& AddRequestParameters(Aws::String&& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Represents requests parameters that are sent with the backend request.
     * Request parameters are represented as a key/value map, with a destination as the
     * key and a source as the value. A source must match an existing method request
     * parameter, or a static value. Static values must be enclosed with single quotes,
     * and be pre-encoded based on their destination in the request. The destination
     * must match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline Integration& AddRequestParameters(const Aws::String& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Represents requests parameters that are sent with the backend request.
     * Request parameters are represented as a key/value map, with a destination as the
     * key and a source as the value. A source must match an existing method request
     * parameter, or a static value. Static values must be enclosed with single quotes,
     * and be pre-encoded based on their destination in the request. The destination
     * must match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline Integration& AddRequestParameters(Aws::String&& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Represents requests parameters that are sent with the backend request.
     * Request parameters are represented as a key/value map, with a destination as the
     * key and a source as the value. A source must match an existing method request
     * parameter, or a static value. Static values must be enclosed with single quotes,
     * and be pre-encoded based on their destination in the request. The destination
     * must match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline Integration& AddRequestParameters(const char* key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Represents requests parameters that are sent with the backend request.
     * Request parameters are represented as a key/value map, with a destination as the
     * key and a source as the value. A source must match an existing method request
     * parameter, or a static value. Static values must be enclosed with single quotes,
     * and be pre-encoded based on their destination in the request. The destination
     * must match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline Integration& AddRequestParameters(Aws::String&& key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Represents requests parameters that are sent with the backend request.
     * Request parameters are represented as a key/value map, with a destination as the
     * key and a source as the value. A source must match an existing method request
     * parameter, or a static value. Static values must be enclosed with single quotes,
     * and be pre-encoded based on their destination in the request. The destination
     * must match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline Integration& AddRequestParameters(const char* key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Specifies the integration's request templates.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestTemplates() const{ return m_requestTemplates; }

    /**
     * <p>Specifies the integration's request templates.</p>
     */
    inline void SetRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = value; }

    /**
     * <p>Specifies the integration's request templates.</p>
     */
    inline void SetRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = value; }

    /**
     * <p>Specifies the integration's request templates.</p>
     */
    inline Integration& WithRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestTemplates(value); return *this;}

    /**
     * <p>Specifies the integration's request templates.</p>
     */
    inline Integration& WithRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestTemplates(value); return *this;}

    /**
     * <p>Specifies the integration's request templates.</p>
     */
    inline Integration& AddRequestTemplates(const Aws::String& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the integration's request templates.</p>
     */
    inline Integration& AddRequestTemplates(Aws::String&& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the integration's request templates.</p>
     */
    inline Integration& AddRequestTemplates(const Aws::String& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the integration's request templates.</p>
     */
    inline Integration& AddRequestTemplates(Aws::String&& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the integration's request templates.</p>
     */
    inline Integration& AddRequestTemplates(const char* key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the integration's request templates.</p>
     */
    inline Integration& AddRequestTemplates(Aws::String&& key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the integration's request templates.</p>
     */
    inline Integration& AddRequestTemplates(const char* key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the integration's cache namespace.</p>
     */
    inline const Aws::String& GetCacheNamespace() const{ return m_cacheNamespace; }

    /**
     * <p>Specifies the integration's cache namespace.</p>
     */
    inline void SetCacheNamespace(const Aws::String& value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace = value; }

    /**
     * <p>Specifies the integration's cache namespace.</p>
     */
    inline void SetCacheNamespace(Aws::String&& value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace = value; }

    /**
     * <p>Specifies the integration's cache namespace.</p>
     */
    inline void SetCacheNamespace(const char* value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace.assign(value); }

    /**
     * <p>Specifies the integration's cache namespace.</p>
     */
    inline Integration& WithCacheNamespace(const Aws::String& value) { SetCacheNamespace(value); return *this;}

    /**
     * <p>Specifies the integration's cache namespace.</p>
     */
    inline Integration& WithCacheNamespace(Aws::String&& value) { SetCacheNamespace(value); return *this;}

    /**
     * <p>Specifies the integration's cache namespace.</p>
     */
    inline Integration& WithCacheNamespace(const char* value) { SetCacheNamespace(value); return *this;}

    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheKeyParameters() const{ return m_cacheKeyParameters; }

    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline void SetCacheKeyParameters(const Aws::Vector<Aws::String>& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters = value; }

    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline void SetCacheKeyParameters(Aws::Vector<Aws::String>&& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters = value; }

    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline Integration& WithCacheKeyParameters(const Aws::Vector<Aws::String>& value) { SetCacheKeyParameters(value); return *this;}

    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline Integration& WithCacheKeyParameters(Aws::Vector<Aws::String>&& value) { SetCacheKeyParameters(value); return *this;}

    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline Integration& AddCacheKeyParameters(const Aws::String& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(value); return *this; }

    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline Integration& AddCacheKeyParameters(Aws::String&& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(value); return *this; }

    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline Integration& AddCacheKeyParameters(const char* value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(value); return *this; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline const Aws::Map<Aws::String, IntegrationResponse>& GetIntegrationResponses() const{ return m_integrationResponses; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline void SetIntegrationResponses(const Aws::Map<Aws::String, IntegrationResponse>& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses = value; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline void SetIntegrationResponses(Aws::Map<Aws::String, IntegrationResponse>&& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses = value; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline Integration& WithIntegrationResponses(const Aws::Map<Aws::String, IntegrationResponse>& value) { SetIntegrationResponses(value); return *this;}

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline Integration& WithIntegrationResponses(Aws::Map<Aws::String, IntegrationResponse>&& value) { SetIntegrationResponses(value); return *this;}

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline Integration& AddIntegrationResponses(const Aws::String& key, const IntegrationResponse& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses[key] = value; return *this; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline Integration& AddIntegrationResponses(Aws::String&& key, const IntegrationResponse& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses[key] = value; return *this; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline Integration& AddIntegrationResponses(const Aws::String& key, IntegrationResponse&& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses[key] = value; return *this; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline Integration& AddIntegrationResponses(Aws::String&& key, IntegrationResponse&& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses[key] = value; return *this; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline Integration& AddIntegrationResponses(const char* key, IntegrationResponse&& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses[key] = value; return *this; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline Integration& AddIntegrationResponses(const char* key, const IntegrationResponse& value) { m_integrationResponsesHasBeenSet = true; m_integrationResponses[key] = value; return *this; }

  private:
    IntegrationType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet;
    Aws::String m_uri;
    bool m_uriHasBeenSet;
    Aws::String m_credentials;
    bool m_credentialsHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_requestParameters;
    bool m_requestParametersHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_requestTemplates;
    bool m_requestTemplatesHasBeenSet;
    Aws::String m_cacheNamespace;
    bool m_cacheNamespaceHasBeenSet;
    Aws::Vector<Aws::String> m_cacheKeyParameters;
    bool m_cacheKeyParametersHasBeenSet;
    Aws::Map<Aws::String, IntegrationResponse> m_integrationResponses;
    bool m_integrationResponsesHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
