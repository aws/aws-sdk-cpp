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
    AWS_EC2_API IpamScope();
    AWS_EC2_API IpamScope(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamScope& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the scope.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline IpamScope& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline IpamScope& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline IpamScope& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the scope.</p>
     */
    inline const Aws::String& GetIpamScopeId() const{ return m_ipamScopeId; }
    inline bool IpamScopeIdHasBeenSet() const { return m_ipamScopeIdHasBeenSet; }
    inline void SetIpamScopeId(const Aws::String& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = value; }
    inline void SetIpamScopeId(Aws::String&& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = std::move(value); }
    inline void SetIpamScopeId(const char* value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId.assign(value); }
    inline IpamScope& WithIpamScopeId(const Aws::String& value) { SetIpamScopeId(value); return *this;}
    inline IpamScope& WithIpamScopeId(Aws::String&& value) { SetIpamScopeId(std::move(value)); return *this;}
    inline IpamScope& WithIpamScopeId(const char* value) { SetIpamScopeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scope.</p>
     */
    inline const Aws::String& GetIpamScopeArn() const{ return m_ipamScopeArn; }
    inline bool IpamScopeArnHasBeenSet() const { return m_ipamScopeArnHasBeenSet; }
    inline void SetIpamScopeArn(const Aws::String& value) { m_ipamScopeArnHasBeenSet = true; m_ipamScopeArn = value; }
    inline void SetIpamScopeArn(Aws::String&& value) { m_ipamScopeArnHasBeenSet = true; m_ipamScopeArn = std::move(value); }
    inline void SetIpamScopeArn(const char* value) { m_ipamScopeArnHasBeenSet = true; m_ipamScopeArn.assign(value); }
    inline IpamScope& WithIpamScopeArn(const Aws::String& value) { SetIpamScopeArn(value); return *this;}
    inline IpamScope& WithIpamScopeArn(Aws::String&& value) { SetIpamScopeArn(std::move(value)); return *this;}
    inline IpamScope& WithIpamScopeArn(const char* value) { SetIpamScopeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IPAM.</p>
     */
    inline const Aws::String& GetIpamArn() const{ return m_ipamArn; }
    inline bool IpamArnHasBeenSet() const { return m_ipamArnHasBeenSet; }
    inline void SetIpamArn(const Aws::String& value) { m_ipamArnHasBeenSet = true; m_ipamArn = value; }
    inline void SetIpamArn(Aws::String&& value) { m_ipamArnHasBeenSet = true; m_ipamArn = std::move(value); }
    inline void SetIpamArn(const char* value) { m_ipamArnHasBeenSet = true; m_ipamArn.assign(value); }
    inline IpamScope& WithIpamArn(const Aws::String& value) { SetIpamArn(value); return *this;}
    inline IpamScope& WithIpamArn(Aws::String&& value) { SetIpamArn(std::move(value)); return *this;}
    inline IpamScope& WithIpamArn(const char* value) { SetIpamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the IPAM scope.</p>
     */
    inline const Aws::String& GetIpamRegion() const{ return m_ipamRegion; }
    inline bool IpamRegionHasBeenSet() const { return m_ipamRegionHasBeenSet; }
    inline void SetIpamRegion(const Aws::String& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = value; }
    inline void SetIpamRegion(Aws::String&& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = std::move(value); }
    inline void SetIpamRegion(const char* value) { m_ipamRegionHasBeenSet = true; m_ipamRegion.assign(value); }
    inline IpamScope& WithIpamRegion(const Aws::String& value) { SetIpamRegion(value); return *this;}
    inline IpamScope& WithIpamRegion(Aws::String&& value) { SetIpamRegion(std::move(value)); return *this;}
    inline IpamScope& WithIpamRegion(const char* value) { SetIpamRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the scope.</p>
     */
    inline const IpamScopeType& GetIpamScopeType() const{ return m_ipamScopeType; }
    inline bool IpamScopeTypeHasBeenSet() const { return m_ipamScopeTypeHasBeenSet; }
    inline void SetIpamScopeType(const IpamScopeType& value) { m_ipamScopeTypeHasBeenSet = true; m_ipamScopeType = value; }
    inline void SetIpamScopeType(IpamScopeType&& value) { m_ipamScopeTypeHasBeenSet = true; m_ipamScopeType = std::move(value); }
    inline IpamScope& WithIpamScopeType(const IpamScopeType& value) { SetIpamScopeType(value); return *this;}
    inline IpamScope& WithIpamScopeType(IpamScopeType&& value) { SetIpamScopeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines if the scope is the default scope or not.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline IpamScope& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the scope.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline IpamScope& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline IpamScope& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline IpamScope& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of pools in the scope.</p>
     */
    inline int GetPoolCount() const{ return m_poolCount; }
    inline bool PoolCountHasBeenSet() const { return m_poolCountHasBeenSet; }
    inline void SetPoolCount(int value) { m_poolCountHasBeenSet = true; m_poolCount = value; }
    inline IpamScope& WithPoolCount(int value) { SetPoolCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the IPAM scope.</p>
     */
    inline const IpamScopeState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const IpamScopeState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(IpamScopeState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline IpamScope& WithState(const IpamScopeState& value) { SetState(value); return *this;}
    inline IpamScope& WithState(IpamScopeState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline IpamScope& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline IpamScope& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline IpamScope& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline IpamScope& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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

    IpamScopeType m_ipamScopeType;
    bool m_ipamScopeTypeHasBeenSet = false;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_poolCount;
    bool m_poolCountHasBeenSet = false;

    IpamScopeState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
