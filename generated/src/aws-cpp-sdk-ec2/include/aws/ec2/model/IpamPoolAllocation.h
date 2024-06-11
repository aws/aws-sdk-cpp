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
    AWS_EC2_API IpamPoolAllocation();
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
    inline const Aws::String& GetCidr() const{ return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }
    inline IpamPoolAllocation& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}
    inline IpamPoolAllocation& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}
    inline IpamPoolAllocation& WithCidr(const char* value) { SetCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an allocation.</p>
     */
    inline const Aws::String& GetIpamPoolAllocationId() const{ return m_ipamPoolAllocationId; }
    inline bool IpamPoolAllocationIdHasBeenSet() const { return m_ipamPoolAllocationIdHasBeenSet; }
    inline void SetIpamPoolAllocationId(const Aws::String& value) { m_ipamPoolAllocationIdHasBeenSet = true; m_ipamPoolAllocationId = value; }
    inline void SetIpamPoolAllocationId(Aws::String&& value) { m_ipamPoolAllocationIdHasBeenSet = true; m_ipamPoolAllocationId = std::move(value); }
    inline void SetIpamPoolAllocationId(const char* value) { m_ipamPoolAllocationIdHasBeenSet = true; m_ipamPoolAllocationId.assign(value); }
    inline IpamPoolAllocation& WithIpamPoolAllocationId(const Aws::String& value) { SetIpamPoolAllocationId(value); return *this;}
    inline IpamPoolAllocation& WithIpamPoolAllocationId(Aws::String&& value) { SetIpamPoolAllocationId(std::move(value)); return *this;}
    inline IpamPoolAllocation& WithIpamPoolAllocationId(const char* value) { SetIpamPoolAllocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the pool allocation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline IpamPoolAllocation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline IpamPoolAllocation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline IpamPoolAllocation& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline IpamPoolAllocation& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline IpamPoolAllocation& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline IpamPoolAllocation& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource.</p>
     */
    inline const IpamPoolAllocationResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const IpamPoolAllocationResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(IpamPoolAllocationResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline IpamPoolAllocation& WithResourceType(const IpamPoolAllocationResourceType& value) { SetResourceType(value); return *this;}
    inline IpamPoolAllocation& WithResourceType(IpamPoolAllocationResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline const Aws::String& GetResourceRegion() const{ return m_resourceRegion; }
    inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }
    inline void SetResourceRegion(const Aws::String& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = value; }
    inline void SetResourceRegion(Aws::String&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = std::move(value); }
    inline void SetResourceRegion(const char* value) { m_resourceRegionHasBeenSet = true; m_resourceRegion.assign(value); }
    inline IpamPoolAllocation& WithResourceRegion(const Aws::String& value) { SetResourceRegion(value); return *this;}
    inline IpamPoolAllocation& WithResourceRegion(Aws::String&& value) { SetResourceRegion(std::move(value)); return *this;}
    inline IpamPoolAllocation& WithResourceRegion(const char* value) { SetResourceRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the resource.</p>
     */
    inline const Aws::String& GetResourceOwner() const{ return m_resourceOwner; }
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }
    inline void SetResourceOwner(const Aws::String& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }
    inline void SetResourceOwner(Aws::String&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::move(value); }
    inline void SetResourceOwner(const char* value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner.assign(value); }
    inline IpamPoolAllocation& WithResourceOwner(const Aws::String& value) { SetResourceOwner(value); return *this;}
    inline IpamPoolAllocation& WithResourceOwner(Aws::String&& value) { SetResourceOwner(std::move(value)); return *this;}
    inline IpamPoolAllocation& WithResourceOwner(const char* value) { SetResourceOwner(value); return *this;}
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

    IpamPoolAllocationResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceRegion;
    bool m_resourceRegionHasBeenSet = false;

    Aws::String m_resourceOwner;
    bool m_resourceOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
