/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Options for sending VPN tunnel logs to CloudWatch.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CloudWatchLogOptionsSpecification">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogOptionsSpecification
  {
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
    inline void SetLogEnabled(bool value) { m_logEnabledHasBeenSet = true; m_logEnabled = value; }
    inline CloudWatchLogOptionsSpecification& WithLogEnabled(bool value) { SetLogEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log group to send logs
     * to.</p>
     */
    inline const Aws::String& GetLogGroupArn() const { return m_logGroupArn; }
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }
    template<typename LogGroupArnT = Aws::String>
    void SetLogGroupArn(LogGroupArnT&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::forward<LogGroupArnT>(value); }
    template<typename LogGroupArnT = Aws::String>
    CloudWatchLogOptionsSpecification& WithLogGroupArn(LogGroupArnT&& value) { SetLogGroupArn(std::forward<LogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set log format. Default format is <code>json</code>.</p> <p>Valid values:
     * <code>json</code> | <code>text</code> </p>
     */
    inline const Aws::String& GetLogOutputFormat() const { return m_logOutputFormat; }
    inline bool LogOutputFormatHasBeenSet() const { return m_logOutputFormatHasBeenSet; }
    template<typename LogOutputFormatT = Aws::String>
    void SetLogOutputFormat(LogOutputFormatT&& value) { m_logOutputFormatHasBeenSet = true; m_logOutputFormat = std::forward<LogOutputFormatT>(value); }
    template<typename LogOutputFormatT = Aws::String>
    CloudWatchLogOptionsSpecification& WithLogOutputFormat(LogOutputFormatT&& value) { SetLogOutputFormat(std::forward<LogOutputFormatT>(value)); return *this;}
    ///@}
  private:

    bool m_logEnabled{false};
    bool m_logEnabledHasBeenSet = false;

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;

    Aws::String m_logOutputFormat;
    bool m_logOutputFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
