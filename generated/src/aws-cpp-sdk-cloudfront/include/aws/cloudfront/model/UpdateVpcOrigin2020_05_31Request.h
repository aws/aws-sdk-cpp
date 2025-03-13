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
    AWS_CLOUDFRONT_API UpdateVpcOrigin2020_05_31Request() = default;

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
    inline const VpcOriginEndpointConfig& GetVpcOriginEndpointConfig() const { return m_vpcOriginEndpointConfig; }
    inline bool VpcOriginEndpointConfigHasBeenSet() const { return m_vpcOriginEndpointConfigHasBeenSet; }
    template<typename VpcOriginEndpointConfigT = VpcOriginEndpointConfig>
    void SetVpcOriginEndpointConfig(VpcOriginEndpointConfigT&& value) { m_vpcOriginEndpointConfigHasBeenSet = true; m_vpcOriginEndpointConfig = std::forward<VpcOriginEndpointConfigT>(value); }
    template<typename VpcOriginEndpointConfigT = VpcOriginEndpointConfig>
    UpdateVpcOrigin2020_05_31Request& WithVpcOriginEndpointConfig(VpcOriginEndpointConfigT&& value) { SetVpcOriginEndpointConfig(std::forward<VpcOriginEndpointConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateVpcOrigin2020_05_31Request& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin to update, if a match occurs.</p>
     */
    inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    template<typename IfMatchT = Aws::String>
    void SetIfMatch(IfMatchT&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::forward<IfMatchT>(value); }
    template<typename IfMatchT = Aws::String>
    UpdateVpcOrigin2020_05_31Request& WithIfMatch(IfMatchT&& value) { SetIfMatch(std::forward<IfMatchT>(value)); return *this;}
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
