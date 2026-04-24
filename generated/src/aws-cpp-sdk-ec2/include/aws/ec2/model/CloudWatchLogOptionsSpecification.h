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
 * <p>Options for sending VPN tunnel logs to CloudWatch.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CloudWatchLogOptionsSpecification">AWS
 * API Reference</a></p>
 */
class CloudWatchLogOptionsSpecification {
 public:
  AWS_EC2_API CloudWatchLogOptionsSpecification() = default;
  AWS_EC2_API CloudWatchLogOptionsSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API CloudWatchLogOptionsSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Enable or disable VPN tunnel logging feature. Default value is
   * <code>False</code>.</p> <p>Valid values: <code>True</code> | <code>False</code>
   * </p>
   */
  inline bool GetLogEnabled() const { return m_logEnabled; }
  inline bool LogEnabledHasBeenSet() const { return m_logEnabledHasBeenSet; }
  inline void SetLogEnabled(bool value) {
    m_logEnabledHasBeenSet = true;
    m_logEnabled = value;
  }
  inline CloudWatchLogOptionsSpecification& WithLogEnabled(bool value) {
    SetLogEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the CloudWatch log group to send logs
   * to.</p>
   */
  inline const Aws::String& GetLogGroupArn() const { return m_logGroupArn; }
  inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }
  template <typename LogGroupArnT = Aws::String>
  void SetLogGroupArn(LogGroupArnT&& value) {
    m_logGroupArnHasBeenSet = true;
    m_logGroupArn = std::forward<LogGroupArnT>(value);
  }
  template <typename LogGroupArnT = Aws::String>
  CloudWatchLogOptionsSpecification& WithLogGroupArn(LogGroupArnT&& value) {
    SetLogGroupArn(std::forward<LogGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set log format. Default format is <code>json</code>.</p> <p>Valid values:
   * <code>json</code> | <code>text</code> </p>
   */
  inline const Aws::String& GetLogOutputFormat() const { return m_logOutputFormat; }
  inline bool LogOutputFormatHasBeenSet() const { return m_logOutputFormatHasBeenSet; }
  template <typename LogOutputFormatT = Aws::String>
  void SetLogOutputFormat(LogOutputFormatT&& value) {
    m_logOutputFormatHasBeenSet = true;
    m_logOutputFormat = std::forward<LogOutputFormatT>(value);
  }
  template <typename LogOutputFormatT = Aws::String>
  CloudWatchLogOptionsSpecification& WithLogOutputFormat(LogOutputFormatT&& value) {
    SetLogOutputFormat(std::forward<LogOutputFormatT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to enable BGP logging for the VPN connection. Default value
   * is <code>False</code>.</p> <p>Valid values: <code>True</code> |
   * <code>False</code> </p>
   */
  inline bool GetBgpLogEnabled() const { return m_bgpLogEnabled; }
  inline bool BgpLogEnabledHasBeenSet() const { return m_bgpLogEnabledHasBeenSet; }
  inline void SetBgpLogEnabled(bool value) {
    m_bgpLogEnabledHasBeenSet = true;
    m_bgpLogEnabled = value;
  }
  inline CloudWatchLogOptionsSpecification& WithBgpLogEnabled(bool value) {
    SetBgpLogEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the CloudWatch log group where BGP logs
   * will be sent.</p>
   */
  inline const Aws::String& GetBgpLogGroupArn() const { return m_bgpLogGroupArn; }
  inline bool BgpLogGroupArnHasBeenSet() const { return m_bgpLogGroupArnHasBeenSet; }
  template <typename BgpLogGroupArnT = Aws::String>
  void SetBgpLogGroupArn(BgpLogGroupArnT&& value) {
    m_bgpLogGroupArnHasBeenSet = true;
    m_bgpLogGroupArn = std::forward<BgpLogGroupArnT>(value);
  }
  template <typename BgpLogGroupArnT = Aws::String>
  CloudWatchLogOptionsSpecification& WithBgpLogGroupArn(BgpLogGroupArnT&& value) {
    SetBgpLogGroupArn(std::forward<BgpLogGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired output format for BGP logs to be sent to CloudWatch. Default
   * format is <code>json</code>.</p> <p>Valid values: <code>json</code> |
   * <code>text</code> </p>
   */
  inline const Aws::String& GetBgpLogOutputFormat() const { return m_bgpLogOutputFormat; }
  inline bool BgpLogOutputFormatHasBeenSet() const { return m_bgpLogOutputFormatHasBeenSet; }
  template <typename BgpLogOutputFormatT = Aws::String>
  void SetBgpLogOutputFormat(BgpLogOutputFormatT&& value) {
    m_bgpLogOutputFormatHasBeenSet = true;
    m_bgpLogOutputFormat = std::forward<BgpLogOutputFormatT>(value);
  }
  template <typename BgpLogOutputFormatT = Aws::String>
  CloudWatchLogOptionsSpecification& WithBgpLogOutputFormat(BgpLogOutputFormatT&& value) {
    SetBgpLogOutputFormat(std::forward<BgpLogOutputFormatT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_logEnabled{false};

  Aws::String m_logGroupArn;

  Aws::String m_logOutputFormat;

  bool m_bgpLogEnabled{false};

  Aws::String m_bgpLogGroupArn;

  Aws::String m_bgpLogOutputFormat;
  bool m_logEnabledHasBeenSet = false;
  bool m_logGroupArnHasBeenSet = false;
  bool m_logOutputFormatHasBeenSet = false;
  bool m_bgpLogEnabledHasBeenSet = false;
  bool m_bgpLogGroupArnHasBeenSet = false;
  bool m_bgpLogOutputFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
