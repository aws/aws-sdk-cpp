/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/OriginAccessControlConfig.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class CreateOriginAccessControl2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateOriginAccessControl2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOriginAccessControl"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    /**
     * <p>Contains the origin access control.</p>
     */
    inline const OriginAccessControlConfig& GetOriginAccessControlConfig() const{ return m_originAccessControlConfig; }

    /**
     * <p>Contains the origin access control.</p>
     */
    inline bool OriginAccessControlConfigHasBeenSet() const { return m_originAccessControlConfigHasBeenSet; }

    /**
     * <p>Contains the origin access control.</p>
     */
    inline void SetOriginAccessControlConfig(const OriginAccessControlConfig& value) { m_originAccessControlConfigHasBeenSet = true; m_originAccessControlConfig = value; }

    /**
     * <p>Contains the origin access control.</p>
     */
    inline void SetOriginAccessControlConfig(OriginAccessControlConfig&& value) { m_originAccessControlConfigHasBeenSet = true; m_originAccessControlConfig = std::move(value); }

    /**
     * <p>Contains the origin access control.</p>
     */
    inline CreateOriginAccessControl2020_05_31Request& WithOriginAccessControlConfig(const OriginAccessControlConfig& value) { SetOriginAccessControlConfig(value); return *this;}

    /**
     * <p>Contains the origin access control.</p>
     */
    inline CreateOriginAccessControl2020_05_31Request& WithOriginAccessControlConfig(OriginAccessControlConfig&& value) { SetOriginAccessControlConfig(std::move(value)); return *this;}

  private:

    OriginAccessControlConfig m_originAccessControlConfig;
    bool m_originAccessControlConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
