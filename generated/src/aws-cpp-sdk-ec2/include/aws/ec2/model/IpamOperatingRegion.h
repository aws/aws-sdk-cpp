/**
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
   * <p>The operating Regions for an IPAM. Operating Regions are Amazon Web Services
   * Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
   * discovers and monitors resources in the Amazon Web Services Regions you select
   * as operating Regions.</p> <p>For more information about operating Regions, see
   * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
   * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamOperatingRegion">AWS
   * API Reference</a></p>
   */
  class IpamOperatingRegion
  {
  public:
    AWS_EC2_API IpamOperatingRegion() = default;
    AWS_EC2_API IpamOperatingRegion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamOperatingRegion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the operating Region.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    IpamOperatingRegion& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
