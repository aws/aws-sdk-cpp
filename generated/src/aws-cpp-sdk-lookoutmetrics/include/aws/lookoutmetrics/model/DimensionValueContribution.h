/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>The severity of a value of a dimension that contributed to an
   * anomaly.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DimensionValueContribution">AWS
   * API Reference</a></p>
   */
  class DimensionValueContribution
  {
  public:
    AWS_LOOKOUTMETRICS_API DimensionValueContribution();
    AWS_LOOKOUTMETRICS_API DimensionValueContribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DimensionValueContribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the dimension.</p>
     */
    inline const Aws::String& GetDimensionValue() const{ return m_dimensionValue; }

    /**
     * <p>The value of the dimension.</p>
     */
    inline bool DimensionValueHasBeenSet() const { return m_dimensionValueHasBeenSet; }

    /**
     * <p>The value of the dimension.</p>
     */
    inline void SetDimensionValue(const Aws::String& value) { m_dimensionValueHasBeenSet = true; m_dimensionValue = value; }

    /**
     * <p>The value of the dimension.</p>
     */
    inline void SetDimensionValue(Aws::String&& value) { m_dimensionValueHasBeenSet = true; m_dimensionValue = std::move(value); }

    /**
     * <p>The value of the dimension.</p>
     */
    inline void SetDimensionValue(const char* value) { m_dimensionValueHasBeenSet = true; m_dimensionValue.assign(value); }

    /**
     * <p>The value of the dimension.</p>
     */
    inline DimensionValueContribution& WithDimensionValue(const Aws::String& value) { SetDimensionValue(value); return *this;}

    /**
     * <p>The value of the dimension.</p>
     */
    inline DimensionValueContribution& WithDimensionValue(Aws::String&& value) { SetDimensionValue(std::move(value)); return *this;}

    /**
     * <p>The value of the dimension.</p>
     */
    inline DimensionValueContribution& WithDimensionValue(const char* value) { SetDimensionValue(value); return *this;}


    /**
     * <p>The severity score of the value.</p>
     */
    inline double GetContributionScore() const{ return m_contributionScore; }

    /**
     * <p>The severity score of the value.</p>
     */
    inline bool ContributionScoreHasBeenSet() const { return m_contributionScoreHasBeenSet; }

    /**
     * <p>The severity score of the value.</p>
     */
    inline void SetContributionScore(double value) { m_contributionScoreHasBeenSet = true; m_contributionScore = value; }

    /**
     * <p>The severity score of the value.</p>
     */
    inline DimensionValueContribution& WithContributionScore(double value) { SetContributionScore(value); return *this;}

  private:

    Aws::String m_dimensionValue;
    bool m_dimensionValueHasBeenSet = false;

    double m_contributionScore;
    bool m_contributionScoreHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
