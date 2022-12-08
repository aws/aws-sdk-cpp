/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpamState.h>
#include <aws/ec2/model/IpamOperatingRegion.h>
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
   * <p>IPAM is a VPC feature that you can use to automate your IP address management
   * workflows including assigning, tracking, troubleshooting, and auditing IP
   * addresses across Amazon Web Services Regions and accounts throughout your Amazon
   * Web Services Organization. For more information, see <a
   * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
   * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Ipam">AWS API
   * Reference</a></p>
   */
  class Ipam
  {
  public:
    AWS_EC2_API Ipam();
    AWS_EC2_API Ipam(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Ipam& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM.</p>
     */
    inline Ipam& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM.</p>
     */
    inline Ipam& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM.</p>
     */
    inline Ipam& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The ID of the IPAM.</p>
     */
    inline const Aws::String& GetIpamId() const{ return m_ipamId; }

    /**
     * <p>The ID of the IPAM.</p>
     */
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }

    /**
     * <p>The ID of the IPAM.</p>
     */
    inline void SetIpamId(const Aws::String& value) { m_ipamIdHasBeenSet = true; m_ipamId = value; }

    /**
     * <p>The ID of the IPAM.</p>
     */
    inline void SetIpamId(Aws::String&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::move(value); }

    /**
     * <p>The ID of the IPAM.</p>
     */
    inline void SetIpamId(const char* value) { m_ipamIdHasBeenSet = true; m_ipamId.assign(value); }

    /**
     * <p>The ID of the IPAM.</p>
     */
    inline Ipam& WithIpamId(const Aws::String& value) { SetIpamId(value); return *this;}

    /**
     * <p>The ID of the IPAM.</p>
     */
    inline Ipam& WithIpamId(Aws::String&& value) { SetIpamId(std::move(value)); return *this;}

    /**
     * <p>The ID of the IPAM.</p>
     */
    inline Ipam& WithIpamId(const char* value) { SetIpamId(value); return *this;}


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
    inline Ipam& WithIpamArn(const Aws::String& value) { SetIpamArn(value); return *this;}

    /**
     * <p>The ARN of the IPAM.</p>
     */
    inline Ipam& WithIpamArn(Aws::String&& value) { SetIpamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IPAM.</p>
     */
    inline Ipam& WithIpamArn(const char* value) { SetIpamArn(value); return *this;}


    /**
     * <p>The Amazon Web Services Region of the IPAM.</p>
     */
    inline const Aws::String& GetIpamRegion() const{ return m_ipamRegion; }

    /**
     * <p>The Amazon Web Services Region of the IPAM.</p>
     */
    inline bool IpamRegionHasBeenSet() const { return m_ipamRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region of the IPAM.</p>
     */
    inline void SetIpamRegion(const Aws::String& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = value; }

    /**
     * <p>The Amazon Web Services Region of the IPAM.</p>
     */
    inline void SetIpamRegion(Aws::String&& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region of the IPAM.</p>
     */
    inline void SetIpamRegion(const char* value) { m_ipamRegionHasBeenSet = true; m_ipamRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region of the IPAM.</p>
     */
    inline Ipam& WithIpamRegion(const Aws::String& value) { SetIpamRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region of the IPAM.</p>
     */
    inline Ipam& WithIpamRegion(Aws::String&& value) { SetIpamRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region of the IPAM.</p>
     */
    inline Ipam& WithIpamRegion(const char* value) { SetIpamRegion(value); return *this;}


    /**
     * <p>The ID of the IPAM's default public scope.</p>
     */
    inline const Aws::String& GetPublicDefaultScopeId() const{ return m_publicDefaultScopeId; }

    /**
     * <p>The ID of the IPAM's default public scope.</p>
     */
    inline bool PublicDefaultScopeIdHasBeenSet() const { return m_publicDefaultScopeIdHasBeenSet; }

    /**
     * <p>The ID of the IPAM's default public scope.</p>
     */
    inline void SetPublicDefaultScopeId(const Aws::String& value) { m_publicDefaultScopeIdHasBeenSet = true; m_publicDefaultScopeId = value; }

    /**
     * <p>The ID of the IPAM's default public scope.</p>
     */
    inline void SetPublicDefaultScopeId(Aws::String&& value) { m_publicDefaultScopeIdHasBeenSet = true; m_publicDefaultScopeId = std::move(value); }

    /**
     * <p>The ID of the IPAM's default public scope.</p>
     */
    inline void SetPublicDefaultScopeId(const char* value) { m_publicDefaultScopeIdHasBeenSet = true; m_publicDefaultScopeId.assign(value); }

    /**
     * <p>The ID of the IPAM's default public scope.</p>
     */
    inline Ipam& WithPublicDefaultScopeId(const Aws::String& value) { SetPublicDefaultScopeId(value); return *this;}

    /**
     * <p>The ID of the IPAM's default public scope.</p>
     */
    inline Ipam& WithPublicDefaultScopeId(Aws::String&& value) { SetPublicDefaultScopeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the IPAM's default public scope.</p>
     */
    inline Ipam& WithPublicDefaultScopeId(const char* value) { SetPublicDefaultScopeId(value); return *this;}


    /**
     * <p>The ID of the IPAM's default private scope.</p>
     */
    inline const Aws::String& GetPrivateDefaultScopeId() const{ return m_privateDefaultScopeId; }

    /**
     * <p>The ID of the IPAM's default private scope.</p>
     */
    inline bool PrivateDefaultScopeIdHasBeenSet() const { return m_privateDefaultScopeIdHasBeenSet; }

    /**
     * <p>The ID of the IPAM's default private scope.</p>
     */
    inline void SetPrivateDefaultScopeId(const Aws::String& value) { m_privateDefaultScopeIdHasBeenSet = true; m_privateDefaultScopeId = value; }

    /**
     * <p>The ID of the IPAM's default private scope.</p>
     */
    inline void SetPrivateDefaultScopeId(Aws::String&& value) { m_privateDefaultScopeIdHasBeenSet = true; m_privateDefaultScopeId = std::move(value); }

    /**
     * <p>The ID of the IPAM's default private scope.</p>
     */
    inline void SetPrivateDefaultScopeId(const char* value) { m_privateDefaultScopeIdHasBeenSet = true; m_privateDefaultScopeId.assign(value); }

    /**
     * <p>The ID of the IPAM's default private scope.</p>
     */
    inline Ipam& WithPrivateDefaultScopeId(const Aws::String& value) { SetPrivateDefaultScopeId(value); return *this;}

    /**
     * <p>The ID of the IPAM's default private scope.</p>
     */
    inline Ipam& WithPrivateDefaultScopeId(Aws::String&& value) { SetPrivateDefaultScopeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the IPAM's default private scope.</p>
     */
    inline Ipam& WithPrivateDefaultScopeId(const char* value) { SetPrivateDefaultScopeId(value); return *this;}


    /**
     * <p>The number of scopes in the IPAM. The scope quota is 5. For more information
     * on quotas, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/quotas-ipam.html">Quotas in
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline int GetScopeCount() const{ return m_scopeCount; }

    /**
     * <p>The number of scopes in the IPAM. The scope quota is 5. For more information
     * on quotas, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/quotas-ipam.html">Quotas in
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline bool ScopeCountHasBeenSet() const { return m_scopeCountHasBeenSet; }

    /**
     * <p>The number of scopes in the IPAM. The scope quota is 5. For more information
     * on quotas, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/quotas-ipam.html">Quotas in
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline void SetScopeCount(int value) { m_scopeCountHasBeenSet = true; m_scopeCount = value; }

    /**
     * <p>The number of scopes in the IPAM. The scope quota is 5. For more information
     * on quotas, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/quotas-ipam.html">Quotas in
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline Ipam& WithScopeCount(int value) { SetScopeCount(value); return *this;}


    /**
     * <p>The description for the IPAM.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the IPAM.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the IPAM.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the IPAM.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the IPAM.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the IPAM.</p>
     */
    inline Ipam& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the IPAM.</p>
     */
    inline Ipam& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the IPAM.</p>
     */
    inline Ipam& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The operating Regions for an IPAM. Operating Regions are Amazon Web Services
     * Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const Aws::Vector<IpamOperatingRegion>& GetOperatingRegions() const{ return m_operatingRegions; }

    /**
     * <p>The operating Regions for an IPAM. Operating Regions are Amazon Web Services
     * Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline bool OperatingRegionsHasBeenSet() const { return m_operatingRegionsHasBeenSet; }

    /**
     * <p>The operating Regions for an IPAM. Operating Regions are Amazon Web Services
     * Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetOperatingRegions(const Aws::Vector<IpamOperatingRegion>& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions = value; }

    /**
     * <p>The operating Regions for an IPAM. Operating Regions are Amazon Web Services
     * Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetOperatingRegions(Aws::Vector<IpamOperatingRegion>&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions = std::move(value); }

    /**
     * <p>The operating Regions for an IPAM. Operating Regions are Amazon Web Services
     * Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline Ipam& WithOperatingRegions(const Aws::Vector<IpamOperatingRegion>& value) { SetOperatingRegions(value); return *this;}

    /**
     * <p>The operating Regions for an IPAM. Operating Regions are Amazon Web Services
     * Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline Ipam& WithOperatingRegions(Aws::Vector<IpamOperatingRegion>&& value) { SetOperatingRegions(std::move(value)); return *this;}

    /**
     * <p>The operating Regions for an IPAM. Operating Regions are Amazon Web Services
     * Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline Ipam& AddOperatingRegions(const IpamOperatingRegion& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions.push_back(value); return *this; }

    /**
     * <p>The operating Regions for an IPAM. Operating Regions are Amazon Web Services
     * Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline Ipam& AddOperatingRegions(IpamOperatingRegion&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions.push_back(std::move(value)); return *this; }


    /**
     * <p>The state of the IPAM.</p>
     */
    inline const IpamState& GetState() const{ return m_state; }

    /**
     * <p>The state of the IPAM.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the IPAM.</p>
     */
    inline void SetState(const IpamState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the IPAM.</p>
     */
    inline void SetState(IpamState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the IPAM.</p>
     */
    inline Ipam& WithState(const IpamState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the IPAM.</p>
     */
    inline Ipam& WithState(IpamState&& value) { SetState(std::move(value)); return *this;}


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
    inline Ipam& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline Ipam& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline Ipam& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline Ipam& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_ipamId;
    bool m_ipamIdHasBeenSet = false;

    Aws::String m_ipamArn;
    bool m_ipamArnHasBeenSet = false;

    Aws::String m_ipamRegion;
    bool m_ipamRegionHasBeenSet = false;

    Aws::String m_publicDefaultScopeId;
    bool m_publicDefaultScopeIdHasBeenSet = false;

    Aws::String m_privateDefaultScopeId;
    bool m_privateDefaultScopeIdHasBeenSet = false;

    int m_scopeCount;
    bool m_scopeCountHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<IpamOperatingRegion> m_operatingRegions;
    bool m_operatingRegionsHasBeenSet = false;

    IpamState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
