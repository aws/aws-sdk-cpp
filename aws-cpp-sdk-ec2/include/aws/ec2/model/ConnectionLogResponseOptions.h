/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Information about the client connection logging options for a Client VPN
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ConnectionLogResponseOptions">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ConnectionLogResponseOptions
  {
  public:
    ConnectionLogResponseOptions();
    ConnectionLogResponseOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    ConnectionLogResponseOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether client connection logging is enabled for the Client VPN
     * endpoint.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether client connection logging is enabled for the Client VPN
     * endpoint.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether client connection logging is enabled for the Client VPN
     * endpoint.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether client connection logging is enabled for the Client VPN
     * endpoint.</p>
     */
    inline ConnectionLogResponseOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The name of the Amazon CloudWatch Logs log group to which connection logging
     * data is published.</p>
     */
    inline const Aws::String& GetCloudwatchLogGroup() const{ return m_cloudwatchLogGroup; }

    /**
     * <p>The name of the Amazon CloudWatch Logs log group to which connection logging
     * data is published.</p>
     */
    inline bool CloudwatchLogGroupHasBeenSet() const { return m_cloudwatchLogGroupHasBeenSet; }

    /**
     * <p>The name of the Amazon CloudWatch Logs log group to which connection logging
     * data is published.</p>
     */
    inline void SetCloudwatchLogGroup(const Aws::String& value) { m_cloudwatchLogGroupHasBeenSet = true; m_cloudwatchLogGroup = value; }

    /**
     * <p>The name of the Amazon CloudWatch Logs log group to which connection logging
     * data is published.</p>
     */
    inline void SetCloudwatchLogGroup(Aws::String&& value) { m_cloudwatchLogGroupHasBeenSet = true; m_cloudwatchLogGroup = std::move(value); }

    /**
     * <p>The name of the Amazon CloudWatch Logs log group to which connection logging
     * data is published.</p>
     */
    inline void SetCloudwatchLogGroup(const char* value) { m_cloudwatchLogGroupHasBeenSet = true; m_cloudwatchLogGroup.assign(value); }

    /**
     * <p>The name of the Amazon CloudWatch Logs log group to which connection logging
     * data is published.</p>
     */
    inline ConnectionLogResponseOptions& WithCloudwatchLogGroup(const Aws::String& value) { SetCloudwatchLogGroup(value); return *this;}

    /**
     * <p>The name of the Amazon CloudWatch Logs log group to which connection logging
     * data is published.</p>
     */
    inline ConnectionLogResponseOptions& WithCloudwatchLogGroup(Aws::String&& value) { SetCloudwatchLogGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon CloudWatch Logs log group to which connection logging
     * data is published.</p>
     */
    inline ConnectionLogResponseOptions& WithCloudwatchLogGroup(const char* value) { SetCloudwatchLogGroup(value); return *this;}


    /**
     * <p>The name of the Amazon CloudWatch Logs log stream to which connection logging
     * data is published.</p>
     */
    inline const Aws::String& GetCloudwatchLogStream() const{ return m_cloudwatchLogStream; }

    /**
     * <p>The name of the Amazon CloudWatch Logs log stream to which connection logging
     * data is published.</p>
     */
    inline bool CloudwatchLogStreamHasBeenSet() const { return m_cloudwatchLogStreamHasBeenSet; }

    /**
     * <p>The name of the Amazon CloudWatch Logs log stream to which connection logging
     * data is published.</p>
     */
    inline void SetCloudwatchLogStream(const Aws::String& value) { m_cloudwatchLogStreamHasBeenSet = true; m_cloudwatchLogStream = value; }

    /**
     * <p>The name of the Amazon CloudWatch Logs log stream to which connection logging
     * data is published.</p>
     */
    inline void SetCloudwatchLogStream(Aws::String&& value) { m_cloudwatchLogStreamHasBeenSet = true; m_cloudwatchLogStream = std::move(value); }

    /**
     * <p>The name of the Amazon CloudWatch Logs log stream to which connection logging
     * data is published.</p>
     */
    inline void SetCloudwatchLogStream(const char* value) { m_cloudwatchLogStreamHasBeenSet = true; m_cloudwatchLogStream.assign(value); }

    /**
     * <p>The name of the Amazon CloudWatch Logs log stream to which connection logging
     * data is published.</p>
     */
    inline ConnectionLogResponseOptions& WithCloudwatchLogStream(const Aws::String& value) { SetCloudwatchLogStream(value); return *this;}

    /**
     * <p>The name of the Amazon CloudWatch Logs log stream to which connection logging
     * data is published.</p>
     */
    inline ConnectionLogResponseOptions& WithCloudwatchLogStream(Aws::String&& value) { SetCloudwatchLogStream(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon CloudWatch Logs log stream to which connection logging
     * data is published.</p>
     */
    inline ConnectionLogResponseOptions& WithCloudwatchLogStream(const char* value) { SetCloudwatchLogStream(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_cloudwatchLogGroup;
    bool m_cloudwatchLogGroupHasBeenSet;

    Aws::String m_cloudwatchLogStream;
    bool m_cloudwatchLogStreamHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
