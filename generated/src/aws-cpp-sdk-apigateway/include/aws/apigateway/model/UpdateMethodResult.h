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
  class UpdateMethodResult
  {
  public:
    AWS_APIGATEWAY_API UpdateMethodResult();
    AWS_APIGATEWAY_API UpdateMethodResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API UpdateMethodResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The method's HTTP verb.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethod = value; }

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethod = std::move(value); }

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethod.assign(value); }

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline UpdateMethodResult& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline UpdateMethodResult& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline UpdateMethodResult& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}


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
    inline void SetAuthorizationType(const Aws::String& value) { m_authorizationType = value; }

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline void SetAuthorizationType(Aws::String&& value) { m_authorizationType = std::move(value); }

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline void SetAuthorizationType(const char* value) { m_authorizationType.assign(value); }

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline UpdateMethodResult& WithAuthorizationType(const Aws::String& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline UpdateMethodResult& WithAuthorizationType(Aws::String&& value) { SetAuthorizationType(std::move(value)); return *this;}

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline UpdateMethodResult& WithAuthorizationType(const char* value) { SetAuthorizationType(value); return *this;}


    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }

    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerId = value; }

    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerId = std::move(value); }

    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline void SetAuthorizerId(const char* value) { m_authorizerId.assign(value); }

    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline UpdateMethodResult& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline UpdateMethodResult& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline UpdateMethodResult& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}


    /**
     * <p>A boolean flag specifying whether a valid ApiKey is required to invoke this
     * method.</p>
     */
    inline bool GetApiKeyRequired() const{ return m_apiKeyRequired; }

    /**
     * <p>A boolean flag specifying whether a valid ApiKey is required to invoke this
     * method.</p>
     */
    inline void SetApiKeyRequired(bool value) { m_apiKeyRequired = value; }

    /**
     * <p>A boolean flag specifying whether a valid ApiKey is required to invoke this
     * method.</p>
     */
    inline UpdateMethodResult& WithApiKeyRequired(bool value) { SetApiKeyRequired(value); return *this;}


    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline const Aws::String& GetRequestValidatorId() const{ return m_requestValidatorId; }

    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline void SetRequestValidatorId(const Aws::String& value) { m_requestValidatorId = value; }

    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline void SetRequestValidatorId(Aws::String&& value) { m_requestValidatorId = std::move(value); }

    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline void SetRequestValidatorId(const char* value) { m_requestValidatorId.assign(value); }

    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline UpdateMethodResult& WithRequestValidatorId(const Aws::String& value) { SetRequestValidatorId(value); return *this;}

    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline UpdateMethodResult& WithRequestValidatorId(Aws::String&& value) { SetRequestValidatorId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline UpdateMethodResult& WithRequestValidatorId(const char* value) { SetRequestValidatorId(value); return *this;}


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
    inline void SetOperationName(const Aws::String& value) { m_operationName = value; }

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline void SetOperationName(Aws::String&& value) { m_operationName = std::move(value); }

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline void SetOperationName(const char* value) { m_operationName.assign(value); }

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline UpdateMethodResult& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline UpdateMethodResult& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline UpdateMethodResult& WithOperationName(const char* value) { SetOperationName(value); return *this;}


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
    inline void SetRequestParameters(const Aws::Map<Aws::String, bool>& value) { m_requestParameters = value; }

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
    inline void SetRequestParameters(Aws::Map<Aws::String, bool>&& value) { m_requestParameters = std::move(value); }

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
    inline UpdateMethodResult& WithRequestParameters(const Aws::Map<Aws::String, bool>& value) { SetRequestParameters(value); return *this;}

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
    inline UpdateMethodResult& WithRequestParameters(Aws::Map<Aws::String, bool>&& value) { SetRequestParameters(std::move(value)); return *this;}

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
    inline UpdateMethodResult& AddRequestParameters(const Aws::String& key, bool value) { m_requestParameters.emplace(key, value); return *this; }

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
    inline UpdateMethodResult& AddRequestParameters(Aws::String&& key, bool value) { m_requestParameters.emplace(std::move(key), value); return *this; }

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
    inline UpdateMethodResult& AddRequestParameters(const char* key, bool value) { m_requestParameters.emplace(key, value); return *this; }


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
    inline void SetRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { m_requestModels = value; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline void SetRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { m_requestModels = std::move(value); }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline UpdateMethodResult& WithRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestModels(value); return *this;}

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline UpdateMethodResult& WithRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestModels(std::move(value)); return *this;}

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline UpdateMethodResult& AddRequestModels(const Aws::String& key, const Aws::String& value) { m_requestModels.emplace(key, value); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline UpdateMethodResult& AddRequestModels(Aws::String&& key, const Aws::String& value) { m_requestModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline UpdateMethodResult& AddRequestModels(const Aws::String& key, Aws::String&& value) { m_requestModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline UpdateMethodResult& AddRequestModels(Aws::String&& key, Aws::String&& value) { m_requestModels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline UpdateMethodResult& AddRequestModels(const char* key, Aws::String&& value) { m_requestModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline UpdateMethodResult& AddRequestModels(Aws::String&& key, const char* value) { m_requestModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline UpdateMethodResult& AddRequestModels(const char* key, const char* value) { m_requestModels.emplace(key, value); return *this; }


    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline const Aws::Map<Aws::String, MethodResponse>& GetMethodResponses() const{ return m_methodResponses; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline void SetMethodResponses(const Aws::Map<Aws::String, MethodResponse>& value) { m_methodResponses = value; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline void SetMethodResponses(Aws::Map<Aws::String, MethodResponse>&& value) { m_methodResponses = std::move(value); }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline UpdateMethodResult& WithMethodResponses(const Aws::Map<Aws::String, MethodResponse>& value) { SetMethodResponses(value); return *this;}

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline UpdateMethodResult& WithMethodResponses(Aws::Map<Aws::String, MethodResponse>&& value) { SetMethodResponses(std::move(value)); return *this;}

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline UpdateMethodResult& AddMethodResponses(const Aws::String& key, const MethodResponse& value) { m_methodResponses.emplace(key, value); return *this; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline UpdateMethodResult& AddMethodResponses(Aws::String&& key, const MethodResponse& value) { m_methodResponses.emplace(std::move(key), value); return *this; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline UpdateMethodResult& AddMethodResponses(const Aws::String& key, MethodResponse&& value) { m_methodResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline UpdateMethodResult& AddMethodResponses(Aws::String&& key, MethodResponse&& value) { m_methodResponses.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline UpdateMethodResult& AddMethodResponses(const char* key, MethodResponse&& value) { m_methodResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline UpdateMethodResult& AddMethodResponses(const char* key, const MethodResponse& value) { m_methodResponses.emplace(key, value); return *this; }


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
    inline void SetMethodIntegration(const Integration& value) { m_methodIntegration = value; }

    /**
     * <p>Gets the method's integration responsible for passing the client-submitted
     * request to the back end and performing necessary transformations to make the
     * request compliant with the back end.</p>
     */
    inline void SetMethodIntegration(Integration&& value) { m_methodIntegration = std::move(value); }

    /**
     * <p>Gets the method's integration responsible for passing the client-submitted
     * request to the back end and performing necessary transformations to make the
     * request compliant with the back end.</p>
     */
    inline UpdateMethodResult& WithMethodIntegration(const Integration& value) { SetMethodIntegration(value); return *this;}

    /**
     * <p>Gets the method's integration responsible for passing the client-submitted
     * request to the back end and performing necessary transformations to make the
     * request compliant with the back end.</p>
     */
    inline UpdateMethodResult& WithMethodIntegration(Integration&& value) { SetMethodIntegration(std::move(value)); return *this;}


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
    inline void SetAuthorizationScopes(const Aws::Vector<Aws::String>& value) { m_authorizationScopes = value; }

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
    inline void SetAuthorizationScopes(Aws::Vector<Aws::String>&& value) { m_authorizationScopes = std::move(value); }

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
    inline UpdateMethodResult& WithAuthorizationScopes(const Aws::Vector<Aws::String>& value) { SetAuthorizationScopes(value); return *this;}

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
    inline UpdateMethodResult& WithAuthorizationScopes(Aws::Vector<Aws::String>&& value) { SetAuthorizationScopes(std::move(value)); return *this;}

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
    inline UpdateMethodResult& AddAuthorizationScopes(const Aws::String& value) { m_authorizationScopes.push_back(value); return *this; }

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
    inline UpdateMethodResult& AddAuthorizationScopes(Aws::String&& value) { m_authorizationScopes.push_back(std::move(value)); return *this; }

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
    inline UpdateMethodResult& AddAuthorizationScopes(const char* value) { m_authorizationScopes.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateMethodResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateMethodResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateMethodResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_httpMethod;

    Aws::String m_authorizationType;

    Aws::String m_authorizerId;

    bool m_apiKeyRequired;

    Aws::String m_requestValidatorId;

    Aws::String m_operationName;

    Aws::Map<Aws::String, bool> m_requestParameters;

    Aws::Map<Aws::String, Aws::String> m_requestModels;

    Aws::Map<Aws::String, MethodResponse> m_methodResponses;

    Integration m_methodIntegration;

    Aws::Vector<Aws::String> m_authorizationScopes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
