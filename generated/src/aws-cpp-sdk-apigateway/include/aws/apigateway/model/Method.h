/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/Integration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/MethodResponse.h>
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
   * <p> Represents a client-facing interface by which the client calls the API to
   * access back-end resources. A Method resource is integrated with an Integration
   * resource. Both consist of a request and one or more responses. The method
   * request takes the client input that is passed to the back end through the
   * integration request. A method response returns the output from the back end to
   * the client through an integration response. A method request is embodied in a
   * Method resource, whereas an integration request is embodied in an Integration
   * resource. On the other hand, a method response is represented by a
   * MethodResponse resource, whereas an integration response is represented by an
   * IntegrationResponse resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Method">AWS
   * API Reference</a></p>
   */
  class Method
  {
  public:
    AWS_APIGATEWAY_API Method();
    AWS_APIGATEWAY_API Method(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Method& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The method's HTTP verb.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline Method& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline Method& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline Method& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}


    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline const Aws::String& GetAuthorizationType() const{ return m_authorizationType; }

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline void SetAuthorizationType(const Aws::String& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline void SetAuthorizationType(Aws::String&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = std::move(value); }

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline void SetAuthorizationType(const char* value) { m_authorizationTypeHasBeenSet = true; m_authorizationType.assign(value); }

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline Method& WithAuthorizationType(const Aws::String& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline Method& WithAuthorizationType(Aws::String&& value) { SetAuthorizationType(std::move(value)); return *this;}

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline Method& WithAuthorizationType(const char* value) { SetAuthorizationType(value); return *this;}


    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }

    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline bool AuthorizerIdHasBeenSet() const { return m_authorizerIdHasBeenSet; }

    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }

    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = std::move(value); }

    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline void SetAuthorizerId(const char* value) { m_authorizerIdHasBeenSet = true; m_authorizerId.assign(value); }

    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline Method& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline Method& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline Method& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}


    /**
     * <p>A boolean flag specifying whether a valid ApiKey is required to invoke this
     * method.</p>
     */
    inline bool GetApiKeyRequired() const{ return m_apiKeyRequired; }

    /**
     * <p>A boolean flag specifying whether a valid ApiKey is required to invoke this
     * method.</p>
     */
    inline bool ApiKeyRequiredHasBeenSet() const { return m_apiKeyRequiredHasBeenSet; }

    /**
     * <p>A boolean flag specifying whether a valid ApiKey is required to invoke this
     * method.</p>
     */
    inline void SetApiKeyRequired(bool value) { m_apiKeyRequiredHasBeenSet = true; m_apiKeyRequired = value; }

    /**
     * <p>A boolean flag specifying whether a valid ApiKey is required to invoke this
     * method.</p>
     */
    inline Method& WithApiKeyRequired(bool value) { SetApiKeyRequired(value); return *this;}


    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline const Aws::String& GetRequestValidatorId() const{ return m_requestValidatorId; }

    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline bool RequestValidatorIdHasBeenSet() const { return m_requestValidatorIdHasBeenSet; }

    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline void SetRequestValidatorId(const Aws::String& value) { m_requestValidatorIdHasBeenSet = true; m_requestValidatorId = value; }

    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline void SetRequestValidatorId(Aws::String&& value) { m_requestValidatorIdHasBeenSet = true; m_requestValidatorId = std::move(value); }

    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline void SetRequestValidatorId(const char* value) { m_requestValidatorIdHasBeenSet = true; m_requestValidatorId.assign(value); }

    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline Method& WithRequestValidatorId(const Aws::String& value) { SetRequestValidatorId(value); return *this;}

    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline Method& WithRequestValidatorId(Aws::String&& value) { SetRequestValidatorId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline Method& WithRequestValidatorId(const char* value) { SetRequestValidatorId(value); return *this;}


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
    inline Method& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline Method& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline Method& WithOperationName(const char* value) { SetOperationName(value); return *this;}


    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in Integration to be
     * mapped to integration request parameters or templates.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetRequestParameters() const{ return m_requestParameters; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in Integration to be
     * mapped to integration request parameters or templates.</p>
     */
    inline bool RequestParametersHasBeenSet() const { return m_requestParametersHasBeenSet; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in Integration to be
     * mapped to integration request parameters or templates.</p>
     */
    inline void SetRequestParameters(const Aws::Map<Aws::String, bool>& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in Integration to be
     * mapped to integration request parameters or templates.</p>
     */
    inline void SetRequestParameters(Aws::Map<Aws::String, bool>&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::move(value); }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in Integration to be
     * mapped to integration request parameters or templates.</p>
     */
    inline Method& WithRequestParameters(const Aws::Map<Aws::String, bool>& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in Integration to be
     * mapped to integration request parameters or templates.</p>
     */
    inline Method& WithRequestParameters(Aws::Map<Aws::String, bool>&& value) { SetRequestParameters(std::move(value)); return *this;}

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in Integration to be
     * mapped to integration request parameters or templates.</p>
     */
    inline Method& AddRequestParameters(const Aws::String& key, bool value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in Integration to be
     * mapped to integration request parameters or templates.</p>
     */
    inline Method& AddRequestParameters(Aws::String&& key, bool value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in Integration to be
     * mapped to integration request parameters or templates.</p>
     */
    inline Method& AddRequestParameters(const char* key, bool value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }


    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestModels() const{ return m_requestModels; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline bool RequestModelsHasBeenSet() const { return m_requestModelsHasBeenSet; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline void SetRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { m_requestModelsHasBeenSet = true; m_requestModels = value; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline void SetRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { m_requestModelsHasBeenSet = true; m_requestModels = std::move(value); }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline Method& WithRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestModels(value); return *this;}

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline Method& WithRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestModels(std::move(value)); return *this;}

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline Method& AddRequestModels(const Aws::String& key, const Aws::String& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, value); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline Method& AddRequestModels(Aws::String&& key, const Aws::String& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline Method& AddRequestModels(const Aws::String& key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline Method& AddRequestModels(Aws::String&& key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline Method& AddRequestModels(const char* key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline Method& AddRequestModels(Aws::String&& key, const char* value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline Method& AddRequestModels(const char* key, const char* value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, value); return *this; }


    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline const Aws::Map<Aws::String, MethodResponse>& GetMethodResponses() const{ return m_methodResponses; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline bool MethodResponsesHasBeenSet() const { return m_methodResponsesHasBeenSet; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline void SetMethodResponses(const Aws::Map<Aws::String, MethodResponse>& value) { m_methodResponsesHasBeenSet = true; m_methodResponses = value; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline void SetMethodResponses(Aws::Map<Aws::String, MethodResponse>&& value) { m_methodResponsesHasBeenSet = true; m_methodResponses = std::move(value); }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline Method& WithMethodResponses(const Aws::Map<Aws::String, MethodResponse>& value) { SetMethodResponses(value); return *this;}

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline Method& WithMethodResponses(Aws::Map<Aws::String, MethodResponse>&& value) { SetMethodResponses(std::move(value)); return *this;}

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline Method& AddMethodResponses(const Aws::String& key, const MethodResponse& value) { m_methodResponsesHasBeenSet = true; m_methodResponses.emplace(key, value); return *this; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline Method& AddMethodResponses(Aws::String&& key, const MethodResponse& value) { m_methodResponsesHasBeenSet = true; m_methodResponses.emplace(std::move(key), value); return *this; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline Method& AddMethodResponses(const Aws::String& key, MethodResponse&& value) { m_methodResponsesHasBeenSet = true; m_methodResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline Method& AddMethodResponses(Aws::String&& key, MethodResponse&& value) { m_methodResponsesHasBeenSet = true; m_methodResponses.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline Method& AddMethodResponses(const char* key, MethodResponse&& value) { m_methodResponsesHasBeenSet = true; m_methodResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline Method& AddMethodResponses(const char* key, const MethodResponse& value) { m_methodResponsesHasBeenSet = true; m_methodResponses.emplace(key, value); return *this; }


    /**
     * <p>Gets the method's integration responsible for passing the client-submitted
     * request to the back end and performing necessary transformations to make the
     * request compliant with the back end.</p>
     */
    inline const Integration& GetMethodIntegration() const{ return m_methodIntegration; }

    /**
     * <p>Gets the method's integration responsible for passing the client-submitted
     * request to the back end and performing necessary transformations to make the
     * request compliant with the back end.</p>
     */
    inline bool MethodIntegrationHasBeenSet() const { return m_methodIntegrationHasBeenSet; }

    /**
     * <p>Gets the method's integration responsible for passing the client-submitted
     * request to the back end and performing necessary transformations to make the
     * request compliant with the back end.</p>
     */
    inline void SetMethodIntegration(const Integration& value) { m_methodIntegrationHasBeenSet = true; m_methodIntegration = value; }

    /**
     * <p>Gets the method's integration responsible for passing the client-submitted
     * request to the back end and performing necessary transformations to make the
     * request compliant with the back end.</p>
     */
    inline void SetMethodIntegration(Integration&& value) { m_methodIntegrationHasBeenSet = true; m_methodIntegration = std::move(value); }

    /**
     * <p>Gets the method's integration responsible for passing the client-submitted
     * request to the back end and performing necessary transformations to make the
     * request compliant with the back end.</p>
     */
    inline Method& WithMethodIntegration(const Integration& value) { SetMethodIntegration(value); return *this;}

    /**
     * <p>Gets the method's integration responsible for passing the client-submitted
     * request to the back end and performing necessary transformations to make the
     * request compliant with the back end.</p>
     */
    inline Method& WithMethodIntegration(Integration&& value) { SetMethodIntegration(std::move(value)); return *this;}


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
    inline Method& WithAuthorizationScopes(const Aws::Vector<Aws::String>& value) { SetAuthorizationScopes(value); return *this;}

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
    inline Method& WithAuthorizationScopes(Aws::Vector<Aws::String>&& value) { SetAuthorizationScopes(std::move(value)); return *this;}

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
    inline Method& AddAuthorizationScopes(const Aws::String& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.push_back(value); return *this; }

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
    inline Method& AddAuthorizationScopes(Aws::String&& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.push_back(std::move(value)); return *this; }

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
    inline Method& AddAuthorizationScopes(const char* value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    
    inline Method& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline Method& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline Method& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    Aws::String m_authorizationType;
    bool m_authorizationTypeHasBeenSet = false;

    Aws::String m_authorizerId;
    bool m_authorizerIdHasBeenSet = false;

    bool m_apiKeyRequired;
    bool m_apiKeyRequiredHasBeenSet = false;

    Aws::String m_requestValidatorId;
    bool m_requestValidatorIdHasBeenSet = false;

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet = false;

    Aws::Map<Aws::String, bool> m_requestParameters;
    bool m_requestParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestModels;
    bool m_requestModelsHasBeenSet = false;

    Aws::Map<Aws::String, MethodResponse> m_methodResponses;
    bool m_methodResponsesHasBeenSet = false;

    Integration m_methodIntegration;
    bool m_methodIntegrationHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizationScopes;
    bool m_authorizationScopesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
