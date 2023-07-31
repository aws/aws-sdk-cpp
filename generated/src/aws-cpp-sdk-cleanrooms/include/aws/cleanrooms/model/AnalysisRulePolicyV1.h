/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisRuleList.h>
#include <aws/cleanrooms/model/AnalysisRuleAggregation.h>
#include <aws/cleanrooms/model/AnalysisRuleCustom.h>
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


    /**
     * <p>Analysis rule type that enables only list queries on a configured table.</p>
     */
    inline const AnalysisRuleList& GetList() const{ return m_list; }

    /**
     * <p>Analysis rule type that enables only list queries on a configured table.</p>
     */
    inline bool ListHasBeenSet() const { return m_listHasBeenSet; }

    /**
     * <p>Analysis rule type that enables only list queries on a configured table.</p>
     */
    inline void SetList(const AnalysisRuleList& value) { m_listHasBeenSet = true; m_list = value; }

    /**
     * <p>Analysis rule type that enables only list queries on a configured table.</p>
     */
    inline void SetList(AnalysisRuleList&& value) { m_listHasBeenSet = true; m_list = std::move(value); }

    /**
     * <p>Analysis rule type that enables only list queries on a configured table.</p>
     */
    inline AnalysisRulePolicyV1& WithList(const AnalysisRuleList& value) { SetList(value); return *this;}

    /**
     * <p>Analysis rule type that enables only list queries on a configured table.</p>
     */
    inline AnalysisRulePolicyV1& WithList(AnalysisRuleList&& value) { SetList(std::move(value)); return *this;}


    /**
     * <p>Analysis rule type that enables only aggregation queries on a configured
     * table.</p>
     */
    inline const AnalysisRuleAggregation& GetAggregation() const{ return m_aggregation; }

    /**
     * <p>Analysis rule type that enables only aggregation queries on a configured
     * table.</p>
     */
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }

    /**
     * <p>Analysis rule type that enables only aggregation queries on a configured
     * table.</p>
     */
    inline void SetAggregation(const AnalysisRuleAggregation& value) { m_aggregationHasBeenSet = true; m_aggregation = value; }

    /**
     * <p>Analysis rule type that enables only aggregation queries on a configured
     * table.</p>
     */
    inline void SetAggregation(AnalysisRuleAggregation&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::move(value); }

    /**
     * <p>Analysis rule type that enables only aggregation queries on a configured
     * table.</p>
     */
    inline AnalysisRulePolicyV1& WithAggregation(const AnalysisRuleAggregation& value) { SetAggregation(value); return *this;}

    /**
     * <p>Analysis rule type that enables only aggregation queries on a configured
     * table.</p>
     */
    inline AnalysisRulePolicyV1& WithAggregation(AnalysisRuleAggregation&& value) { SetAggregation(std::move(value)); return *this;}


    /**
     * <p>Analysis rule type that enables custom SQL queries on a configured table.</p>
     */
    inline const AnalysisRuleCustom& GetCustom() const{ return m_custom; }

    /**
     * <p>Analysis rule type that enables custom SQL queries on a configured table.</p>
     */
    inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }

    /**
     * <p>Analysis rule type that enables custom SQL queries on a configured table.</p>
     */
    inline void SetCustom(const AnalysisRuleCustom& value) { m_customHasBeenSet = true; m_custom = value; }

    /**
     * <p>Analysis rule type that enables custom SQL queries on a configured table.</p>
     */
    inline void SetCustom(AnalysisRuleCustom&& value) { m_customHasBeenSet = true; m_custom = std::move(value); }

    /**
     * <p>Analysis rule type that enables custom SQL queries on a configured table.</p>
     */
    inline AnalysisRulePolicyV1& WithCustom(const AnalysisRuleCustom& value) { SetCustom(value); return *this;}

    /**
     * <p>Analysis rule type that enables custom SQL queries on a configured table.</p>
     */
    inline AnalysisRulePolicyV1& WithCustom(AnalysisRuleCustom&& value) { SetCustom(std::move(value)); return *this;}

  private:

    AnalysisRuleList m_list;
    bool m_listHasBeenSet = false;

    AnalysisRuleAggregation m_aggregation;
    bool m_aggregationHasBeenSet = false;

    AnalysisRuleCustom m_custom;
    bool m_customHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
