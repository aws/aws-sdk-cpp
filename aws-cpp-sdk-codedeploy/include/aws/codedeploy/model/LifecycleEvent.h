/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/Diagnostics.h>
#include <aws/codedeploy/model/LifecycleEventStatus.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace codedeploy
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_CODEDEPLOY_API LifecycleEvent
  {
  public:
    LifecycleEvent();
    LifecycleEvent(const Aws::Utils::Json::JsonValue& jsonValue);
    LifecycleEvent& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetLifecycleEventName() const{ return m_lifecycleEventName; }
    
    inline void SetLifecycleEventName(const Aws::String& value) { m_lifecycleEventNameHasBeenSet = true; m_lifecycleEventName = value; }

    
    inline void SetLifecycleEventName(const char* value) { m_lifecycleEventNameHasBeenSet = true; m_lifecycleEventName.assign(value); }

    
    inline LifecycleEvent&  WithLifecycleEventName(const Aws::String& value) { SetLifecycleEventName(value); return *this;}

    
    inline LifecycleEvent& WithLifecycleEventName(const char* value) { SetLifecycleEventName(value); return *this;}

    
    inline const Diagnostics& GetDiagnostics() const{ return m_diagnostics; }
    
    inline void SetDiagnostics(const Diagnostics& value) { m_diagnosticsHasBeenSet = true; m_diagnostics = value; }

    
    inline LifecycleEvent&  WithDiagnostics(const Diagnostics& value) { SetDiagnostics(value); return *this;}

    
    inline double GetStartTime() const{ return m_startTime; }
    
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline LifecycleEvent&  WithStartTime(double value) { SetStartTime(value); return *this;}

    
    inline double GetEndTime() const{ return m_endTime; }
    
    inline void SetEndTime(double value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    
    inline LifecycleEvent&  WithEndTime(double value) { SetEndTime(value); return *this;}

    
    inline const LifecycleEventStatus& GetStatus() const{ return m_status; }
    
    inline void SetStatus(const LifecycleEventStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline LifecycleEvent&  WithStatus(const LifecycleEventStatus& value) { SetStatus(value); return *this;}

  private:
    Aws::String m_lifecycleEventName;
    bool m_lifecycleEventNameHasBeenSet;
    Diagnostics m_diagnostics;
    bool m_diagnosticsHasBeenSet;
    double m_startTime;
    bool m_startTimeHasBeenSet;
    double m_endTime;
    bool m_endTimeHasBeenSet;
    LifecycleEventStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
