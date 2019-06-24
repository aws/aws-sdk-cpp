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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request to add a method to an existing <a>Resource</a>
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutMethodRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API PutMethodRequest : public APIGatewayRequest
  {
  public:
    PutMethodRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMethod"; }

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
    inline PutMethodRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutMethodRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutMethodRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>[Required] The <a>Resource</a> identifier for the new <a>Method</a>
     * resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>[Required] The <a>Resource</a> identifier for the new <a>Method</a>
     * resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>[Required] The <a>Resource</a> identifier for the new <a>Method</a>
     * resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>[Required] The <a>Resource</a> identifier for the new <a>Method</a>
     * resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>[Required] The <a>Resource</a> identifier for the new <a>Method</a>
     * resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>[Required] The <a>Resource</a> identifier for the new <a>Method</a>
     * resource.</p>
     */
    inline PutMethodRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>[Required] The <a>Resource</a> identifier for the new <a>Method</a>
     * resource.</p>
     */
    inline PutMethodRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>[Required] The <a>Resource</a> identifier for the new <a>Method</a>
     * resource.</p>
     */
    inline PutMethodRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>[Required] Specifies the method request's HTTP method type.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>[Required] Specifies the method request's HTTP method type.</p>
     */
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }

    /**
     * <p>[Required] Specifies the method request's HTTP method type.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>[Required] Specifies the method request's HTTP method type.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }

    /**
     * <p>[Required] Specifies the method request's HTTP method type.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>[Required] Specifies the method request's HTTP method type.</p>
     */
    inline PutMethodRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>[Required] Specifies the method request's HTTP method type.</p>
     */
    inline PutMethodRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}

    /**
     * <p>[Required] Specifies the method request's HTTP method type.</p>
     */
    inline PutMethodRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}


    /**
     * <p>[Required] The method's authorization type. Valid values are
     * <code>NONE</code> for open access, <code>AWS_IAM</code> for using AWS IAM
     * permissions, <code>CUSTOM</code> for using a custom authorizer, or
     * <code>COGNITO_USER_POOLS</code> for using a Cognito user pool.</p>
     */
    inline const Aws::String& GetAuthorizationType() const{ return m_authorizationType; }

    /**
     * <p>[Required] The method's authorization type. Valid values are
     * <code>NONE</code> for open access, <code>AWS_IAM</code> for using AWS IAM
     * permissions, <code>CUSTOM</code> for using a custom authorizer, or
     * <code>COGNITO_USER_POOLS</code> for using a Cognito user pool.</p>
     */
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }

    /**
     * <p>[Required] The method's authorization type. Valid values are
     * <code>NONE</code> for open access, <code>AWS_IAM</code> for using AWS IAM
     * permissions, <code>CUSTOM</code> for using a custom authorizer, or
     * <code>COGNITO_USER_POOLS</code> for using a Cognito user pool.</p>
     */
    inline void SetAuthorizationType(const Aws::String& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }

    /**
     * <p>[Required] The method's authorization type. Valid values are
     * <code>NONE</code> for open access, <code>AWS_IAM</code> for using AWS IAM
     * permissions, <code>CUSTOM</code> for using a custom authorizer, or
     * <code>COGNITO_USER_POOLS</code> for using a Cognito user pool.</p>
     */
    inline void SetAuthorizationType(Aws::String&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = std::move(value); }

    /**
     * <p>[Required] The method's authorization type. Valid values are
     * <code>NONE</code> for open access, <code>AWS_IAM</code> for using AWS IAM
     * permissions, <code>CUSTOM</code> for using a custom authorizer, or
     * <code>COGNITO_USER_POOLS</code> for using a Cognito user pool.</p>
     */
    inline void SetAuthorizationType(const char* value) { m_authorizationTypeHasBeenSet = true; m_authorizationType.assign(value); }

    /**
     * <p>[Required] The method's authorization type. Valid values are
     * <code>NONE</code> for open access, <code>AWS_IAM</code> for using AWS IAM
     * permissions, <code>CUSTOM</code> for using a custom authorizer, or
     * <code>COGNITO_USER_POOLS</code> for using a Cognito user pool.</p>
     */
    inline PutMethodRequest& WithAuthorizationType(const Aws::String& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>[Required] The method's authorization type. Valid values are
     * <code>NONE</code> for open access, <code>AWS_IAM</code> for using AWS IAM
     * permissions, <code>CUSTOM</code> for using a custom authorizer, or
     * <code>COGNITO_USER_POOLS</code> for using a Cognito user pool.</p>
     */
    inline PutMethodRequest& WithAuthorizationType(Aws::String&& value) { SetAuthorizationType(std::move(value)); return *this;}

    /**
     * <p>[Required] The method's authorization type. Valid values are
     * <code>NONE</code> for open access, <code>AWS_IAM</code> for using AWS IAM
     * permissions, <code>CUSTOM</code> for using a custom authorizer, or
     * <code>COGNITO_USER_POOLS</code> for using a Cognito user pool.</p>
     */
    inline PutMethodRequest& WithAuthorizationType(const char* value) { SetAuthorizationType(value); return *this;}


    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method, if
     * the type is CUSTOM or COGNITO_USER_POOLS. The authorizer identifier is generated
     * by API Gateway when you created the authorizer.</p>
     */
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method, if
     * the type is CUSTOM or COGNITO_USER_POOLS. The authorizer identifier is generated
     * by API Gateway when you created the authorizer.</p>
     */
    inline bool AuthorizerIdHasBeenSet() const { return m_authorizerIdHasBeenSet; }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method, if
     * the type is CUSTOM or COGNITO_USER_POOLS. The authorizer identifier is generated
     * by API Gateway when you created the authorizer.</p>
     */
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method, if
     * the type is CUSTOM or COGNITO_USER_POOLS. The authorizer identifier is generated
     * by API Gateway when you created the authorizer.</p>
     */
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = std::move(value); }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method, if
     * the type is CUSTOM or COGNITO_USER_POOLS. The authorizer identifier is generated
     * by API Gateway when you created the authorizer.</p>
     */
    inline void SetAuthorizerId(const char* value) { m_authorizerIdHasBeenSet = true; m_authorizerId.assign(value); }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method, if
     * the type is CUSTOM or COGNITO_USER_POOLS. The authorizer identifier is generated
     * by API Gateway when you created the authorizer.</p>
     */
    inline PutMethodRequest& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method, if
     * the type is CUSTOM or COGNITO_USER_POOLS. The authorizer identifier is generated
     * by API Gateway when you created the authorizer.</p>
     */
    inline PutMethodRequest& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(std::move(value)); return *this;}

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method, if
     * the type is CUSTOM or COGNITO_USER_POOLS. The authorizer identifier is generated
     * by API Gateway when you created the authorizer.</p>
     */
    inline PutMethodRequest& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}


    /**
     * <p>Specifies whether the method required a valid <a>ApiKey</a>.</p>
     */
    inline bool GetApiKeyRequired() const{ return m_apiKeyRequired; }

    /**
     * <p>Specifies whether the method required a valid <a>ApiKey</a>.</p>
     */
    inline bool ApiKeyRequiredHasBeenSet() const { return m_apiKeyRequiredHasBeenSet; }

    /**
     * <p>Specifies whether the method required a valid <a>ApiKey</a>.</p>
     */
    inline void SetApiKeyRequired(bool value) { m_apiKeyRequiredHasBeenSet = true; m_apiKeyRequired = value; }

    /**
     * <p>Specifies whether the method required a valid <a>ApiKey</a>.</p>
     */
    inline PutMethodRequest& WithApiKeyRequired(bool value) { SetApiKeyRequired(value); return *this;}


    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline const Aws::String& GetOperationName() const{ return m_operationName; }

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline void SetOperationName(const Aws::String& value) { m_operationNameHasBeenSet = true; m_operationName = value; }

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline void SetOperationName(Aws::String&& value) { m_operationNameHasBeenSet = true; m_operationName = std::move(value); }

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline void SetOperationName(const char* value) { m_operationNameHasBeenSet = true; m_operationName.assign(value); }

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline PutMethodRequest& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline PutMethodRequest& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline PutMethodRequest& WithOperationName(const char* value) { SetOperationName(value); return *this;}


    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key defines a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetRequestParameters() const{ return m_requestParameters; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key defines a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline bool RequestParametersHasBeenSet() const { return m_requestParametersHasBeenSet; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key defines a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline void SetRequestParameters(const Aws::Map<Aws::String, bool>& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key defines a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline void SetRequestParameters(Aws::Map<Aws::String, bool>&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::move(value); }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key defines a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline PutMethodRequest& WithRequestParameters(const Aws::Map<Aws::String, bool>& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key defines a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline PutMethodRequest& WithRequestParameters(Aws::Map<Aws::String, bool>&& value) { SetRequestParameters(std::move(value)); return *this;}

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key defines a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline PutMethodRequest& AddRequestParameters(const Aws::String& key, bool value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key defines a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline PutMethodRequest& AddRequestParameters(Aws::String&& key, bool value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key defines a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline PutMethodRequest& AddRequestParameters(const char* key, bool value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }


    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestModels() const{ return m_requestModels; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline bool RequestModelsHasBeenSet() const { return m_requestModelsHasBeenSet; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline void SetRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { m_requestModelsHasBeenSet = true; m_requestModels = value; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline void SetRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { m_requestModelsHasBeenSet = true; m_requestModels = std::move(value); }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& WithRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestModels(value); return *this;}

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& WithRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestModels(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& AddRequestModels(const Aws::String& key, const Aws::String& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, value); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& AddRequestModels(Aws::String&& key, const Aws::String& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& AddRequestModels(const Aws::String& key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& AddRequestModels(Aws::String&& key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& AddRequestModels(const char* key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& AddRequestModels(Aws::String&& key, const char* value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& AddRequestModels(const char* key, const char* value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, value); return *this; }


    /**
     * <p>The identifier of a <a>RequestValidator</a> for validating the method
     * request.</p>
     */
    inline const Aws::String& GetRequestValidatorId() const{ return m_requestValidatorId; }

    /**
     * <p>The identifier of a <a>RequestValidator</a> for validating the method
     * request.</p>
     */
    inline bool RequestValidatorIdHasBeenSet() const { return m_requestValidatorIdHasBeenSet; }

    /**
     * <p>The identifier of a <a>RequestValidator</a> for validating the method
     * request.</p>
     */
    inline void SetRequestValidatorId(const Aws::String& value) { m_requestValidatorIdHasBeenSet = true; m_requestValidatorId = value; }

    /**
     * <p>The identifier of a <a>RequestValidator</a> for validating the method
     * request.</p>
     */
    inline void SetRequestValidatorId(Aws::String&& value) { m_requestValidatorIdHasBeenSet = true; m_requestValidatorId = std::move(value); }

    /**
     * <p>The identifier of a <a>RequestValidator</a> for validating the method
     * request.</p>
     */
    inline void SetRequestValidatorId(const char* value) { m_requestValidatorIdHasBeenSet = true; m_requestValidatorId.assign(value); }

    /**
     * <p>The identifier of a <a>RequestValidator</a> for validating the method
     * request.</p>
     */
    inline PutMethodRequest& WithRequestValidatorId(const Aws::String& value) { SetRequestValidatorId(value); return *this;}

    /**
     * <p>The identifier of a <a>RequestValidator</a> for validating the method
     * request.</p>
     */
    inline PutMethodRequest& WithRequestValidatorId(Aws::String&& value) { SetRequestValidatorId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a <a>RequestValidator</a> for validating the method
     * request.</p>
     */
    inline PutMethodRequest& WithRequestValidatorId(const char* value) { SetRequestValidatorId(value); return *this;}


    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizationScopes() const{ return m_authorizationScopes; }

    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline bool AuthorizationScopesHasBeenSet() const { return m_authorizationScopesHasBeenSet; }

    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline void SetAuthorizationScopes(const Aws::Vector<Aws::String>& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes = value; }

    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline void SetAuthorizationScopes(Aws::Vector<Aws::String>&& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes = std::move(value); }

    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline PutMethodRequest& WithAuthorizationScopes(const Aws::Vector<Aws::String>& value) { SetAuthorizationScopes(value); return *this;}

    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline PutMethodRequest& WithAuthorizationScopes(Aws::Vector<Aws::String>&& value) { SetAuthorizationScopes(std::move(value)); return *this;}

    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline PutMethodRequest& AddAuthorizationScopes(const Aws::String& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.push_back(value); return *this; }

    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline PutMethodRequest& AddAuthorizationScopes(Aws::String&& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline PutMethodRequest& AddAuthorizationScopes(const char* value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.push_back(value); return *this; }

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet;

    Aws::String m_authorizationType;
    bool m_authorizationTypeHasBeenSet;

    Aws::String m_authorizerId;
    bool m_authorizerIdHasBeenSet;

    bool m_apiKeyRequired;
    bool m_apiKeyRequiredHasBeenSet;

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet;

    Aws::Map<Aws::String, bool> m_requestParameters;
    bool m_requestParametersHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_requestModels;
    bool m_requestModelsHasBeenSet;

    Aws::String m_requestValidatorId;
    bool m_requestValidatorIdHasBeenSet;

    Aws::Vector<Aws::String> m_authorizationScopes;
    bool m_authorizationScopesHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
