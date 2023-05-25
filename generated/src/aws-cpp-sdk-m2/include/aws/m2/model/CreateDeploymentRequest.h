/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/MainframeModernizationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

  /**
   */
  class CreateDeploymentRequest : public MainframeModernizationRequest
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API CreateDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeployment"; }

    AWS_MAINFRAMEMODERNIZATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The application identifier.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application identifier.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The application identifier.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The application identifier.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The application identifier.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The application identifier.</p>
     */
    inline CreateDeploymentRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application identifier.</p>
     */
    inline CreateDeploymentRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application identifier.</p>
     */
    inline CreateDeploymentRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The version of the application to deploy.</p>
     */
    inline int GetApplicationVersion() const{ return m_applicationVersion; }

    /**
     * <p>The version of the application to deploy.</p>
     */
    inline bool ApplicationVersionHasBeenSet() const { return m_applicationVersionHasBeenSet; }

    /**
     * <p>The version of the application to deploy.</p>
     */
    inline void SetApplicationVersion(int value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = value; }

    /**
     * <p>The version of the application to deploy.</p>
     */
    inline CreateDeploymentRequest& WithApplicationVersion(int value) { SetApplicationVersion(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create a deployment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create a deployment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create a deployment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create a deployment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create a deployment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create a deployment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline CreateDeploymentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create a deployment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline CreateDeploymentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create a deployment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline CreateDeploymentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The identifier of the runtime environment where you want to deploy this
     * application.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The identifier of the runtime environment where you want to deploy this
     * application.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The identifier of the runtime environment where you want to deploy this
     * application.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The identifier of the runtime environment where you want to deploy this
     * application.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The identifier of the runtime environment where you want to deploy this
     * application.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The identifier of the runtime environment where you want to deploy this
     * application.</p>
     */
    inline CreateDeploymentRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The identifier of the runtime environment where you want to deploy this
     * application.</p>
     */
    inline CreateDeploymentRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the runtime environment where you want to deploy this
     * application.</p>
     */
    inline CreateDeploymentRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    int m_applicationVersion;
    bool m_applicationVersionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
