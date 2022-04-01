﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A set of validation rules for incoming <a>Method</a> requests.</p> <div
   * class="remarks"> <p>In OpenAPI, a <a>RequestValidator</a> of an API is defined
   * by the <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-swagger-extensions.html#api-gateway-swagger-extensions-request-validators.requestValidator.html">x-amazon-apigateway-request-validators.requestValidator</a>
   * object. It the referenced using the <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-swagger-extensions.html#api-gateway-swagger-extensions-request-validator">x-amazon-apigateway-request-validator</a>
   * property.</p> </div> <div class="seeAlso"><a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-method-request-validation.html">Enable
   * Basic Request Validation in API Gateway</a></div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/RequestValidator">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API CreateRequestValidatorResult
  {
  public:
    CreateRequestValidatorResult();
    CreateRequestValidatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateRequestValidatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of this <a>RequestValidator</a>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of this <a>RequestValidator</a>.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of this <a>RequestValidator</a>.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of this <a>RequestValidator</a>.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of this <a>RequestValidator</a>.</p>
     */
    inline CreateRequestValidatorResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of this <a>RequestValidator</a>.</p>
     */
    inline CreateRequestValidatorResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of this <a>RequestValidator</a>.</p>
     */
    inline CreateRequestValidatorResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of this <a>RequestValidator</a></p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this <a>RequestValidator</a></p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of this <a>RequestValidator</a></p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of this <a>RequestValidator</a></p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of this <a>RequestValidator</a></p>
     */
    inline CreateRequestValidatorResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this <a>RequestValidator</a></p>
     */
    inline CreateRequestValidatorResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this <a>RequestValidator</a></p>
     */
    inline CreateRequestValidatorResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A Boolean flag to indicate whether to validate a request body according to
     * the configured <a>Model</a> schema.</p>
     */
    inline bool GetValidateRequestBody() const{ return m_validateRequestBody; }

    /**
     * <p>A Boolean flag to indicate whether to validate a request body according to
     * the configured <a>Model</a> schema.</p>
     */
    inline void SetValidateRequestBody(bool value) { m_validateRequestBody = value; }

    /**
     * <p>A Boolean flag to indicate whether to validate a request body according to
     * the configured <a>Model</a> schema.</p>
     */
    inline CreateRequestValidatorResult& WithValidateRequestBody(bool value) { SetValidateRequestBody(value); return *this;}


    /**
     * <p>A Boolean flag to indicate whether to validate request parameters
     * (<code>true</code>) or not (<code>false</code>).</p>
     */
    inline bool GetValidateRequestParameters() const{ return m_validateRequestParameters; }

    /**
     * <p>A Boolean flag to indicate whether to validate request parameters
     * (<code>true</code>) or not (<code>false</code>).</p>
     */
    inline void SetValidateRequestParameters(bool value) { m_validateRequestParameters = value; }

    /**
     * <p>A Boolean flag to indicate whether to validate request parameters
     * (<code>true</code>) or not (<code>false</code>).</p>
     */
    inline CreateRequestValidatorResult& WithValidateRequestParameters(bool value) { SetValidateRequestParameters(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_name;

    bool m_validateRequestBody;

    bool m_validateRequestParameters;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
