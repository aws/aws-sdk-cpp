﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DisableVpcClassicLinkDnsSupportRequest : public EC2Request
  {
  public:
    AWS_EC2_API DisableVpcClassicLinkDnsSupportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableVpcClassicLinkDnsSupport"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline DisableVpcClassicLinkDnsSupportRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline DisableVpcClassicLinkDnsSupportRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline DisableVpcClassicLinkDnsSupportRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
