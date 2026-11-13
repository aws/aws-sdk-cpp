/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains the amount of data that network activity transferred.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/NetworkTraffic">AWS
 * API Reference</a></p>
 */
class NetworkTraffic {
 public:
  AWS_GUARDDUTY_API NetworkTraffic() = default;
  AWS_GUARDDUTY_API NetworkTraffic(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API NetworkTraffic& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of bytes sent.</p>
   */
  inline long long GetBytesSent() const { return m_bytesSent; }
  inline bool BytesSentHasBeenSet() const { return m_bytesSentHasBeenSet; }
  inline void SetBytesSent(long long value) {
    m_bytesSentHasBeenSet = true;
    m_bytesSent = value;
  }
  inline NetworkTraffic& WithBytesSent(long long value) {
    SetBytesSent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of bytes received.</p>
   */
  inline long long GetBytesReceived() const { return m_bytesReceived; }
  inline bool BytesReceivedHasBeenSet() const { return m_bytesReceivedHasBeenSet; }
  inline void SetBytesReceived(long long value) {
    m_bytesReceivedHasBeenSet = true;
    m_bytesReceived = value;
  }
  inline NetworkTraffic& WithBytesReceived(long long value) {
    SetBytesReceived(value);
    return *this;
  }
  ///@}
 private:
  long long m_bytesSent{0};

  long long m_bytesReceived{0};
  bool m_bytesSentHasBeenSet = false;
  bool m_bytesReceivedHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
