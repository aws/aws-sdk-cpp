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
  class GetRouteResponseRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API GetRouteResponseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRouteResponse"; }

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
    inline GetRouteResponseRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline GetRouteResponseRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline GetRouteResponseRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The route ID.</p>
     */
    inline const Aws::String& GetRouteId() const{ return m_routeId; }

    /**
     * <p>The route ID.</p>
     */
    inline bool RouteIdHasBeenSet() const { return m_routeIdHasBeenSet; }

    /**
     * <p>The route ID.</p>
     */
    inline void SetRouteId(const Aws::String& value) { m_routeIdHasBeenSet = true; m_routeId = value; }

    /**
     * <p>The route ID.</p>
     */
    inline void SetRouteId(Aws::String&& value) { m_routeIdHasBeenSet = true; m_routeId = std::move(value); }

    /**
     * <p>The route ID.</p>
     */
    inline void SetRouteId(const char* value) { m_routeIdHasBeenSet = true; m_routeId.assign(value); }

    /**
     * <p>The route ID.</p>
     */
    inline GetRouteResponseRequest& WithRouteId(const Aws::String& value) { SetRouteId(value); return *this;}

    /**
     * <p>The route ID.</p>
     */
    inline GetRouteResponseRequest& WithRouteId(Aws::String&& value) { SetRouteId(std::move(value)); return *this;}

    /**
     * <p>The route ID.</p>
     */
    inline GetRouteResponseRequest& WithRouteId(const char* value) { SetRouteId(value); return *this;}


    /**
     * <p>The route response ID.</p>
     */
    inline const Aws::String& GetRouteResponseId() const{ return m_routeResponseId; }

    /**
     * <p>The route response ID.</p>
     */
    inline bool RouteResponseIdHasBeenSet() const { return m_routeResponseIdHasBeenSet; }

    /**
     * <p>The route response ID.</p>
     */
    inline void SetRouteResponseId(const Aws::String& value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId = value; }

    /**
     * <p>The route response ID.</p>
     */
    inline void SetRouteResponseId(Aws::String&& value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId = std::move(value); }

    /**
     * <p>The route response ID.</p>
     */
    inline void SetRouteResponseId(const char* value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId.assign(value); }

    /**
     * <p>The route response ID.</p>
     */
    inline GetRouteResponseRequest& WithRouteResponseId(const Aws::String& value) { SetRouteResponseId(value); return *this;}

    /**
     * <p>The route response ID.</p>
     */
    inline GetRouteResponseRequest& WithRouteResponseId(Aws::String&& value) { SetRouteResponseId(std::move(value)); return *this;}

    /**
     * <p>The route response ID.</p>
     */
    inline GetRouteResponseRequest& WithRouteResponseId(const char* value) { SetRouteResponseId(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_routeId;
    bool m_routeIdHasBeenSet = false;

    Aws::String m_routeResponseId;
    bool m_routeResponseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
