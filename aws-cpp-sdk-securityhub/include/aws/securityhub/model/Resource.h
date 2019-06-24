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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/Partition.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/ResourceDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A resource related to a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Resource">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API Resource
  {
  public:
    Resource();
    Resource(Aws::Utils::Json::JsonView jsonValue);
    Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the resource that details are provided for.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the resource that details are provided for.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the resource that details are provided for.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the resource that details are provided for.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the resource that details are provided for.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the resource that details are provided for.</p>
     */
    inline Resource& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the resource that details are provided for.</p>
     */
    inline Resource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the resource that details are provided for.</p>
     */
    inline Resource& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline Resource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline Resource& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The canonical AWS partition name that the Region is assigned to.</p>
     */
    inline const Partition& GetPartition() const{ return m_partition; }

    /**
     * <p>The canonical AWS partition name that the Region is assigned to.</p>
     */
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }

    /**
     * <p>The canonical AWS partition name that the Region is assigned to.</p>
     */
    inline void SetPartition(const Partition& value) { m_partitionHasBeenSet = true; m_partition = value; }

    /**
     * <p>The canonical AWS partition name that the Region is assigned to.</p>
     */
    inline void SetPartition(Partition&& value) { m_partitionHasBeenSet = true; m_partition = std::move(value); }

    /**
     * <p>The canonical AWS partition name that the Region is assigned to.</p>
     */
    inline Resource& WithPartition(const Partition& value) { SetPartition(value); return *this;}

    /**
     * <p>The canonical AWS partition name that the Region is assigned to.</p>
     */
    inline Resource& WithPartition(Partition&& value) { SetPartition(std::move(value)); return *this;}


    /**
     * <p>The canonical AWS external Region name where this resource is located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The canonical AWS external Region name where this resource is located.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The canonical AWS external Region name where this resource is located.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The canonical AWS external Region name where this resource is located.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The canonical AWS external Region name where this resource is located.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The canonical AWS external Region name where this resource is located.</p>
     */
    inline Resource& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The canonical AWS external Region name where this resource is located.</p>
     */
    inline Resource& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The canonical AWS external Region name where this resource is located.</p>
     */
    inline Resource& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>A list of AWS tags associated with a resource at the time the finding was
     * processed.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of AWS tags associated with a resource at the time the finding was
     * processed.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of AWS tags associated with a resource at the time the finding was
     * processed.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of AWS tags associated with a resource at the time the finding was
     * processed.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of AWS tags associated with a resource at the time the finding was
     * processed.</p>
     */
    inline Resource& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of AWS tags associated with a resource at the time the finding was
     * processed.</p>
     */
    inline Resource& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of AWS tags associated with a resource at the time the finding was
     * processed.</p>
     */
    inline Resource& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of AWS tags associated with a resource at the time the finding was
     * processed.</p>
     */
    inline Resource& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of AWS tags associated with a resource at the time the finding was
     * processed.</p>
     */
    inline Resource& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of AWS tags associated with a resource at the time the finding was
     * processed.</p>
     */
    inline Resource& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of AWS tags associated with a resource at the time the finding was
     * processed.</p>
     */
    inline Resource& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of AWS tags associated with a resource at the time the finding was
     * processed.</p>
     */
    inline Resource& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of AWS tags associated with a resource at the time the finding was
     * processed.</p>
     */
    inline Resource& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Additional details about the resource related to a finding.</p>
     */
    inline const ResourceDetails& GetDetails() const{ return m_details; }

    /**
     * <p>Additional details about the resource related to a finding.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>Additional details about the resource related to a finding.</p>
     */
    inline void SetDetails(const ResourceDetails& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>Additional details about the resource related to a finding.</p>
     */
    inline void SetDetails(ResourceDetails&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>Additional details about the resource related to a finding.</p>
     */
    inline Resource& WithDetails(const ResourceDetails& value) { SetDetails(value); return *this;}

    /**
     * <p>Additional details about the resource related to a finding.</p>
     */
    inline Resource& WithDetails(ResourceDetails&& value) { SetDetails(std::move(value)); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Partition m_partition;
    bool m_partitionHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    ResourceDetails m_details;
    bool m_detailsHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
