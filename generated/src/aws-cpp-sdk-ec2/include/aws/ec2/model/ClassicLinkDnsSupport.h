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
   *  <p>Deprecated.</p>  <p>Describes the ClassicLink DNS support
   * status of a VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClassicLinkDnsSupport">AWS
   * API Reference</a></p>
   */
  class ClassicLinkDnsSupport
  {
  public:
    AWS_EC2_API ClassicLinkDnsSupport() = default;
    AWS_EC2_API ClassicLinkDnsSupport(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClassicLinkDnsSupport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether ClassicLink DNS support is enabled for the VPC.</p>
     */
    inline bool GetClassicLinkDnsSupported() const { return m_classicLinkDnsSupported; }
    inline bool ClassicLinkDnsSupportedHasBeenSet() const { return m_classicLinkDnsSupportedHasBeenSet; }
    inline void SetClassicLinkDnsSupported(bool value) { m_classicLinkDnsSupportedHasBeenSet = true; m_classicLinkDnsSupported = value; }
    inline ClassicLinkDnsSupport& WithClassicLinkDnsSupported(bool value) { SetClassicLinkDnsSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    ClassicLinkDnsSupport& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}
  private:

    bool m_classicLinkDnsSupported{false};
    bool m_classicLinkDnsSupportedHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
