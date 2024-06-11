/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes an action that sends data to CloudWatch Logs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CloudwatchLogsAction">AWS
   * API Reference</a></p>
   */
  class CloudwatchLogsAction
  {
  public:
    AWS_IOT_API CloudwatchLogsAction();
    AWS_IOT_API CloudwatchLogsAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CloudwatchLogsAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IAM role that allows access to the CloudWatch log.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CloudwatchLogsAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CloudwatchLogsAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CloudwatchLogsAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch log group to which the action sends data.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }
    inline CloudwatchLogsAction& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}
    inline CloudwatchLogsAction& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}
    inline CloudwatchLogsAction& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether batches of log records will be extracted and uploaded into
     * CloudWatch. Values include <code>true</code> or <code>false</code>
     * <i>(default)</i>.</p>
     */
    inline bool GetBatchMode() const{ return m_batchMode; }
    inline bool BatchModeHasBeenSet() const { return m_batchModeHasBeenSet; }
    inline void SetBatchMode(bool value) { m_batchModeHasBeenSet = true; m_batchMode = value; }
    inline CloudwatchLogsAction& WithBatchMode(bool value) { SetBatchMode(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    bool m_batchMode;
    bool m_batchModeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
