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
   * <p>Information about the client connection logging options for a Client VPN
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ConnectionLogResponseOptions">AWS
   * API Reference</a></p>
   */
  class ConnectionLogResponseOptions
  {
  public:
    AWS_EC2_API ConnectionLogResponseOptions() = default;
    AWS_EC2_API ConnectionLogResponseOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ConnectionLogResponseOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether client connection logging is enabled for the Client VPN
     * endpoint.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ConnectionLogResponseOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon CloudWatch Logs log group to which connection logging
     * data is published.</p>
     */
    inline const Aws::String& GetCloudwatchLogGroup() const { return m_cloudwatchLogGroup; }
    inline bool CloudwatchLogGroupHasBeenSet() const { return m_cloudwatchLogGroupHasBeenSet; }
    template<typename CloudwatchLogGroupT = Aws::String>
    void SetCloudwatchLogGroup(CloudwatchLogGroupT&& value) { m_cloudwatchLogGroupHasBeenSet = true; m_cloudwatchLogGroup = std::forward<CloudwatchLogGroupT>(value); }
    template<typename CloudwatchLogGroupT = Aws::String>
    ConnectionLogResponseOptions& WithCloudwatchLogGroup(CloudwatchLogGroupT&& value) { SetCloudwatchLogGroup(std::forward<CloudwatchLogGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon CloudWatch Logs log stream to which connection logging
     * data is published.</p>
     */
    inline const Aws::String& GetCloudwatchLogStream() const { return m_cloudwatchLogStream; }
    inline bool CloudwatchLogStreamHasBeenSet() const { return m_cloudwatchLogStreamHasBeenSet; }
    template<typename CloudwatchLogStreamT = Aws::String>
    void SetCloudwatchLogStream(CloudwatchLogStreamT&& value) { m_cloudwatchLogStreamHasBeenSet = true; m_cloudwatchLogStream = std::forward<CloudwatchLogStreamT>(value); }
    template<typename CloudwatchLogStreamT = Aws::String>
    ConnectionLogResponseOptions& WithCloudwatchLogStream(CloudwatchLogStreamT&& value) { SetCloudwatchLogStream(std::forward<CloudwatchLogStreamT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_cloudwatchLogGroup;
    bool m_cloudwatchLogGroupHasBeenSet = false;

    Aws::String m_cloudwatchLogStream;
    bool m_cloudwatchLogStreamHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
