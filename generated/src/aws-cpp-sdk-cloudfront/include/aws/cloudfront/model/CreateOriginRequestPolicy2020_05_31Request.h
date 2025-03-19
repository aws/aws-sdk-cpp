/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/OriginRequestPolicyConfig.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class CreateOriginRequestPolicy2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateOriginRequestPolicy2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOriginRequestPolicy"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An origin request policy configuration.</p>
     */
    inline const OriginRequestPolicyConfig& GetOriginRequestPolicyConfig() const { return m_originRequestPolicyConfig; }
    inline bool OriginRequestPolicyConfigHasBeenSet() const { return m_originRequestPolicyConfigHasBeenSet; }
    template<typename OriginRequestPolicyConfigT = OriginRequestPolicyConfig>
    void SetOriginRequestPolicyConfig(OriginRequestPolicyConfigT&& value) { m_originRequestPolicyConfigHasBeenSet = true; m_originRequestPolicyConfig = std::forward<OriginRequestPolicyConfigT>(value); }
    template<typename OriginRequestPolicyConfigT = OriginRequestPolicyConfig>
    CreateOriginRequestPolicy2020_05_31Request& WithOriginRequestPolicyConfig(OriginRequestPolicyConfigT&& value) { SetOriginRequestPolicyConfig(std::forward<OriginRequestPolicyConfigT>(value)); return *this;}
    ///@}
  private:

    OriginRequestPolicyConfig m_originRequestPolicyConfig;
    bool m_originRequestPolicyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
