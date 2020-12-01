/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/StartTimeRange.h>
#include <aws/devops-guru/model/InsightType.h>
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

  class AWS_DEVOPSGURU_API ListInsightsAnyStatusFilter
  {
  public:
    ListInsightsAnyStatusFilter();
    ListInsightsAnyStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    ListInsightsAnyStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const StartTimeRange& GetStartTimeRange() const{ return m_startTimeRange; }

    
    inline bool StartTimeRangeHasBeenSet() const { return m_startTimeRangeHasBeenSet; }

    
    inline void SetStartTimeRange(const StartTimeRange& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = value; }

    
    inline void SetStartTimeRange(StartTimeRange&& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = std::move(value); }

    
    inline ListInsightsAnyStatusFilter& WithStartTimeRange(const StartTimeRange& value) { SetStartTimeRange(value); return *this;}

    
    inline ListInsightsAnyStatusFilter& WithStartTimeRange(StartTimeRange&& value) { SetStartTimeRange(std::move(value)); return *this;}


    
    inline const InsightType& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const InsightType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(InsightType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline ListInsightsAnyStatusFilter& WithType(const InsightType& value) { SetType(value); return *this;}

    
    inline ListInsightsAnyStatusFilter& WithType(InsightType&& value) { SetType(std::move(value)); return *this;}

  private:

    StartTimeRange m_startTimeRange;
    bool m_startTimeRangeHasBeenSet;

    InsightType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
