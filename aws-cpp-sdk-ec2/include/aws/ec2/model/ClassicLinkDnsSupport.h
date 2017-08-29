/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API ClassicLinkDnsSupport
  {
  public:
    ClassicLinkDnsSupport();
    ClassicLinkDnsSupport(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClassicLinkDnsSupport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether ClassicLink DNS support is enabled for the VPC.</p>
     */
    inline bool GetClassicLinkDnsSupported() const{ return m_classicLinkDnsSupported; }

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
    bool m_classicLinkDnsSupportedHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
