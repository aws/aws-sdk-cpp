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
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Creates a <a>RequestValidator</a> of a given <a>RestApi</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateRequestValidatorRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API CreateRequestValidatorRequest : public APIGatewayRequest
  {
  public:
    CreateRequestValidatorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRequestValidator"; }

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
    inline CreateRequestValidatorRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline CreateRequestValidatorRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline CreateRequestValidatorRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>The name of the to-be-created <a>RequestValidator</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the to-be-created <a>RequestValidator</a>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the to-be-created <a>RequestValidator</a>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the to-be-created <a>RequestValidator</a>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the to-be-created <a>RequestValidator</a>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the to-be-created <a>RequestValidator</a>.</p>
     */
    inline CreateRequestValidatorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the to-be-created <a>RequestValidator</a>.</p>
     */
    inline CreateRequestValidatorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the to-be-created <a>RequestValidator</a>.</p>
     */
    inline CreateRequestValidatorRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A Boolean flag to indicate whether to validate request body according to the
     * configured model schema for the method (<code>true</code>) or not
     * (<code>false</code>).</p>
     */
    inline bool GetValidateRequestBody() const{ return m_validateRequestBody; }

    /**
     * <p>A Boolean flag to indicate whether to validate request body according to the
     * configured model schema for the method (<code>true</code>) or not
     * (<code>false</code>).</p>
     */
    inline bool ValidateRequestBodyHasBeenSet() const { return m_validateRequestBodyHasBeenSet; }

    /**
     * <p>A Boolean flag to indicate whether to validate request body according to the
     * configured model schema for the method (<code>true</code>) or not
     * (<code>false</code>).</p>
     */
    inline void SetValidateRequestBody(bool value) { m_validateRequestBodyHasBeenSet = true; m_validateRequestBody = value; }

    /**
     * <p>A Boolean flag to indicate whether to validate request body according to the
     * configured model schema for the method (<code>true</code>) or not
     * (<code>false</code>).</p>
     */
    inline CreateRequestValidatorRequest& WithValidateRequestBody(bool value) { SetValidateRequestBody(value); return *this;}


    /**
     * <p>A Boolean flag to indicate whether to validate request parameters,
     * <code>true</code>, or not <code>false</code>.</p>
     */
    inline bool GetValidateRequestParameters() const{ return m_validateRequestParameters; }

    /**
     * <p>A Boolean flag to indicate whether to validate request parameters,
     * <code>true</code>, or not <code>false</code>.</p>
     */
    inline bool ValidateRequestParametersHasBeenSet() const { return m_validateRequestParametersHasBeenSet; }

    /**
     * <p>A Boolean flag to indicate whether to validate request parameters,
     * <code>true</code>, or not <code>false</code>.</p>
     */
    inline void SetValidateRequestParameters(bool value) { m_validateRequestParametersHasBeenSet = true; m_validateRequestParameters = value; }

    /**
     * <p>A Boolean flag to indicate whether to validate request parameters,
     * <code>true</code>, or not <code>false</code>.</p>
     */
    inline CreateRequestValidatorRequest& WithValidateRequestParameters(bool value) { SetValidateRequestParameters(value); return *this;}

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;

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
