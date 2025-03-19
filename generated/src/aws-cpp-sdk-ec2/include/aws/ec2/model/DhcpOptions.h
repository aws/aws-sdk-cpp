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
    AWS_EC2_API DhcpOptions() = default;
    AWS_EC2_API DhcpOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DhcpOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the DHCP options set.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    DhcpOptions& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the DHCP options set.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DhcpOptions& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DhcpOptions& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the set of DHCP options.</p>
     */
    inline const Aws::String& GetDhcpOptionsId() const { return m_dhcpOptionsId; }
    inline bool DhcpOptionsIdHasBeenSet() const { return m_dhcpOptionsIdHasBeenSet; }
    template<typename DhcpOptionsIdT = Aws::String>
    void SetDhcpOptionsId(DhcpOptionsIdT&& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = std::forward<DhcpOptionsIdT>(value); }
    template<typename DhcpOptionsIdT = Aws::String>
    DhcpOptions& WithDhcpOptionsId(DhcpOptionsIdT&& value) { SetDhcpOptionsId(std::forward<DhcpOptionsIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DHCP options in the set.</p>
     */
    inline const Aws::Vector<DhcpConfiguration>& GetDhcpConfigurations() const { return m_dhcpConfigurations; }
    inline bool DhcpConfigurationsHasBeenSet() const { return m_dhcpConfigurationsHasBeenSet; }
    template<typename DhcpConfigurationsT = Aws::Vector<DhcpConfiguration>>
    void SetDhcpConfigurations(DhcpConfigurationsT&& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations = std::forward<DhcpConfigurationsT>(value); }
    template<typename DhcpConfigurationsT = Aws::Vector<DhcpConfiguration>>
    DhcpOptions& WithDhcpConfigurations(DhcpConfigurationsT&& value) { SetDhcpConfigurations(std::forward<DhcpConfigurationsT>(value)); return *this;}
    template<typename DhcpConfigurationsT = DhcpConfiguration>
    DhcpOptions& AddDhcpConfigurations(DhcpConfigurationsT&& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations.emplace_back(std::forward<DhcpConfigurationsT>(value)); return *this; }
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
