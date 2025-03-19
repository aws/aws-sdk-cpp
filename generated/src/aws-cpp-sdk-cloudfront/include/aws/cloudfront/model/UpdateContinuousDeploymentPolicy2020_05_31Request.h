/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/ContinuousDeploymentPolicyConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class UpdateContinuousDeploymentPolicy2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API UpdateContinuousDeploymentPolicy2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContinuousDeploymentPolicy"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The continuous deployment policy configuration.</p>
     */
    inline const ContinuousDeploymentPolicyConfig& GetContinuousDeploymentPolicyConfig() const { return m_continuousDeploymentPolicyConfig; }
    inline bool ContinuousDeploymentPolicyConfigHasBeenSet() const { return m_continuousDeploymentPolicyConfigHasBeenSet; }
    template<typename ContinuousDeploymentPolicyConfigT = ContinuousDeploymentPolicyConfig>
    void SetContinuousDeploymentPolicyConfig(ContinuousDeploymentPolicyConfigT&& value) { m_continuousDeploymentPolicyConfigHasBeenSet = true; m_continuousDeploymentPolicyConfig = std::forward<ContinuousDeploymentPolicyConfigT>(value); }
    template<typename ContinuousDeploymentPolicyConfigT = ContinuousDeploymentPolicyConfig>
    UpdateContinuousDeploymentPolicy2020_05_31Request& WithContinuousDeploymentPolicyConfig(ContinuousDeploymentPolicyConfigT&& value) { SetContinuousDeploymentPolicyConfig(std::forward<ContinuousDeploymentPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the continuous deployment policy that you are updating.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateContinuousDeploymentPolicy2020_05_31Request& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version (<code>ETag</code> value) of the continuous deployment
     * policy that you are updating.</p>
     */
    inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    template<typename IfMatchT = Aws::String>
    void SetIfMatch(IfMatchT&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::forward<IfMatchT>(value); }
    template<typename IfMatchT = Aws::String>
    UpdateContinuousDeploymentPolicy2020_05_31Request& WithIfMatch(IfMatchT&& value) { SetIfMatch(std::forward<IfMatchT>(value)); return *this;}
    ///@}
  private:

    ContinuousDeploymentPolicyConfig m_continuousDeploymentPolicyConfig;
    bool m_continuousDeploymentPolicyConfigHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
