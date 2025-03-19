/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpamPoolAllocationResourceType.h>
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
   * <p>In IPAM, an allocation is a CIDR assignment from an IPAM pool to another IPAM
   * pool or to a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPoolAllocation">AWS
   * API Reference</a></p>
   */
  class IpamPoolAllocation
  {
  public:
    AWS_EC2_API IpamPoolAllocation() = default;
    AWS_EC2_API IpamPoolAllocation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamPoolAllocation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The CIDR for the allocation. A CIDR is a representation of an IP address and
     * its associated network mask (or netmask) and refers to a range of IP addresses.
     * An IPv4 CIDR example is <code>10.24.34.0/23</code>. An IPv6 CIDR example is
     * <code>2001:DB8::/32</code>.</p>
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    IpamPoolAllocation& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an allocation.</p>
     */
    inline const Aws::String& GetIpamPoolAllocationId() const { return m_ipamPoolAllocationId; }
    inline bool IpamPoolAllocationIdHasBeenSet() const { return m_ipamPoolAllocationIdHasBeenSet; }
    template<typename IpamPoolAllocationIdT = Aws::String>
    void SetIpamPoolAllocationId(IpamPoolAllocationIdT&& value) { m_ipamPoolAllocationIdHasBeenSet = true; m_ipamPoolAllocationId = std::forward<IpamPoolAllocationIdT>(value); }
    template<typename IpamPoolAllocationIdT = Aws::String>
    IpamPoolAllocation& WithIpamPoolAllocationId(IpamPoolAllocationIdT&& value) { SetIpamPoolAllocationId(std::forward<IpamPoolAllocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the pool allocation.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    IpamPoolAllocation& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    IpamPoolAllocation& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource.</p>
     */
    inline IpamPoolAllocationResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(IpamPoolAllocationResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline IpamPoolAllocation& WithResourceType(IpamPoolAllocationResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline const Aws::String& GetResourceRegion() const { return m_resourceRegion; }
    inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }
    template<typename ResourceRegionT = Aws::String>
    void SetResourceRegion(ResourceRegionT&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = std::forward<ResourceRegionT>(value); }
    template<typename ResourceRegionT = Aws::String>
    IpamPoolAllocation& WithResourceRegion(ResourceRegionT&& value) { SetResourceRegion(std::forward<ResourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the resource.</p>
     */
    inline const Aws::String& GetResourceOwner() const { return m_resourceOwner; }
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }
    template<typename ResourceOwnerT = Aws::String>
    void SetResourceOwner(ResourceOwnerT&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::forward<ResourceOwnerT>(value); }
    template<typename ResourceOwnerT = Aws::String>
    IpamPoolAllocation& WithResourceOwner(ResourceOwnerT&& value) { SetResourceOwner(std::forward<ResourceOwnerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_ipamPoolAllocationId;
    bool m_ipamPoolAllocationIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    IpamPoolAllocationResourceType m_resourceType{IpamPoolAllocationResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceRegion;
    bool m_resourceRegionHasBeenSet = false;

    Aws::String m_resourceOwner;
    bool m_resourceOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
