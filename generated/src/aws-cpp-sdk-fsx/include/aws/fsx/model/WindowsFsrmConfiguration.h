/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {

/**
 * <p>The File Server Resource Manager (FSRM) configuration that Amazon FSx for
 * Windows File Server uses for the file system. When FSRM is enabled, you can
 * manage and monitor storage quotas, file screening, storage reports, and file
 * classification.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/WindowsFsrmConfiguration">AWS
 * API Reference</a></p>
 */
class WindowsFsrmConfiguration {
 public:
  AWS_FSX_API WindowsFsrmConfiguration() = default;
  AWS_FSX_API WindowsFsrmConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API WindowsFsrmConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether FSRM is enabled or disabled on the file system. When
   * <code>TRUE</code>, the FSRM service is enabled and monitor file operations
   * according to configured policies. When <code>FALSE</code> or omitted, FSRM is
   * disabled. The default value is <code>FALSE</code>. </p>
   */
  inline bool GetFsrmServiceEnabled() const { return m_fsrmServiceEnabled; }
  inline bool FsrmServiceEnabledHasBeenSet() const { return m_fsrmServiceEnabledHasBeenSet; }
  inline void SetFsrmServiceEnabled(bool value) {
    m_fsrmServiceEnabledHasBeenSet = true;
    m_fsrmServiceEnabled = value;
  }
  inline WindowsFsrmConfiguration& WithFsrmServiceEnabled(bool value) {
    SetFsrmServiceEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the destination of the FSRM event logs.
   * The destination can be any Amazon CloudWatch Logs log group ARN or Amazon
   * Kinesis Data Firehose delivery stream ARN.</p> <p>The name of the Amazon
   * CloudWatch Logs log group must begin with the <code>/aws/fsx</code> prefix. The
   * name of the Amazon Kinesis Data Firehose delivery stream must begin with the
   * <code>aws-fsx</code> prefix.</p> <p>The destination ARN (either CloudWatch Logs
   * log group or Kinesis Data Firehose delivery stream) must be in the same Amazon
   * Web Services partition, Amazon Web Services Region, and Amazon Web Services
   * account as your Amazon FSx file system.</p>
   */
  inline const Aws::String& GetEventLogDestination() const { return m_eventLogDestination; }
  inline bool EventLogDestinationHasBeenSet() const { return m_eventLogDestinationHasBeenSet; }
  template <typename EventLogDestinationT = Aws::String>
  void SetEventLogDestination(EventLogDestinationT&& value) {
    m_eventLogDestinationHasBeenSet = true;
    m_eventLogDestination = std::forward<EventLogDestinationT>(value);
  }
  template <typename EventLogDestinationT = Aws::String>
  WindowsFsrmConfiguration& WithEventLogDestination(EventLogDestinationT&& value) {
    SetEventLogDestination(std::forward<EventLogDestinationT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_fsrmServiceEnabled{false};
  bool m_fsrmServiceEnabledHasBeenSet = false;

  Aws::String m_eventLogDestination;
  bool m_eventLogDestinationHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
