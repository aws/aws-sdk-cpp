/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/Include.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/FilterGroup.h>
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
   * <p>Defines how to filter the objects coming in for calculated
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_CUSTOMERPROFILES_API Filter() = default;
    AWS_CUSTOMERPROFILES_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Define whether to include or exclude objects for Calculated Attributed
     * calculation that fit the filter groups criteria.</p>
     */
    inline Include GetInclude() const { return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    inline void SetInclude(Include value) { m_includeHasBeenSet = true; m_include = value; }
    inline Filter& WithInclude(Include value) { SetInclude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Holds the list of Filter groups within the Filter definition.</p>
     */
    inline const Aws::Vector<FilterGroup>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<FilterGroup>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<FilterGroup>>
    Filter& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = FilterGroup>
    Filter& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}
  private:

    Include m_include{Include::NOT_SET};
    bool m_includeHasBeenSet = false;

    Aws::Vector<FilterGroup> m_groups;
    bool m_groupsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
