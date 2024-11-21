/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/VpcOriginEndpointConfig.h>
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
  class UpdateVpcOrigin2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API UpdateVpcOrigin2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVpcOrigin"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The VPC origin endpoint configuration.</p>
     */
    inline const VpcOriginEndpointConfig& GetVpcOriginEndpointConfig() const{ return m_vpcOriginEndpointConfig; }
    inline bool VpcOriginEndpointConfigHasBeenSet() const { return m_vpcOriginEndpointConfigHasBeenSet; }
    inline void SetVpcOriginEndpointConfig(const VpcOriginEndpointConfig& value) { m_vpcOriginEndpointConfigHasBeenSet = true; m_vpcOriginEndpointConfig = value; }
    inline void SetVpcOriginEndpointConfig(VpcOriginEndpointConfig&& value) { m_vpcOriginEndpointConfigHasBeenSet = true; m_vpcOriginEndpointConfig = std::move(value); }
    inline UpdateVpcOrigin2020_05_31Request& WithVpcOriginEndpointConfig(const VpcOriginEndpointConfig& value) { SetVpcOriginEndpointConfig(value); return *this;}
    inline UpdateVpcOrigin2020_05_31Request& WithVpcOriginEndpointConfig(VpcOriginEndpointConfig&& value) { SetVpcOriginEndpointConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateVpcOrigin2020_05_31Request& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateVpcOrigin2020_05_31Request& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateVpcOrigin2020_05_31Request& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin to update, if a match occurs.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }
    inline UpdateVpcOrigin2020_05_31Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}
    inline UpdateVpcOrigin2020_05_31Request& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}
    inline UpdateVpcOrigin2020_05_31Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}
    ///@}
  private:

    VpcOriginEndpointConfig m_vpcOriginEndpointConfig;
    bool m_vpcOriginEndpointConfigHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
