/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/Dimension.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/MatchOption.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The metadata that you can use to filter and group your results. You can use
   * <code>GetDimensionValues</code> to find specific values.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/DimensionValues">AWS
   * API Reference</a></p>
   */
  class DimensionValues
  {
  public:
    AWS_COSTEXPLORER_API DimensionValues();
    AWS_COSTEXPLORER_API DimensionValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API DimensionValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The names of the metadata types that you can use to filter and group your
     * results. For example, <code>AZ</code> returns a list of Availability Zones.</p>
     * <p>Not all dimensions are supported in each API. Refer to the documentation for
     * each specific API to see what is supported.</p> <p>
     * <code>LINK_ACCOUNT_NAME</code> and <code>SERVICE_CODE</code> can only be used in
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule</a>.</p>
     * <p> <code>ANOMALY_TOTAL_IMPACT_ABSOLUTE</code> and
     * <code>ANOMALY_TOTAL_IMPACT_PERCENTAGE</code> can only be used in <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalySubscription.html">AnomalySubscriptions</a>.</p>
     */
    inline const Dimension& GetKey() const{ return m_key; }

    /**
     * <p>The names of the metadata types that you can use to filter and group your
     * results. For example, <code>AZ</code> returns a list of Availability Zones.</p>
     * <p>Not all dimensions are supported in each API. Refer to the documentation for
     * each specific API to see what is supported.</p> <p>
     * <code>LINK_ACCOUNT_NAME</code> and <code>SERVICE_CODE</code> can only be used in
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule</a>.</p>
     * <p> <code>ANOMALY_TOTAL_IMPACT_ABSOLUTE</code> and
     * <code>ANOMALY_TOTAL_IMPACT_PERCENTAGE</code> can only be used in <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalySubscription.html">AnomalySubscriptions</a>.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The names of the metadata types that you can use to filter and group your
     * results. For example, <code>AZ</code> returns a list of Availability Zones.</p>
     * <p>Not all dimensions are supported in each API. Refer to the documentation for
     * each specific API to see what is supported.</p> <p>
     * <code>LINK_ACCOUNT_NAME</code> and <code>SERVICE_CODE</code> can only be used in
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule</a>.</p>
     * <p> <code>ANOMALY_TOTAL_IMPACT_ABSOLUTE</code> and
     * <code>ANOMALY_TOTAL_IMPACT_PERCENTAGE</code> can only be used in <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalySubscription.html">AnomalySubscriptions</a>.</p>
     */
    inline void SetKey(const Dimension& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The names of the metadata types that you can use to filter and group your
     * results. For example, <code>AZ</code> returns a list of Availability Zones.</p>
     * <p>Not all dimensions are supported in each API. Refer to the documentation for
     * each specific API to see what is supported.</p> <p>
     * <code>LINK_ACCOUNT_NAME</code> and <code>SERVICE_CODE</code> can only be used in
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule</a>.</p>
     * <p> <code>ANOMALY_TOTAL_IMPACT_ABSOLUTE</code> and
     * <code>ANOMALY_TOTAL_IMPACT_PERCENTAGE</code> can only be used in <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalySubscription.html">AnomalySubscriptions</a>.</p>
     */
    inline void SetKey(Dimension&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The names of the metadata types that you can use to filter and group your
     * results. For example, <code>AZ</code> returns a list of Availability Zones.</p>
     * <p>Not all dimensions are supported in each API. Refer to the documentation for
     * each specific API to see what is supported.</p> <p>
     * <code>LINK_ACCOUNT_NAME</code> and <code>SERVICE_CODE</code> can only be used in
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule</a>.</p>
     * <p> <code>ANOMALY_TOTAL_IMPACT_ABSOLUTE</code> and
     * <code>ANOMALY_TOTAL_IMPACT_PERCENTAGE</code> can only be used in <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalySubscription.html">AnomalySubscriptions</a>.</p>
     */
    inline DimensionValues& WithKey(const Dimension& value) { SetKey(value); return *this;}

    /**
     * <p>The names of the metadata types that you can use to filter and group your
     * results. For example, <code>AZ</code> returns a list of Availability Zones.</p>
     * <p>Not all dimensions are supported in each API. Refer to the documentation for
     * each specific API to see what is supported.</p> <p>
     * <code>LINK_ACCOUNT_NAME</code> and <code>SERVICE_CODE</code> can only be used in
     * <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategoryRule.html">CostCategoryRule</a>.</p>
     * <p> <code>ANOMALY_TOTAL_IMPACT_ABSOLUTE</code> and
     * <code>ANOMALY_TOTAL_IMPACT_PERCENTAGE</code> can only be used in <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalySubscription.html">AnomalySubscriptions</a>.</p>
     */
    inline DimensionValues& WithKey(Dimension&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p>
     */
    inline DimensionValues& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p>
     */
    inline DimensionValues& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p>
     */
    inline DimensionValues& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p>
     */
    inline DimensionValues& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p>
     */
    inline DimensionValues& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The match options that you can use to filter your results.</p> <p>
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category and Anomaly Subscriptions. Refer to the documentation for each specific
     * API to see what is supported.</p> <p>The default values for
     * <code>MatchOptions</code> are <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>.</p>
     */
    inline const Aws::Vector<MatchOption>& GetMatchOptions() const{ return m_matchOptions; }

    /**
     * <p>The match options that you can use to filter your results.</p> <p>
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category and Anomaly Subscriptions. Refer to the documentation for each specific
     * API to see what is supported.</p> <p>The default values for
     * <code>MatchOptions</code> are <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>.</p>
     */
    inline bool MatchOptionsHasBeenSet() const { return m_matchOptionsHasBeenSet; }

    /**
     * <p>The match options that you can use to filter your results.</p> <p>
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category and Anomaly Subscriptions. Refer to the documentation for each specific
     * API to see what is supported.</p> <p>The default values for
     * <code>MatchOptions</code> are <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>.</p>
     */
    inline void SetMatchOptions(const Aws::Vector<MatchOption>& value) { m_matchOptionsHasBeenSet = true; m_matchOptions = value; }

    /**
     * <p>The match options that you can use to filter your results.</p> <p>
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category and Anomaly Subscriptions. Refer to the documentation for each specific
     * API to see what is supported.</p> <p>The default values for
     * <code>MatchOptions</code> are <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>.</p>
     */
    inline void SetMatchOptions(Aws::Vector<MatchOption>&& value) { m_matchOptionsHasBeenSet = true; m_matchOptions = std::move(value); }

    /**
     * <p>The match options that you can use to filter your results.</p> <p>
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category and Anomaly Subscriptions. Refer to the documentation for each specific
     * API to see what is supported.</p> <p>The default values for
     * <code>MatchOptions</code> are <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>.</p>
     */
    inline DimensionValues& WithMatchOptions(const Aws::Vector<MatchOption>& value) { SetMatchOptions(value); return *this;}

    /**
     * <p>The match options that you can use to filter your results.</p> <p>
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category and Anomaly Subscriptions. Refer to the documentation for each specific
     * API to see what is supported.</p> <p>The default values for
     * <code>MatchOptions</code> are <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>.</p>
     */
    inline DimensionValues& WithMatchOptions(Aws::Vector<MatchOption>&& value) { SetMatchOptions(std::move(value)); return *this;}

    /**
     * <p>The match options that you can use to filter your results.</p> <p>
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category and Anomaly Subscriptions. Refer to the documentation for each specific
     * API to see what is supported.</p> <p>The default values for
     * <code>MatchOptions</code> are <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>.</p>
     */
    inline DimensionValues& AddMatchOptions(const MatchOption& value) { m_matchOptionsHasBeenSet = true; m_matchOptions.push_back(value); return *this; }

    /**
     * <p>The match options that you can use to filter your results.</p> <p>
     * <code>MatchOptions</code> is only applicable for actions related to Cost
     * Category and Anomaly Subscriptions. Refer to the documentation for each specific
     * API to see what is supported.</p> <p>The default values for
     * <code>MatchOptions</code> are <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>.</p>
     */
    inline DimensionValues& AddMatchOptions(MatchOption&& value) { m_matchOptionsHasBeenSet = true; m_matchOptions.push_back(std::move(value)); return *this; }

  private:

    Dimension m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<MatchOption> m_matchOptions;
    bool m_matchOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
