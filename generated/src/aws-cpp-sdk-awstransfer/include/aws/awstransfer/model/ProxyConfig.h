/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/ProxyMode.h>

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
 * <p>Contains configuration for PROXY protocol version 2 (PPv2) support on an
 * Transfer Family server. When enabled, Transfer Family reads the added PPv2
 * header from incoming connections to extract the original client IP address. This
 * address is then available in Amazon CloudWatch Logs entries and is passed to
 * custom identity providers during authentication, enabling IP-based access
 * policies. For more information, see <a
 * href="https://docs.aws.amazon.com/transfer/latest/userguide/working-with-nlb.html">Working
 * with Network Load Balancers</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ProxyConfig">AWS
 * API Reference</a></p>
 */
class ProxyConfig {
 public:
  AWS_TRANSFER_API ProxyConfig() = default;
  AWS_TRANSFER_API ProxyConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API ProxyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether the Transfer Family server requires or ignores a PPv2
   * header containing the original client IP address on incoming SFTP connections.
   * If you don't specify a value, the default is <code>NONE</code> </p> <ul> <li>
   * <p> <code>NONE</code>: the server reads and ignores any PPv2 header on incoming
   * SFTP connections. This is the default value. Use this value when your SFTP
   * server is not behind an NLB, or when you do not need to preserve client source
   * IP addresses through an NLB.</p> </li> <li> <p>
   * <code>PROXY_PROTOCOL_V2_ENFORCED</code>: the server requires a valid PPv2 header
   * on every incoming SFTP connection. When a valid header is present, the server
   * applies it and uses the client IP address from the header. If a connection
   * arrives without a PPv2 header, the server refuses the connection and logs an
   * error to Amazon CloudWatch Logs indicating that the expected PPv2 header was
   * missing. Use this value when your SFTP server is behind an NLB with PPv2 enabled
   * on the target group.</p>  <p>When you enable
   * <code>PROXY_PROTOCOL_V2_ENFORCED</code>, the server trusts the source IP address
   * in the PPv2 header. You must configure security groups on your server's VPC
   * endpoint to restrict inbound traffic to only the NLB's private IP addresses. For
   * the full requirements, see <a
   * href="https://docs.aws.amazon.com/transfer/latest/userguide/working-with-nlb.html">Working
   * with Network Load Balancers</a>.</p>  </li> </ul>
   */
  inline ProxyMode GetSftpMode() const { return m_sftpMode; }
  inline bool SftpModeHasBeenSet() const { return m_sftpModeHasBeenSet; }
  inline void SetSftpMode(ProxyMode value) {
    m_sftpModeHasBeenSet = true;
    m_sftpMode = value;
  }
  inline ProxyConfig& WithSftpMode(ProxyMode value) {
    SetSftpMode(value);
    return *this;
  }
  ///@}
 private:
  ProxyMode m_sftpMode{ProxyMode::NOT_SET};
  bool m_sftpModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
