/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpamScopeType.h>
#include <aws/ec2/model/IpamScopeState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>In IPAM, a scope is the highest-level container within IPAM. An IPAM contains
   * two default scopes. Each scope represents the IP space for a single network. The
   * private scope is intended for all private IP address space. The public scope is
   * intended for all public IP address space. Scopes enable you to reuse IP
   * addresses across multiple unconnected networks without causing IP address
   * overlap or conflict.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/vpc/latest/ipam/how-it-works-ipam.html">How
   * IPAM works</a> in the <i>Amazon VPC IPAM User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamScope">AWS API
   * Reference</a></p>
   */
  class IpamScope
  {
  public:
    AWS_EC2_API IpamScope() = default;
    AWS_EC2_API IpamScope(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamScope& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the scope.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    IpamScope& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the scope.</p>
     */
    inline const Aws::String& GetIpamScopeId() const { return m_ipamScopeId; }
    inline bool IpamScopeIdHasBeenSet() const { return m_ipamScopeIdHasBeenSet; }
    template<typename IpamScopeIdT = Aws::String>
    void SetIpamScopeId(IpamScopeIdT&& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = std::forward<IpamScopeIdT>(value); }
    template<typename IpamScopeIdT = Aws::String>
    IpamScope& WithIpamScopeId(IpamScopeIdT&& value) { SetIpamScopeId(std::forward<IpamScopeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scope.</p>
     */
    inline const Aws::String& GetIpamScopeArn() const { return m_ipamScopeArn; }
    inline bool IpamScopeArnHasBeenSet() const { return m_ipamScopeArnHasBeenSet; }
    template<typename IpamScopeArnT = Aws::String>
    void SetIpamScopeArn(IpamScopeArnT&& value) { m_ipamScopeArnHasBeenSet = true; m_ipamScopeArn = std::forward<IpamScopeArnT>(value); }
    template<typename IpamScopeArnT = Aws::String>
    IpamScope& WithIpamScopeArn(IpamScopeArnT&& value) { SetIpamScopeArn(std::forward<IpamScopeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IPAM.</p>
     */
    inline const Aws::String& GetIpamArn() const { return m_ipamArn; }
    inline bool IpamArnHasBeenSet() const { return m_ipamArnHasBeenSet; }
    template<typename IpamArnT = Aws::String>
    void SetIpamArn(IpamArnT&& value) { m_ipamArnHasBeenSet = true; m_ipamArn = std::forward<IpamArnT>(value); }
    template<typename IpamArnT = Aws::String>
    IpamScope& WithIpamArn(IpamArnT&& value) { SetIpamArn(std::forward<IpamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the IPAM scope.</p>
     */
    inline const Aws::String& GetIpamRegion() const { return m_ipamRegion; }
    inline bool IpamRegionHasBeenSet() const { return m_ipamRegionHasBeenSet; }
    template<typename IpamRegionT = Aws::String>
    void SetIpamRegion(IpamRegionT&& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = std::forward<IpamRegionT>(value); }
    template<typename IpamRegionT = Aws::String>
    IpamScope& WithIpamRegion(IpamRegionT&& value) { SetIpamRegion(std::forward<IpamRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the scope.</p>
     */
    inline IpamScopeType GetIpamScopeType() const { return m_ipamScopeType; }
    inline bool IpamScopeTypeHasBeenSet() const { return m_ipamScopeTypeHasBeenSet; }
    inline void SetIpamScopeType(IpamScopeType value) { m_ipamScopeTypeHasBeenSet = true; m_ipamScopeType = value; }
    inline IpamScope& WithIpamScopeType(IpamScopeType value) { SetIpamScopeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines if the scope is the default scope or not.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline IpamScope& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the scope.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    IpamScope& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of pools in the scope.</p>
     */
    inline int GetPoolCount() const { return m_poolCount; }
    inline bool PoolCountHasBeenSet() const { return m_poolCountHasBeenSet; }
    inline void SetPoolCount(int value) { m_poolCountHasBeenSet = true; m_poolCount = value; }
    inline IpamScope& WithPoolCount(int value) { SetPoolCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the IPAM scope.</p>
     */
    inline IpamScopeState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(IpamScopeState value) { m_stateHasBeenSet = true; m_state = value; }
    inline IpamScope& WithState(IpamScopeState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    IpamScope& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    IpamScope& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_ipamScopeId;
    bool m_ipamScopeIdHasBeenSet = false;

    Aws::String m_ipamScopeArn;
    bool m_ipamScopeArnHasBeenSet = false;

    Aws::String m_ipamArn;
    bool m_ipamArnHasBeenSet = false;

    Aws::String m_ipamRegion;
    bool m_ipamRegionHasBeenSet = false;

    IpamScopeType m_ipamScopeType{IpamScopeType::NOT_SET};
    bool m_ipamScopeTypeHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_poolCount{0};
    bool m_poolCountHasBeenSet = false;

    IpamScopeState m_state{IpamScopeState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
