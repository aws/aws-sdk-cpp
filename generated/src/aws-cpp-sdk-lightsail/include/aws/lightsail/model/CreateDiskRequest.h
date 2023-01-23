/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Tag.h>
#include <aws/lightsail/model/AddOnRequest.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateDiskRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateDiskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDisk"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline const Aws::String& GetDiskName() const{ return m_diskName; }

    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline bool DiskNameHasBeenSet() const { return m_diskNameHasBeenSet; }

    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline void SetDiskName(const Aws::String& value) { m_diskNameHasBeenSet = true; m_diskName = value; }

    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline void SetDiskName(Aws::String&& value) { m_diskNameHasBeenSet = true; m_diskName = std::move(value); }

    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline void SetDiskName(const char* value) { m_diskNameHasBeenSet = true; m_diskName.assign(value); }

    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline CreateDiskRequest& WithDiskName(const Aws::String& value) { SetDiskName(value); return *this;}

    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline CreateDiskRequest& WithDiskName(Aws::String&& value) { SetDiskName(std::move(value)); return *this;}

    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline CreateDiskRequest& WithDiskName(const char* value) { SetDiskName(value); return *this;}


    /**
     * <p>The Availability Zone where you want to create the disk (e.g.,
     * <code>us-east-2a</code>). Use the same Availability Zone as the Lightsail
     * instance to which you want to attach the disk.</p> <p>Use the <code>get
     * regions</code> operation to list the Availability Zones where Lightsail is
     * currently available.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone where you want to create the disk (e.g.,
     * <code>us-east-2a</code>). Use the same Availability Zone as the Lightsail
     * instance to which you want to attach the disk.</p> <p>Use the <code>get
     * regions</code> operation to list the Availability Zones where Lightsail is
     * currently available.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone where you want to create the disk (e.g.,
     * <code>us-east-2a</code>). Use the same Availability Zone as the Lightsail
     * instance to which you want to attach the disk.</p> <p>Use the <code>get
     * regions</code> operation to list the Availability Zones where Lightsail is
     * currently available.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone where you want to create the disk (e.g.,
     * <code>us-east-2a</code>). Use the same Availability Zone as the Lightsail
     * instance to which you want to attach the disk.</p> <p>Use the <code>get
     * regions</code> operation to list the Availability Zones where Lightsail is
     * currently available.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone where you want to create the disk (e.g.,
     * <code>us-east-2a</code>). Use the same Availability Zone as the Lightsail
     * instance to which you want to attach the disk.</p> <p>Use the <code>get
     * regions</code> operation to list the Availability Zones where Lightsail is
     * currently available.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone where you want to create the disk (e.g.,
     * <code>us-east-2a</code>). Use the same Availability Zone as the Lightsail
     * instance to which you want to attach the disk.</p> <p>Use the <code>get
     * regions</code> operation to list the Availability Zones where Lightsail is
     * currently available.</p>
     */
    inline CreateDiskRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where you want to create the disk (e.g.,
     * <code>us-east-2a</code>). Use the same Availability Zone as the Lightsail
     * instance to which you want to attach the disk.</p> <p>Use the <code>get
     * regions</code> operation to list the Availability Zones where Lightsail is
     * currently available.</p>
     */
    inline CreateDiskRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone where you want to create the disk (e.g.,
     * <code>us-east-2a</code>). Use the same Availability Zone as the Lightsail
     * instance to which you want to attach the disk.</p> <p>Use the <code>get
     * regions</code> operation to list the Availability Zones where Lightsail is
     * currently available.</p>
     */
    inline CreateDiskRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The size of the disk in GB (e.g., <code>32</code>).</p>
     */
    inline int GetSizeInGb() const{ return m_sizeInGb; }

    /**
     * <p>The size of the disk in GB (e.g., <code>32</code>).</p>
     */
    inline bool SizeInGbHasBeenSet() const { return m_sizeInGbHasBeenSet; }

    /**
     * <p>The size of the disk in GB (e.g., <code>32</code>).</p>
     */
    inline void SetSizeInGb(int value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }

    /**
     * <p>The size of the disk in GB (e.g., <code>32</code>).</p>
     */
    inline CreateDiskRequest& WithSizeInGb(int value) { SetSizeInGb(value); return *this;}


    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateDiskRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateDiskRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateDiskRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateDiskRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of objects that represent the add-ons to enable for the new
     * disk.</p>
     */
    inline const Aws::Vector<AddOnRequest>& GetAddOns() const{ return m_addOns; }

    /**
     * <p>An array of objects that represent the add-ons to enable for the new
     * disk.</p>
     */
    inline bool AddOnsHasBeenSet() const { return m_addOnsHasBeenSet; }

    /**
     * <p>An array of objects that represent the add-ons to enable for the new
     * disk.</p>
     */
    inline void SetAddOns(const Aws::Vector<AddOnRequest>& value) { m_addOnsHasBeenSet = true; m_addOns = value; }

    /**
     * <p>An array of objects that represent the add-ons to enable for the new
     * disk.</p>
     */
    inline void SetAddOns(Aws::Vector<AddOnRequest>&& value) { m_addOnsHasBeenSet = true; m_addOns = std::move(value); }

    /**
     * <p>An array of objects that represent the add-ons to enable for the new
     * disk.</p>
     */
    inline CreateDiskRequest& WithAddOns(const Aws::Vector<AddOnRequest>& value) { SetAddOns(value); return *this;}

    /**
     * <p>An array of objects that represent the add-ons to enable for the new
     * disk.</p>
     */
    inline CreateDiskRequest& WithAddOns(Aws::Vector<AddOnRequest>&& value) { SetAddOns(std::move(value)); return *this;}

    /**
     * <p>An array of objects that represent the add-ons to enable for the new
     * disk.</p>
     */
    inline CreateDiskRequest& AddAddOns(const AddOnRequest& value) { m_addOnsHasBeenSet = true; m_addOns.push_back(value); return *this; }

    /**
     * <p>An array of objects that represent the add-ons to enable for the new
     * disk.</p>
     */
    inline CreateDiskRequest& AddAddOns(AddOnRequest&& value) { m_addOnsHasBeenSet = true; m_addOns.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_diskName;
    bool m_diskNameHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    int m_sizeInGb;
    bool m_sizeInGbHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<AddOnRequest> m_addOns;
    bool m_addOnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
