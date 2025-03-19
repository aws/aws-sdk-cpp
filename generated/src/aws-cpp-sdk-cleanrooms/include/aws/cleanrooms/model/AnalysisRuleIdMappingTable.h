/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/QueryConstraint.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Defines details for the analysis rule ID mapping table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisRuleIdMappingTable">AWS
   * API Reference</a></p>
   */
  class AnalysisRuleIdMappingTable
  {
  public:
    AWS_CLEANROOMS_API AnalysisRuleIdMappingTable() = default;
    AWS_CLEANROOMS_API AnalysisRuleIdMappingTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisRuleIdMappingTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The columns that query runners are allowed to use in an INNER JOIN
     * statement.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJoinColumns() const { return m_joinColumns; }
    inline bool JoinColumnsHasBeenSet() const { return m_joinColumnsHasBeenSet; }
    template<typename JoinColumnsT = Aws::Vector<Aws::String>>
    void SetJoinColumns(JoinColumnsT&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = std::forward<JoinColumnsT>(value); }
    template<typename JoinColumnsT = Aws::Vector<Aws::String>>
    AnalysisRuleIdMappingTable& WithJoinColumns(JoinColumnsT&& value) { SetJoinColumns(std::forward<JoinColumnsT>(value)); return *this;}
    template<typename JoinColumnsT = Aws::String>
    AnalysisRuleIdMappingTable& AddJoinColumns(JoinColumnsT&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.emplace_back(std::forward<JoinColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The query constraints of the analysis rule ID mapping table.</p>
     */
    inline const Aws::Vector<QueryConstraint>& GetQueryConstraints() const { return m_queryConstraints; }
    inline bool QueryConstraintsHasBeenSet() const { return m_queryConstraintsHasBeenSet; }
    template<typename QueryConstraintsT = Aws::Vector<QueryConstraint>>
    void SetQueryConstraints(QueryConstraintsT&& value) { m_queryConstraintsHasBeenSet = true; m_queryConstraints = std::forward<QueryConstraintsT>(value); }
    template<typename QueryConstraintsT = Aws::Vector<QueryConstraint>>
    AnalysisRuleIdMappingTable& WithQueryConstraints(QueryConstraintsT&& value) { SetQueryConstraints(std::forward<QueryConstraintsT>(value)); return *this;}
    template<typename QueryConstraintsT = QueryConstraint>
    AnalysisRuleIdMappingTable& AddQueryConstraints(QueryConstraintsT&& value) { m_queryConstraintsHasBeenSet = true; m_queryConstraints.emplace_back(std::forward<QueryConstraintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The columns that query runners are allowed to select, group by, or filter
     * by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDimensionColumns() const { return m_dimensionColumns; }
    inline bool DimensionColumnsHasBeenSet() const { return m_dimensionColumnsHasBeenSet; }
    template<typename DimensionColumnsT = Aws::Vector<Aws::String>>
    void SetDimensionColumns(DimensionColumnsT&& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns = std::forward<DimensionColumnsT>(value); }
    template<typename DimensionColumnsT = Aws::Vector<Aws::String>>
    AnalysisRuleIdMappingTable& WithDimensionColumns(DimensionColumnsT&& value) { SetDimensionColumns(std::forward<DimensionColumnsT>(value)); return *this;}
    template<typename DimensionColumnsT = Aws::String>
    AnalysisRuleIdMappingTable& AddDimensionColumns(DimensionColumnsT&& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns.emplace_back(std::forward<DimensionColumnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_joinColumns;
    bool m_joinColumnsHasBeenSet = false;

    Aws::Vector<QueryConstraint> m_queryConstraints;
    bool m_queryConstraintsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dimensionColumns;
    bool m_dimensionColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
