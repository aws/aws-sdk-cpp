/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/ContinuousDeploymentPolicyConfig.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class CreateContinuousDeploymentPolicy2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateContinuousDeploymentPolicy2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContinuousDeploymentPolicy"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    /**
     * <p>Contains the configuration for a continuous deployment policy.</p>
     */
    inline const ContinuousDeploymentPolicyConfig& GetContinuousDeploymentPolicyConfig() const{ return m_continuousDeploymentPolicyConfig; }

    /**
     * <p>Contains the configuration for a continuous deployment policy.</p>
     */
    inline bool ContinuousDeploymentPolicyConfigHasBeenSet() const { return m_continuousDeploymentPolicyConfigHasBeenSet; }

    /**
     * <p>Contains the configuration for a continuous deployment policy.</p>
     */
    inline void SetContinuousDeploymentPolicyConfig(const ContinuousDeploymentPolicyConfig& value) { m_continuousDeploymentPolicyConfigHasBeenSet = true; m_continuousDeploymentPolicyConfig = value; }

    /**
     * <p>Contains the configuration for a continuous deployment policy.</p>
     */
    inline void SetContinuousDeploymentPolicyConfig(ContinuousDeploymentPolicyConfig&& value) { m_continuousDeploymentPolicyConfigHasBeenSet = true; m_continuousDeploymentPolicyConfig = std::move(value); }

    /**
     * <p>Contains the configuration for a continuous deployment policy.</p>
     */
    inline CreateContinuousDeploymentPolicy2020_05_31Request& WithContinuousDeploymentPolicyConfig(const ContinuousDeploymentPolicyConfig& value) { SetContinuousDeploymentPolicyConfig(value); return *this;}

    /**
     * <p>Contains the configuration for a continuous deployment policy.</p>
     */
    inline CreateContinuousDeploymentPolicy2020_05_31Request& WithContinuousDeploymentPolicyConfig(ContinuousDeploymentPolicyConfig&& value) { SetContinuousDeploymentPolicyConfig(std::move(value)); return *this;}

  private:

    ContinuousDeploymentPolicyConfig m_continuousDeploymentPolicyConfig;
    bool m_continuousDeploymentPolicyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
