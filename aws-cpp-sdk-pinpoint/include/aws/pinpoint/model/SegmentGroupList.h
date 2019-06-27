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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/Include.h>
#include <aws/pinpoint/model/SegmentGroup.h>
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
   * <p>Specifies the settings that define the relationships between segment groups
   * for a segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentGroupList">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SegmentGroupList
  {
  public:
    SegmentGroupList();
    SegmentGroupList(Aws::Utils::Json::JsonView jsonValue);
    SegmentGroupList& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array that defines the set of segment criteria to evaluate when handling
     * segment groups for the segment.</p>
     */
    inline const Aws::Vector<SegmentGroup>& GetGroups() const{ return m_groups; }

    /**
     * <p>An array that defines the set of segment criteria to evaluate when handling
     * segment groups for the segment.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>An array that defines the set of segment criteria to evaluate when handling
     * segment groups for the segment.</p>
     */
    inline void SetGroups(const Aws::Vector<SegmentGroup>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>An array that defines the set of segment criteria to evaluate when handling
     * segment groups for the segment.</p>
     */
    inline void SetGroups(Aws::Vector<SegmentGroup>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>An array that defines the set of segment criteria to evaluate when handling
     * segment groups for the segment.</p>
     */
    inline SegmentGroupList& WithGroups(const Aws::Vector<SegmentGroup>& value) { SetGroups(value); return *this;}

    /**
     * <p>An array that defines the set of segment criteria to evaluate when handling
     * segment groups for the segment.</p>
     */
    inline SegmentGroupList& WithGroups(Aws::Vector<SegmentGroup>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>An array that defines the set of segment criteria to evaluate when handling
     * segment groups for the segment.</p>
     */
    inline SegmentGroupList& AddGroups(const SegmentGroup& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>An array that defines the set of segment criteria to evaluate when handling
     * segment groups for the segment.</p>
     */
    inline SegmentGroupList& AddGroups(SegmentGroup&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies how to handle multiple segment groups for the segment. For example,
     * if the segment includes three segment groups, whether the resulting segment
     * includes endpoints that match all, any, or none of the segment groups.</p>
     */
    inline const Include& GetInclude() const{ return m_include; }

    /**
     * <p>Specifies how to handle multiple segment groups for the segment. For example,
     * if the segment includes three segment groups, whether the resulting segment
     * includes endpoints that match all, any, or none of the segment groups.</p>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p>Specifies how to handle multiple segment groups for the segment. For example,
     * if the segment includes three segment groups, whether the resulting segment
     * includes endpoints that match all, any, or none of the segment groups.</p>
     */
    inline void SetInclude(const Include& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p>Specifies how to handle multiple segment groups for the segment. For example,
     * if the segment includes three segment groups, whether the resulting segment
     * includes endpoints that match all, any, or none of the segment groups.</p>
     */
    inline void SetInclude(Include&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p>Specifies how to handle multiple segment groups for the segment. For example,
     * if the segment includes three segment groups, whether the resulting segment
     * includes endpoints that match all, any, or none of the segment groups.</p>
     */
    inline SegmentGroupList& WithInclude(const Include& value) { SetInclude(value); return *this;}

    /**
     * <p>Specifies how to handle multiple segment groups for the segment. For example,
     * if the segment includes three segment groups, whether the resulting segment
     * includes endpoints that match all, any, or none of the segment groups.</p>
     */
    inline SegmentGroupList& WithInclude(Include&& value) { SetInclude(std::move(value)); return *this;}

  private:

    Aws::Vector<SegmentGroup> m_groups;
    bool m_groupsHasBeenSet;

    Include m_include;
    bool m_includeHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
