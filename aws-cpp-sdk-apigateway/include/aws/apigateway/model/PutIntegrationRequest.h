/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/IntegrationType.h>
#include <aws/apigateway/model/ConnectionType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/ContentHandlingStrategy.h>
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
  class AWS_APIGATEWAY_API PutIntegrationRequest : public APIGatewayRequest
  {
  public:
    PutIntegrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutIntegration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutIntegrationRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutIntegrationRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutIntegrationRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>[Required] Specifies a put integration request's resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>[Required] Specifies a put integration request's resource ID.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>[Required] Specifies a put integration request's resource ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>[Required] Specifies a put integration request's resource ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>[Required] Specifies a put integration request's resource ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>[Required] Specifies a put integration request's resource ID.</p>
     */
    inline PutIntegrationRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>[Required] Specifies a put integration request's resource ID.</p>
     */
    inline PutIntegrationRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>[Required] Specifies a put integration request's resource ID.</p>
     */
    inline PutIntegrationRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>[Required] Specifies a put integration request's HTTP method.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>[Required] Specifies a put integration request's HTTP method.</p>
     */
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }

    /**
     * <p>[Required] Specifies a put integration request's HTTP method.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>[Required] Specifies a put integration request's HTTP method.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }

    /**
     * <p>[Required] Specifies a put integration request's HTTP method.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>[Required] Specifies a put integration request's HTTP method.</p>
     */
    inline PutIntegrationRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>[Required] Specifies a put integration request's HTTP method.</p>
     */
    inline PutIntegrationRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}

    /**
     * <p>[Required] Specifies a put integration request's HTTP method.</p>
     */
    inline PutIntegrationRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}


    /**
     * <p>[Required] Specifies a put integration input's type.</p>
     */
    inline const IntegrationType& GetType() const{ return m_type; }

    /**
     * <p>[Required] Specifies a put integration input's type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>[Required] Specifies a put integration input's type.</p>
     */
    inline void SetType(const IntegrationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>[Required] Specifies a put integration input's type.</p>
     */
    inline void SetType(IntegrationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>[Required] Specifies a put integration input's type.</p>
     */
    inline PutIntegrationRequest& WithType(const IntegrationType& value) { SetType(value); return *this;}

    /**
     * <p>[Required] Specifies a put integration input's type.</p>
     */
    inline PutIntegrationRequest& WithType(IntegrationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline const Aws::String& GetIntegrationHttpMethod() const{ return m_integrationHttpMethod; }

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline bool IntegrationHttpMethodHasBeenSet() const { return m_integrationHttpMethodHasBeenSet; }

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline void SetIntegrationHttpMethod(const Aws::String& value) { m_integrationHttpMethodHasBeenSet = true; m_integrationHttpMethod = value; }

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline void SetIntegrationHttpMethod(Aws::String&& value) { m_integrationHttpMethodHasBeenSet = true; m_integrationHttpMethod = std::move(value); }

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline void SetIntegrationHttpMethod(const char* value) { m_integrationHttpMethodHasBeenSet = true; m_integrationHttpMethod.assign(value); }

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline PutIntegrationRequest& WithIntegrationHttpMethod(const Aws::String& value) { SetIntegrationHttpMethod(value); return *this;}

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline PutIntegrationRequest& WithIntegrationHttpMethod(Aws::String&& value) { SetIntegrationHttpMethod(std::move(value)); return *this;}

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline PutIntegrationRequest& WithIntegrationHttpMethod(const char* value) { SetIntegrationHttpMethod(value); return *this;}


    /**
     * <p>Specifies Uniform Resource Identifier (URI) of the integration endpoint.</p>
     * <ul> <li><p> For <code>HTTP</code> or <code>HTTP_PROXY</code> integrations, the
     * URI must be a fully formed, encoded HTTP(S) URL according to the <a
     * target="_blank"
     * href="https://en.wikipedia.org/wiki/Uniform_Resource_Identifier">RFC-3986
     * specification</a>, for either standard integration, where
     * <code>connectionType</code> is not <code>VPC_LINK</code>, or private
     * integration, where <code>connectionType</code> is <code>VPC_LINK</code>. For a
     * private HTTP integration, the URI is not used for routing. </p> </li> <li><p>
     * For <code>AWS</code> or <code>AWS_PROXY</code> integrations, the URI is of the
     * form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:path|action/{service_api}</code>.
     * Here, <code>{Region}</code> is the API Gateway region (e.g.,
     * <code>us-east-1</code>); <code>{service}</code> is the name of the integrated
     * AWS service (e.g., <code>s3</code>); and <code>{subdomain}</code> is a
     * designated subdomain supported by certain AWS service for fast host-name lookup.
     * <code>action</code> can be used for an AWS service action-based API, using an
     * <code>Action={name}&amp;{p1}={v1}&amp;p2={v2}...</code> query string. The
     * ensuing <code>{service_api}</code> refers to a supported action
     * <code>{name}</code> plus any required input parameters. Alternatively,
     * <code>path</code> can be used for an AWS service path-based API. The ensuing
     * <code>service_api</code> refers to the path to an AWS service resource,
     * including the region of the integrated AWS service, if applicable. For example,
     * for integration with the S3 API of <code><a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectGET.html">GetObject</a></code>,
     * the <code>uri</code> can be either
     * <code>arn:aws:apigateway:us-west-2:s3:action/GetObject&amp;Bucket={bucket}&amp;Key={key}</code>
     * or <code>arn:aws:apigateway:us-west-2:s3:path/{bucket}/{key}</code></p>
     * </li></ul>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>Specifies Uniform Resource Identifier (URI) of the integration endpoint.</p>
     * <ul> <li><p> For <code>HTTP</code> or <code>HTTP_PROXY</code> integrations, the
     * URI must be a fully formed, encoded HTTP(S) URL according to the <a
     * target="_blank"
     * href="https://en.wikipedia.org/wiki/Uniform_Resource_Identifier">RFC-3986
     * specification</a>, for either standard integration, where
     * <code>connectionType</code> is not <code>VPC_LINK</code>, or private
     * integration, where <code>connectionType</code> is <code>VPC_LINK</code>. For a
     * private HTTP integration, the URI is not used for routing. </p> </li> <li><p>
     * For <code>AWS</code> or <code>AWS_PROXY</code> integrations, the URI is of the
     * form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:path|action/{service_api}</code>.
     * Here, <code>{Region}</code> is the API Gateway region (e.g.,
     * <code>us-east-1</code>); <code>{service}</code> is the name of the integrated
     * AWS service (e.g., <code>s3</code>); and <code>{subdomain}</code> is a
     * designated subdomain supported by certain AWS service for fast host-name lookup.
     * <code>action</code> can be used for an AWS service action-based API, using an
     * <code>Action={name}&amp;{p1}={v1}&amp;p2={v2}...</code> query string. The
     * ensuing <code>{service_api}</code> refers to a supported action
     * <code>{name}</code> plus any required input parameters. Alternatively,
     * <code>path</code> can be used for an AWS service path-based API. The ensuing
     * <code>service_api</code> refers to the path to an AWS service resource,
     * including the region of the integrated AWS service, if applicable. For example,
     * for integration with the S3 API of <code><a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectGET.html">GetObject</a></code>,
     * the <code>uri</code> can be either
     * <code>arn:aws:apigateway:us-west-2:s3:action/GetObject&amp;Bucket={bucket}&amp;Key={key}</code>
     * or <code>arn:aws:apigateway:us-west-2:s3:path/{bucket}/{key}</code></p>
     * </li></ul>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>Specifies Uniform Resource Identifier (URI) of the integration endpoint.</p>
     * <ul> <li><p> For <code>HTTP</code> or <code>HTTP_PROXY</code> integrations, the
     * URI must be a fully formed, encoded HTTP(S) URL according to the <a
     * target="_blank"
     * href="https://en.wikipedia.org/wiki/Uniform_Resource_Identifier">RFC-3986
     * specification</a>, for either standard integration, where
     * <code>connectionType</code> is not <code>VPC_LINK</code>, or private
     * integration, where <code>connectionType</code> is <code>VPC_LINK</code>. For a
     * private HTTP integration, the URI is not used for routing. </p> </li> <li><p>
     * For <code>AWS</code> or <code>AWS_PROXY</code> integrations, the URI is of the
     * form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:path|action/{service_api}</code>.
     * Here, <code>{Region}</code> is the API Gateway region (e.g.,
     * <code>us-east-1</code>); <code>{service}</code> is the name of the integrated
     * AWS service (e.g., <code>s3</code>); and <code>{subdomain}</code> is a
     * designated subdomain supported by certain AWS service for fast host-name lookup.
     * <code>action</code> can be used for an AWS service action-based API, using an
     * <code>Action={name}&amp;{p1}={v1}&amp;p2={v2}...</code> query string. The
     * ensuing <code>{service_api}</code> refers to a supported action
     * <code>{name}</code> plus any required input parameters. Alternatively,
     * <code>path</code> can be used for an AWS service path-based API. The ensuing
     * <code>service_api</code> refers to the path to an AWS service resource,
     * including the region of the integrated AWS service, if applicable. For example,
     * for integration with the S3 API of <code><a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectGET.html">GetObject</a></code>,
     * the <code>uri</code> can be either
     * <code>arn:aws:apigateway:us-west-2:s3:action/GetObject&amp;Bucket={bucket}&amp;Key={key}</code>
     * or <code>arn:aws:apigateway:us-west-2:s3:path/{bucket}/{key}</code></p>
     * </li></ul>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>Specifies Uniform Resource Identifier (URI) of the integration endpoint.</p>
     * <ul> <li><p> For <code>HTTP</code> or <code>HTTP_PROXY</code> integrations, the
     * URI must be a fully formed, encoded HTTP(S) URL according to the <a
     * target="_blank"
     * href="https://en.wikipedia.org/wiki/Uniform_Resource_Identifier">RFC-3986
     * specification</a>, for either standard integration, where
     * <code>connectionType</code> is not <code>VPC_LINK</code>, or private
     * integration, where <code>connectionType</code> is <code>VPC_LINK</code>. For a
     * private HTTP integration, the URI is not used for routing. </p> </li> <li><p>
     * For <code>AWS</code> or <code>AWS_PROXY</code> integrations, the URI is of the
     * form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:path|action/{service_api}</code>.
     * Here, <code>{Region}</code> is the API Gateway region (e.g.,
     * <code>us-east-1</code>); <code>{service}</code> is the name of the integrated
     * AWS service (e.g., <code>s3</code>); and <code>{subdomain}</code> is a
     * designated subdomain supported by certain AWS service for fast host-name lookup.
     * <code>action</code> can be used for an AWS service action-based API, using an
     * <code>Action={name}&amp;{p1}={v1}&amp;p2={v2}...</code> query string. The
     * ensuing <code>{service_api}</code> refers to a supported action
     * <code>{name}</code> plus any required input parameters. Alternatively,
     * <code>path</code> can be used for an AWS service path-based API. The ensuing
     * <code>service_api</code> refers to the path to an AWS service resource,
     * including the region of the integrated AWS service, if applicable. For example,
     * for integration with the S3 API of <code><a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectGET.html">GetObject</a></code>,
     * the <code>uri</code> can be either
     * <code>arn:aws:apigateway:us-west-2:s3:action/GetObject&amp;Bucket={bucket}&amp;Key={key}</code>
     * or <code>arn:aws:apigateway:us-west-2:s3:path/{bucket}/{key}</code></p>
     * </li></ul>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>Specifies Uniform Resource Identifier (URI) of the integration endpoint.</p>
     * <ul> <li><p> For <code>HTTP</code> or <code>HTTP_PROXY</code> integrations, the
     * URI must be a fully formed, encoded HTTP(S) URL according to the <a
     * target="_blank"
     * href="https://en.wikipedia.org/wiki/Uniform_Resource_Identifier">RFC-3986
     * specification</a>, for either standard integration, where
     * <code>connectionType</code> is not <code>VPC_LINK</code>, or private
     * integration, where <code>connectionType</code> is <code>VPC_LINK</code>. For a
     * private HTTP integration, the URI is not used for routing. </p> </li> <li><p>
     * For <code>AWS</code> or <code>AWS_PROXY</code> integrations, the URI is of the
     * form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:path|action/{service_api}</code>.
     * Here, <code>{Region}</code> is the API Gateway region (e.g.,
     * <code>us-east-1</code>); <code>{service}</code> is the name of the integrated
     * AWS service (e.g., <code>s3</code>); and <code>{subdomain}</code> is a
     * designated subdomain supported by certain AWS service for fast host-name lookup.
     * <code>action</code> can be used for an AWS service action-based API, using an
     * <code>Action={name}&amp;{p1}={v1}&amp;p2={v2}...</code> query string. The
     * ensuing <code>{service_api}</code> refers to a supported action
     * <code>{name}</code> plus any required input parameters. Alternatively,
     * <code>path</code> can be used for an AWS service path-based API. The ensuing
     * <code>service_api</code> refers to the path to an AWS service resource,
     * including the region of the integrated AWS service, if applicable. For example,
     * for integration with the S3 API of <code><a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectGET.html">GetObject</a></code>,
     * the <code>uri</code> can be either
     * <code>arn:aws:apigateway:us-west-2:s3:action/GetObject&amp;Bucket={bucket}&amp;Key={key}</code>
     * or <code>arn:aws:apigateway:us-west-2:s3:path/{bucket}/{key}</code></p>
     * </li></ul>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>Specifies Uniform Resource Identifier (URI) of the integration endpoint.</p>
     * <ul> <li><p> For <code>HTTP</code> or <code>HTTP_PROXY</code> integrations, the
     * URI must be a fully formed, encoded HTTP(S) URL according to the <a
     * target="_blank"
     * href="https://en.wikipedia.org/wiki/Uniform_Resource_Identifier">RFC-3986
     * specification</a>, for either standard integration, where
     * <code>connectionType</code> is not <code>VPC_LINK</code>, or private
     * integration, where <code>connectionType</code> is <code>VPC_LINK</code>. For a
     * private HTTP integration, the URI is not used for routing. </p> </li> <li><p>
     * For <code>AWS</code> or <code>AWS_PROXY</code> integrations, the URI is of the
     * form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:path|action/{service_api}</code>.
     * Here, <code>{Region}</code> is the API Gateway region (e.g.,
     * <code>us-east-1</code>); <code>{service}</code> is the name of the integrated
     * AWS service (e.g., <code>s3</code>); and <code>{subdomain}</code> is a
     * designated subdomain supported by certain AWS service for fast host-name lookup.
     * <code>action</code> can be used for an AWS service action-based API, using an
     * <code>Action={name}&amp;{p1}={v1}&amp;p2={v2}...</code> query string. The
     * ensuing <code>{service_api}</code> refers to a supported action
     * <code>{name}</code> plus any required input parameters. Alternatively,
     * <code>path</code> can be used for an AWS service path-based API. The ensuing
     * <code>service_api</code> refers to the path to an AWS service resource,
     * including the region of the integrated AWS service, if applicable. For example,
     * for integration with the S3 API of <code><a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectGET.html">GetObject</a></code>,
     * the <code>uri</code> can be either
     * <code>arn:aws:apigateway:us-west-2:s3:action/GetObject&amp;Bucket={bucket}&amp;Key={key}</code>
     * or <code>arn:aws:apigateway:us-west-2:s3:path/{bucket}/{key}</code></p>
     * </li></ul>
     */
    inline PutIntegrationRequest& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>Specifies Uniform Resource Identifier (URI) of the integration endpoint.</p>
     * <ul> <li><p> For <code>HTTP</code> or <code>HTTP_PROXY</code> integrations, the
     * URI must be a fully formed, encoded HTTP(S) URL according to the <a
     * target="_blank"
     * href="https://en.wikipedia.org/wiki/Uniform_Resource_Identifier">RFC-3986
     * specification</a>, for either standard integration, where
     * <code>connectionType</code> is not <code>VPC_LINK</code>, or private
     * integration, where <code>connectionType</code> is <code>VPC_LINK</code>. For a
     * private HTTP integration, the URI is not used for routing. </p> </li> <li><p>
     * For <code>AWS</code> or <code>AWS_PROXY</code> integrations, the URI is of the
     * form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:path|action/{service_api}</code>.
     * Here, <code>{Region}</code> is the API Gateway region (e.g.,
     * <code>us-east-1</code>); <code>{service}</code> is the name of the integrated
     * AWS service (e.g., <code>s3</code>); and <code>{subdomain}</code> is a
     * designated subdomain supported by certain AWS service for fast host-name lookup.
     * <code>action</code> can be used for an AWS service action-based API, using an
     * <code>Action={name}&amp;{p1}={v1}&amp;p2={v2}...</code> query string. The
     * ensuing <code>{service_api}</code> refers to a supported action
     * <code>{name}</code> plus any required input parameters. Alternatively,
     * <code>path</code> can be used for an AWS service path-based API. The ensuing
     * <code>service_api</code> refers to the path to an AWS service resource,
     * including the region of the integrated AWS service, if applicable. For example,
     * for integration with the S3 API of <code><a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectGET.html">GetObject</a></code>,
     * the <code>uri</code> can be either
     * <code>arn:aws:apigateway:us-west-2:s3:action/GetObject&amp;Bucket={bucket}&amp;Key={key}</code>
     * or <code>arn:aws:apigateway:us-west-2:s3:path/{bucket}/{key}</code></p>
     * </li></ul>
     */
    inline PutIntegrationRequest& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>Specifies Uniform Resource Identifier (URI) of the integration endpoint.</p>
     * <ul> <li><p> For <code>HTTP</code> or <code>HTTP_PROXY</code> integrations, the
     * URI must be a fully formed, encoded HTTP(S) URL according to the <a
     * target="_blank"
     * href="https://en.wikipedia.org/wiki/Uniform_Resource_Identifier">RFC-3986
     * specification</a>, for either standard integration, where
     * <code>connectionType</code> is not <code>VPC_LINK</code>, or private
     * integration, where <code>connectionType</code> is <code>VPC_LINK</code>. For a
     * private HTTP integration, the URI is not used for routing. </p> </li> <li><p>
     * For <code>AWS</code> or <code>AWS_PROXY</code> integrations, the URI is of the
     * form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:path|action/{service_api}</code>.
     * Here, <code>{Region}</code> is the API Gateway region (e.g.,
     * <code>us-east-1</code>); <code>{service}</code> is the name of the integrated
     * AWS service (e.g., <code>s3</code>); and <code>{subdomain}</code> is a
     * designated subdomain supported by certain AWS service for fast host-name lookup.
     * <code>action</code> can be used for an AWS service action-based API, using an
     * <code>Action={name}&amp;{p1}={v1}&amp;p2={v2}...</code> query string. The
     * ensuing <code>{service_api}</code> refers to a supported action
     * <code>{name}</code> plus any required input parameters. Alternatively,
     * <code>path</code> can be used for an AWS service path-based API. The ensuing
     * <code>service_api</code> refers to the path to an AWS service resource,
     * including the region of the integrated AWS service, if applicable. For example,
     * for integration with the S3 API of <code><a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectGET.html">GetObject</a></code>,
     * the <code>uri</code> can be either
     * <code>arn:aws:apigateway:us-west-2:s3:action/GetObject&amp;Bucket={bucket}&amp;Key={key}</code>
     * or <code>arn:aws:apigateway:us-west-2:s3:path/{bucket}/{key}</code></p>
     * </li></ul>
     */
    inline PutIntegrationRequest& WithUri(const char* value) { SetUri(value); return *this;}


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
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }

    /**
     * <p>The type of the network connection to the integration endpoint. The valid
     * value is <code>INTERNET</code> for connections through the public routable
     * internet or <code>VPC_LINK</code> for private connections between API Gateway
     * and a network load balancer in a VPC. The default value is
     * <code>INTERNET</code>.</p>
     */
    inline void SetConnectionType(const ConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }

    /**
     * <p>The type of the network connection to the integration endpoint. The valid
     * value is <code>INTERNET</code> for connections through the public routable
     * internet or <code>VPC_LINK</code> for private connections between API Gateway
     * and a network load balancer in a VPC. The default value is
     * <code>INTERNET</code>.</p>
     */
    inline void SetConnectionType(ConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }

    /**
     * <p>The type of the network connection to the integration endpoint. The valid
     * value is <code>INTERNET</code> for connections through the public routable
     * internet or <code>VPC_LINK</code> for private connections between API Gateway
     * and a network load balancer in a VPC. The default value is
     * <code>INTERNET</code>.</p>
     */
    inline PutIntegrationRequest& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}

    /**
     * <p>The type of the network connection to the integration endpoint. The valid
     * value is <code>INTERNET</code> for connections through the public routable
     * internet or <code>VPC_LINK</code> for private connections between API Gateway
     * and a network load balancer in a VPC. The default value is
     * <code>INTERNET</code>.</p>
     */
    inline PutIntegrationRequest& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}


    /**
     * <p>The (<a
     * href="https://docs.aws.amazon.com/apigateway/api-reference/resource/vpc-link/#id"><code>id</code></a>)
     * of the <a>VpcLink</a> used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The (<a
     * href="https://docs.aws.amazon.com/apigateway/api-reference/resource/vpc-link/#id"><code>id</code></a>)
     * of the <a>VpcLink</a> used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The (<a
     * href="https://docs.aws.amazon.com/apigateway/api-reference/resource/vpc-link/#id"><code>id</code></a>)
     * of the <a>VpcLink</a> used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The (<a
     * href="https://docs.aws.amazon.com/apigateway/api-reference/resource/vpc-link/#id"><code>id</code></a>)
     * of the <a>VpcLink</a> used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The (<a
     * href="https://docs.aws.amazon.com/apigateway/api-reference/resource/vpc-link/#id"><code>id</code></a>)
     * of the <a>VpcLink</a> used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The (<a
     * href="https://docs.aws.amazon.com/apigateway/api-reference/resource/vpc-link/#id"><code>id</code></a>)
     * of the <a>VpcLink</a> used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline PutIntegrationRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The (<a
     * href="https://docs.aws.amazon.com/apigateway/api-reference/resource/vpc-link/#id"><code>id</code></a>)
     * of the <a>VpcLink</a> used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline PutIntegrationRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The (<a
     * href="https://docs.aws.amazon.com/apigateway/api-reference/resource/vpc-link/#id"><code>id</code></a>)
     * of the <a>VpcLink</a> used for the integration when
     * <code>connectionType=VPC_LINK</code> and undefined, otherwise.</p>
     */
    inline PutIntegrationRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline const Aws::String& GetCredentials() const{ return m_credentials; }

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline void SetCredentials(const Aws::String& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline void SetCredentials(Aws::String&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline void SetCredentials(const char* value) { m_credentialsHasBeenSet = true; m_credentials.assign(value); }

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline PutIntegrationRequest& WithCredentials(const Aws::String& value) { SetCredentials(value); return *this;}

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline PutIntegrationRequest& WithCredentials(Aws::String&& value) { SetCredentials(std::move(value)); return *this;}

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline PutIntegrationRequest& WithCredentials(const char* value) { SetCredentials(value); return *this;}


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
    inline bool RequestParametersHasBeenSet() const { return m_requestParametersHasBeenSet; }

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
    inline void SetRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

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
    inline void SetRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::move(value); }

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
    inline PutIntegrationRequest& WithRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestParameters(value); return *this;}

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
    inline PutIntegrationRequest& WithRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestParameters(std::move(value)); return *this;}

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
    inline PutIntegrationRequest& AddRequestParameters(const Aws::String& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }

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
    inline PutIntegrationRequest& AddRequestParameters(Aws::String&& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }

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
    inline PutIntegrationRequest& AddRequestParameters(const Aws::String& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }

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
    inline PutIntegrationRequest& AddRequestParameters(Aws::String&& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), std::move(value)); return *this; }

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
    inline PutIntegrationRequest& AddRequestParameters(const char* key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }

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
    inline PutIntegrationRequest& AddRequestParameters(Aws::String&& key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }

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
    inline PutIntegrationRequest& AddRequestParameters(const char* key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }


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
    inline bool RequestTemplatesHasBeenSet() const { return m_requestTemplatesHasBeenSet; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline void SetRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = value; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline void SetRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = std::move(value); }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& WithRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestTemplates(value); return *this;}

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& WithRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestTemplates(std::move(value)); return *this;}

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(const Aws::String& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(Aws::String&& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(const Aws::String& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(Aws::String&& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(const char* key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(Aws::String&& key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(const char* key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, value); return *this; }


    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p> <ul>
     * <li><p><code>WHEN_NO_MATCH</code> passes the request body for unmapped content
     * types through to the integration back end without transformation.</p></li>
     * <li><p><code>NEVER</code> rejects unmapped content types with an HTTP 415
     * 'Unsupported Media Type' response.</p></li>
     * <li><p><code>WHEN_NO_TEMPLATES</code> allows pass-through when the integration
     * has NO content types mapped to templates. However if there is at least one
     * content type defined, unmapped content types will be rejected with the same 415
     * response.</p></li> </ul>
     */
    inline const Aws::String& GetPassthroughBehavior() const{ return m_passthroughBehavior; }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p> <ul>
     * <li><p><code>WHEN_NO_MATCH</code> passes the request body for unmapped content
     * types through to the integration back end without transformation.</p></li>
     * <li><p><code>NEVER</code> rejects unmapped content types with an HTTP 415
     * 'Unsupported Media Type' response.</p></li>
     * <li><p><code>WHEN_NO_TEMPLATES</code> allows pass-through when the integration
     * has NO content types mapped to templates. However if there is at least one
     * content type defined, unmapped content types will be rejected with the same 415
     * response.</p></li> </ul>
     */
    inline bool PassthroughBehaviorHasBeenSet() const { return m_passthroughBehaviorHasBeenSet; }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p> <ul>
     * <li><p><code>WHEN_NO_MATCH</code> passes the request body for unmapped content
     * types through to the integration back end without transformation.</p></li>
     * <li><p><code>NEVER</code> rejects unmapped content types with an HTTP 415
     * 'Unsupported Media Type' response.</p></li>
     * <li><p><code>WHEN_NO_TEMPLATES</code> allows pass-through when the integration
     * has NO content types mapped to templates. However if there is at least one
     * content type defined, unmapped content types will be rejected with the same 415
     * response.</p></li> </ul>
     */
    inline void SetPassthroughBehavior(const Aws::String& value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior = value; }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p> <ul>
     * <li><p><code>WHEN_NO_MATCH</code> passes the request body for unmapped content
     * types through to the integration back end without transformation.</p></li>
     * <li><p><code>NEVER</code> rejects unmapped content types with an HTTP 415
     * 'Unsupported Media Type' response.</p></li>
     * <li><p><code>WHEN_NO_TEMPLATES</code> allows pass-through when the integration
     * has NO content types mapped to templates. However if there is at least one
     * content type defined, unmapped content types will be rejected with the same 415
     * response.</p></li> </ul>
     */
    inline void SetPassthroughBehavior(Aws::String&& value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior = std::move(value); }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p> <ul>
     * <li><p><code>WHEN_NO_MATCH</code> passes the request body for unmapped content
     * types through to the integration back end without transformation.</p></li>
     * <li><p><code>NEVER</code> rejects unmapped content types with an HTTP 415
     * 'Unsupported Media Type' response.</p></li>
     * <li><p><code>WHEN_NO_TEMPLATES</code> allows pass-through when the integration
     * has NO content types mapped to templates. However if there is at least one
     * content type defined, unmapped content types will be rejected with the same 415
     * response.</p></li> </ul>
     */
    inline void SetPassthroughBehavior(const char* value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior.assign(value); }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p> <ul>
     * <li><p><code>WHEN_NO_MATCH</code> passes the request body for unmapped content
     * types through to the integration back end without transformation.</p></li>
     * <li><p><code>NEVER</code> rejects unmapped content types with an HTTP 415
     * 'Unsupported Media Type' response.</p></li>
     * <li><p><code>WHEN_NO_TEMPLATES</code> allows pass-through when the integration
     * has NO content types mapped to templates. However if there is at least one
     * content type defined, unmapped content types will be rejected with the same 415
     * response.</p></li> </ul>
     */
    inline PutIntegrationRequest& WithPassthroughBehavior(const Aws::String& value) { SetPassthroughBehavior(value); return *this;}

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p> <ul>
     * <li><p><code>WHEN_NO_MATCH</code> passes the request body for unmapped content
     * types through to the integration back end without transformation.</p></li>
     * <li><p><code>NEVER</code> rejects unmapped content types with an HTTP 415
     * 'Unsupported Media Type' response.</p></li>
     * <li><p><code>WHEN_NO_TEMPLATES</code> allows pass-through when the integration
     * has NO content types mapped to templates. However if there is at least one
     * content type defined, unmapped content types will be rejected with the same 415
     * response.</p></li> </ul>
     */
    inline PutIntegrationRequest& WithPassthroughBehavior(Aws::String&& value) { SetPassthroughBehavior(std::move(value)); return *this;}

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p> <ul>
     * <li><p><code>WHEN_NO_MATCH</code> passes the request body for unmapped content
     * types through to the integration back end without transformation.</p></li>
     * <li><p><code>NEVER</code> rejects unmapped content types with an HTTP 415
     * 'Unsupported Media Type' response.</p></li>
     * <li><p><code>WHEN_NO_TEMPLATES</code> allows pass-through when the integration
     * has NO content types mapped to templates. However if there is at least one
     * content type defined, unmapped content types will be rejected with the same 415
     * response.</p></li> </ul>
     */
    inline PutIntegrationRequest& WithPassthroughBehavior(const char* value) { SetPassthroughBehavior(value); return *this;}


    /**
     * <p>A list of request parameters whose values are to be cached.</p>
     */
    inline const Aws::String& GetCacheNamespace() const{ return m_cacheNamespace; }

    /**
     * <p>A list of request parameters whose values are to be cached.</p>
     */
    inline bool CacheNamespaceHasBeenSet() const { return m_cacheNamespaceHasBeenSet; }

    /**
     * <p>A list of request parameters whose values are to be cached.</p>
     */
    inline void SetCacheNamespace(const Aws::String& value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace = value; }

    /**
     * <p>A list of request parameters whose values are to be cached.</p>
     */
    inline void SetCacheNamespace(Aws::String&& value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace = std::move(value); }

    /**
     * <p>A list of request parameters whose values are to be cached.</p>
     */
    inline void SetCacheNamespace(const char* value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace.assign(value); }

    /**
     * <p>A list of request parameters whose values are to be cached.</p>
     */
    inline PutIntegrationRequest& WithCacheNamespace(const Aws::String& value) { SetCacheNamespace(value); return *this;}

    /**
     * <p>A list of request parameters whose values are to be cached.</p>
     */
    inline PutIntegrationRequest& WithCacheNamespace(Aws::String&& value) { SetCacheNamespace(std::move(value)); return *this;}

    /**
     * <p>A list of request parameters whose values are to be cached.</p>
     */
    inline PutIntegrationRequest& WithCacheNamespace(const char* value) { SetCacheNamespace(value); return *this;}


    /**
     * <p>An API-specific tag group of related cached parameters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheKeyParameters() const{ return m_cacheKeyParameters; }

    /**
     * <p>An API-specific tag group of related cached parameters.</p>
     */
    inline bool CacheKeyParametersHasBeenSet() const { return m_cacheKeyParametersHasBeenSet; }

    /**
     * <p>An API-specific tag group of related cached parameters.</p>
     */
    inline void SetCacheKeyParameters(const Aws::Vector<Aws::String>& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters = value; }

    /**
     * <p>An API-specific tag group of related cached parameters.</p>
     */
    inline void SetCacheKeyParameters(Aws::Vector<Aws::String>&& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters = std::move(value); }

    /**
     * <p>An API-specific tag group of related cached parameters.</p>
     */
    inline PutIntegrationRequest& WithCacheKeyParameters(const Aws::Vector<Aws::String>& value) { SetCacheKeyParameters(value); return *this;}

    /**
     * <p>An API-specific tag group of related cached parameters.</p>
     */
    inline PutIntegrationRequest& WithCacheKeyParameters(Aws::Vector<Aws::String>&& value) { SetCacheKeyParameters(std::move(value)); return *this;}

    /**
     * <p>An API-specific tag group of related cached parameters.</p>
     */
    inline PutIntegrationRequest& AddCacheKeyParameters(const Aws::String& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(value); return *this; }

    /**
     * <p>An API-specific tag group of related cached parameters.</p>
     */
    inline PutIntegrationRequest& AddCacheKeyParameters(Aws::String&& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(std::move(value)); return *this; }

    /**
     * <p>An API-specific tag group of related cached parameters.</p>
     */
    inline PutIntegrationRequest& AddCacheKeyParameters(const char* value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(value); return *this; }


    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a request payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a request
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the request payload will be passed through from the
     * method request to integration request without modification, provided that the
     * <code>passthroughBehavior</code> is configured to support payload
     * pass-through.</p>
     */
    inline const ContentHandlingStrategy& GetContentHandling() const{ return m_contentHandling; }

    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a request payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a request
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the request payload will be passed through from the
     * method request to integration request without modification, provided that the
     * <code>passthroughBehavior</code> is configured to support payload
     * pass-through.</p>
     */
    inline bool ContentHandlingHasBeenSet() const { return m_contentHandlingHasBeenSet; }

    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a request payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a request
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the request payload will be passed through from the
     * method request to integration request without modification, provided that the
     * <code>passthroughBehavior</code> is configured to support payload
     * pass-through.</p>
     */
    inline void SetContentHandling(const ContentHandlingStrategy& value) { m_contentHandlingHasBeenSet = true; m_contentHandling = value; }

    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a request payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a request
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the request payload will be passed through from the
     * method request to integration request without modification, provided that the
     * <code>passthroughBehavior</code> is configured to support payload
     * pass-through.</p>
     */
    inline void SetContentHandling(ContentHandlingStrategy&& value) { m_contentHandlingHasBeenSet = true; m_contentHandling = std::move(value); }

    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a request payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a request
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the request payload will be passed through from the
     * method request to integration request without modification, provided that the
     * <code>passthroughBehavior</code> is configured to support payload
     * pass-through.</p>
     */
    inline PutIntegrationRequest& WithContentHandling(const ContentHandlingStrategy& value) { SetContentHandling(value); return *this;}

    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a request payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a request
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the request payload will be passed through from the
     * method request to integration request without modification, provided that the
     * <code>passthroughBehavior</code> is configured to support payload
     * pass-through.</p>
     */
    inline PutIntegrationRequest& WithContentHandling(ContentHandlingStrategy&& value) { SetContentHandling(std::move(value)); return *this;}


    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds.</p>
     */
    inline int GetTimeoutInMillis() const{ return m_timeoutInMillis; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds.</p>
     */
    inline bool TimeoutInMillisHasBeenSet() const { return m_timeoutInMillisHasBeenSet; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds.</p>
     */
    inline void SetTimeoutInMillis(int value) { m_timeoutInMillisHasBeenSet = true; m_timeoutInMillis = value; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds.</p>
     */
    inline PutIntegrationRequest& WithTimeoutInMillis(int value) { SetTimeoutInMillis(value); return *this;}

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet;

    IntegrationType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_integrationHttpMethod;
    bool m_integrationHttpMethodHasBeenSet;

    Aws::String m_uri;
    bool m_uriHasBeenSet;

    ConnectionType m_connectionType;
    bool m_connectionTypeHasBeenSet;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;

    Aws::String m_credentials;
    bool m_credentialsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_requestParameters;
    bool m_requestParametersHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_requestTemplates;
    bool m_requestTemplatesHasBeenSet;

    Aws::String m_passthroughBehavior;
    bool m_passthroughBehaviorHasBeenSet;

    Aws::String m_cacheNamespace;
    bool m_cacheNamespaceHasBeenSet;

    Aws::Vector<Aws::String> m_cacheKeyParameters;
    bool m_cacheKeyParametersHasBeenSet;

    ContentHandlingStrategy m_contentHandling;
    bool m_contentHandlingHasBeenSet;

    int m_timeoutInMillis;
    bool m_timeoutInMillisHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
