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


    /**
     * <p>The Amazon Web Services account ID of the owner of the scope.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the scope.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the scope.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the scope.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the scope.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the scope.</p>
     */
    inline IpamScope& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the scope.</p>
     */
    inline IpamScope& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the scope.</p>
     */
    inline IpamScope& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The ID of the scope.</p>
     */
    inline const Aws::String& GetIpamScopeId() const{ return m_ipamScopeId; }

    /**
     * <p>The ID of the scope.</p>
     */
    inline bool IpamScopeIdHasBeenSet() const { return m_ipamScopeIdHasBeenSet; }

    /**
     * <p>The ID of the scope.</p>
     */
    inline void SetIpamScopeId(const Aws::String& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = value; }

    /**
     * <p>The ID of the scope.</p>
     */
    inline void SetIpamScopeId(Aws::String&& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = std::move(value); }

    /**
     * <p>The ID of the scope.</p>
     */
    inline void SetIpamScopeId(const char* value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId.assign(value); }

    /**
     * <p>The ID of the scope.</p>
     */
    inline IpamScope& WithIpamScopeId(const Aws::String& value) { SetIpamScopeId(value); return *this;}

    /**
     * <p>The ID of the scope.</p>
     */
    inline IpamScope& WithIpamScopeId(Aws::String&& value) { SetIpamScopeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the scope.</p>
     */
    inline IpamScope& WithIpamScopeId(const char* value) { SetIpamScopeId(value); return *this;}


    /**
     * <p>The ARN of the scope.</p>
     */
    inline const Aws::String& GetIpamScopeArn() const{ return m_ipamScopeArn; }

    /**
     * <p>The ARN of the scope.</p>
     */
    inline bool IpamScopeArnHasBeenSet() const { return m_ipamScopeArnHasBeenSet; }

    /**
     * <p>The ARN of the scope.</p>
     */
    inline void SetIpamScopeArn(const Aws::String& value) { m_ipamScopeArnHasBeenSet = true; m_ipamScopeArn = value; }

    /**
     * <p>The ARN of the scope.</p>
     */
    inline void SetIpamScopeArn(Aws::String&& value) { m_ipamScopeArnHasBeenSet = true; m_ipamScopeArn = std::move(value); }

    /**
     * <p>The ARN of the scope.</p>
     */
    inline void SetIpamScopeArn(const char* value) { m_ipamScopeArnHasBeenSet = true; m_ipamScopeArn.assign(value); }

    /**
     * <p>The ARN of the scope.</p>
     */
    inline IpamScope& WithIpamScopeArn(const Aws::String& value) { SetIpamScopeArn(value); return *this;}

    /**
     * <p>The ARN of the scope.</p>
     */
    inline IpamScope& WithIpamScopeArn(Aws::String&& value) { SetIpamScopeArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the scope.</p>
     */
    inline IpamScope& WithIpamScopeArn(const char* value) { SetIpamScopeArn(value); return *this;}


    /**
     * <p>The ARN of the IPAM.</p>
     */
    inline const Aws::String& GetIpamArn() const{ return m_ipamArn; }

    /**
     * <p>The ARN of the IPAM.</p>
     */
    inline bool IpamArnHasBeenSet() const { return m_ipamArnHasBeenSet; }

    /**
     * <p>The ARN of the IPAM.</p>
     */
    inline void SetIpamArn(const Aws::String& value) { m_ipamArnHasBeenSet = true; m_ipamArn = value; }

    /**
     * <p>The ARN of the IPAM.</p>
     */
    inline void SetIpamArn(Aws::String&& value) { m_ipamArnHasBeenSet = true; m_ipamArn = std::move(value); }

    /**
     * <p>The ARN of the IPAM.</p>
     */
    inline void SetIpamArn(const char* value) { m_ipamArnHasBeenSet = true; m_ipamArn.assign(value); }

    /**
     * <p>The ARN of the IPAM.</p>
     */
    inline IpamScope& WithIpamArn(const Aws::String& value) { SetIpamArn(value); return *this;}

    /**
     * <p>The ARN of the IPAM.</p>
     */
    inline IpamScope& WithIpamArn(Aws::String&& value) { SetIpamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IPAM.</p>
     */
    inline IpamScope& WithIpamArn(const char* value) { SetIpamArn(value); return *this;}


    /**
     * <p>The Amazon Web Services Region of the IPAM scope.</p>
     */
    inline const Aws::String& GetIpamRegion() const{ return m_ipamRegion; }

    /**
     * <p>The Amazon Web Services Region of the IPAM scope.</p>
     */
    inline bool IpamRegionHasBeenSet() const { return m_ipamRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region of the IPAM scope.</p>
     */
    inline void SetIpamRegion(const Aws::String& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = value; }

    /**
     * <p>The Amazon Web Services Region of the IPAM scope.</p>
     */
    inline void SetIpamRegion(Aws::String&& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region of the IPAM scope.</p>
     */
    inline void SetIpamRegion(const char* value) { m_ipamRegionHasBeenSet = true; m_ipamRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region of the IPAM scope.</p>
     */
    inline IpamScope& WithIpamRegion(const Aws::String& value) { SetIpamRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region of the IPAM scope.</p>
     */
    inline IpamScope& WithIpamRegion(Aws::String&& value) { SetIpamRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region of the IPAM scope.</p>
     */
    inline IpamScope& WithIpamRegion(const char* value) { SetIpamRegion(value); return *this;}


    /**
     * <p>The type of the scope.</p>
     */
    inline const IpamScopeType& GetIpamScopeType() const{ return m_ipamScopeType; }

    /**
     * <p>The type of the scope.</p>
     */
    inline bool IpamScopeTypeHasBeenSet() const { return m_ipamScopeTypeHasBeenSet; }

    /**
     * <p>The type of the scope.</p>
     */
    inline void SetIpamScopeType(const IpamScopeType& value) { m_ipamScopeTypeHasBeenSet = true; m_ipamScopeType = value; }

    /**
     * <p>The type of the scope.</p>
     */
    inline void SetIpamScopeType(IpamScopeType&& value) { m_ipamScopeTypeHasBeenSet = true; m_ipamScopeType = std::move(value); }

    /**
     * <p>The type of the scope.</p>
     */
    inline IpamScope& WithIpamScopeType(const IpamScopeType& value) { SetIpamScopeType(value); return *this;}

    /**
     * <p>The type of the scope.</p>
     */
    inline IpamScope& WithIpamScopeType(IpamScopeType&& value) { SetIpamScopeType(std::move(value)); return *this;}


    /**
     * <p>Defines if the scope is the default scope or not.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }

    /**
     * <p>Defines if the scope is the default scope or not.</p>
     */
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }

    /**
     * <p>Defines if the scope is the default scope or not.</p>
     */
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }

    /**
     * <p>Defines if the scope is the default scope or not.</p>
     */
    inline IpamScope& WithIsDefault(bool value) { SetIsDefault(value); return *this;}


    /**
     * <p>The description of the scope.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the scope.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the scope.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the scope.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the scope.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the scope.</p>
     */
    inline IpamScope& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the scope.</p>
     */
    inline IpamScope& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the scope.</p>
     */
    inline IpamScope& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The number of pools in the scope.</p>
     */
    inline int GetPoolCount() const{ return m_poolCount; }

    /**
     * <p>The number of pools in the scope.</p>
     */
    inline bool PoolCountHasBeenSet() const { return m_poolCountHasBeenSet; }

    /**
     * <p>The number of pools in the scope.</p>
     */
    inline void SetPoolCount(int value) { m_poolCountHasBeenSet = true; m_poolCount = value; }

    /**
     * <p>The number of pools in the scope.</p>
     */
    inline IpamScope& WithPoolCount(int value) { SetPoolCount(value); return *this;}


    /**
     * <p>The state of the IPAM scope.</p>
     */
    inline const IpamScopeState& GetState() const{ return m_state; }

    /**
     * <p>The state of the IPAM scope.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the IPAM scope.</p>
     */
    inline void SetState(const IpamScopeState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the IPAM scope.</p>
     */
    inline void SetState(IpamScopeState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the IPAM scope.</p>
     */
    inline IpamScope& WithState(const IpamScopeState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the IPAM scope.</p>
     */
    inline IpamScope& WithState(IpamScopeState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline IpamScope& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline IpamScope& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline IpamScope& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline IpamScope& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
