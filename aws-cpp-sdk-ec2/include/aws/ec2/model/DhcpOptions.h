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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/DhcpConfiguration.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes a set of DHCP options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DhcpOptions">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API DhcpOptions
  {
  public:
    DhcpOptions();
    DhcpOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    DhcpOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One or more DHCP options in the set.</p>
     */
    inline const Aws::Vector<DhcpConfiguration>& GetDhcpConfigurations() const{ return m_dhcpConfigurations; }

    /**
     * <p>One or more DHCP options in the set.</p>
     */
    inline void SetDhcpConfigurations(const Aws::Vector<DhcpConfiguration>& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations = value; }

    /**
     * <p>One or more DHCP options in the set.</p>
     */
    inline void SetDhcpConfigurations(Aws::Vector<DhcpConfiguration>&& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations = std::move(value); }

    /**
     * <p>One or more DHCP options in the set.</p>
     */
    inline DhcpOptions& WithDhcpConfigurations(const Aws::Vector<DhcpConfiguration>& value) { SetDhcpConfigurations(value); return *this;}

    /**
     * <p>One or more DHCP options in the set.</p>
     */
    inline DhcpOptions& WithDhcpConfigurations(Aws::Vector<DhcpConfiguration>&& value) { SetDhcpConfigurations(std::move(value)); return *this;}

    /**
     * <p>One or more DHCP options in the set.</p>
     */
    inline DhcpOptions& AddDhcpConfigurations(const DhcpConfiguration& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations.push_back(value); return *this; }

    /**
     * <p>One or more DHCP options in the set.</p>
     */
    inline DhcpOptions& AddDhcpConfigurations(DhcpConfiguration&& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the set of DHCP options.</p>
     */
    inline const Aws::String& GetDhcpOptionsId() const{ return m_dhcpOptionsId; }

    /**
     * <p>The ID of the set of DHCP options.</p>
     */
    inline void SetDhcpOptionsId(const Aws::String& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = value; }

    /**
     * <p>The ID of the set of DHCP options.</p>
     */
    inline void SetDhcpOptionsId(Aws::String&& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = std::move(value); }

    /**
     * <p>The ID of the set of DHCP options.</p>
     */
    inline void SetDhcpOptionsId(const char* value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId.assign(value); }

    /**
     * <p>The ID of the set of DHCP options.</p>
     */
    inline DhcpOptions& WithDhcpOptionsId(const Aws::String& value) { SetDhcpOptionsId(value); return *this;}

    /**
     * <p>The ID of the set of DHCP options.</p>
     */
    inline DhcpOptions& WithDhcpOptionsId(Aws::String&& value) { SetDhcpOptionsId(std::move(value)); return *this;}

    /**
     * <p>The ID of the set of DHCP options.</p>
     */
    inline DhcpOptions& WithDhcpOptionsId(const char* value) { SetDhcpOptionsId(value); return *this;}


    /**
     * <p>Any tags assigned to the DHCP options set.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the DHCP options set.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the DHCP options set.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the DHCP options set.</p>
     */
    inline DhcpOptions& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the DHCP options set.</p>
     */
    inline DhcpOptions& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the DHCP options set.</p>
     */
    inline DhcpOptions& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the DHCP options set.</p>
     */
    inline DhcpOptions& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DhcpConfiguration> m_dhcpConfigurations;
    bool m_dhcpConfigurationsHasBeenSet;

    Aws::String m_dhcpOptionsId;
    bool m_dhcpOptionsIdHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
