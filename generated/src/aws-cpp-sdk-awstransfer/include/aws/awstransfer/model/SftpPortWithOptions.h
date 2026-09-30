/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/CommunicationMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Transfer {
namespace Model {

/**
 * <p>Specifies the configuration for a single SFTP port on a Transfer Family
 * server that uses the SFTP protocol and has a <code>PUBLIC</code> endpoint. Each
 * entry in the <code>SftpPorts</code> list is an <code>SftpPortWithOptions</code>
 * object that pairs a port number with a communication mode.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/SftpPortWithOptions">AWS
 * API Reference</a></p>
 */
class SftpPortWithOptions {
 public:
  AWS_TRANSFER_API SftpPortWithOptions() = default;
  AWS_TRANSFER_API SftpPortWithOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API SftpPortWithOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The port on which the Transfer Family server listens for SFTP connections.
   * Specify any integer from 2000 to 65535, or 22. This value is required for each
   * entry in the <code>SftpPorts</code> list.</p>
   */
  inline int GetSftpPort() const { return m_sftpPort; }
  inline bool SftpPortHasBeenSet() const { return m_sftpPortHasBeenSet; }
  inline void SetSftpPort(int value) {
    m_sftpPortHasBeenSet = true;
    m_sftpPort = value;
  }
  inline SftpPortWithOptions& WithSftpPort(int value) {
    SetSftpPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines whether the server or the client sends data first when a client
   * establishes an SFTP connection on this port. Valid values are
   * <code>SERVER_TALK_FIRST</code> and <code>CLIENT_TALK_FIRST</code>. For a
   * description of each mode, see the <code>SftpPorts</code> property. This value is
   * optional.</p>
   */
  inline CommunicationMode GetCommunicationMode() const { return m_communicationMode; }
  inline bool CommunicationModeHasBeenSet() const { return m_communicationModeHasBeenSet; }
  inline void SetCommunicationMode(CommunicationMode value) {
    m_communicationModeHasBeenSet = true;
    m_communicationMode = value;
  }
  inline SftpPortWithOptions& WithCommunicationMode(CommunicationMode value) {
    SetCommunicationMode(value);
    return *this;
  }
  ///@}
 private:
  int m_sftpPort{0};

  CommunicationMode m_communicationMode{CommunicationMode::NOT_SET};
  bool m_sftpPortHasBeenSet = false;
  bool m_communicationModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
