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
  class GetIntegrationRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API GetIntegrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIntegration"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API identifier.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline GetIntegrationRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline GetIntegrationRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline GetIntegrationRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The integration ID.</p>
     */
    inline const Aws::String& GetIntegrationId() const{ return m_integrationId; }

    /**
     * <p>The integration ID.</p>
     */
    inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }

    /**
     * <p>The integration ID.</p>
     */
    inline void SetIntegrationId(const Aws::String& value) { m_integrationIdHasBeenSet = true; m_integrationId = value; }

    /**
     * <p>The integration ID.</p>
     */
    inline void SetIntegrationId(Aws::String&& value) { m_integrationIdHasBeenSet = true; m_integrationId = std::move(value); }

    /**
     * <p>The integration ID.</p>
     */
    inline void SetIntegrationId(const char* value) { m_integrationIdHasBeenSet = true; m_integrationId.assign(value); }

    /**
     * <p>The integration ID.</p>
     */
    inline GetIntegrationRequest& WithIntegrationId(const Aws::String& value) { SetIntegrationId(value); return *this;}

    /**
     * <p>The integration ID.</p>
     */
    inline GetIntegrationRequest& WithIntegrationId(Aws::String&& value) { SetIntegrationId(std::move(value)); return *this;}

    /**
     * <p>The integration ID.</p>
     */
    inline GetIntegrationRequest& WithIntegrationId(const char* value) { SetIntegrationId(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_integrationId;
    bool m_integrationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
