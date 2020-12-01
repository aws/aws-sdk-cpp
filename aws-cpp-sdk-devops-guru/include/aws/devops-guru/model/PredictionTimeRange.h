/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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

  class AWS_DEVOPSGURU_API PredictionTimeRange
  {
  public:
    PredictionTimeRange();
    PredictionTimeRange(Aws::Utils::Json::JsonView jsonValue);
    PredictionTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    
    inline PredictionTimeRange& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    
    inline PredictionTimeRange& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    
    inline PredictionTimeRange& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    
    inline PredictionTimeRange& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
