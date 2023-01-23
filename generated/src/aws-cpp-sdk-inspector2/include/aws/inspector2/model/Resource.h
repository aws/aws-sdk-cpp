/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ResourceDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/inspector2/model/ResourceType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details about the resource involved in a finding.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_INSPECTOR2_API Resource();
    AWS_INSPECTOR2_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains details about the resource involved in a finding.</p>
     */
    inline const ResourceDetails& GetDetails() const{ return m_details; }

    /**
     * <p>An object that contains details about the resource involved in a finding.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>An object that contains details about the resource involved in a finding.</p>
     */
    inline void SetDetails(const ResourceDetails& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>An object that contains details about the resource involved in a finding.</p>
     */
    inline void SetDetails(ResourceDetails&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>An object that contains details about the resource involved in a finding.</p>
     */
    inline Resource& WithDetails(const ResourceDetails& value) { SetDetails(value); return *this;}

    /**
     * <p>An object that contains details about the resource involved in a finding.</p>
     */
    inline Resource& WithDetails(ResourceDetails&& value) { SetDetails(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline Resource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline Resource& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The partition of the resource.</p>
     */
    inline const Aws::String& GetPartition() const{ return m_partition; }

    /**
     * <p>The partition of the resource.</p>
     */
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }

    /**
     * <p>The partition of the resource.</p>
     */
    inline void SetPartition(const Aws::String& value) { m_partitionHasBeenSet = true; m_partition = value; }

    /**
     * <p>The partition of the resource.</p>
     */
    inline void SetPartition(Aws::String&& value) { m_partitionHasBeenSet = true; m_partition = std::move(value); }

    /**
     * <p>The partition of the resource.</p>
     */
    inline void SetPartition(const char* value) { m_partitionHasBeenSet = true; m_partition.assign(value); }

    /**
     * <p>The partition of the resource.</p>
     */
    inline Resource& WithPartition(const Aws::String& value) { SetPartition(value); return *this;}

    /**
     * <p>The partition of the resource.</p>
     */
    inline Resource& WithPartition(Aws::String&& value) { SetPartition(std::move(value)); return *this;}

    /**
     * <p>The partition of the resource.</p>
     */
    inline Resource& WithPartition(const char* value) { SetPartition(value); return *this;}


    /**
     * <p>The Amazon Web Services Region the impacted resource is located in.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region the impacted resource is located in.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region the impacted resource is located in.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region the impacted resource is located in.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region the impacted resource is located in.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region the impacted resource is located in.</p>
     */
    inline Resource& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region the impacted resource is located in.</p>
     */
    inline Resource& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region the impacted resource is located in.</p>
     */
    inline Resource& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The tags attached to the resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of resource.</p>
     */
    inline const ResourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of resource.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetType(const ResourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetType(ResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of resource.</p>
     */
    inline Resource& WithType(const ResourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline Resource& WithType(ResourceType&& value) { SetType(std::move(value)); return *this;}

  private:

    ResourceDetails m_details;
    bool m_detailsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_partition;
    bool m_partitionHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ResourceType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
