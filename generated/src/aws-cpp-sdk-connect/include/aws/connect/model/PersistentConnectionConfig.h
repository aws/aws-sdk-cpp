/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Channel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Configuration settings for persistent connection for a specific
 * channel.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PersistentConnectionConfig">AWS
 * API Reference</a></p>
 */
class PersistentConnectionConfig {
 public:
  AWS_CONNECT_API PersistentConnectionConfig() = default;
  AWS_CONNECT_API PersistentConnectionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API PersistentConnectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration settings for persistent connection. <b>Only <code>VOICE</code>
   * is supported for this data type.</b> </p>
   */
  inline Channel GetChannel() const { return m_channel; }
  inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
  inline void SetChannel(Channel value) {
    m_channelHasBeenSet = true;
    m_channel = value;
  }
  inline PersistentConnectionConfig& WithChannel(Channel value) {
    SetChannel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether persistent connection is enabled. When enabled, the agent's
   * connection is maintained after a call ends, enabling subsequent calls to connect
   * faster.</p>
   */
  inline bool GetPersistentConnection() const { return m_persistentConnection; }
  inline bool PersistentConnectionHasBeenSet() const { return m_persistentConnectionHasBeenSet; }
  inline void SetPersistentConnection(bool value) {
    m_persistentConnectionHasBeenSet = true;
    m_persistentConnection = value;
  }
  inline PersistentConnectionConfig& WithPersistentConnection(bool value) {
    SetPersistentConnection(value);
    return *this;
  }
  ///@}
 private:
  Channel m_channel{Channel::NOT_SET};

  bool m_persistentConnection{false};
  bool m_channelHasBeenSet = false;
  bool m_persistentConnectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
