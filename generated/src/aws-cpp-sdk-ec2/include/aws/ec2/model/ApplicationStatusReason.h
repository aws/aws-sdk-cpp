/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes the reason for an application status check result.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ApplicationStatusReason">AWS
 * API Reference</a></p>
 */
class ApplicationStatusReason {
 public:
  AWS_EC2_API ApplicationStatusReason() = default;
  AWS_EC2_API ApplicationStatusReason(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ApplicationStatusReason& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The reason code for the application status check result. Possible values:</p>
   * <ul> <li> <p> <code>ResponseCodeMatched</code> – The HTTP status code returned
   * by the health check matched the configured <code>StatusCodeMatcher</code>.</p>
   * </li> <li> <p> <code>ResponseCodeMismatch</code> – The HTTP status code returned
   * by the health check did not match the configured
   * <code>StatusCodeMatcher</code>.</p> </li> <li> <p>
   * <code>ConnectionTimeout</code> – The connection to the target timed out.</p>
   * </li> <li> <p> <code>ResponseTimeout</code> – The health check timed out while
   * waiting for a response from the target.</p> </li> <li> <p>
   * <code>ConnectionRefused</code> – The target refused the health check
   * connection.</p> </li> <li> <p> <code>ConnectionReset</code> – The target reset
   * the health check connection before returning a response.</p> </li> </ul>
   * <p>Current health check results use the values in the preceding list. Legacy
   * results that do not contain structured reason metadata can instead contain a
   * producer error type, such as <code>Http Status Code</code> or
   * <code>HttpConnectTimeoutException</code>.</p> <p>For
   * <code>ResponseCodeMatched</code> and <code>ResponseCodeMismatch</code>, the
   * <code>statusCode</code> field contains the returned HTTP status code. The
   * <code>protocol</code> field contains the protocol used for the health check.</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  ApplicationStatusReason& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP status code returned by the health check.</p>
   */
  inline int GetStatusCode() const { return m_statusCode; }
  inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
  inline void SetStatusCode(int value) {
    m_statusCodeHasBeenSet = true;
    m_statusCode = value;
  }
  inline ApplicationStatusReason& WithStatusCode(int value) {
    SetStatusCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol used for the health check. Possible values: <code>HTTP</code>
   * and <code>HTTPS</code>.</p>
   */
  inline const Aws::String& GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  template <typename ProtocolT = Aws::String>
  void SetProtocol(ProtocolT&& value) {
    m_protocolHasBeenSet = true;
    m_protocol = std::forward<ProtocolT>(value);
  }
  template <typename ProtocolT = Aws::String>
  ApplicationStatusReason& WithProtocol(ProtocolT&& value) {
    SetProtocol(std::forward<ProtocolT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_code;

  int m_statusCode{0};

  Aws::String m_protocol;
  bool m_codeHasBeenSet = false;
  bool m_statusCodeHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
