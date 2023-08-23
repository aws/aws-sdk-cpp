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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
   * <p>Represents an <code>HTTP</code>, <code>HTTP_PROXY</code>, <code>AWS</code>,
   * <code>AWS_PROXY</code>, or Mock integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Integration">AWS
   * API Reference</a></p>
   */
  class GetIntegrationResult
  {
  public:
    AWS_APIGATEWAY_API GetIntegrationResult();
    AWS_APIGATEWAY_API GetIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

    /**
     * <p>Specifies an API method integration type. The valid value is one of the
     * following:</p> <p>For the HTTP and HTTP proxy integrations, each integration can
     * specify a protocol (<code>http/https</code>), port and path. Standard 80 and 443
     * ports are supported as well as custom ports above 1024. An HTTP or HTTP proxy
     * integration with a <code>connectionType</code> of <code>VPC_LINK</code> is
     * referred to as a private integration and uses a VpcLink to connect API Gateway
     * to a network load balancer of a VPC.</p>
     */
    inline void SetType(const IntegrationType& value) { m_type = value; }

    /**
     * <p>Specifies an API method integration type. The valid value is one of the
     * following:</p> <p>For the HTTP and HTTP proxy integrations, each integration can
     * specify a protocol (<code>http/https</code>), port and path. Standard 80 and 443
     * ports are supported as well as custom ports above 1024. An HTTP or HTTP proxy
     * integration with a <code>connectionType</code> of <code>VPC_LINK</code> is
     * referred to as a private integration and uses a VpcLink to connect API Gateway
     * to a network load balancer of a VPC.</p>
     */
    inline void SetType(IntegrationType&& value) { m_type = std::move(value); }

    /**
     * <p>Specifies an API method integration type. The valid value is one of the
     * following:</p> <p>For the HTTP and HTTP proxy integrations, each integration can
     * specify a protocol (<code>http/https</code>), port and path. Standard 80 and 443
     * ports are supported as well as custom ports above 1024. An HTTP or HTTP proxy
     * integration with a <code>connectionType</code> of <code>VPC_LINK</code> is
     * referred to as a private integration and uses a VpcLink to connect API Gateway
     * to a network load balancer of a VPC.</p>
     */
    inline GetIntegrationResult& WithType(const IntegrationType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies an API method integration type. The valid value is one of the
     * following:</p> <p>For the HTTP and HTTP proxy integrations, each integration can
     * specify a protocol (<code>http/https</code>), port and path. Standard 80 and 443
     * ports are supported as well as custom ports above 1024. An HTTP or HTTP proxy
     * integration with a <code>connectionType</code> of <code>VPC_LINK</code> is
     * referred to as a private integration and uses a VpcLink to connect API Gateway
     * to a network load balancer of a VPC.</p>
     */
    inline GetIntegrationResult& WithType(IntegrationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Specifies the integration's HTTP method type. For the Type property, if you
     * specify <code>MOCK</code>, this property is optional. For Lambda integrations,
     * you must set the integration method to <code>POST</code>. For all other types,
     * you must specify this property.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>Specifies the integration's HTTP method type. For the Type property, if you
     * specify <code>MOCK</code>, this property is optional. For Lambda integrations,
     * you must set the integration method to <code>POST</code>. For all other types,
     * you must specify this property.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethod = value; }

    /**
     * <p>Specifies the integration's HTTP method type. For the Type property, if you
     * specify <code>MOCK</code>, this property is optional. For Lambda integrations,
     * you must set the integration method to <code>POST</code>. For all other types,
     * you must specify this property.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethod = std::move(value); }

    /**
     * <p>Specifies the integration's HTTP method type. For the Type property, if you
     * specify <code>MOCK</code>, this property is optional. For Lambda integrations,
     * you must set the integration method to <code>POST</code>. For all other types,
     * you must specify this property.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethod.assign(value); }

    /**
     * <p>Specifies the integration's HTTP method type. For the Type property, if you
     * specify <code>MOCK</code>, this property is optional. For Lambda integrations,
     * you must set the integration method to <code>POST</code>. For all other types,
     * you must specify this property.</p>
     */
    inline GetIntegrationResult& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies the integration's HTTP method type. For the Type property, if you
     * specify <code>MOCK</code>, this property is optional. For Lambda integrations,
     * you must set the integration method to <code>POST</code>. For all other types,
     * you must specify this property.</p>
     */
    inline GetIntegrationResult& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}

    /**
     * <p>Specifies the integration's HTTP method type. For the Type property, if you
     * specify <code>MOCK</code>, this property is optional. For Lambda integrations,
     * you must set the integration method to <code>POST</code>. For all other types,
     * you must specify this property.</p>
     */
    inline GetIntegrationResult& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}


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
    inline void SetUri(const Aws::String& value) { m_uri = value; }

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
    inline void SetUri(Aws::String&& value) { m_uri = std::move(value); }

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
    inline void SetUri(const char* value) { m_uri.assign(value); }

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
    inline GetIntegrationResult& WithUri(const Aws::String& value) { SetUri(value); return *this;}

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
    inline GetIntegrationResult& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

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
    inline GetIntegrationResult& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * <p>The type of the network connection to the integration endpoint. The valid
     * value is <code>INTERNET</code> for connections through the public routable
     * internet or <code>VPC_LINK</code> for private connections between API Gateway
     * and a network load balancer in a VPC. The default value is
     * <code>INTERNET</code>.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }

    /**
     * <p>The type of the network connection to the integration endpoint. The valid
     * value is <code>INTERNET</code> for connections through the public routable
     * internet or <code>VPC_LINK</code> for private connections between API Gateway
     * and a network load balancer in a VPC. The default value is
     * <code>INTERNET</code>.</p>
     */
    inline void SetConnectionType(const ConnectionType& value) { m_connectionType = value; }

    /**
     * <p>The type of the network connection to the integration endpoint. The valid
     * value is <code>INTERNET</code> for connections through the public routable
     * internet or <code>VPC_LINK</code> for private connections between API Gateway
     * and a network load balancer in a VPC. The default value is
     * <code>INTERNET</code>.</p>
     */
    inline void SetConnectionType(ConnectionType&& value) { m_connectionType = std::move(value); }

    /**
     * <p>The type of the network connection to the integration endpoint. The valid
     * value is <code>INTERNET</code> for connections through the public routable
     * internet or <code>VPC_LINK</code> for private connections between API Gateway
     * and a network load balancer in a VPC. The default value is
     * <code>INTERNET</code>.</p>
     */
    inline GetIntegrationResult& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}

    /**
     * <p>The type of the network connection to the integration endpoint. The valid
     * value is <code>INTERNET</code> for connections through the public routable
     * internet or <code>VPC_LINK</code> for private connections between API Gateway
     * and a network load balancer in a VPC. The default value is
     * <code>INTERNET</code>.</p>
     */
    inline GetIntegrationResult& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}


    /**
     * <p>The ID of the VpcLink used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the VpcLink used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }

    /**
     * <p>The ID of the VpcLink used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = std::move(value); }

    /**
     * <p>The ID of the VpcLink used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }

    /**
     * <p>The ID of the VpcLink used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline GetIntegrationResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the VpcLink used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline GetIntegrationResult& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VpcLink used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline GetIntegrationResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported Amazon Web Services services, specify null.</p>
     */
    inline const Aws::String& GetCredentials() const{ return m_credentials; }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported Amazon Web Services services, specify null.</p>
     */
    inline void SetCredentials(const Aws::String& value) { m_credentials = value; }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported Amazon Web Services services, specify null.</p>
     */
    inline void SetCredentials(Aws::String&& value) { m_credentials = std::move(value); }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported Amazon Web Services services, specify null.</p>
     */
    inline void SetCredentials(const char* value) { m_credentials.assign(value); }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported Amazon Web Services services, specify null.</p>
     */
    inline GetIntegrationResult& WithCredentials(const Aws::String& value) { SetCredentials(value); return *this;}

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported Amazon Web Services services, specify null.</p>
     */
    inline GetIntegrationResult& WithCredentials(Aws::String&& value) { SetCredentials(std::move(value)); return *this;}

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported Amazon Web Services services, specify null.</p>
     */
    inline GetIntegrationResult& WithCredentials(const char* value) { SetCredentials(value); return *this;}


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
    inline void SetRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_requestParameters = value; }

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
    inline void SetRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_requestParameters = std::move(value); }

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
    inline GetIntegrationResult& WithRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestParameters(value); return *this;}

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
    inline GetIntegrationResult& WithRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestParameters(std::move(value)); return *this;}

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
    inline GetIntegrationResult& AddRequestParameters(const Aws::String& key, const Aws::String& value) { m_requestParameters.emplace(key, value); return *this; }

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
    inline GetIntegrationResult& AddRequestParameters(Aws::String&& key, const Aws::String& value) { m_requestParameters.emplace(std::move(key), value); return *this; }

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
    inline GetIntegrationResult& AddRequestParameters(const Aws::String& key, Aws::String&& value) { m_requestParameters.emplace(key, std::move(value)); return *this; }

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
    inline GetIntegrationResult& AddRequestParameters(Aws::String&& key, Aws::String&& value) { m_requestParameters.emplace(std::move(key), std::move(value)); return *this; }

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
    inline GetIntegrationResult& AddRequestParameters(const char* key, Aws::String&& value) { m_requestParameters.emplace(key, std::move(value)); return *this; }

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
    inline GetIntegrationResult& AddRequestParameters(Aws::String&& key, const char* value) { m_requestParameters.emplace(std::move(key), value); return *this; }

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
    inline GetIntegrationResult& AddRequestParameters(const char* key, const char* value) { m_requestParameters.emplace(key, value); return *this; }


    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestTemplates() const{ return m_requestTemplates; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline void SetRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_requestTemplates = value; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline void SetRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_requestTemplates = std::move(value); }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline GetIntegrationResult& WithRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestTemplates(value); return *this;}

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline GetIntegrationResult& WithRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestTemplates(std::move(value)); return *this;}

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline GetIntegrationResult& AddRequestTemplates(const Aws::String& key, const Aws::String& value) { m_requestTemplates.emplace(key, value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline GetIntegrationResult& AddRequestTemplates(Aws::String&& key, const Aws::String& value) { m_requestTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline GetIntegrationResult& AddRequestTemplates(const Aws::String& key, Aws::String&& value) { m_requestTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline GetIntegrationResult& AddRequestTemplates(Aws::String&& key, Aws::String&& value) { m_requestTemplates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline GetIntegrationResult& AddRequestTemplates(const char* key, Aws::String&& value) { m_requestTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline GetIntegrationResult& AddRequestTemplates(Aws::String&& key, const char* value) { m_requestTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline GetIntegrationResult& AddRequestTemplates(const char* key, const char* value) { m_requestTemplates.emplace(key, value); return *this; }


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
    inline void SetPassthroughBehavior(const Aws::String& value) { m_passthroughBehavior = value; }

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
    inline void SetPassthroughBehavior(Aws::String&& value) { m_passthroughBehavior = std::move(value); }

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
    inline void SetPassthroughBehavior(const char* value) { m_passthroughBehavior.assign(value); }

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
    inline GetIntegrationResult& WithPassthroughBehavior(const Aws::String& value) { SetPassthroughBehavior(value); return *this;}

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
    inline GetIntegrationResult& WithPassthroughBehavior(Aws::String&& value) { SetPassthroughBehavior(std::move(value)); return *this;}

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
    inline GetIntegrationResult& WithPassthroughBehavior(const char* value) { SetPassthroughBehavior(value); return *this;}


    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <p>If this property is not defined, the request
     * payload will be passed through from the method request to integration request
     * without modification, provided that the <code>passthroughBehavior</code> is
     * configured to support payload pass-through.</p>
     */
    inline const ContentHandlingStrategy& GetContentHandling() const{ return m_contentHandling; }

    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <p>If this property is not defined, the request
     * payload will be passed through from the method request to integration request
     * without modification, provided that the <code>passthroughBehavior</code> is
     * configured to support payload pass-through.</p>
     */
    inline void SetContentHandling(const ContentHandlingStrategy& value) { m_contentHandling = value; }

    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <p>If this property is not defined, the request
     * payload will be passed through from the method request to integration request
     * without modification, provided that the <code>passthroughBehavior</code> is
     * configured to support payload pass-through.</p>
     */
    inline void SetContentHandling(ContentHandlingStrategy&& value) { m_contentHandling = std::move(value); }

    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <p>If this property is not defined, the request
     * payload will be passed through from the method request to integration request
     * without modification, provided that the <code>passthroughBehavior</code> is
     * configured to support payload pass-through.</p>
     */
    inline GetIntegrationResult& WithContentHandling(const ContentHandlingStrategy& value) { SetContentHandling(value); return *this;}

    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <p>If this property is not defined, the request
     * payload will be passed through from the method request to integration request
     * without modification, provided that the <code>passthroughBehavior</code> is
     * configured to support payload pass-through.</p>
     */
    inline GetIntegrationResult& WithContentHandling(ContentHandlingStrategy&& value) { SetContentHandling(std::move(value)); return *this;}


    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds.</p>
     */
    inline int GetTimeoutInMillis() const{ return m_timeoutInMillis; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds.</p>
     */
    inline void SetTimeoutInMillis(int value) { m_timeoutInMillis = value; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds.</p>
     */
    inline GetIntegrationResult& WithTimeoutInMillis(int value) { SetTimeoutInMillis(value); return *this;}


    /**
     * <p>Specifies a group of related cached parameters. By default, API Gateway uses
     * the resource ID as the <code>cacheNamespace</code>. You can specify the same
     * <code>cacheNamespace</code> across resources to return the same cached data for
     * requests to different resources.</p>
     */
    inline const Aws::String& GetCacheNamespace() const{ return m_cacheNamespace; }

    /**
     * <p>Specifies a group of related cached parameters. By default, API Gateway uses
     * the resource ID as the <code>cacheNamespace</code>. You can specify the same
     * <code>cacheNamespace</code> across resources to return the same cached data for
     * requests to different resources.</p>
     */
    inline void SetCacheNamespace(const Aws::String& value) { m_cacheNamespace = value; }

    /**
     * <p>Specifies a group of related cached parameters. By default, API Gateway uses
     * the resource ID as the <code>cacheNamespace</code>. You can specify the same
     * <code>cacheNamespace</code> across resources to return the same cached data for
     * requests to different resources.</p>
     */
    inline void SetCacheNamespace(Aws::String&& value) { m_cacheNamespace = std::move(value); }

    /**
     * <p>Specifies a group of related cached parameters. By default, API Gateway uses
     * the resource ID as the <code>cacheNamespace</code>. You can specify the same
     * <code>cacheNamespace</code> across resources to return the same cached data for
     * requests to different resources.</p>
     */
    inline void SetCacheNamespace(const char* value) { m_cacheNamespace.assign(value); }

    /**
     * <p>Specifies a group of related cached parameters. By default, API Gateway uses
     * the resource ID as the <code>cacheNamespace</code>. You can specify the same
     * <code>cacheNamespace</code> across resources to return the same cached data for
     * requests to different resources.</p>
     */
    inline GetIntegrationResult& WithCacheNamespace(const Aws::String& value) { SetCacheNamespace(value); return *this;}

    /**
     * <p>Specifies a group of related cached parameters. By default, API Gateway uses
     * the resource ID as the <code>cacheNamespace</code>. You can specify the same
     * <code>cacheNamespace</code> across resources to return the same cached data for
     * requests to different resources.</p>
     */
    inline GetIntegrationResult& WithCacheNamespace(Aws::String&& value) { SetCacheNamespace(std::move(value)); return *this;}

    /**
     * <p>Specifies a group of related cached parameters. By default, API Gateway uses
     * the resource ID as the <code>cacheNamespace</code>. You can specify the same
     * <code>cacheNamespace</code> across resources to return the same cached data for
     * requests to different resources.</p>
     */
    inline GetIntegrationResult& WithCacheNamespace(const char* value) { SetCacheNamespace(value); return *this;}


    /**
     * <p>A list of request parameters whose values API Gateway caches. To be valid
     * values for <code>cacheKeyParameters</code>, these parameters must also be
     * specified for Method <code>requestParameters</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheKeyParameters() const{ return m_cacheKeyParameters; }

    /**
     * <p>A list of request parameters whose values API Gateway caches. To be valid
     * values for <code>cacheKeyParameters</code>, these parameters must also be
     * specified for Method <code>requestParameters</code>.</p>
     */
    inline void SetCacheKeyParameters(const Aws::Vector<Aws::String>& value) { m_cacheKeyParameters = value; }

    /**
     * <p>A list of request parameters whose values API Gateway caches. To be valid
     * values for <code>cacheKeyParameters</code>, these parameters must also be
     * specified for Method <code>requestParameters</code>.</p>
     */
    inline void SetCacheKeyParameters(Aws::Vector<Aws::String>&& value) { m_cacheKeyParameters = std::move(value); }

    /**
     * <p>A list of request parameters whose values API Gateway caches. To be valid
     * values for <code>cacheKeyParameters</code>, these parameters must also be
     * specified for Method <code>requestParameters</code>.</p>
     */
    inline GetIntegrationResult& WithCacheKeyParameters(const Aws::Vector<Aws::String>& value) { SetCacheKeyParameters(value); return *this;}

    /**
     * <p>A list of request parameters whose values API Gateway caches. To be valid
     * values for <code>cacheKeyParameters</code>, these parameters must also be
     * specified for Method <code>requestParameters</code>.</p>
     */
    inline GetIntegrationResult& WithCacheKeyParameters(Aws::Vector<Aws::String>&& value) { SetCacheKeyParameters(std::move(value)); return *this;}

    /**
     * <p>A list of request parameters whose values API Gateway caches. To be valid
     * values for <code>cacheKeyParameters</code>, these parameters must also be
     * specified for Method <code>requestParameters</code>.</p>
     */
    inline GetIntegrationResult& AddCacheKeyParameters(const Aws::String& value) { m_cacheKeyParameters.push_back(value); return *this; }

    /**
     * <p>A list of request parameters whose values API Gateway caches. To be valid
     * values for <code>cacheKeyParameters</code>, these parameters must also be
     * specified for Method <code>requestParameters</code>.</p>
     */
    inline GetIntegrationResult& AddCacheKeyParameters(Aws::String&& value) { m_cacheKeyParameters.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of request parameters whose values API Gateway caches. To be valid
     * values for <code>cacheKeyParameters</code>, these parameters must also be
     * specified for Method <code>requestParameters</code>.</p>
     */
    inline GetIntegrationResult& AddCacheKeyParameters(const char* value) { m_cacheKeyParameters.push_back(value); return *this; }


    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline const Aws::Map<Aws::String, IntegrationResponse>& GetIntegrationResponses() const{ return m_integrationResponses; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline void SetIntegrationResponses(const Aws::Map<Aws::String, IntegrationResponse>& value) { m_integrationResponses = value; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline void SetIntegrationResponses(Aws::Map<Aws::String, IntegrationResponse>&& value) { m_integrationResponses = std::move(value); }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline GetIntegrationResult& WithIntegrationResponses(const Aws::Map<Aws::String, IntegrationResponse>& value) { SetIntegrationResponses(value); return *this;}

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline GetIntegrationResult& WithIntegrationResponses(Aws::Map<Aws::String, IntegrationResponse>&& value) { SetIntegrationResponses(std::move(value)); return *this;}

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline GetIntegrationResult& AddIntegrationResponses(const Aws::String& key, const IntegrationResponse& value) { m_integrationResponses.emplace(key, value); return *this; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline GetIntegrationResult& AddIntegrationResponses(Aws::String&& key, const IntegrationResponse& value) { m_integrationResponses.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline GetIntegrationResult& AddIntegrationResponses(const Aws::String& key, IntegrationResponse&& value) { m_integrationResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline GetIntegrationResult& AddIntegrationResponses(Aws::String&& key, IntegrationResponse&& value) { m_integrationResponses.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline GetIntegrationResult& AddIntegrationResponses(const char* key, IntegrationResponse&& value) { m_integrationResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the integration's responses.</p>
     */
    inline GetIntegrationResult& AddIntegrationResponses(const char* key, const IntegrationResponse& value) { m_integrationResponses.emplace(key, value); return *this; }


    /**
     * <p>Specifies the TLS configuration for an integration.</p>
     */
    inline const TlsConfig& GetTlsConfig() const{ return m_tlsConfig; }

    /**
     * <p>Specifies the TLS configuration for an integration.</p>
     */
    inline void SetTlsConfig(const TlsConfig& value) { m_tlsConfig = value; }

    /**
     * <p>Specifies the TLS configuration for an integration.</p>
     */
    inline void SetTlsConfig(TlsConfig&& value) { m_tlsConfig = std::move(value); }

    /**
     * <p>Specifies the TLS configuration for an integration.</p>
     */
    inline GetIntegrationResult& WithTlsConfig(const TlsConfig& value) { SetTlsConfig(value); return *this;}

    /**
     * <p>Specifies the TLS configuration for an integration.</p>
     */
    inline GetIntegrationResult& WithTlsConfig(TlsConfig&& value) { SetTlsConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetIntegrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetIntegrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetIntegrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    IntegrationType m_type;

    Aws::String m_httpMethod;

    Aws::String m_uri;

    ConnectionType m_connectionType;

    Aws::String m_connectionId;

    Aws::String m_credentials;

    Aws::Map<Aws::String, Aws::String> m_requestParameters;

    Aws::Map<Aws::String, Aws::String> m_requestTemplates;

    Aws::String m_passthroughBehavior;

    ContentHandlingStrategy m_contentHandling;

    int m_timeoutInMillis;

    Aws::String m_cacheNamespace;

    Aws::Vector<Aws::String> m_cacheKeyParameters;

    Aws::Map<Aws::String, IntegrationResponse> m_integrationResponses;

    TlsConfig m_tlsConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
