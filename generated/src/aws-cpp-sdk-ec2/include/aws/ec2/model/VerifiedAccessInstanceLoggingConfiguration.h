/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VerifiedAccessLogs.h>
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
   * <p>Describes logging options for an Amazon Web Services Verified Access
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessInstanceLoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessInstanceLoggingConfiguration
  {
  public:
    AWS_EC2_API VerifiedAccessInstanceLoggingConfiguration() = default;
    AWS_EC2_API VerifiedAccessInstanceLoggingConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessInstanceLoggingConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline const Aws::String& GetVerifiedAccessInstanceId() const { return m_verifiedAccessInstanceId; }
    inline bool VerifiedAccessInstanceIdHasBeenSet() const { return m_verifiedAccessInstanceIdHasBeenSet; }
    template<typename VerifiedAccessInstanceIdT = Aws::String>
    void SetVerifiedAccessInstanceId(VerifiedAccessInstanceIdT&& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = std::forward<VerifiedAccessInstanceIdT>(value); }
    template<typename VerifiedAccessInstanceIdT = Aws::String>
    VerifiedAccessInstanceLoggingConfiguration& WithVerifiedAccessInstanceId(VerifiedAccessInstanceIdT&& value) { SetVerifiedAccessInstanceId(std::forward<VerifiedAccessInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the logging options.</p>
     */
    inline const VerifiedAccessLogs& GetAccessLogs() const { return m_accessLogs; }
    inline bool AccessLogsHasBeenSet() const { return m_accessLogsHasBeenSet; }
    template<typename AccessLogsT = VerifiedAccessLogs>
    void SetAccessLogs(AccessLogsT&& value) { m_accessLogsHasBeenSet = true; m_accessLogs = std::forward<AccessLogsT>(value); }
    template<typename AccessLogsT = VerifiedAccessLogs>
    VerifiedAccessInstanceLoggingConfiguration& WithAccessLogs(AccessLogsT&& value) { SetAccessLogs(std::forward<AccessLogsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_verifiedAccessInstanceId;
    bool m_verifiedAccessInstanceIdHasBeenSet = false;

    VerifiedAccessLogs m_accessLogs;
    bool m_accessLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
