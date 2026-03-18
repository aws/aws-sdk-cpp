/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Indicates default conntrack information for the instance type. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-connection-tracking.html#connection-tracking-timeouts">
 * Connection tracking timeouts </a> in the Amazon EC2 User Guide. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DefaultConnectionTrackingConfiguration">AWS
 * API Reference</a></p>
 */
class DefaultConnectionTrackingConfiguration {
 public:
  AWS_EC2_API DefaultConnectionTrackingConfiguration() = default;
  AWS_EC2_API DefaultConnectionTrackingConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API DefaultConnectionTrackingConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Default timeout (in seconds) for idle TCP connections in an established
   * state.</p>
   */
  inline int GetDefaultTcpEstablishedTimeout() const { return m_defaultTcpEstablishedTimeout; }
  inline bool DefaultTcpEstablishedTimeoutHasBeenSet() const { return m_defaultTcpEstablishedTimeoutHasBeenSet; }
  inline void SetDefaultTcpEstablishedTimeout(int value) {
    m_defaultTcpEstablishedTimeoutHasBeenSet = true;
    m_defaultTcpEstablishedTimeout = value;
  }
  inline DefaultConnectionTrackingConfiguration& WithDefaultTcpEstablishedTimeout(int value) {
    SetDefaultTcpEstablishedTimeout(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Default timeout (in seconds) for idle UDP flows that have seen traffic only
   * in a single direction or a single request-response transaction.</p>
   */
  inline int GetDefaultUdpTimeout() const { return m_defaultUdpTimeout; }
  inline bool DefaultUdpTimeoutHasBeenSet() const { return m_defaultUdpTimeoutHasBeenSet; }
  inline void SetDefaultUdpTimeout(int value) {
    m_defaultUdpTimeoutHasBeenSet = true;
    m_defaultUdpTimeout = value;
  }
  inline DefaultConnectionTrackingConfiguration& WithDefaultUdpTimeout(int value) {
    SetDefaultUdpTimeout(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Default timeout (in seconds) for idle UDP flows classified as streams which
   * have seen more than one request-response transaction.</p>
   */
  inline int GetDefaultUdpStreamTimeout() const { return m_defaultUdpStreamTimeout; }
  inline bool DefaultUdpStreamTimeoutHasBeenSet() const { return m_defaultUdpStreamTimeoutHasBeenSet; }
  inline void SetDefaultUdpStreamTimeout(int value) {
    m_defaultUdpStreamTimeoutHasBeenSet = true;
    m_defaultUdpStreamTimeout = value;
  }
  inline DefaultConnectionTrackingConfiguration& WithDefaultUdpStreamTimeout(int value) {
    SetDefaultUdpStreamTimeout(value);
    return *this;
  }
  ///@}
 private:
  int m_defaultTcpEstablishedTimeout{0};

  int m_defaultUdpTimeout{0};

  int m_defaultUdpStreamTimeout{0};
  bool m_defaultTcpEstablishedTimeoutHasBeenSet = false;
  bool m_defaultUdpTimeoutHasBeenSet = false;
  bool m_defaultUdpStreamTimeoutHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
