﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/CachePolicyConfig.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class CreateCachePolicy2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateCachePolicy2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCachePolicy"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A cache policy configuration.</p>
     */
    inline const CachePolicyConfig& GetCachePolicyConfig() const { return m_cachePolicyConfig; }
    inline bool CachePolicyConfigHasBeenSet() const { return m_cachePolicyConfigHasBeenSet; }
    template<typename CachePolicyConfigT = CachePolicyConfig>
    void SetCachePolicyConfig(CachePolicyConfigT&& value) { m_cachePolicyConfigHasBeenSet = true; m_cachePolicyConfig = std::forward<CachePolicyConfigT>(value); }
    template<typename CachePolicyConfigT = CachePolicyConfig>
    CreateCachePolicy2020_05_31Request& WithCachePolicyConfig(CachePolicyConfigT&& value) { SetCachePolicyConfig(std::forward<CachePolicyConfigT>(value)); return *this;}
    ///@}
  private:

    CachePolicyConfig m_cachePolicyConfig;
    bool m_cachePolicyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
