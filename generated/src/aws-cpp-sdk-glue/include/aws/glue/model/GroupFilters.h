/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/FilterLogicalOperator.h>
#include <aws/glue/model/FilterExpression.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a group of filters with a logical operator that determines how the
   * filters are combined to evaluate routing conditions.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GroupFilters">AWS
   * API Reference</a></p>
   */
  class GroupFilters
  {
  public:
    AWS_GLUE_API GroupFilters() = default;
    AWS_GLUE_API GroupFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API GroupFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter group.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    GroupFilters& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of filter expressions that define the conditions for this group.</p>
     */
    inline const Aws::Vector<FilterExpression>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<FilterExpression>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<FilterExpression>>
    GroupFilters& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = FilterExpression>
    GroupFilters& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The logical operator used to combine the filters in this group. Determines
     * whether all filters must match (AND) or any filter can match (OR).</p>
     */
    inline FilterLogicalOperator GetLogicalOperator() const { return m_logicalOperator; }
    inline bool LogicalOperatorHasBeenSet() const { return m_logicalOperatorHasBeenSet; }
    inline void SetLogicalOperator(FilterLogicalOperator value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = value; }
    inline GroupFilters& WithLogicalOperator(FilterLogicalOperator value) { SetLogicalOperator(value); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::Vector<FilterExpression> m_filters;
    bool m_filtersHasBeenSet = false;

    FilterLogicalOperator m_logicalOperator{FilterLogicalOperator::NOT_SET};
    bool m_logicalOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
