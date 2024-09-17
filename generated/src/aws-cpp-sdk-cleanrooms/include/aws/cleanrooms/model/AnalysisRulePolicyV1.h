/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisRuleList.h>
#include <aws/cleanrooms/model/AnalysisRuleAggregation.h>
#include <aws/cleanrooms/model/AnalysisRuleCustom.h>
#include <aws/cleanrooms/model/AnalysisRuleIdMappingTable.h>
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
   * <p>Controls on the query specifications that can be run on configured
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisRulePolicyV1">AWS
   * API Reference</a></p>
   */
  class AnalysisRulePolicyV1
  {
  public:
    AWS_CLEANROOMS_API AnalysisRulePolicyV1();
    AWS_CLEANROOMS_API AnalysisRulePolicyV1(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisRulePolicyV1& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Analysis rule type that enables only list queries on a configured table.</p>
     */
    inline const AnalysisRuleList& GetList() const{ return m_list; }
    inline bool ListHasBeenSet() const { return m_listHasBeenSet; }
    inline void SetList(const AnalysisRuleList& value) { m_listHasBeenSet = true; m_list = value; }
    inline void SetList(AnalysisRuleList&& value) { m_listHasBeenSet = true; m_list = std::move(value); }
    inline AnalysisRulePolicyV1& WithList(const AnalysisRuleList& value) { SetList(value); return *this;}
    inline AnalysisRulePolicyV1& WithList(AnalysisRuleList&& value) { SetList(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Analysis rule type that enables only aggregation queries on a configured
     * table.</p>
     */
    inline const AnalysisRuleAggregation& GetAggregation() const{ return m_aggregation; }
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
    inline void SetAggregation(const AnalysisRuleAggregation& value) { m_aggregationHasBeenSet = true; m_aggregation = value; }
    inline void SetAggregation(AnalysisRuleAggregation&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::move(value); }
    inline AnalysisRulePolicyV1& WithAggregation(const AnalysisRuleAggregation& value) { SetAggregation(value); return *this;}
    inline AnalysisRulePolicyV1& WithAggregation(AnalysisRuleAggregation&& value) { SetAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Analysis rule type that enables custom SQL queries on a configured table.</p>
     */
    inline const AnalysisRuleCustom& GetCustom() const{ return m_custom; }
    inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }
    inline void SetCustom(const AnalysisRuleCustom& value) { m_customHasBeenSet = true; m_custom = value; }
    inline void SetCustom(AnalysisRuleCustom&& value) { m_customHasBeenSet = true; m_custom = std::move(value); }
    inline AnalysisRulePolicyV1& WithCustom(const AnalysisRuleCustom& value) { SetCustom(value); return *this;}
    inline AnalysisRulePolicyV1& WithCustom(AnalysisRuleCustom&& value) { SetCustom(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID mapping table.</p>
     */
    inline const AnalysisRuleIdMappingTable& GetIdMappingTable() const{ return m_idMappingTable; }
    inline bool IdMappingTableHasBeenSet() const { return m_idMappingTableHasBeenSet; }
    inline void SetIdMappingTable(const AnalysisRuleIdMappingTable& value) { m_idMappingTableHasBeenSet = true; m_idMappingTable = value; }
    inline void SetIdMappingTable(AnalysisRuleIdMappingTable&& value) { m_idMappingTableHasBeenSet = true; m_idMappingTable = std::move(value); }
    inline AnalysisRulePolicyV1& WithIdMappingTable(const AnalysisRuleIdMappingTable& value) { SetIdMappingTable(value); return *this;}
    inline AnalysisRulePolicyV1& WithIdMappingTable(AnalysisRuleIdMappingTable&& value) { SetIdMappingTable(std::move(value)); return *this;}
    ///@}
  private:

    AnalysisRuleList m_list;
    bool m_listHasBeenSet = false;

    AnalysisRuleAggregation m_aggregation;
    bool m_aggregationHasBeenSet = false;

    AnalysisRuleCustom m_custom;
    bool m_customHasBeenSet = false;

    AnalysisRuleIdMappingTable m_idMappingTable;
    bool m_idMappingTableHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
