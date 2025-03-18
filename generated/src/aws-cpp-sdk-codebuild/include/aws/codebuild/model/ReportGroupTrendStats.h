/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Contains trend statistics for a set of reports. The actual values depend on
   * the type of trend being collected. For more information, see .</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ReportGroupTrendStats">AWS
   * API Reference</a></p>
   */
  class ReportGroupTrendStats
  {
  public:
    AWS_CODEBUILD_API ReportGroupTrendStats() = default;
    AWS_CODEBUILD_API ReportGroupTrendStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ReportGroupTrendStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the average of all values analyzed.</p>
     */
    inline const Aws::String& GetAverage() const { return m_average; }
    inline bool AverageHasBeenSet() const { return m_averageHasBeenSet; }
    template<typename AverageT = Aws::String>
    void SetAverage(AverageT&& value) { m_averageHasBeenSet = true; m_average = std::forward<AverageT>(value); }
    template<typename AverageT = Aws::String>
    ReportGroupTrendStats& WithAverage(AverageT&& value) { SetAverage(std::forward<AverageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the maximum value analyzed.</p>
     */
    inline const Aws::String& GetMax() const { return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    template<typename MaxT = Aws::String>
    void SetMax(MaxT&& value) { m_maxHasBeenSet = true; m_max = std::forward<MaxT>(value); }
    template<typename MaxT = Aws::String>
    ReportGroupTrendStats& WithMax(MaxT&& value) { SetMax(std::forward<MaxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the minimum value analyzed.</p>
     */
    inline const Aws::String& GetMin() const { return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    template<typename MinT = Aws::String>
    void SetMin(MinT&& value) { m_minHasBeenSet = true; m_min = std::forward<MinT>(value); }
    template<typename MinT = Aws::String>
    ReportGroupTrendStats& WithMin(MinT&& value) { SetMin(std::forward<MinT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_average;
    bool m_averageHasBeenSet = false;

    Aws::String m_max;
    bool m_maxHasBeenSet = false;

    Aws::String m_min;
    bool m_minHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
