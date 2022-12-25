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
    AWS_CODEBUILD_API ReportGroupTrendStats();
    AWS_CODEBUILD_API ReportGroupTrendStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ReportGroupTrendStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains the average of all values analyzed.</p>
     */
    inline const Aws::String& GetAverage() const{ return m_average; }

    /**
     * <p>Contains the average of all values analyzed.</p>
     */
    inline bool AverageHasBeenSet() const { return m_averageHasBeenSet; }

    /**
     * <p>Contains the average of all values analyzed.</p>
     */
    inline void SetAverage(const Aws::String& value) { m_averageHasBeenSet = true; m_average = value; }

    /**
     * <p>Contains the average of all values analyzed.</p>
     */
    inline void SetAverage(Aws::String&& value) { m_averageHasBeenSet = true; m_average = std::move(value); }

    /**
     * <p>Contains the average of all values analyzed.</p>
     */
    inline void SetAverage(const char* value) { m_averageHasBeenSet = true; m_average.assign(value); }

    /**
     * <p>Contains the average of all values analyzed.</p>
     */
    inline ReportGroupTrendStats& WithAverage(const Aws::String& value) { SetAverage(value); return *this;}

    /**
     * <p>Contains the average of all values analyzed.</p>
     */
    inline ReportGroupTrendStats& WithAverage(Aws::String&& value) { SetAverage(std::move(value)); return *this;}

    /**
     * <p>Contains the average of all values analyzed.</p>
     */
    inline ReportGroupTrendStats& WithAverage(const char* value) { SetAverage(value); return *this;}


    /**
     * <p>Contains the maximum value analyzed.</p>
     */
    inline const Aws::String& GetMax() const{ return m_max; }

    /**
     * <p>Contains the maximum value analyzed.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>Contains the maximum value analyzed.</p>
     */
    inline void SetMax(const Aws::String& value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>Contains the maximum value analyzed.</p>
     */
    inline void SetMax(Aws::String&& value) { m_maxHasBeenSet = true; m_max = std::move(value); }

    /**
     * <p>Contains the maximum value analyzed.</p>
     */
    inline void SetMax(const char* value) { m_maxHasBeenSet = true; m_max.assign(value); }

    /**
     * <p>Contains the maximum value analyzed.</p>
     */
    inline ReportGroupTrendStats& WithMax(const Aws::String& value) { SetMax(value); return *this;}

    /**
     * <p>Contains the maximum value analyzed.</p>
     */
    inline ReportGroupTrendStats& WithMax(Aws::String&& value) { SetMax(std::move(value)); return *this;}

    /**
     * <p>Contains the maximum value analyzed.</p>
     */
    inline ReportGroupTrendStats& WithMax(const char* value) { SetMax(value); return *this;}


    /**
     * <p>Contains the minimum value analyzed.</p>
     */
    inline const Aws::String& GetMin() const{ return m_min; }

    /**
     * <p>Contains the minimum value analyzed.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>Contains the minimum value analyzed.</p>
     */
    inline void SetMin(const Aws::String& value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>Contains the minimum value analyzed.</p>
     */
    inline void SetMin(Aws::String&& value) { m_minHasBeenSet = true; m_min = std::move(value); }

    /**
     * <p>Contains the minimum value analyzed.</p>
     */
    inline void SetMin(const char* value) { m_minHasBeenSet = true; m_min.assign(value); }

    /**
     * <p>Contains the minimum value analyzed.</p>
     */
    inline ReportGroupTrendStats& WithMin(const Aws::String& value) { SetMin(value); return *this;}

    /**
     * <p>Contains the minimum value analyzed.</p>
     */
    inline ReportGroupTrendStats& WithMin(Aws::String&& value) { SetMin(std::move(value)); return *this;}

    /**
     * <p>Contains the minimum value analyzed.</p>
     */
    inline ReportGroupTrendStats& WithMin(const char* value) { SetMin(value); return *this;}

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
