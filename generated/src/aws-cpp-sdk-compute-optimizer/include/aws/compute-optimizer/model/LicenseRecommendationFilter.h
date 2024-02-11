/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/LicenseRecommendationFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> Describes a filter that returns a more specific list of license
   * recommendations. Use this filter with the <code>GetLicenseRecommendation</code>
   * action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/LicenseRecommendationFilter">AWS
   * API Reference</a></p>
   */
  class LicenseRecommendationFilter
  {
  public:
    AWS_COMPUTEOPTIMIZER_API LicenseRecommendationFilter();
    AWS_COMPUTEOPTIMIZER_API LicenseRecommendationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API LicenseRecommendationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification.</p> <p>Specify
     * <code>FindingReasonCode</code> to return recommendations with a specific finding
     * reason code.</p> <p>You can filter your license recommendations by
     * <code>tag:key</code> and <code>tag-key</code> tags.</p> <p>A
     * <code>tag:key</code> is a key and value combination of a tag assigned to your
     * license recommendations. Use the tag key in the filter name and the tag value as
     * the filter value. For example, to find all license recommendations that have a
     * tag with the key of <code>Owner</code> and the value of <code>TeamA</code>,
     * specify <code>tag:Owner</code> for the filter name and <code>TeamA</code> for
     * the filter value.</p> <p>A <code>tag-key</code> is the key of a tag assigned to
     * your license recommendations. Use this filter to find all of your license
     * recommendations that have a tag with a specific key. This doesn’t consider the
     * tag value. For example, you can find your license recommendations with a tag key
     * value of <code>Owner</code> or without any tag keys assigned.</p>
     */
    inline const LicenseRecommendationFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification.</p> <p>Specify
     * <code>FindingReasonCode</code> to return recommendations with a specific finding
     * reason code.</p> <p>You can filter your license recommendations by
     * <code>tag:key</code> and <code>tag-key</code> tags.</p> <p>A
     * <code>tag:key</code> is a key and value combination of a tag assigned to your
     * license recommendations. Use the tag key in the filter name and the tag value as
     * the filter value. For example, to find all license recommendations that have a
     * tag with the key of <code>Owner</code> and the value of <code>TeamA</code>,
     * specify <code>tag:Owner</code> for the filter name and <code>TeamA</code> for
     * the filter value.</p> <p>A <code>tag-key</code> is the key of a tag assigned to
     * your license recommendations. Use this filter to find all of your license
     * recommendations that have a tag with a specific key. This doesn’t consider the
     * tag value. For example, you can find your license recommendations with a tag key
     * value of <code>Owner</code> or without any tag keys assigned.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification.</p> <p>Specify
     * <code>FindingReasonCode</code> to return recommendations with a specific finding
     * reason code.</p> <p>You can filter your license recommendations by
     * <code>tag:key</code> and <code>tag-key</code> tags.</p> <p>A
     * <code>tag:key</code> is a key and value combination of a tag assigned to your
     * license recommendations. Use the tag key in the filter name and the tag value as
     * the filter value. For example, to find all license recommendations that have a
     * tag with the key of <code>Owner</code> and the value of <code>TeamA</code>,
     * specify <code>tag:Owner</code> for the filter name and <code>TeamA</code> for
     * the filter value.</p> <p>A <code>tag-key</code> is the key of a tag assigned to
     * your license recommendations. Use this filter to find all of your license
     * recommendations that have a tag with a specific key. This doesn’t consider the
     * tag value. For example, you can find your license recommendations with a tag key
     * value of <code>Owner</code> or without any tag keys assigned.</p>
     */
    inline void SetName(const LicenseRecommendationFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification.</p> <p>Specify
     * <code>FindingReasonCode</code> to return recommendations with a specific finding
     * reason code.</p> <p>You can filter your license recommendations by
     * <code>tag:key</code> and <code>tag-key</code> tags.</p> <p>A
     * <code>tag:key</code> is a key and value combination of a tag assigned to your
     * license recommendations. Use the tag key in the filter name and the tag value as
     * the filter value. For example, to find all license recommendations that have a
     * tag with the key of <code>Owner</code> and the value of <code>TeamA</code>,
     * specify <code>tag:Owner</code> for the filter name and <code>TeamA</code> for
     * the filter value.</p> <p>A <code>tag-key</code> is the key of a tag assigned to
     * your license recommendations. Use this filter to find all of your license
     * recommendations that have a tag with a specific key. This doesn’t consider the
     * tag value. For example, you can find your license recommendations with a tag key
     * value of <code>Owner</code> or without any tag keys assigned.</p>
     */
    inline void SetName(LicenseRecommendationFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification.</p> <p>Specify
     * <code>FindingReasonCode</code> to return recommendations with a specific finding
     * reason code.</p> <p>You can filter your license recommendations by
     * <code>tag:key</code> and <code>tag-key</code> tags.</p> <p>A
     * <code>tag:key</code> is a key and value combination of a tag assigned to your
     * license recommendations. Use the tag key in the filter name and the tag value as
     * the filter value. For example, to find all license recommendations that have a
     * tag with the key of <code>Owner</code> and the value of <code>TeamA</code>,
     * specify <code>tag:Owner</code> for the filter name and <code>TeamA</code> for
     * the filter value.</p> <p>A <code>tag-key</code> is the key of a tag assigned to
     * your license recommendations. Use this filter to find all of your license
     * recommendations that have a tag with a specific key. This doesn’t consider the
     * tag value. For example, you can find your license recommendations with a tag key
     * value of <code>Owner</code> or without any tag keys assigned.</p>
     */
    inline LicenseRecommendationFilter& WithName(const LicenseRecommendationFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification.</p> <p>Specify
     * <code>FindingReasonCode</code> to return recommendations with a specific finding
     * reason code.</p> <p>You can filter your license recommendations by
     * <code>tag:key</code> and <code>tag-key</code> tags.</p> <p>A
     * <code>tag:key</code> is a key and value combination of a tag assigned to your
     * license recommendations. Use the tag key in the filter name and the tag value as
     * the filter value. For example, to find all license recommendations that have a
     * tag with the key of <code>Owner</code> and the value of <code>TeamA</code>,
     * specify <code>tag:Owner</code> for the filter name and <code>TeamA</code> for
     * the filter value.</p> <p>A <code>tag-key</code> is the key of a tag assigned to
     * your license recommendations. Use this filter to find all of your license
     * recommendations that have a tag with a specific key. This doesn’t consider the
     * tag value. For example, you can find your license recommendations with a tag key
     * value of <code>Owner</code> or without any tag keys assigned.</p>
     */
    inline LicenseRecommendationFilter& WithName(LicenseRecommendationFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, then specify <code>Optimized</code>,
     * <code>NotOptimized</code>, or <code>InsufficentMetrics</code>.</p> </li> <li>
     * <p>If you specify the <code>name</code> parameter as
     * <code>FindingReasonCode</code>, then specify <code>Optimized</code>,
     * <code>LicenseOverprovisioned</code>,
     * <code>InvalidCloudwatchApplicationInsights</code>, or
     * <code>CloudwatchApplicationInsightsError</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, then specify <code>Optimized</code>,
     * <code>NotOptimized</code>, or <code>InsufficentMetrics</code>.</p> </li> <li>
     * <p>If you specify the <code>name</code> parameter as
     * <code>FindingReasonCode</code>, then specify <code>Optimized</code>,
     * <code>LicenseOverprovisioned</code>,
     * <code>InvalidCloudwatchApplicationInsights</code>, or
     * <code>CloudwatchApplicationInsightsError</code>.</p> </li> </ul>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, then specify <code>Optimized</code>,
     * <code>NotOptimized</code>, or <code>InsufficentMetrics</code>.</p> </li> <li>
     * <p>If you specify the <code>name</code> parameter as
     * <code>FindingReasonCode</code>, then specify <code>Optimized</code>,
     * <code>LicenseOverprovisioned</code>,
     * <code>InvalidCloudwatchApplicationInsights</code>, or
     * <code>CloudwatchApplicationInsightsError</code>.</p> </li> </ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, then specify <code>Optimized</code>,
     * <code>NotOptimized</code>, or <code>InsufficentMetrics</code>.</p> </li> <li>
     * <p>If you specify the <code>name</code> parameter as
     * <code>FindingReasonCode</code>, then specify <code>Optimized</code>,
     * <code>LicenseOverprovisioned</code>,
     * <code>InvalidCloudwatchApplicationInsights</code>, or
     * <code>CloudwatchApplicationInsightsError</code>.</p> </li> </ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, then specify <code>Optimized</code>,
     * <code>NotOptimized</code>, or <code>InsufficentMetrics</code>.</p> </li> <li>
     * <p>If you specify the <code>name</code> parameter as
     * <code>FindingReasonCode</code>, then specify <code>Optimized</code>,
     * <code>LicenseOverprovisioned</code>,
     * <code>InvalidCloudwatchApplicationInsights</code>, or
     * <code>CloudwatchApplicationInsightsError</code>.</p> </li> </ul>
     */
    inline LicenseRecommendationFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, then specify <code>Optimized</code>,
     * <code>NotOptimized</code>, or <code>InsufficentMetrics</code>.</p> </li> <li>
     * <p>If you specify the <code>name</code> parameter as
     * <code>FindingReasonCode</code>, then specify <code>Optimized</code>,
     * <code>LicenseOverprovisioned</code>,
     * <code>InvalidCloudwatchApplicationInsights</code>, or
     * <code>CloudwatchApplicationInsightsError</code>.</p> </li> </ul>
     */
    inline LicenseRecommendationFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, then specify <code>Optimized</code>,
     * <code>NotOptimized</code>, or <code>InsufficentMetrics</code>.</p> </li> <li>
     * <p>If you specify the <code>name</code> parameter as
     * <code>FindingReasonCode</code>, then specify <code>Optimized</code>,
     * <code>LicenseOverprovisioned</code>,
     * <code>InvalidCloudwatchApplicationInsights</code>, or
     * <code>CloudwatchApplicationInsightsError</code>.</p> </li> </ul>
     */
    inline LicenseRecommendationFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, then specify <code>Optimized</code>,
     * <code>NotOptimized</code>, or <code>InsufficentMetrics</code>.</p> </li> <li>
     * <p>If you specify the <code>name</code> parameter as
     * <code>FindingReasonCode</code>, then specify <code>Optimized</code>,
     * <code>LicenseOverprovisioned</code>,
     * <code>InvalidCloudwatchApplicationInsights</code>, or
     * <code>CloudwatchApplicationInsightsError</code>.</p> </li> </ul>
     */
    inline LicenseRecommendationFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, then specify <code>Optimized</code>,
     * <code>NotOptimized</code>, or <code>InsufficentMetrics</code>.</p> </li> <li>
     * <p>If you specify the <code>name</code> parameter as
     * <code>FindingReasonCode</code>, then specify <code>Optimized</code>,
     * <code>LicenseOverprovisioned</code>,
     * <code>InvalidCloudwatchApplicationInsights</code>, or
     * <code>CloudwatchApplicationInsightsError</code>.</p> </li> </ul>
     */
    inline LicenseRecommendationFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    LicenseRecommendationFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
