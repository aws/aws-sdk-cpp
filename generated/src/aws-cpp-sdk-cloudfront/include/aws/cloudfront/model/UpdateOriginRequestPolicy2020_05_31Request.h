/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/OriginRequestPolicyConfig.h>
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
  class UpdateOriginRequestPolicy2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API UpdateOriginRequestPolicy2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOriginRequestPolicy"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An origin request policy configuration.</p>
     */
    inline const OriginRequestPolicyConfig& GetOriginRequestPolicyConfig() const { return m_originRequestPolicyConfig; }
    inline bool OriginRequestPolicyConfigHasBeenSet() const { return m_originRequestPolicyConfigHasBeenSet; }
    template<typename OriginRequestPolicyConfigT = OriginRequestPolicyConfig>
    void SetOriginRequestPolicyConfig(OriginRequestPolicyConfigT&& value) { m_originRequestPolicyConfigHasBeenSet = true; m_originRequestPolicyConfig = std::forward<OriginRequestPolicyConfigT>(value); }
    template<typename OriginRequestPolicyConfigT = OriginRequestPolicyConfig>
    UpdateOriginRequestPolicy2020_05_31Request& WithOriginRequestPolicyConfig(OriginRequestPolicyConfigT&& value) { SetOriginRequestPolicyConfig(std::forward<OriginRequestPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the origin request policy that you are updating.
     * The identifier is returned in a cache behavior's
     * <code>OriginRequestPolicyId</code> field in the response to
     * <code>GetDistributionConfig</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateOriginRequestPolicy2020_05_31Request& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the origin request policy that you are updating. The version
     * is returned in the origin request policy's <code>ETag</code> field in the
     * response to <code>GetOriginRequestPolicyConfig</code>.</p>
     */
    inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    template<typename IfMatchT = Aws::String>
    void SetIfMatch(IfMatchT&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::forward<IfMatchT>(value); }
    template<typename IfMatchT = Aws::String>
    UpdateOriginRequestPolicy2020_05_31Request& WithIfMatch(IfMatchT&& value) { SetIfMatch(std::forward<IfMatchT>(value)); return *this;}
    ///@}
  private:

    OriginRequestPolicyConfig m_originRequestPolicyConfig;
    bool m_originRequestPolicyConfigHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
