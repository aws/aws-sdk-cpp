/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyConfig.h>
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
  class UpdateResponseHeadersPolicy2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API UpdateResponseHeadersPolicy2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResponseHeadersPolicy"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A response headers policy configuration.</p>
     */
    inline const ResponseHeadersPolicyConfig& GetResponseHeadersPolicyConfig() const{ return m_responseHeadersPolicyConfig; }

    /**
     * <p>A response headers policy configuration.</p>
     */
    inline bool ResponseHeadersPolicyConfigHasBeenSet() const { return m_responseHeadersPolicyConfigHasBeenSet; }

    /**
     * <p>A response headers policy configuration.</p>
     */
    inline void SetResponseHeadersPolicyConfig(const ResponseHeadersPolicyConfig& value) { m_responseHeadersPolicyConfigHasBeenSet = true; m_responseHeadersPolicyConfig = value; }

    /**
     * <p>A response headers policy configuration.</p>
     */
    inline void SetResponseHeadersPolicyConfig(ResponseHeadersPolicyConfig&& value) { m_responseHeadersPolicyConfigHasBeenSet = true; m_responseHeadersPolicyConfig = std::move(value); }

    /**
     * <p>A response headers policy configuration.</p>
     */
    inline UpdateResponseHeadersPolicy2020_05_31Request& WithResponseHeadersPolicyConfig(const ResponseHeadersPolicyConfig& value) { SetResponseHeadersPolicyConfig(value); return *this;}

    /**
     * <p>A response headers policy configuration.</p>
     */
    inline UpdateResponseHeadersPolicy2020_05_31Request& WithResponseHeadersPolicyConfig(ResponseHeadersPolicyConfig&& value) { SetResponseHeadersPolicyConfig(std::move(value)); return *this;}


    /**
     * <p>The identifier for the response headers policy that you are updating.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the response headers policy that you are updating.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the response headers policy that you are updating.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the response headers policy that you are updating.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the response headers policy that you are updating.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the response headers policy that you are updating.</p>
     */
    inline UpdateResponseHeadersPolicy2020_05_31Request& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the response headers policy that you are updating.</p>
     */
    inline UpdateResponseHeadersPolicy2020_05_31Request& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the response headers policy that you are updating.</p>
     */
    inline UpdateResponseHeadersPolicy2020_05_31Request& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The version of the response headers policy that you are updating.</p> <p>The
     * version is returned in the cache policy's <code>ETag</code> field in the
     * response to <code>GetResponseHeadersPolicyConfig</code>.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }

    /**
     * <p>The version of the response headers policy that you are updating.</p> <p>The
     * version is returned in the cache policy's <code>ETag</code> field in the
     * response to <code>GetResponseHeadersPolicyConfig</code>.</p>
     */
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }

    /**
     * <p>The version of the response headers policy that you are updating.</p> <p>The
     * version is returned in the cache policy's <code>ETag</code> field in the
     * response to <code>GetResponseHeadersPolicyConfig</code>.</p>
     */
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }

    /**
     * <p>The version of the response headers policy that you are updating.</p> <p>The
     * version is returned in the cache policy's <code>ETag</code> field in the
     * response to <code>GetResponseHeadersPolicyConfig</code>.</p>
     */
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }

    /**
     * <p>The version of the response headers policy that you are updating.</p> <p>The
     * version is returned in the cache policy's <code>ETag</code> field in the
     * response to <code>GetResponseHeadersPolicyConfig</code>.</p>
     */
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }

    /**
     * <p>The version of the response headers policy that you are updating.</p> <p>The
     * version is returned in the cache policy's <code>ETag</code> field in the
     * response to <code>GetResponseHeadersPolicyConfig</code>.</p>
     */
    inline UpdateResponseHeadersPolicy2020_05_31Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}

    /**
     * <p>The version of the response headers policy that you are updating.</p> <p>The
     * version is returned in the cache policy's <code>ETag</code> field in the
     * response to <code>GetResponseHeadersPolicyConfig</code>.</p>
     */
    inline UpdateResponseHeadersPolicy2020_05_31Request& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}

    /**
     * <p>The version of the response headers policy that you are updating.</p> <p>The
     * version is returned in the cache policy's <code>ETag</code> field in the
     * response to <code>GetResponseHeadersPolicyConfig</code>.</p>
     */
    inline UpdateResponseHeadersPolicy2020_05_31Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}

  private:

    ResponseHeadersPolicyConfig m_responseHeadersPolicyConfig;
    bool m_responseHeadersPolicyConfigHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
