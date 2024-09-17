/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Creates a RequestValidator of a given RestApi.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateRequestValidatorRequest">AWS
   * API Reference</a></p>
   */
  class CreateRequestValidatorRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API CreateRequestValidatorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRequestValidator"; }

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
    inline CreateRequestValidatorRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}
    inline CreateRequestValidatorRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}
    inline CreateRequestValidatorRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the to-be-created RequestValidator.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateRequestValidatorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateRequestValidatorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateRequestValidatorRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean flag to indicate whether to validate request body according to the
     * configured model schema for the method (<code>true</code>) or not
     * (<code>false</code>).</p>
     */
    inline bool GetValidateRequestBody() const{ return m_validateRequestBody; }
    inline bool ValidateRequestBodyHasBeenSet() const { return m_validateRequestBodyHasBeenSet; }
    inline void SetValidateRequestBody(bool value) { m_validateRequestBodyHasBeenSet = true; m_validateRequestBody = value; }
    inline CreateRequestValidatorRequest& WithValidateRequestBody(bool value) { SetValidateRequestBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean flag to indicate whether to validate request parameters,
     * <code>true</code>, or not <code>false</code>.</p>
     */
    inline bool GetValidateRequestParameters() const{ return m_validateRequestParameters; }
    inline bool ValidateRequestParametersHasBeenSet() const { return m_validateRequestParametersHasBeenSet; }
    inline void SetValidateRequestParameters(bool value) { m_validateRequestParametersHasBeenSet = true; m_validateRequestParameters = value; }
    inline CreateRequestValidatorRequest& WithValidateRequestParameters(bool value) { SetValidateRequestParameters(value); return *this;}
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_validateRequestBody;
    bool m_validateRequestBodyHasBeenSet = false;

    bool m_validateRequestParameters;
    bool m_validateRequestParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
