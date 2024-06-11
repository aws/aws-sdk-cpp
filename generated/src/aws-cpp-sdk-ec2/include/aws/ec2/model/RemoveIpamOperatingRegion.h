﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Remove an operating Region from an IPAM. Operating Regions are Amazon Web
   * Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
   * discovers and monitors resources in the Amazon Web Services Regions you select
   * as operating Regions.</p> <p>For more information about operating Regions, see
   * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
   * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RemoveIpamOperatingRegion">AWS
   * API Reference</a></p>
   */
  class RemoveIpamOperatingRegion
  {
  public:
    AWS_EC2_API RemoveIpamOperatingRegion();
    AWS_EC2_API RemoveIpamOperatingRegion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RemoveIpamOperatingRegion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the operating Region you want to remove.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }
    inline RemoveIpamOperatingRegion& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}
    inline RemoveIpamOperatingRegion& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}
    inline RemoveIpamOperatingRegion& WithRegionName(const char* value) { SetRegionName(value); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
