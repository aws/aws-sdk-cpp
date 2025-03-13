/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/PerformanceInsightsReferenceComparisonValues.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>Reference data used to evaluate Performance Insights to determine if its
   * performance is anomalous or not.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/PerformanceInsightsReferenceData">AWS
   * API Reference</a></p>
   */
  class PerformanceInsightsReferenceData
  {
  public:
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceData() = default;
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the reference data.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PerformanceInsightsReferenceData& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific reference values used to evaluate the Performance Insights. For
     * more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceComparisonValues.html">PerformanceInsightsReferenceComparisonValues</a>
     * </code>. </p>
     */
    inline const PerformanceInsightsReferenceComparisonValues& GetComparisonValues() const { return m_comparisonValues; }
    inline bool ComparisonValuesHasBeenSet() const { return m_comparisonValuesHasBeenSet; }
    template<typename ComparisonValuesT = PerformanceInsightsReferenceComparisonValues>
    void SetComparisonValues(ComparisonValuesT&& value) { m_comparisonValuesHasBeenSet = true; m_comparisonValues = std::forward<ComparisonValuesT>(value); }
    template<typename ComparisonValuesT = PerformanceInsightsReferenceComparisonValues>
    PerformanceInsightsReferenceData& WithComparisonValues(ComparisonValuesT&& value) { SetComparisonValues(std::forward<ComparisonValuesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PerformanceInsightsReferenceComparisonValues m_comparisonValues;
    bool m_comparisonValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
