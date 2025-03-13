/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceAutoRecoveryState.h>
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
   * <p>The maintenance options for the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceMaintenanceOptionsRequest">AWS
   * API Reference</a></p>
   */
  class InstanceMaintenanceOptionsRequest
  {
  public:
    AWS_EC2_API InstanceMaintenanceOptionsRequest() = default;
    AWS_EC2_API InstanceMaintenanceOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceMaintenanceOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Disables the automatic recovery behavior of your instance or sets it to
     * default. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-recover.html#instance-configuration-recovery">Simplified
     * automatic recovery</a>.</p>
     */
    inline InstanceAutoRecoveryState GetAutoRecovery() const { return m_autoRecovery; }
    inline bool AutoRecoveryHasBeenSet() const { return m_autoRecoveryHasBeenSet; }
    inline void SetAutoRecovery(InstanceAutoRecoveryState value) { m_autoRecoveryHasBeenSet = true; m_autoRecovery = value; }
    inline InstanceMaintenanceOptionsRequest& WithAutoRecovery(InstanceAutoRecoveryState value) { SetAutoRecovery(value); return *this;}
    ///@}
  private:

    InstanceAutoRecoveryState m_autoRecovery{InstanceAutoRecoveryState::NOT_SET};
    bool m_autoRecoveryHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
