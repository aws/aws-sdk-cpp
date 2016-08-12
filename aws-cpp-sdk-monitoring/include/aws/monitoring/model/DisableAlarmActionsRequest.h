/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_CLOUDWATCH_API DisableAlarmActionsRequest : public CloudWatchRequest
  {
  public:
    DisableAlarmActionsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The names of the alarms to disable actions for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmNames() const{ return m_alarmNames; }

    /**
     * <p>The names of the alarms to disable actions for.</p>
     */
    inline void SetAlarmNames(const Aws::Vector<Aws::String>& value) { m_alarmNamesHasBeenSet = true; m_alarmNames = value; }

    /**
     * <p>The names of the alarms to disable actions for.</p>
     */
    inline void SetAlarmNames(Aws::Vector<Aws::String>&& value) { m_alarmNamesHasBeenSet = true; m_alarmNames = value; }

    /**
     * <p>The names of the alarms to disable actions for.</p>
     */
    inline DisableAlarmActionsRequest& WithAlarmNames(const Aws::Vector<Aws::String>& value) { SetAlarmNames(value); return *this;}

    /**
     * <p>The names of the alarms to disable actions for.</p>
     */
    inline DisableAlarmActionsRequest& WithAlarmNames(Aws::Vector<Aws::String>&& value) { SetAlarmNames(value); return *this;}

    /**
     * <p>The names of the alarms to disable actions for.</p>
     */
    inline DisableAlarmActionsRequest& AddAlarmNames(const Aws::String& value) { m_alarmNamesHasBeenSet = true; m_alarmNames.push_back(value); return *this; }

    /**
     * <p>The names of the alarms to disable actions for.</p>
     */
    inline DisableAlarmActionsRequest& AddAlarmNames(Aws::String&& value) { m_alarmNamesHasBeenSet = true; m_alarmNames.push_back(value); return *this; }

    /**
     * <p>The names of the alarms to disable actions for.</p>
     */
    inline DisableAlarmActionsRequest& AddAlarmNames(const char* value) { m_alarmNamesHasBeenSet = true; m_alarmNames.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_alarmNames;
    bool m_alarmNamesHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
