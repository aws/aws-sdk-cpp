/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes the status of a Spot Instance request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotInstanceStatus">AWS
   * API Reference</a></p>
   */
  class SpotInstanceStatus
  {
  public:
    AWS_EC2_API SpotInstanceStatus();
    AWS_EC2_API SpotInstanceStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SpotInstanceStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The status code. For a list of status codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html#spot-instance-request-status-understand">Spot
     * request status codes</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The status code. For a list of status codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html#spot-instance-request-status-understand">Spot
     * request status codes</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The status code. For a list of status codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html#spot-instance-request-status-understand">Spot
     * request status codes</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The status code. For a list of status codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html#spot-instance-request-status-understand">Spot
     * request status codes</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The status code. For a list of status codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html#spot-instance-request-status-understand">Spot
     * request status codes</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The status code. For a list of status codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html#spot-instance-request-status-understand">Spot
     * request status codes</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline SpotInstanceStatus& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The status code. For a list of status codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html#spot-instance-request-status-understand">Spot
     * request status codes</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline SpotInstanceStatus& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The status code. For a list of status codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html#spot-instance-request-status-understand">Spot
     * request status codes</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline SpotInstanceStatus& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The description for the status code.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The description for the status code.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The description for the status code.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The description for the status code.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The description for the status code.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The description for the status code.</p>
     */
    inline SpotInstanceStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The description for the status code.</p>
     */
    inline SpotInstanceStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The description for the status code.</p>
     */
    inline SpotInstanceStatus& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The date and time of the most recent status update, in UTC format (for
     * example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The date and time of the most recent status update, in UTC format (for
     * example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The date and time of the most recent status update, in UTC format (for
     * example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The date and time of the most recent status update, in UTC format (for
     * example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The date and time of the most recent status update, in UTC format (for
     * example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline SpotInstanceStatus& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The date and time of the most recent status update, in UTC format (for
     * example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline SpotInstanceStatus& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
