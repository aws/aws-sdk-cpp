/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/NetworkInterfacePermissionStateCode.h>
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
   * <p>Describes the state of a network interface permission.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInterfacePermissionState">AWS
   * API Reference</a></p>
   */
  class NetworkInterfacePermissionState
  {
  public:
    AWS_EC2_API NetworkInterfacePermissionState();
    AWS_EC2_API NetworkInterfacePermissionState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInterfacePermissionState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The state of the permission.</p>
     */
    inline const NetworkInterfacePermissionStateCode& GetState() const{ return m_state; }

    /**
     * <p>The state of the permission.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the permission.</p>
     */
    inline void SetState(const NetworkInterfacePermissionStateCode& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the permission.</p>
     */
    inline void SetState(NetworkInterfacePermissionStateCode&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the permission.</p>
     */
    inline NetworkInterfacePermissionState& WithState(const NetworkInterfacePermissionStateCode& value) { SetState(value); return *this;}

    /**
     * <p>The state of the permission.</p>
     */
    inline NetworkInterfacePermissionState& WithState(NetworkInterfacePermissionStateCode&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A status message, if applicable.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A status message, if applicable.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A status message, if applicable.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A status message, if applicable.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A status message, if applicable.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A status message, if applicable.</p>
     */
    inline NetworkInterfacePermissionState& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A status message, if applicable.</p>
     */
    inline NetworkInterfacePermissionState& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A status message, if applicable.</p>
     */
    inline NetworkInterfacePermissionState& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    NetworkInterfacePermissionStateCode m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
