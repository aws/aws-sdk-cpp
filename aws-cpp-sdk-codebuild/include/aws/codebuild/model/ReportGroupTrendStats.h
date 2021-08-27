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

  class AWS_CODEBUILD_API ReportGroupTrendStats
  {
  public:
    ReportGroupTrendStats();
    ReportGroupTrendStats(Aws::Utils::Json::JsonView jsonValue);
    ReportGroupTrendStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAverage() const{ return m_average; }

    
    inline bool AverageHasBeenSet() const { return m_averageHasBeenSet; }

    
    inline void SetAverage(const Aws::String& value) { m_averageHasBeenSet = true; m_average = value; }

    
    inline void SetAverage(Aws::String&& value) { m_averageHasBeenSet = true; m_average = std::move(value); }

    
    inline void SetAverage(const char* value) { m_averageHasBeenSet = true; m_average.assign(value); }

    
    inline ReportGroupTrendStats& WithAverage(const Aws::String& value) { SetAverage(value); return *this;}

    
    inline ReportGroupTrendStats& WithAverage(Aws::String&& value) { SetAverage(std::move(value)); return *this;}

    
    inline ReportGroupTrendStats& WithAverage(const char* value) { SetAverage(value); return *this;}


    
    inline const Aws::String& GetMax() const{ return m_max; }

    
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    
    inline void SetMax(const Aws::String& value) { m_maxHasBeenSet = true; m_max = value; }

    
    inline void SetMax(Aws::String&& value) { m_maxHasBeenSet = true; m_max = std::move(value); }

    
    inline void SetMax(const char* value) { m_maxHasBeenSet = true; m_max.assign(value); }

    
    inline ReportGroupTrendStats& WithMax(const Aws::String& value) { SetMax(value); return *this;}

    
    inline ReportGroupTrendStats& WithMax(Aws::String&& value) { SetMax(std::move(value)); return *this;}

    
    inline ReportGroupTrendStats& WithMax(const char* value) { SetMax(value); return *this;}


    
    inline const Aws::String& GetMin() const{ return m_min; }

    
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    
    inline void SetMin(const Aws::String& value) { m_minHasBeenSet = true; m_min = value; }

    
    inline void SetMin(Aws::String&& value) { m_minHasBeenSet = true; m_min = std::move(value); }

    
    inline void SetMin(const char* value) { m_minHasBeenSet = true; m_min.assign(value); }

    
    inline ReportGroupTrendStats& WithMin(const Aws::String& value) { SetMin(value); return *this;}

    
    inline ReportGroupTrendStats& WithMin(Aws::String&& value) { SetMin(std::move(value)); return *this;}

    
    inline ReportGroupTrendStats& WithMin(const char* value) { SetMin(value); return *this;}

  private:

    Aws::String m_average;
    bool m_averageHasBeenSet;

    Aws::String m_max;
    bool m_maxHasBeenSet;

    Aws::String m_min;
    bool m_minHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
