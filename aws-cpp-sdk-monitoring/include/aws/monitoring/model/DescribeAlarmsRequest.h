/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/model/StateValue.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCH_API DescribeAlarmsRequest : public CloudWatchRequest
  {
  public:
    DescribeAlarmsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAlarms"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The names of the alarms.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmNames() const{ return m_alarmNames; }

    /**
     * <p>The names of the alarms.</p>
     */
    inline bool AlarmNamesHasBeenSet() const { return m_alarmNamesHasBeenSet; }

    /**
     * <p>The names of the alarms.</p>
     */
    inline void SetAlarmNames(const Aws::Vector<Aws::String>& value) { m_alarmNamesHasBeenSet = true; m_alarmNames = value; }

    /**
     * <p>The names of the alarms.</p>
     */
    inline void SetAlarmNames(Aws::Vector<Aws::String>&& value) { m_alarmNamesHasBeenSet = true; m_alarmNames = std::move(value); }

    /**
     * <p>The names of the alarms.</p>
     */
    inline DescribeAlarmsRequest& WithAlarmNames(const Aws::Vector<Aws::String>& value) { SetAlarmNames(value); return *this;}

    /**
     * <p>The names of the alarms.</p>
     */
    inline DescribeAlarmsRequest& WithAlarmNames(Aws::Vector<Aws::String>&& value) { SetAlarmNames(std::move(value)); return *this;}

    /**
     * <p>The names of the alarms.</p>
     */
    inline DescribeAlarmsRequest& AddAlarmNames(const Aws::String& value) { m_alarmNamesHasBeenSet = true; m_alarmNames.push_back(value); return *this; }

    /**
     * <p>The names of the alarms.</p>
     */
    inline DescribeAlarmsRequest& AddAlarmNames(Aws::String&& value) { m_alarmNamesHasBeenSet = true; m_alarmNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the alarms.</p>
     */
    inline DescribeAlarmsRequest& AddAlarmNames(const char* value) { m_alarmNamesHasBeenSet = true; m_alarmNames.push_back(value); return *this; }


    /**
     * <p>The alarm name prefix. If this parameter is specified, you cannot specify
     * <code>AlarmNames</code>.</p>
     */
    inline const Aws::String& GetAlarmNamePrefix() const{ return m_alarmNamePrefix; }

    /**
     * <p>The alarm name prefix. If this parameter is specified, you cannot specify
     * <code>AlarmNames</code>.</p>
     */
    inline bool AlarmNamePrefixHasBeenSet() const { return m_alarmNamePrefixHasBeenSet; }

    /**
     * <p>The alarm name prefix. If this parameter is specified, you cannot specify
     * <code>AlarmNames</code>.</p>
     */
    inline void SetAlarmNamePrefix(const Aws::String& value) { m_alarmNamePrefixHasBeenSet = true; m_alarmNamePrefix = value; }

    /**
     * <p>The alarm name prefix. If this parameter is specified, you cannot specify
     * <code>AlarmNames</code>.</p>
     */
    inline void SetAlarmNamePrefix(Aws::String&& value) { m_alarmNamePrefixHasBeenSet = true; m_alarmNamePrefix = std::move(value); }

    /**
     * <p>The alarm name prefix. If this parameter is specified, you cannot specify
     * <code>AlarmNames</code>.</p>
     */
    inline void SetAlarmNamePrefix(const char* value) { m_alarmNamePrefixHasBeenSet = true; m_alarmNamePrefix.assign(value); }

    /**
     * <p>The alarm name prefix. If this parameter is specified, you cannot specify
     * <code>AlarmNames</code>.</p>
     */
    inline DescribeAlarmsRequest& WithAlarmNamePrefix(const Aws::String& value) { SetAlarmNamePrefix(value); return *this;}

    /**
     * <p>The alarm name prefix. If this parameter is specified, you cannot specify
     * <code>AlarmNames</code>.</p>
     */
    inline DescribeAlarmsRequest& WithAlarmNamePrefix(Aws::String&& value) { SetAlarmNamePrefix(std::move(value)); return *this;}

    /**
     * <p>The alarm name prefix. If this parameter is specified, you cannot specify
     * <code>AlarmNames</code>.</p>
     */
    inline DescribeAlarmsRequest& WithAlarmNamePrefix(const char* value) { SetAlarmNamePrefix(value); return *this;}


    /**
     * <p>The state value to be used in matching alarms.</p>
     */
    inline const StateValue& GetStateValue() const{ return m_stateValue; }

    /**
     * <p>The state value to be used in matching alarms.</p>
     */
    inline bool StateValueHasBeenSet() const { return m_stateValueHasBeenSet; }

    /**
     * <p>The state value to be used in matching alarms.</p>
     */
    inline void SetStateValue(const StateValue& value) { m_stateValueHasBeenSet = true; m_stateValue = value; }

    /**
     * <p>The state value to be used in matching alarms.</p>
     */
    inline void SetStateValue(StateValue&& value) { m_stateValueHasBeenSet = true; m_stateValue = std::move(value); }

    /**
     * <p>The state value to be used in matching alarms.</p>
     */
    inline DescribeAlarmsRequest& WithStateValue(const StateValue& value) { SetStateValue(value); return *this;}

    /**
     * <p>The state value to be used in matching alarms.</p>
     */
    inline DescribeAlarmsRequest& WithStateValue(StateValue&& value) { SetStateValue(std::move(value)); return *this;}


    /**
     * <p>The action name prefix.</p>
     */
    inline const Aws::String& GetActionPrefix() const{ return m_actionPrefix; }

    /**
     * <p>The action name prefix.</p>
     */
    inline bool ActionPrefixHasBeenSet() const { return m_actionPrefixHasBeenSet; }

    /**
     * <p>The action name prefix.</p>
     */
    inline void SetActionPrefix(const Aws::String& value) { m_actionPrefixHasBeenSet = true; m_actionPrefix = value; }

    /**
     * <p>The action name prefix.</p>
     */
    inline void SetActionPrefix(Aws::String&& value) { m_actionPrefixHasBeenSet = true; m_actionPrefix = std::move(value); }

    /**
     * <p>The action name prefix.</p>
     */
    inline void SetActionPrefix(const char* value) { m_actionPrefixHasBeenSet = true; m_actionPrefix.assign(value); }

    /**
     * <p>The action name prefix.</p>
     */
    inline DescribeAlarmsRequest& WithActionPrefix(const Aws::String& value) { SetActionPrefix(value); return *this;}

    /**
     * <p>The action name prefix.</p>
     */
    inline DescribeAlarmsRequest& WithActionPrefix(Aws::String&& value) { SetActionPrefix(std::move(value)); return *this;}

    /**
     * <p>The action name prefix.</p>
     */
    inline DescribeAlarmsRequest& WithActionPrefix(const char* value) { SetActionPrefix(value); return *this;}


    /**
     * <p>The maximum number of alarm descriptions to retrieve.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of alarm descriptions to retrieve.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of alarm descriptions to retrieve.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of alarm descriptions to retrieve.</p>
     */
    inline DescribeAlarmsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline DescribeAlarmsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline DescribeAlarmsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline DescribeAlarmsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_alarmNames;
    bool m_alarmNamesHasBeenSet;

    Aws::String m_alarmNamePrefix;
    bool m_alarmNamePrefixHasBeenSet;

    StateValue m_stateValue;
    bool m_stateValueHasBeenSet;

    Aws::String m_actionPrefix;
    bool m_actionPrefixHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
