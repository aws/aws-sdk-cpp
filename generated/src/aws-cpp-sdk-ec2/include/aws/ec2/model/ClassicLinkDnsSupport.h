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
   * <p>Describes the ClassicLink DNS support status of a VPC.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClassicLinkDnsSupport">AWS
   * API Reference</a></p>
   */
  class ClassicLinkDnsSupport
  {
  public:
    AWS_EC2_API ClassicLinkDnsSupport();
    AWS_EC2_API ClassicLinkDnsSupport(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClassicLinkDnsSupport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether ClassicLink DNS support is enabled for the VPC.</p>
     */
    inline bool GetClassicLinkDnsSupported() const{ return m_classicLinkDnsSupported; }

    /**
     * <p>Indicates whether ClassicLink DNS support is enabled for the VPC.</p>
     */
    inline bool ClassicLinkDnsSupportedHasBeenSet() const { return m_classicLinkDnsSupportedHasBeenSet; }

    /**
     * <p>Indicates whether ClassicLink DNS support is enabled for the VPC.</p>
     */
    inline void SetClassicLinkDnsSupported(bool value) { m_classicLinkDnsSupportedHasBeenSet = true; m_classicLinkDnsSupported = value; }

    /**
     * <p>Indicates whether ClassicLink DNS support is enabled for the VPC.</p>
     */
    inline ClassicLinkDnsSupport& WithClassicLinkDnsSupported(bool value) { SetClassicLinkDnsSupported(value); return *this;}


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline ClassicLinkDnsSupport& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline ClassicLinkDnsSupport& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline ClassicLinkDnsSupport& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    bool m_classicLinkDnsSupported;
    bool m_classicLinkDnsSupportedHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
