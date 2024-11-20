/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/VpcOriginEndpointConfig.h>
#include <aws/cloudfront/model/Tags.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class CreateVpcOrigin2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateVpcOrigin2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcOrigin"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The VPC origin endpoint configuration.</p>
     */
    inline const VpcOriginEndpointConfig& GetVpcOriginEndpointConfig() const{ return m_vpcOriginEndpointConfig; }
    inline bool VpcOriginEndpointConfigHasBeenSet() const { return m_vpcOriginEndpointConfigHasBeenSet; }
    inline void SetVpcOriginEndpointConfig(const VpcOriginEndpointConfig& value) { m_vpcOriginEndpointConfigHasBeenSet = true; m_vpcOriginEndpointConfig = value; }
    inline void SetVpcOriginEndpointConfig(VpcOriginEndpointConfig&& value) { m_vpcOriginEndpointConfigHasBeenSet = true; m_vpcOriginEndpointConfig = std::move(value); }
    inline CreateVpcOrigin2020_05_31Request& WithVpcOriginEndpointConfig(const VpcOriginEndpointConfig& value) { SetVpcOriginEndpointConfig(value); return *this;}
    inline CreateVpcOrigin2020_05_31Request& WithVpcOriginEndpointConfig(VpcOriginEndpointConfig&& value) { SetVpcOriginEndpointConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Tags& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Tags& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Tags&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateVpcOrigin2020_05_31Request& WithTags(const Tags& value) { SetTags(value); return *this;}
    inline CreateVpcOrigin2020_05_31Request& WithTags(Tags&& value) { SetTags(std::move(value)); return *this;}
    ///@}
  private:

    VpcOriginEndpointConfig m_vpcOriginEndpointConfig;
    bool m_vpcOriginEndpointConfigHasBeenSet = false;

    Tags m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
