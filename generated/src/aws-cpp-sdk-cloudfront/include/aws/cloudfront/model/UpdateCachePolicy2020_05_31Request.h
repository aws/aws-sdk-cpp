/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/CachePolicyConfig.h>
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
  class UpdateCachePolicy2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API UpdateCachePolicy2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCachePolicy"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A cache policy configuration.</p>
     */
    inline const CachePolicyConfig& GetCachePolicyConfig() const{ return m_cachePolicyConfig; }
    inline bool CachePolicyConfigHasBeenSet() const { return m_cachePolicyConfigHasBeenSet; }
    inline void SetCachePolicyConfig(const CachePolicyConfig& value) { m_cachePolicyConfigHasBeenSet = true; m_cachePolicyConfig = value; }
    inline void SetCachePolicyConfig(CachePolicyConfig&& value) { m_cachePolicyConfigHasBeenSet = true; m_cachePolicyConfig = std::move(value); }
    inline UpdateCachePolicy2020_05_31Request& WithCachePolicyConfig(const CachePolicyConfig& value) { SetCachePolicyConfig(value); return *this;}
    inline UpdateCachePolicy2020_05_31Request& WithCachePolicyConfig(CachePolicyConfig&& value) { SetCachePolicyConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the cache policy that you are updating. The
     * identifier is returned in a cache behavior's <code>CachePolicyId</code> field in
     * the response to <code>GetDistributionConfig</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateCachePolicy2020_05_31Request& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateCachePolicy2020_05_31Request& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateCachePolicy2020_05_31Request& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the cache policy that you are updating. The version is
     * returned in the cache policy's <code>ETag</code> field in the response to
     * <code>GetCachePolicyConfig</code>.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }
    inline UpdateCachePolicy2020_05_31Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}
    inline UpdateCachePolicy2020_05_31Request& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}
    inline UpdateCachePolicy2020_05_31Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}
    ///@}
  private:

    CachePolicyConfig m_cachePolicyConfig;
    bool m_cachePolicyConfigHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
