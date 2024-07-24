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
    AWS_CLEANROOMS_API AnalysisRuleIdMappingTable();
    AWS_CLEANROOMS_API AnalysisRuleIdMappingTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisRuleIdMappingTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The columns that query runners are allowed to use in an INNER JOIN
     * statement.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJoinColumns() const{ return m_joinColumns; }
    inline bool JoinColumnsHasBeenSet() const { return m_joinColumnsHasBeenSet; }
    inline void SetJoinColumns(const Aws::Vector<Aws::String>& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = value; }
    inline void SetJoinColumns(Aws::Vector<Aws::String>&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = std::move(value); }
    inline AnalysisRuleIdMappingTable& WithJoinColumns(const Aws::Vector<Aws::String>& value) { SetJoinColumns(value); return *this;}
    inline AnalysisRuleIdMappingTable& WithJoinColumns(Aws::Vector<Aws::String>&& value) { SetJoinColumns(std::move(value)); return *this;}
    inline AnalysisRuleIdMappingTable& AddJoinColumns(const Aws::String& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(value); return *this; }
    inline AnalysisRuleIdMappingTable& AddJoinColumns(Aws::String&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(std::move(value)); return *this; }
    inline AnalysisRuleIdMappingTable& AddJoinColumns(const char* value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The query constraints of the analysis rule ID mapping table.</p>
     */
    inline const Aws::Vector<QueryConstraint>& GetQueryConstraints() const{ return m_queryConstraints; }
    inline bool QueryConstraintsHasBeenSet() const { return m_queryConstraintsHasBeenSet; }
    inline void SetQueryConstraints(const Aws::Vector<QueryConstraint>& value) { m_queryConstraintsHasBeenSet = true; m_queryConstraints = value; }
    inline void SetQueryConstraints(Aws::Vector<QueryConstraint>&& value) { m_queryConstraintsHasBeenSet = true; m_queryConstraints = std::move(value); }
    inline AnalysisRuleIdMappingTable& WithQueryConstraints(const Aws::Vector<QueryConstraint>& value) { SetQueryConstraints(value); return *this;}
    inline AnalysisRuleIdMappingTable& WithQueryConstraints(Aws::Vector<QueryConstraint>&& value) { SetQueryConstraints(std::move(value)); return *this;}
    inline AnalysisRuleIdMappingTable& AddQueryConstraints(const QueryConstraint& value) { m_queryConstraintsHasBeenSet = true; m_queryConstraints.push_back(value); return *this; }
    inline AnalysisRuleIdMappingTable& AddQueryConstraints(QueryConstraint&& value) { m_queryConstraintsHasBeenSet = true; m_queryConstraints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The columns that query runners are allowed to select, group by, or filter
     * by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDimensionColumns() const{ return m_dimensionColumns; }
    inline bool DimensionColumnsHasBeenSet() const { return m_dimensionColumnsHasBeenSet; }
    inline void SetDimensionColumns(const Aws::Vector<Aws::String>& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns = value; }
    inline void SetDimensionColumns(Aws::Vector<Aws::String>&& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns = std::move(value); }
    inline AnalysisRuleIdMappingTable& WithDimensionColumns(const Aws::Vector<Aws::String>& value) { SetDimensionColumns(value); return *this;}
    inline AnalysisRuleIdMappingTable& WithDimensionColumns(Aws::Vector<Aws::String>&& value) { SetDimensionColumns(std::move(value)); return *this;}
    inline AnalysisRuleIdMappingTable& AddDimensionColumns(const Aws::String& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns.push_back(value); return *this; }
    inline AnalysisRuleIdMappingTable& AddDimensionColumns(Aws::String&& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns.push_back(std::move(value)); return *this; }
    inline AnalysisRuleIdMappingTable& AddDimensionColumns(const char* value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns.push_back(value); return *this; }
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
