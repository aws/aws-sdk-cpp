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
   * <p>Describes the client connection logging options for the Client VPN
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ConnectionLogOptions">AWS
   * API Reference</a></p>
   */
  class ConnectionLogOptions
  {
  public:
    AWS_EC2_API ConnectionLogOptions();
    AWS_EC2_API ConnectionLogOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ConnectionLogOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether connection logging is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether connection logging is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether connection logging is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether connection logging is enabled.</p>
     */
    inline ConnectionLogOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The name of the CloudWatch Logs log group. Required if connection logging is
     * enabled.</p>
     */
    inline const Aws::String& GetCloudwatchLogGroup() const{ return m_cloudwatchLogGroup; }

    /**
     * <p>The name of the CloudWatch Logs log group. Required if connection logging is
     * enabled.</p>
     */
    inline bool CloudwatchLogGroupHasBeenSet() const { return m_cloudwatchLogGroupHasBeenSet; }

    /**
     * <p>The name of the CloudWatch Logs log group. Required if connection logging is
     * enabled.</p>
     */
    inline void SetCloudwatchLogGroup(const Aws::String& value) { m_cloudwatchLogGroupHasBeenSet = true; m_cloudwatchLogGroup = value; }

    /**
     * <p>The name of the CloudWatch Logs log group. Required if connection logging is
     * enabled.</p>
     */
    inline void SetCloudwatchLogGroup(Aws::String&& value) { m_cloudwatchLogGroupHasBeenSet = true; m_cloudwatchLogGroup = std::move(value); }

    /**
     * <p>The name of the CloudWatch Logs log group. Required if connection logging is
     * enabled.</p>
     */
    inline void SetCloudwatchLogGroup(const char* value) { m_cloudwatchLogGroupHasBeenSet = true; m_cloudwatchLogGroup.assign(value); }

    /**
     * <p>The name of the CloudWatch Logs log group. Required if connection logging is
     * enabled.</p>
     */
    inline ConnectionLogOptions& WithCloudwatchLogGroup(const Aws::String& value) { SetCloudwatchLogGroup(value); return *this;}

    /**
     * <p>The name of the CloudWatch Logs log group. Required if connection logging is
     * enabled.</p>
     */
    inline ConnectionLogOptions& WithCloudwatchLogGroup(Aws::String&& value) { SetCloudwatchLogGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch Logs log group. Required if connection logging is
     * enabled.</p>
     */
    inline ConnectionLogOptions& WithCloudwatchLogGroup(const char* value) { SetCloudwatchLogGroup(value); return *this;}


    /**
     * <p>The name of the CloudWatch Logs log stream to which the connection data is
     * published.</p>
     */
    inline const Aws::String& GetCloudwatchLogStream() const{ return m_cloudwatchLogStream; }

    /**
     * <p>The name of the CloudWatch Logs log stream to which the connection data is
     * published.</p>
     */
    inline bool CloudwatchLogStreamHasBeenSet() const { return m_cloudwatchLogStreamHasBeenSet; }

    /**
     * <p>The name of the CloudWatch Logs log stream to which the connection data is
     * published.</p>
     */
    inline void SetCloudwatchLogStream(const Aws::String& value) { m_cloudwatchLogStreamHasBeenSet = true; m_cloudwatchLogStream = value; }

    /**
     * <p>The name of the CloudWatch Logs log stream to which the connection data is
     * published.</p>
     */
    inline void SetCloudwatchLogStream(Aws::String&& value) { m_cloudwatchLogStreamHasBeenSet = true; m_cloudwatchLogStream = std::move(value); }

    /**
     * <p>The name of the CloudWatch Logs log stream to which the connection data is
     * published.</p>
     */
    inline void SetCloudwatchLogStream(const char* value) { m_cloudwatchLogStreamHasBeenSet = true; m_cloudwatchLogStream.assign(value); }

    /**
     * <p>The name of the CloudWatch Logs log stream to which the connection data is
     * published.</p>
     */
    inline ConnectionLogOptions& WithCloudwatchLogStream(const Aws::String& value) { SetCloudwatchLogStream(value); return *this;}

    /**
     * <p>The name of the CloudWatch Logs log stream to which the connection data is
     * published.</p>
     */
    inline ConnectionLogOptions& WithCloudwatchLogStream(Aws::String&& value) { SetCloudwatchLogStream(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch Logs log stream to which the connection data is
     * published.</p>
     */
    inline ConnectionLogOptions& WithCloudwatchLogStream(const char* value) { SetCloudwatchLogStream(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_cloudwatchLogGroup;
    bool m_cloudwatchLogGroupHasBeenSet = false;

    Aws::String m_cloudwatchLogStream;
    bool m_cloudwatchLogStreamHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
