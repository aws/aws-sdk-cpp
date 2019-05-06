/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API CreateDiskRequest : public LightsailRequest
  {
  public:
    CreateDiskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDisk"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <code>us-east-2a</code>). Choose the same Availability Zone as the Lightsail
     * instance where you want to create the disk.</p> <p>Use the GetRegions operation
     * to list the Availability Zones where Lightsail is currently available.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone where you want to create the disk (e.g.,
     * <code>us-east-2a</code>). Choose the same Availability Zone as the Lightsail
     * instance where you want to create the disk.</p> <p>Use the GetRegions operation
     * to list the Availability Zones where Lightsail is currently available.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone where you want to create the disk (e.g.,
     * <code>us-east-2a</code>). Choose the same Availability Zone as the Lightsail
     * instance where you want to create the disk.</p> <p>Use the GetRegions operation
     * to list the Availability Zones where Lightsail is currently available.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone where you want to create the disk (e.g.,
     * <code>us-east-2a</code>). Choose the same Availability Zone as the Lightsail
     * instance where you want to create the disk.</p> <p>Use the GetRegions operation
     * to list the Availability Zones where Lightsail is currently available.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone where you want to create the disk (e.g.,
     * <code>us-east-2a</code>). Choose the same Availability Zone as the Lightsail
     * instance where you want to create the disk.</p> <p>Use the GetRegions operation
     * to list the Availability Zones where Lightsail is currently available.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone where you want to create the disk (e.g.,
     * <code>us-east-2a</code>). Choose the same Availability Zone as the Lightsail
     * instance where you want to create the disk.</p> <p>Use the GetRegions operation
     * to list the Availability Zones where Lightsail is currently available.</p>
     */
    inline CreateDiskRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where you want to create the disk (e.g.,
     * <code>us-east-2a</code>). Choose the same Availability Zone as the Lightsail
     * instance where you want to create the disk.</p> <p>Use the GetRegions operation
     * to list the Availability Zones where Lightsail is currently available.</p>
     */
    inline CreateDiskRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone where you want to create the disk (e.g.,
     * <code>us-east-2a</code>). Choose the same Availability Zone as the Lightsail
     * instance where you want to create the disk.</p> <p>Use the GetRegions operation
     * to list the Availability Zones where Lightsail is currently available.</p>
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
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateDiskRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateDiskRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateDiskRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateDiskRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_diskName;
    bool m_diskNameHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    int m_sizeInGb;
    bool m_sizeInGbHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
