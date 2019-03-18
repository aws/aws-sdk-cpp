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
   * Segment definition.<p><h3>See Also:</h3>   <a
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
     * The segment dimensions attributes.
     */
    inline const SegmentDimensions& GetDimensions() const{ return m_dimensions; }

    /**
     * The segment dimensions attributes.
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * The segment dimensions attributes.
     */
    inline void SetDimensions(const SegmentDimensions& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * The segment dimensions attributes.
     */
    inline void SetDimensions(SegmentDimensions&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * The segment dimensions attributes.
     */
    inline WriteSegmentRequest& WithDimensions(const SegmentDimensions& value) { SetDimensions(value); return *this;}

    /**
     * The segment dimensions attributes.
     */
    inline WriteSegmentRequest& WithDimensions(SegmentDimensions&& value) { SetDimensions(std::move(value)); return *this;}


    /**
     * The name of segment
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of segment
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of segment
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of segment
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of segment
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of segment
     */
    inline WriteSegmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of segment
     */
    inline WriteSegmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of segment
     */
    inline WriteSegmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * A segment group, which consists of zero or more source segments, plus dimensions
     * that are applied to those source segments. Your request can only include one
     * segment group. Your request can include either a SegmentGroups object or a
     * Dimensions object, but not both.
     */
    inline const SegmentGroupList& GetSegmentGroups() const{ return m_segmentGroups; }

    /**
     * A segment group, which consists of zero or more source segments, plus dimensions
     * that are applied to those source segments. Your request can only include one
     * segment group. Your request can include either a SegmentGroups object or a
     * Dimensions object, but not both.
     */
    inline bool SegmentGroupsHasBeenSet() const { return m_segmentGroupsHasBeenSet; }

    /**
     * A segment group, which consists of zero or more source segments, plus dimensions
     * that are applied to those source segments. Your request can only include one
     * segment group. Your request can include either a SegmentGroups object or a
     * Dimensions object, but not both.
     */
    inline void SetSegmentGroups(const SegmentGroupList& value) { m_segmentGroupsHasBeenSet = true; m_segmentGroups = value; }

    /**
     * A segment group, which consists of zero or more source segments, plus dimensions
     * that are applied to those source segments. Your request can only include one
     * segment group. Your request can include either a SegmentGroups object or a
     * Dimensions object, but not both.
     */
    inline void SetSegmentGroups(SegmentGroupList&& value) { m_segmentGroupsHasBeenSet = true; m_segmentGroups = std::move(value); }

    /**
     * A segment group, which consists of zero or more source segments, plus dimensions
     * that are applied to those source segments. Your request can only include one
     * segment group. Your request can include either a SegmentGroups object or a
     * Dimensions object, but not both.
     */
    inline WriteSegmentRequest& WithSegmentGroups(const SegmentGroupList& value) { SetSegmentGroups(value); return *this;}

    /**
     * A segment group, which consists of zero or more source segments, plus dimensions
     * that are applied to those source segments. Your request can only include one
     * segment group. Your request can include either a SegmentGroups object or a
     * Dimensions object, but not both.
     */
    inline WriteSegmentRequest& WithSegmentGroups(SegmentGroupList&& value) { SetSegmentGroups(std::move(value)); return *this;}


    /**
     * The Tags for the segments.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * The Tags for the segments.
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * The Tags for the segments.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * The Tags for the segments.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * The Tags for the segments.
     */
    inline WriteSegmentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * The Tags for the segments.
     */
    inline WriteSegmentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * The Tags for the segments.
     */
    inline WriteSegmentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * The Tags for the segments.
     */
    inline WriteSegmentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The Tags for the segments.
     */
    inline WriteSegmentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The Tags for the segments.
     */
    inline WriteSegmentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * The Tags for the segments.
     */
    inline WriteSegmentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The Tags for the segments.
     */
    inline WriteSegmentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The Tags for the segments.
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
