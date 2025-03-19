/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/IncludeOptions.h>
#include <aws/customer-profiles/model/Group.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Contains all groups of the segment definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/SegmentGroup">AWS
   * API Reference</a></p>
   */
  class SegmentGroup
  {
  public:
    AWS_CUSTOMERPROFILES_API SegmentGroup() = default;
    AWS_CUSTOMERPROFILES_API SegmentGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API SegmentGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Holds the list of groups within the segment definition.</p>
     */
    inline const Aws::Vector<Group>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<Group>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<Group>>
    SegmentGroup& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = Group>
    SegmentGroup& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines whether to include or exclude the profiles that fit the segment
     * criteria.</p>
     */
    inline IncludeOptions GetInclude() const { return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    inline void SetInclude(IncludeOptions value) { m_includeHasBeenSet = true; m_include = value; }
    inline SegmentGroup& WithInclude(IncludeOptions value) { SetInclude(value); return *this;}
    ///@}
  private:

    Aws::Vector<Group> m_groups;
    bool m_groupsHasBeenSet = false;

    IncludeOptions m_include{IncludeOptions::NOT_SET};
    bool m_includeHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
