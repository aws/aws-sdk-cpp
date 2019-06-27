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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SegmentDimensions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/SegmentGroupList.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the configuration, dimension, and other settings for a segment. A
   * WriteSegmentRequest object can include a Dimensions object or a SegmentGroups
   * object, but not both.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/WriteSegmentRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API WriteSegmentRequest
  {
  public:
    WriteSegmentRequest();
    WriteSegmentRequest(Aws::Utils::Json::JsonView jsonValue);
    WriteSegmentRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The criteria that define the dimensions for the segment.</p>
     */
    inline const SegmentDimensions& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The criteria that define the dimensions for the segment.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The criteria that define the dimensions for the segment.</p>
     */
    inline void SetDimensions(const SegmentDimensions& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The criteria that define the dimensions for the segment.</p>
     */
    inline void SetDimensions(SegmentDimensions&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The criteria that define the dimensions for the segment.</p>
     */
    inline WriteSegmentRequest& WithDimensions(const SegmentDimensions& value) { SetDimensions(value); return *this;}

    /**
     * <p>The criteria that define the dimensions for the segment.</p>
     */
    inline WriteSegmentRequest& WithDimensions(SegmentDimensions&& value) { SetDimensions(std::move(value)); return *this;}


    /**
     * <p>The name of the segment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the segment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the segment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the segment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the segment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the segment.</p>
     */
    inline WriteSegmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the segment.</p>
     */
    inline WriteSegmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the segment.</p>
     */
    inline WriteSegmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The segment group to use and the dimensions to apply to the group's base
     * segments in order to build the segment. A segment group can consist of zero or
     * more base segments. Your request can include only one segment group.</p>
     */
    inline const SegmentGroupList& GetSegmentGroups() const{ return m_segmentGroups; }

    /**
     * <p>The segment group to use and the dimensions to apply to the group's base
     * segments in order to build the segment. A segment group can consist of zero or
     * more base segments. Your request can include only one segment group.</p>
     */
    inline bool SegmentGroupsHasBeenSet() const { return m_segmentGroupsHasBeenSet; }

    /**
     * <p>The segment group to use and the dimensions to apply to the group's base
     * segments in order to build the segment. A segment group can consist of zero or
     * more base segments. Your request can include only one segment group.</p>
     */
    inline void SetSegmentGroups(const SegmentGroupList& value) { m_segmentGroupsHasBeenSet = true; m_segmentGroups = value; }

    /**
     * <p>The segment group to use and the dimensions to apply to the group's base
     * segments in order to build the segment. A segment group can consist of zero or
     * more base segments. Your request can include only one segment group.</p>
     */
    inline void SetSegmentGroups(SegmentGroupList&& value) { m_segmentGroupsHasBeenSet = true; m_segmentGroups = std::move(value); }

    /**
     * <p>The segment group to use and the dimensions to apply to the group's base
     * segments in order to build the segment. A segment group can consist of zero or
     * more base segments. Your request can include only one segment group.</p>
     */
    inline WriteSegmentRequest& WithSegmentGroups(const SegmentGroupList& value) { SetSegmentGroups(value); return *this;}

    /**
     * <p>The segment group to use and the dimensions to apply to the group's base
     * segments in order to build the segment. A segment group can consist of zero or
     * more base segments. Your request can include only one segment group.</p>
     */
    inline WriteSegmentRequest& WithSegmentGroups(SegmentGroupList&& value) { SetSegmentGroups(std::move(value)); return *this;}


    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the segment. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the segment. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the segment. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the segment. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the segment. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteSegmentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the segment. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteSegmentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the segment. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteSegmentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the segment. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteSegmentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the segment. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteSegmentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the segment. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteSegmentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the segment. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteSegmentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the segment. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteSegmentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the segment. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteSegmentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    SegmentDimensions m_dimensions;
    bool m_dimensionsHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    SegmentGroupList m_segmentGroups;
    bool m_segmentGroupsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
