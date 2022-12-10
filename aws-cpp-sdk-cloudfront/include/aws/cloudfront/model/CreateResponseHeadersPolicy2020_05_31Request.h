/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyConfig.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class CreateResponseHeadersPolicy2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateResponseHeadersPolicy2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResponseHeadersPolicy"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    /**
     * <p>Contains metadata about the response headers policy, and a set of
     * configurations that specify the response headers.</p>
     */
    inline const ResponseHeadersPolicyConfig& GetResponseHeadersPolicyConfig() const{ return m_responseHeadersPolicyConfig; }

    /**
     * <p>Contains metadata about the response headers policy, and a set of
     * configurations that specify the response headers.</p>
     */
    inline bool ResponseHeadersPolicyConfigHasBeenSet() const { return m_responseHeadersPolicyConfigHasBeenSet; }

    /**
     * <p>Contains metadata about the response headers policy, and a set of
     * configurations that specify the response headers.</p>
     */
    inline void SetResponseHeadersPolicyConfig(const ResponseHeadersPolicyConfig& value) { m_responseHeadersPolicyConfigHasBeenSet = true; m_responseHeadersPolicyConfig = value; }

    /**
     * <p>Contains metadata about the response headers policy, and a set of
     * configurations that specify the response headers.</p>
     */
    inline void SetResponseHeadersPolicyConfig(ResponseHeadersPolicyConfig&& value) { m_responseHeadersPolicyConfigHasBeenSet = true; m_responseHeadersPolicyConfig = std::move(value); }

    /**
     * <p>Contains metadata about the response headers policy, and a set of
     * configurations that specify the response headers.</p>
     */
    inline CreateResponseHeadersPolicy2020_05_31Request& WithResponseHeadersPolicyConfig(const ResponseHeadersPolicyConfig& value) { SetResponseHeadersPolicyConfig(value); return *this;}

    /**
     * <p>Contains metadata about the response headers policy, and a set of
     * configurations that specify the response headers.</p>
     */
    inline CreateResponseHeadersPolicy2020_05_31Request& WithResponseHeadersPolicyConfig(ResponseHeadersPolicyConfig&& value) { SetResponseHeadersPolicyConfig(std::move(value)); return *this;}

  private:

    ResponseHeadersPolicyConfig m_responseHeadersPolicyConfig;
    bool m_responseHeadersPolicyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
