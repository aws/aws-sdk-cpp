/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
#include <aws/ec2/model/DhcpConfiguration.h>
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
   * <p>The set of DHCP options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DhcpOptions">AWS API
   * Reference</a></p>
   */
  class DhcpOptions
  {
  public:
    AWS_EC2_API DhcpOptions();
    AWS_EC2_API DhcpOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DhcpOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the DHCP options set.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline DhcpOptions& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline DhcpOptions& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline DhcpOptions& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the DHCP options set.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline DhcpOptions& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline DhcpOptions& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline DhcpOptions& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline DhcpOptions& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the set of DHCP options.</p>
     */
    inline const Aws::String& GetDhcpOptionsId() const{ return m_dhcpOptionsId; }
    inline bool DhcpOptionsIdHasBeenSet() const { return m_dhcpOptionsIdHasBeenSet; }
    inline void SetDhcpOptionsId(const Aws::String& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = value; }
    inline void SetDhcpOptionsId(Aws::String&& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = std::move(value); }
    inline void SetDhcpOptionsId(const char* value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId.assign(value); }
    inline DhcpOptions& WithDhcpOptionsId(const Aws::String& value) { SetDhcpOptionsId(value); return *this;}
    inline DhcpOptions& WithDhcpOptionsId(Aws::String&& value) { SetDhcpOptionsId(std::move(value)); return *this;}
    inline DhcpOptions& WithDhcpOptionsId(const char* value) { SetDhcpOptionsId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DHCP options in the set.</p>
     */
    inline const Aws::Vector<DhcpConfiguration>& GetDhcpConfigurations() const{ return m_dhcpConfigurations; }
    inline bool DhcpConfigurationsHasBeenSet() const { return m_dhcpConfigurationsHasBeenSet; }
    inline void SetDhcpConfigurations(const Aws::Vector<DhcpConfiguration>& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations = value; }
    inline void SetDhcpConfigurations(Aws::Vector<DhcpConfiguration>&& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations = std::move(value); }
    inline DhcpOptions& WithDhcpConfigurations(const Aws::Vector<DhcpConfiguration>& value) { SetDhcpConfigurations(value); return *this;}
    inline DhcpOptions& WithDhcpConfigurations(Aws::Vector<DhcpConfiguration>&& value) { SetDhcpConfigurations(std::move(value)); return *this;}
    inline DhcpOptions& AddDhcpConfigurations(const DhcpConfiguration& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations.push_back(value); return *this; }
    inline DhcpOptions& AddDhcpConfigurations(DhcpConfiguration&& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_dhcpOptionsId;
    bool m_dhcpOptionsIdHasBeenSet = false;

    Aws::Vector<DhcpConfiguration> m_dhcpConfigurations;
    bool m_dhcpConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
