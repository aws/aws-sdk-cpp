/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   */
  class GetIntegrationResponseRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API GetIntegrationResponseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIntegrationResponse"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    GetIntegrationResponseRequest& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integration ID.</p>
     */
    inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
    inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
    template<typename IntegrationIdT = Aws::String>
    void SetIntegrationId(IntegrationIdT&& value) { m_integrationIdHasBeenSet = true; m_integrationId = std::forward<IntegrationIdT>(value); }
    template<typename IntegrationIdT = Aws::String>
    GetIntegrationResponseRequest& WithIntegrationId(IntegrationIdT&& value) { SetIntegrationId(std::forward<IntegrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integration response ID.</p>
     */
    inline const Aws::String& GetIntegrationResponseId() const { return m_integrationResponseId; }
    inline bool IntegrationResponseIdHasBeenSet() const { return m_integrationResponseIdHasBeenSet; }
    template<typename IntegrationResponseIdT = Aws::String>
    void SetIntegrationResponseId(IntegrationResponseIdT&& value) { m_integrationResponseIdHasBeenSet = true; m_integrationResponseId = std::forward<IntegrationResponseIdT>(value); }
    template<typename IntegrationResponseIdT = Aws::String>
    GetIntegrationResponseRequest& WithIntegrationResponseId(IntegrationResponseIdT&& value) { SetIntegrationResponseId(std::forward<IntegrationResponseIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_integrationId;
    bool m_integrationIdHasBeenSet = false;

    Aws::String m_integrationResponseId;
    bool m_integrationResponseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
