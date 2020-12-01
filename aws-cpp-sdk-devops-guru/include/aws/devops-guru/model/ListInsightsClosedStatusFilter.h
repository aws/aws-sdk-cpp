/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/EndTimeRange.h>
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

  class AWS_DEVOPSGURU_API ListInsightsClosedStatusFilter
  {
  public:
    ListInsightsClosedStatusFilter();
    ListInsightsClosedStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    ListInsightsClosedStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const EndTimeRange& GetEndTimeRange() const{ return m_endTimeRange; }

    
    inline bool EndTimeRangeHasBeenSet() const { return m_endTimeRangeHasBeenSet; }

    
    inline void SetEndTimeRange(const EndTimeRange& value) { m_endTimeRangeHasBeenSet = true; m_endTimeRange = value; }

    
    inline void SetEndTimeRange(EndTimeRange&& value) { m_endTimeRangeHasBeenSet = true; m_endTimeRange = std::move(value); }

    
    inline ListInsightsClosedStatusFilter& WithEndTimeRange(const EndTimeRange& value) { SetEndTimeRange(value); return *this;}

    
    inline ListInsightsClosedStatusFilter& WithEndTimeRange(EndTimeRange&& value) { SetEndTimeRange(std::move(value)); return *this;}


    
    inline const InsightType& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const InsightType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(InsightType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline ListInsightsClosedStatusFilter& WithType(const InsightType& value) { SetType(value); return *this;}

    
    inline ListInsightsClosedStatusFilter& WithType(InsightType&& value) { SetType(std::move(value)); return *this;}

  private:

    EndTimeRange m_endTimeRange;
    bool m_endTimeRangeHasBeenSet;

    InsightType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
