/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/SyslogSourceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {

/**
 * <p>Contains information about a syslog configuration associated with a log
 * group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/SyslogConfiguration">AWS
 * API Reference</a></p>
 */
class SyslogConfiguration {
 public:
  AWS_CLOUDWATCHLOGS_API SyslogConfiguration() = default;
  AWS_CLOUDWATCHLOGS_API SyslogConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API SyslogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the log group associated with this syslog configuration.</p>
   */
  inline const Aws::String& GetLogGroupArn() const { return m_logGroupArn; }
  inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }
  template <typename LogGroupArnT = Aws::String>
  void SetLogGroupArn(LogGroupArnT&& value) {
    m_logGroupArnHasBeenSet = true;
    m_logGroupArn = std::forward<LogGroupArnT>(value);
  }
  template <typename LogGroupArnT = Aws::String>
  SyslogConfiguration& WithLogGroupArn(LogGroupArnT&& value) {
    SetLogGroupArn(std::forward<LogGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source type for the syslog configuration.</p>
   */
  inline SyslogSourceType GetSourceType() const { return m_sourceType; }
  inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
  inline void SetSourceType(SyslogSourceType value) {
    m_sourceTypeHasBeenSet = true;
    m_sourceType = value;
  }
  inline SyslogConfiguration& WithSourceType(SyslogSourceType value) {
    SetSourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the VPC endpoint used for syslog ingestion.</p>
   */
  inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
  inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
  template <typename VpcEndpointIdT = Aws::String>
  void SetVpcEndpointId(VpcEndpointIdT&& value) {
    m_vpcEndpointIdHasBeenSet = true;
    m_vpcEndpointId = std::forward<VpcEndpointIdT>(value);
  }
  template <typename VpcEndpointIdT = Aws::String>
  SyslogConfiguration& WithVpcEndpointId(VpcEndpointIdT&& value) {
    SetVpcEndpointId(std::forward<VpcEndpointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the syslog configuration was created, expressed as the number
   * of milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
   */
  inline long long GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  inline void SetCreatedAt(long long value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = value;
  }
  inline SyslogConfiguration& WithCreatedAt(long long value) {
    SetCreatedAt(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_logGroupArn;

  SyslogSourceType m_sourceType{SyslogSourceType::NOT_SET};

  Aws::String m_vpcEndpointId;

  long long m_createdAt{0};
  bool m_logGroupArnHasBeenSet = false;
  bool m_sourceTypeHasBeenSet = false;
  bool m_vpcEndpointIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
