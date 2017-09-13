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
  class AWS_EC2_API NetworkInterfacePermissionState
  {
  public:
    NetworkInterfacePermissionState();
    NetworkInterfacePermissionState(const Aws::Utils::Xml::XmlNode& xmlNode);
    NetworkInterfacePermissionState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The state of the permission.</p>
     */
    inline const NetworkInterfacePermissionStateCode& GetState() const{ return m_state; }

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
    bool m_stateHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
