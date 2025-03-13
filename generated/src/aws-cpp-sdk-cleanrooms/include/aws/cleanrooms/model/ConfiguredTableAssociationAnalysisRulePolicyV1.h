/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ConfiguredTableAssociationAnalysisRuleList.h>
#include <aws/cleanrooms/model/ConfiguredTableAssociationAnalysisRuleAggregation.h>
#include <aws/cleanrooms/model/ConfiguredTableAssociationAnalysisRuleCustom.h>
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
   * <p> Controls on the query specifications that can be run on an associated
   * configured table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConfiguredTableAssociationAnalysisRulePolicyV1">AWS
   * API Reference</a></p>
   */
  class ConfiguredTableAssociationAnalysisRulePolicyV1
  {
  public:
    AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRulePolicyV1() = default;
    AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRulePolicyV1(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRulePolicyV1& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Analysis rule type that enables only list queries on a configured table.</p>
     */
    inline const ConfiguredTableAssociationAnalysisRuleList& GetList() const { return m_list; }
    inline bool ListHasBeenSet() const { return m_listHasBeenSet; }
    template<typename ListT = ConfiguredTableAssociationAnalysisRuleList>
    void SetList(ListT&& value) { m_listHasBeenSet = true; m_list = std::forward<ListT>(value); }
    template<typename ListT = ConfiguredTableAssociationAnalysisRuleList>
    ConfiguredTableAssociationAnalysisRulePolicyV1& WithList(ListT&& value) { SetList(std::forward<ListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Analysis rule type that enables only aggregation queries on a configured
     * table.</p>
     */
    inline const ConfiguredTableAssociationAnalysisRuleAggregation& GetAggregation() const { return m_aggregation; }
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
    template<typename AggregationT = ConfiguredTableAssociationAnalysisRuleAggregation>
    void SetAggregation(AggregationT&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::forward<AggregationT>(value); }
    template<typename AggregationT = ConfiguredTableAssociationAnalysisRuleAggregation>
    ConfiguredTableAssociationAnalysisRulePolicyV1& WithAggregation(AggregationT&& value) { SetAggregation(std::forward<AggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Analysis rule type that enables the table owner to approve custom SQL
     * queries on their configured tables. It supports differential privacy.</p>
     */
    inline const ConfiguredTableAssociationAnalysisRuleCustom& GetCustom() const { return m_custom; }
    inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }
    template<typename CustomT = ConfiguredTableAssociationAnalysisRuleCustom>
    void SetCustom(CustomT&& value) { m_customHasBeenSet = true; m_custom = std::forward<CustomT>(value); }
    template<typename CustomT = ConfiguredTableAssociationAnalysisRuleCustom>
    ConfiguredTableAssociationAnalysisRulePolicyV1& WithCustom(CustomT&& value) { SetCustom(std::forward<CustomT>(value)); return *this;}
    ///@}
  private:

    ConfiguredTableAssociationAnalysisRuleList m_list;
    bool m_listHasBeenSet = false;

    ConfiguredTableAssociationAnalysisRuleAggregation m_aggregation;
    bool m_aggregationHasBeenSet = false;

    ConfiguredTableAssociationAnalysisRuleCustom m_custom;
    bool m_customHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
