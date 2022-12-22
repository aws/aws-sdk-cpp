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
    AWS_CLOUDFRONT_API UpdateOriginRequestPolicy2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOriginRequestPolicy"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An origin request policy configuration.</p>
     */
    inline const OriginRequestPolicyConfig& GetOriginRequestPolicyConfig() const{ return m_originRequestPolicyConfig; }

    /**
     * <p>An origin request policy configuration.</p>
     */
    inline bool OriginRequestPolicyConfigHasBeenSet() const { return m_originRequestPolicyConfigHasBeenSet; }

    /**
     * <p>An origin request policy configuration.</p>
     */
    inline void SetOriginRequestPolicyConfig(const OriginRequestPolicyConfig& value) { m_originRequestPolicyConfigHasBeenSet = true; m_originRequestPolicyConfig = value; }

    /**
     * <p>An origin request policy configuration.</p>
     */
    inline void SetOriginRequestPolicyConfig(OriginRequestPolicyConfig&& value) { m_originRequestPolicyConfigHasBeenSet = true; m_originRequestPolicyConfig = std::move(value); }

    /**
     * <p>An origin request policy configuration.</p>
     */
    inline UpdateOriginRequestPolicy2020_05_31Request& WithOriginRequestPolicyConfig(const OriginRequestPolicyConfig& value) { SetOriginRequestPolicyConfig(value); return *this;}

    /**
     * <p>An origin request policy configuration.</p>
     */
    inline UpdateOriginRequestPolicy2020_05_31Request& WithOriginRequestPolicyConfig(OriginRequestPolicyConfig&& value) { SetOriginRequestPolicyConfig(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the origin request policy that you are updating.
     * The identifier is returned in a cache behavior's
     * <code>OriginRequestPolicyId</code> field in the response to
     * <code>GetDistributionConfig</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the origin request policy that you are updating.
     * The identifier is returned in a cache behavior's
     * <code>OriginRequestPolicyId</code> field in the response to
     * <code>GetDistributionConfig</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the origin request policy that you are updating.
     * The identifier is returned in a cache behavior's
     * <code>OriginRequestPolicyId</code> field in the response to
     * <code>GetDistributionConfig</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the origin request policy that you are updating.
     * The identifier is returned in a cache behavior's
     * <code>OriginRequestPolicyId</code> field in the response to
     * <code>GetDistributionConfig</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the origin request policy that you are updating.
     * The identifier is returned in a cache behavior's
     * <code>OriginRequestPolicyId</code> field in the response to
     * <code>GetDistributionConfig</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the origin request policy that you are updating.
     * The identifier is returned in a cache behavior's
     * <code>OriginRequestPolicyId</code> field in the response to
     * <code>GetDistributionConfig</code>.</p>
     */
    inline UpdateOriginRequestPolicy2020_05_31Request& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the origin request policy that you are updating.
     * The identifier is returned in a cache behavior's
     * <code>OriginRequestPolicyId</code> field in the response to
     * <code>GetDistributionConfig</code>.</p>
     */
    inline UpdateOriginRequestPolicy2020_05_31Request& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the origin request policy that you are updating.
     * The identifier is returned in a cache behavior's
     * <code>OriginRequestPolicyId</code> field in the response to
     * <code>GetDistributionConfig</code>.</p>
     */
    inline UpdateOriginRequestPolicy2020_05_31Request& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The version of the origin request policy that you are updating. The version
     * is returned in the origin request policy's <code>ETag</code> field in the
     * response to <code>GetOriginRequestPolicyConfig</code>.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }

    /**
     * <p>The version of the origin request policy that you are updating. The version
     * is returned in the origin request policy's <code>ETag</code> field in the
     * response to <code>GetOriginRequestPolicyConfig</code>.</p>
     */
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }

    /**
     * <p>The version of the origin request policy that you are updating. The version
     * is returned in the origin request policy's <code>ETag</code> field in the
     * response to <code>GetOriginRequestPolicyConfig</code>.</p>
     */
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }

    /**
     * <p>The version of the origin request policy that you are updating. The version
     * is returned in the origin request policy's <code>ETag</code> field in the
     * response to <code>GetOriginRequestPolicyConfig</code>.</p>
     */
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }

    /**
     * <p>The version of the origin request policy that you are updating. The version
     * is returned in the origin request policy's <code>ETag</code> field in the
     * response to <code>GetOriginRequestPolicyConfig</code>.</p>
     */
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }

    /**
     * <p>The version of the origin request policy that you are updating. The version
     * is returned in the origin request policy's <code>ETag</code> field in the
     * response to <code>GetOriginRequestPolicyConfig</code>.</p>
     */
    inline UpdateOriginRequestPolicy2020_05_31Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}

    /**
     * <p>The version of the origin request policy that you are updating. The version
     * is returned in the origin request policy's <code>ETag</code> field in the
     * response to <code>GetOriginRequestPolicyConfig</code>.</p>
     */
    inline UpdateOriginRequestPolicy2020_05_31Request& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}

    /**
     * <p>The version of the origin request policy that you are updating. The version
     * is returned in the origin request policy's <code>ETag</code> field in the
     * response to <code>GetOriginRequestPolicyConfig</code>.</p>
     */
    inline UpdateOriginRequestPolicy2020_05_31Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}

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
