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
  class DeleteRouteSettingsRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API DeleteRouteSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRouteSettings"; }

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
    inline DeleteRouteSettingsRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline DeleteRouteSettingsRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline DeleteRouteSettingsRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The route key.</p>
     */
    inline const Aws::String& GetRouteKey() const{ return m_routeKey; }

    /**
     * <p>The route key.</p>
     */
    inline bool RouteKeyHasBeenSet() const { return m_routeKeyHasBeenSet; }

    /**
     * <p>The route key.</p>
     */
    inline void SetRouteKey(const Aws::String& value) { m_routeKeyHasBeenSet = true; m_routeKey = value; }

    /**
     * <p>The route key.</p>
     */
    inline void SetRouteKey(Aws::String&& value) { m_routeKeyHasBeenSet = true; m_routeKey = std::move(value); }

    /**
     * <p>The route key.</p>
     */
    inline void SetRouteKey(const char* value) { m_routeKeyHasBeenSet = true; m_routeKey.assign(value); }

    /**
     * <p>The route key.</p>
     */
    inline DeleteRouteSettingsRequest& WithRouteKey(const Aws::String& value) { SetRouteKey(value); return *this;}

    /**
     * <p>The route key.</p>
     */
    inline DeleteRouteSettingsRequest& WithRouteKey(Aws::String&& value) { SetRouteKey(std::move(value)); return *this;}

    /**
     * <p>The route key.</p>
     */
    inline DeleteRouteSettingsRequest& WithRouteKey(const char* value) { SetRouteKey(value); return *this;}


    /**
     * <p>The stage name. Stage names can only contain alphanumeric characters,
     * hyphens, and underscores. Maximum length is 128 characters.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The stage name. Stage names can only contain alphanumeric characters,
     * hyphens, and underscores. Maximum length is 128 characters.</p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>The stage name. Stage names can only contain alphanumeric characters,
     * hyphens, and underscores. Maximum length is 128 characters.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The stage name. Stage names can only contain alphanumeric characters,
     * hyphens, and underscores. Maximum length is 128 characters.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The stage name. Stage names can only contain alphanumeric characters,
     * hyphens, and underscores. Maximum length is 128 characters.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The stage name. Stage names can only contain alphanumeric characters,
     * hyphens, and underscores. Maximum length is 128 characters.</p>
     */
    inline DeleteRouteSettingsRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The stage name. Stage names can only contain alphanumeric characters,
     * hyphens, and underscores. Maximum length is 128 characters.</p>
     */
    inline DeleteRouteSettingsRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The stage name. Stage names can only contain alphanumeric characters,
     * hyphens, and underscores. Maximum length is 128 characters.</p>
     */
    inline DeleteRouteSettingsRequest& WithStageName(const char* value) { SetStageName(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_routeKey;
    bool m_routeKeyHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
