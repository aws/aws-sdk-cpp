/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DhcpOptions
  {
  public:
    AWS_EC2_API DhcpOptions();
    AWS_EC2_API DhcpOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DhcpOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One or more DHCP options in the set.</p>
     */
    inline const Aws::Vector<DhcpConfiguration>& GetDhcpConfigurations() const{ return m_dhcpConfigurations; }

    /**
     * <p>One or more DHCP options in the set.</p>
     */
    inline bool DhcpConfigurationsHasBeenSet() const { return m_dhcpConfigurationsHasBeenSet; }

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
    inline bool DhcpOptionsIdHasBeenSet() const { return m_dhcpOptionsIdHasBeenSet; }

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
     * <p>The ID of the Amazon Web Services account that owns the DHCP options set.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the DHCP options set.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the DHCP options set.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the DHCP options set.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the DHCP options set.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the DHCP options set.</p>
     */
    inline DhcpOptions& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the DHCP options set.</p>
     */
    inline DhcpOptions& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the DHCP options set.</p>
     */
    inline DhcpOptions& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>Any tags assigned to the DHCP options set.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the DHCP options set.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

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
    bool m_dhcpConfigurationsHasBeenSet = false;

    Aws::String m_dhcpOptionsId;
    bool m_dhcpOptionsIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
