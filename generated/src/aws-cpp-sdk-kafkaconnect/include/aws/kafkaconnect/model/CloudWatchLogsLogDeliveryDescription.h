/**
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
   * <p>A description of the log delivery settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CloudWatchLogsLogDeliveryDescription">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogsLogDeliveryDescription
  {
  public:
    AWS_KAFKACONNECT_API CloudWatchLogsLogDeliveryDescription();
    AWS_KAFKACONNECT_API CloudWatchLogsLogDeliveryDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API CloudWatchLogsLogDeliveryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether log delivery to Amazon CloudWatch Logs is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether log delivery to Amazon CloudWatch Logs is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether log delivery to Amazon CloudWatch Logs is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether log delivery to Amazon CloudWatch Logs is enabled.</p>
     */
    inline CloudWatchLogsLogDeliveryDescription& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The name of the CloudWatch log group that is the destination for log
     * delivery.</p>
     */
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }

    /**
     * <p>The name of the CloudWatch log group that is the destination for log
     * delivery.</p>
     */
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }

    /**
     * <p>The name of the CloudWatch log group that is the destination for log
     * delivery.</p>
     */
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }

    /**
     * <p>The name of the CloudWatch log group that is the destination for log
     * delivery.</p>
     */
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }

    /**
     * <p>The name of the CloudWatch log group that is the destination for log
     * delivery.</p>
     */
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }

    /**
     * <p>The name of the CloudWatch log group that is the destination for log
     * delivery.</p>
     */
    inline CloudWatchLogsLogDeliveryDescription& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}

    /**
     * <p>The name of the CloudWatch log group that is the destination for log
     * delivery.</p>
     */
    inline CloudWatchLogsLogDeliveryDescription& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch log group that is the destination for log
     * delivery.</p>
     */
    inline CloudWatchLogsLogDeliveryDescription& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
