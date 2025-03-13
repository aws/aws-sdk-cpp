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
    AWS_CLOUDFRONT_API CreateOriginAccessControl2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOriginAccessControl"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Contains the origin access control.</p>
     */
    inline const OriginAccessControlConfig& GetOriginAccessControlConfig() const { return m_originAccessControlConfig; }
    inline bool OriginAccessControlConfigHasBeenSet() const { return m_originAccessControlConfigHasBeenSet; }
    template<typename OriginAccessControlConfigT = OriginAccessControlConfig>
    void SetOriginAccessControlConfig(OriginAccessControlConfigT&& value) { m_originAccessControlConfigHasBeenSet = true; m_originAccessControlConfig = std::forward<OriginAccessControlConfigT>(value); }
    template<typename OriginAccessControlConfigT = OriginAccessControlConfig>
    CreateOriginAccessControl2020_05_31Request& WithOriginAccessControlConfig(OriginAccessControlConfigT&& value) { SetOriginAccessControlConfig(std::forward<OriginAccessControlConfigT>(value)); return *this;}
    ///@}
  private:

    OriginAccessControlConfig m_originAccessControlConfig;
    bool m_originAccessControlConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
