/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpamPoolSourceResourceType.h>
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
   * <p>The resource used to provision CIDRs to a resource planning
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPoolSourceResourceRequest">AWS
   * API Reference</a></p>
   */
  class IpamPoolSourceResourceRequest
  {
  public:
    AWS_EC2_API IpamPoolSourceResourceRequest();
    AWS_EC2_API IpamPoolSourceResourceRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamPoolSourceResourceRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The source resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The source resource ID.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The source resource ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The source resource ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The source resource ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The source resource ID.</p>
     */
    inline IpamPoolSourceResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The source resource ID.</p>
     */
    inline IpamPoolSourceResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The source resource ID.</p>
     */
    inline IpamPoolSourceResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The source resource type.</p>
     */
    inline const IpamPoolSourceResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The source resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The source resource type.</p>
     */
    inline void SetResourceType(const IpamPoolSourceResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The source resource type.</p>
     */
    inline void SetResourceType(IpamPoolSourceResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The source resource type.</p>
     */
    inline IpamPoolSourceResourceRequest& WithResourceType(const IpamPoolSourceResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The source resource type.</p>
     */
    inline IpamPoolSourceResourceRequest& WithResourceType(IpamPoolSourceResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The source resource Region.</p>
     */
    inline const Aws::String& GetResourceRegion() const{ return m_resourceRegion; }

    /**
     * <p>The source resource Region.</p>
     */
    inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }

    /**
     * <p>The source resource Region.</p>
     */
    inline void SetResourceRegion(const Aws::String& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = value; }

    /**
     * <p>The source resource Region.</p>
     */
    inline void SetResourceRegion(Aws::String&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = std::move(value); }

    /**
     * <p>The source resource Region.</p>
     */
    inline void SetResourceRegion(const char* value) { m_resourceRegionHasBeenSet = true; m_resourceRegion.assign(value); }

    /**
     * <p>The source resource Region.</p>
     */
    inline IpamPoolSourceResourceRequest& WithResourceRegion(const Aws::String& value) { SetResourceRegion(value); return *this;}

    /**
     * <p>The source resource Region.</p>
     */
    inline IpamPoolSourceResourceRequest& WithResourceRegion(Aws::String&& value) { SetResourceRegion(std::move(value)); return *this;}

    /**
     * <p>The source resource Region.</p>
     */
    inline IpamPoolSourceResourceRequest& WithResourceRegion(const char* value) { SetResourceRegion(value); return *this;}


    /**
     * <p>The source resource owner.</p>
     */
    inline const Aws::String& GetResourceOwner() const{ return m_resourceOwner; }

    /**
     * <p>The source resource owner.</p>
     */
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }

    /**
     * <p>The source resource owner.</p>
     */
    inline void SetResourceOwner(const Aws::String& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }

    /**
     * <p>The source resource owner.</p>
     */
    inline void SetResourceOwner(Aws::String&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::move(value); }

    /**
     * <p>The source resource owner.</p>
     */
    inline void SetResourceOwner(const char* value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner.assign(value); }

    /**
     * <p>The source resource owner.</p>
     */
    inline IpamPoolSourceResourceRequest& WithResourceOwner(const Aws::String& value) { SetResourceOwner(value); return *this;}

    /**
     * <p>The source resource owner.</p>
     */
    inline IpamPoolSourceResourceRequest& WithResourceOwner(Aws::String&& value) { SetResourceOwner(std::move(value)); return *this;}

    /**
     * <p>The source resource owner.</p>
     */
    inline IpamPoolSourceResourceRequest& WithResourceOwner(const char* value) { SetResourceOwner(value); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    IpamPoolSourceResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceRegion;
    bool m_resourceRegionHasBeenSet = false;

    Aws::String m_resourceOwner;
    bool m_resourceOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
