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
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_APIGATEWAY_API RequestValidator
  {
  public:
    RequestValidator();
    RequestValidator(Aws::Utils::Json::JsonView jsonValue);
    RequestValidator& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of this <a>RequestValidator</a>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of this <a>RequestValidator</a>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of this <a>RequestValidator</a>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of this <a>RequestValidator</a>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of this <a>RequestValidator</a>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of this <a>RequestValidator</a>.</p>
     */
    inline RequestValidator& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of this <a>RequestValidator</a>.</p>
     */
    inline RequestValidator& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of this <a>RequestValidator</a>.</p>
     */
    inline RequestValidator& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of this <a>RequestValidator</a></p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this <a>RequestValidator</a></p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this <a>RequestValidator</a></p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this <a>RequestValidator</a></p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this <a>RequestValidator</a></p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this <a>RequestValidator</a></p>
     */
    inline RequestValidator& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this <a>RequestValidator</a></p>
     */
    inline RequestValidator& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this <a>RequestValidator</a></p>
     */
    inline RequestValidator& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A Boolean flag to indicate whether to validate a request body according to
     * the configured <a>Model</a> schema.</p>
     */
    inline bool GetValidateRequestBody() const{ return m_validateRequestBody; }

    /**
     * <p>A Boolean flag to indicate whether to validate a request body according to
     * the configured <a>Model</a> schema.</p>
     */
    inline bool ValidateRequestBodyHasBeenSet() const { return m_validateRequestBodyHasBeenSet; }

    /**
     * <p>A Boolean flag to indicate whether to validate a request body according to
     * the configured <a>Model</a> schema.</p>
     */
    inline void SetValidateRequestBody(bool value) { m_validateRequestBodyHasBeenSet = true; m_validateRequestBody = value; }

    /**
     * <p>A Boolean flag to indicate whether to validate a request body according to
     * the configured <a>Model</a> schema.</p>
     */
    inline RequestValidator& WithValidateRequestBody(bool value) { SetValidateRequestBody(value); return *this;}


    /**
     * <p>A Boolean flag to indicate whether to validate request parameters
     * (<code>true</code>) or not (<code>false</code>).</p>
     */
    inline bool GetValidateRequestParameters() const{ return m_validateRequestParameters; }

    /**
     * <p>A Boolean flag to indicate whether to validate request parameters
     * (<code>true</code>) or not (<code>false</code>).</p>
     */
    inline bool ValidateRequestParametersHasBeenSet() const { return m_validateRequestParametersHasBeenSet; }

    /**
     * <p>A Boolean flag to indicate whether to validate request parameters
     * (<code>true</code>) or not (<code>false</code>).</p>
     */
    inline void SetValidateRequestParameters(bool value) { m_validateRequestParametersHasBeenSet = true; m_validateRequestParameters = value; }

    /**
     * <p>A Boolean flag to indicate whether to validate request parameters
     * (<code>true</code>) or not (<code>false</code>).</p>
     */
    inline RequestValidator& WithValidateRequestParameters(bool value) { SetValidateRequestParameters(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    bool m_validateRequestBody;
    bool m_validateRequestBodyHasBeenSet;

    bool m_validateRequestParameters;
    bool m_validateRequestParametersHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
