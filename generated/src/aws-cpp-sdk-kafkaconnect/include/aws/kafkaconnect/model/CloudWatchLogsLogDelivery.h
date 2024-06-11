﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>The settings for delivering connector logs to Amazon CloudWatch
   * Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CloudWatchLogsLogDelivery">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogsLogDelivery
  {
  public:
    AWS_KAFKACONNECT_API CloudWatchLogsLogDelivery();
    AWS_KAFKACONNECT_API CloudWatchLogsLogDelivery(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API CloudWatchLogsLogDelivery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether log delivery to Amazon CloudWatch Logs is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CloudWatchLogsLogDelivery& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the CloudWatch log group that is the destination for log
     * delivery.</p>
     */
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }
    inline CloudWatchLogsLogDelivery& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}
    inline CloudWatchLogsLogDelivery& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}
    inline CloudWatchLogsLogDelivery& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
