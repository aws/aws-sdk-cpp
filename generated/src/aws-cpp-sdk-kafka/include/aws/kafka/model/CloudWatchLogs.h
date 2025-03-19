/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
namespace Kafka
{
namespace Model
{

  class CloudWatchLogs
  {
  public:
    AWS_KAFKA_API CloudWatchLogs() = default;
    AWS_KAFKA_API CloudWatchLogs(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API CloudWatchLogs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CloudWatchLogs& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLogGroup() const { return m_logGroup; }
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
    template<typename LogGroupT = Aws::String>
    void SetLogGroup(LogGroupT&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::forward<LogGroupT>(value); }
    template<typename LogGroupT = Aws::String>
    CloudWatchLogs& WithLogGroup(LogGroupT&& value) { SetLogGroup(std::forward<LogGroupT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
