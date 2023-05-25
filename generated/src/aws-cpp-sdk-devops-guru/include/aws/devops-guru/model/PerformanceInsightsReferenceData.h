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
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceData();
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the reference data.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the reference data.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the reference data.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the reference data.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the reference data.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the reference data.</p>
     */
    inline PerformanceInsightsReferenceData& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the reference data.</p>
     */
    inline PerformanceInsightsReferenceData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the reference data.</p>
     */
    inline PerformanceInsightsReferenceData& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The specific reference values used to evaluate the Performance Insights. For
     * more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceComparisonValues.html">PerformanceInsightsReferenceComparisonValues</a>
     * </code>. </p>
     */
    inline const PerformanceInsightsReferenceComparisonValues& GetComparisonValues() const{ return m_comparisonValues; }

    /**
     * <p>The specific reference values used to evaluate the Performance Insights. For
     * more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceComparisonValues.html">PerformanceInsightsReferenceComparisonValues</a>
     * </code>. </p>
     */
    inline bool ComparisonValuesHasBeenSet() const { return m_comparisonValuesHasBeenSet; }

    /**
     * <p>The specific reference values used to evaluate the Performance Insights. For
     * more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceComparisonValues.html">PerformanceInsightsReferenceComparisonValues</a>
     * </code>. </p>
     */
    inline void SetComparisonValues(const PerformanceInsightsReferenceComparisonValues& value) { m_comparisonValuesHasBeenSet = true; m_comparisonValues = value; }

    /**
     * <p>The specific reference values used to evaluate the Performance Insights. For
     * more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceComparisonValues.html">PerformanceInsightsReferenceComparisonValues</a>
     * </code>. </p>
     */
    inline void SetComparisonValues(PerformanceInsightsReferenceComparisonValues&& value) { m_comparisonValuesHasBeenSet = true; m_comparisonValues = std::move(value); }

    /**
     * <p>The specific reference values used to evaluate the Performance Insights. For
     * more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceComparisonValues.html">PerformanceInsightsReferenceComparisonValues</a>
     * </code>. </p>
     */
    inline PerformanceInsightsReferenceData& WithComparisonValues(const PerformanceInsightsReferenceComparisonValues& value) { SetComparisonValues(value); return *this;}

    /**
     * <p>The specific reference values used to evaluate the Performance Insights. For
     * more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceComparisonValues.html">PerformanceInsightsReferenceComparisonValues</a>
     * </code>. </p>
     */
    inline PerformanceInsightsReferenceData& WithComparisonValues(PerformanceInsightsReferenceComparisonValues&& value) { SetComparisonValues(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PerformanceInsightsReferenceComparisonValues m_comparisonValues;
    bool m_comparisonValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
