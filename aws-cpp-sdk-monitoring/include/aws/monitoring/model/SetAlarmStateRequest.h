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
  class AWS_CLOUDWATCH_API SetAlarmStateRequest : public CloudWatchRequest
  {
  public:
    SetAlarmStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetAlarmState"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name for the alarm. This name must be unique within the AWS account. The
     * maximum length is 255 characters.</p>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }

    /**
     * <p>The name for the alarm. This name must be unique within the AWS account. The
     * maximum length is 255 characters.</p>
     */
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }

    /**
     * <p>The name for the alarm. This name must be unique within the AWS account. The
     * maximum length is 255 characters.</p>
     */
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }

    /**
     * <p>The name for the alarm. This name must be unique within the AWS account. The
     * maximum length is 255 characters.</p>
     */
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }

    /**
     * <p>The name for the alarm. This name must be unique within the AWS account. The
     * maximum length is 255 characters.</p>
     */
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }

    /**
     * <p>The name for the alarm. This name must be unique within the AWS account. The
     * maximum length is 255 characters.</p>
     */
    inline SetAlarmStateRequest& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}

    /**
     * <p>The name for the alarm. This name must be unique within the AWS account. The
     * maximum length is 255 characters.</p>
     */
    inline SetAlarmStateRequest& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}

    /**
     * <p>The name for the alarm. This name must be unique within the AWS account. The
     * maximum length is 255 characters.</p>
     */
    inline SetAlarmStateRequest& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}


    /**
     * <p>The value of the state.</p>
     */
    inline const StateValue& GetStateValue() const{ return m_stateValue; }

    /**
     * <p>The value of the state.</p>
     */
    inline bool StateValueHasBeenSet() const { return m_stateValueHasBeenSet; }

    /**
     * <p>The value of the state.</p>
     */
    inline void SetStateValue(const StateValue& value) { m_stateValueHasBeenSet = true; m_stateValue = value; }

    /**
     * <p>The value of the state.</p>
     */
    inline void SetStateValue(StateValue&& value) { m_stateValueHasBeenSet = true; m_stateValue = std::move(value); }

    /**
     * <p>The value of the state.</p>
     */
    inline SetAlarmStateRequest& WithStateValue(const StateValue& value) { SetStateValue(value); return *this;}

    /**
     * <p>The value of the state.</p>
     */
    inline SetAlarmStateRequest& WithStateValue(StateValue&& value) { SetStateValue(std::move(value)); return *this;}


    /**
     * <p>The reason that this alarm is set to this specific state, in text format.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>The reason that this alarm is set to this specific state, in text format.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>The reason that this alarm is set to this specific state, in text format.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>The reason that this alarm is set to this specific state, in text format.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>The reason that this alarm is set to this specific state, in text format.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>The reason that this alarm is set to this specific state, in text format.</p>
     */
    inline SetAlarmStateRequest& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>The reason that this alarm is set to this specific state, in text format.</p>
     */
    inline SetAlarmStateRequest& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>The reason that this alarm is set to this specific state, in text format.</p>
     */
    inline SetAlarmStateRequest& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The reason that this alarm is set to this specific state, in JSON format.</p>
     */
    inline const Aws::String& GetStateReasonData() const{ return m_stateReasonData; }

    /**
     * <p>The reason that this alarm is set to this specific state, in JSON format.</p>
     */
    inline bool StateReasonDataHasBeenSet() const { return m_stateReasonDataHasBeenSet; }

    /**
     * <p>The reason that this alarm is set to this specific state, in JSON format.</p>
     */
    inline void SetStateReasonData(const Aws::String& value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData = value; }

    /**
     * <p>The reason that this alarm is set to this specific state, in JSON format.</p>
     */
    inline void SetStateReasonData(Aws::String&& value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData = std::move(value); }

    /**
     * <p>The reason that this alarm is set to this specific state, in JSON format.</p>
     */
    inline void SetStateReasonData(const char* value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData.assign(value); }

    /**
     * <p>The reason that this alarm is set to this specific state, in JSON format.</p>
     */
    inline SetAlarmStateRequest& WithStateReasonData(const Aws::String& value) { SetStateReasonData(value); return *this;}

    /**
     * <p>The reason that this alarm is set to this specific state, in JSON format.</p>
     */
    inline SetAlarmStateRequest& WithStateReasonData(Aws::String&& value) { SetStateReasonData(std::move(value)); return *this;}

    /**
     * <p>The reason that this alarm is set to this specific state, in JSON format.</p>
     */
    inline SetAlarmStateRequest& WithStateReasonData(const char* value) { SetStateReasonData(value); return *this;}

  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet;

    StateValue m_stateValue;
    bool m_stateValueHasBeenSet;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet;

    Aws::String m_stateReasonData;
    bool m_stateReasonDataHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
