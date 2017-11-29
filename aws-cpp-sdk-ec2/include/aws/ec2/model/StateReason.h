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
   * <p>Describes a state change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StateReason">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API StateReason
  {
  public:
    StateReason();
    StateReason(const Aws::Utils::Xml::XmlNode& xmlNode);
    StateReason& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The reason code for the state change.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The reason code for the state change.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The reason code for the state change.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The reason code for the state change.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The reason code for the state change.</p>
     */
    inline StateReason& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The reason code for the state change.</p>
     */
    inline StateReason& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The reason code for the state change.</p>
     */
    inline StateReason& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The message for the state change.</p> <ul> <li> <p>
     * <code>Server.InsufficientInstanceCapacity</code>: There was insufficient
     * instance capacity to satisfy the launch request.</p> </li> <li> <p>
     * <code>Server.InternalError</code>: An internal error occurred during instance
     * launch, resulting in termination.</p> </li> <li> <p>
     * <code>Server.ScheduledStop</code>: The instance was stopped due to a scheduled
     * retirement.</p> </li> <li> <p> <code>Server.SpotInstanceTermination</code>: A
     * Spot Instance was terminated due to an increase in the Spot price.</p> </li>
     * <li> <p> <code>Client.InternalError</code>: A client error caused the instance
     * to terminate on launch.</p> </li> <li> <p>
     * <code>Client.InstanceInitiatedShutdown</code>: The instance was shut down using
     * the <code>shutdown -h</code> command from the instance.</p> </li> <li> <p>
     * <code>Client.InstanceTerminated</code>: The instance was terminated or rebooted
     * during AMI creation.</p> </li> <li> <p>
     * <code>Client.UserInitiatedShutdown</code>: The instance was shut down using the
     * Amazon EC2 API.</p> </li> <li> <p> <code>Client.VolumeLimitExceeded</code>: The
     * limit on the number of EBS volumes or total storage was exceeded. Decrease usage
     * or request an increase in your limits.</p> </li> <li> <p>
     * <code>Client.InvalidSnapshot.NotFound</code>: The specified snapshot was not
     * found.</p> </li> </ul>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message for the state change.</p> <ul> <li> <p>
     * <code>Server.InsufficientInstanceCapacity</code>: There was insufficient
     * instance capacity to satisfy the launch request.</p> </li> <li> <p>
     * <code>Server.InternalError</code>: An internal error occurred during instance
     * launch, resulting in termination.</p> </li> <li> <p>
     * <code>Server.ScheduledStop</code>: The instance was stopped due to a scheduled
     * retirement.</p> </li> <li> <p> <code>Server.SpotInstanceTermination</code>: A
     * Spot Instance was terminated due to an increase in the Spot price.</p> </li>
     * <li> <p> <code>Client.InternalError</code>: A client error caused the instance
     * to terminate on launch.</p> </li> <li> <p>
     * <code>Client.InstanceInitiatedShutdown</code>: The instance was shut down using
     * the <code>shutdown -h</code> command from the instance.</p> </li> <li> <p>
     * <code>Client.InstanceTerminated</code>: The instance was terminated or rebooted
     * during AMI creation.</p> </li> <li> <p>
     * <code>Client.UserInitiatedShutdown</code>: The instance was shut down using the
     * Amazon EC2 API.</p> </li> <li> <p> <code>Client.VolumeLimitExceeded</code>: The
     * limit on the number of EBS volumes or total storage was exceeded. Decrease usage
     * or request an increase in your limits.</p> </li> <li> <p>
     * <code>Client.InvalidSnapshot.NotFound</code>: The specified snapshot was not
     * found.</p> </li> </ul>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message for the state change.</p> <ul> <li> <p>
     * <code>Server.InsufficientInstanceCapacity</code>: There was insufficient
     * instance capacity to satisfy the launch request.</p> </li> <li> <p>
     * <code>Server.InternalError</code>: An internal error occurred during instance
     * launch, resulting in termination.</p> </li> <li> <p>
     * <code>Server.ScheduledStop</code>: The instance was stopped due to a scheduled
     * retirement.</p> </li> <li> <p> <code>Server.SpotInstanceTermination</code>: A
     * Spot Instance was terminated due to an increase in the Spot price.</p> </li>
     * <li> <p> <code>Client.InternalError</code>: A client error caused the instance
     * to terminate on launch.</p> </li> <li> <p>
     * <code>Client.InstanceInitiatedShutdown</code>: The instance was shut down using
     * the <code>shutdown -h</code> command from the instance.</p> </li> <li> <p>
     * <code>Client.InstanceTerminated</code>: The instance was terminated or rebooted
     * during AMI creation.</p> </li> <li> <p>
     * <code>Client.UserInitiatedShutdown</code>: The instance was shut down using the
     * Amazon EC2 API.</p> </li> <li> <p> <code>Client.VolumeLimitExceeded</code>: The
     * limit on the number of EBS volumes or total storage was exceeded. Decrease usage
     * or request an increase in your limits.</p> </li> <li> <p>
     * <code>Client.InvalidSnapshot.NotFound</code>: The specified snapshot was not
     * found.</p> </li> </ul>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message for the state change.</p> <ul> <li> <p>
     * <code>Server.InsufficientInstanceCapacity</code>: There was insufficient
     * instance capacity to satisfy the launch request.</p> </li> <li> <p>
     * <code>Server.InternalError</code>: An internal error occurred during instance
     * launch, resulting in termination.</p> </li> <li> <p>
     * <code>Server.ScheduledStop</code>: The instance was stopped due to a scheduled
     * retirement.</p> </li> <li> <p> <code>Server.SpotInstanceTermination</code>: A
     * Spot Instance was terminated due to an increase in the Spot price.</p> </li>
     * <li> <p> <code>Client.InternalError</code>: A client error caused the instance
     * to terminate on launch.</p> </li> <li> <p>
     * <code>Client.InstanceInitiatedShutdown</code>: The instance was shut down using
     * the <code>shutdown -h</code> command from the instance.</p> </li> <li> <p>
     * <code>Client.InstanceTerminated</code>: The instance was terminated or rebooted
     * during AMI creation.</p> </li> <li> <p>
     * <code>Client.UserInitiatedShutdown</code>: The instance was shut down using the
     * Amazon EC2 API.</p> </li> <li> <p> <code>Client.VolumeLimitExceeded</code>: The
     * limit on the number of EBS volumes or total storage was exceeded. Decrease usage
     * or request an increase in your limits.</p> </li> <li> <p>
     * <code>Client.InvalidSnapshot.NotFound</code>: The specified snapshot was not
     * found.</p> </li> </ul>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message for the state change.</p> <ul> <li> <p>
     * <code>Server.InsufficientInstanceCapacity</code>: There was insufficient
     * instance capacity to satisfy the launch request.</p> </li> <li> <p>
     * <code>Server.InternalError</code>: An internal error occurred during instance
     * launch, resulting in termination.</p> </li> <li> <p>
     * <code>Server.ScheduledStop</code>: The instance was stopped due to a scheduled
     * retirement.</p> </li> <li> <p> <code>Server.SpotInstanceTermination</code>: A
     * Spot Instance was terminated due to an increase in the Spot price.</p> </li>
     * <li> <p> <code>Client.InternalError</code>: A client error caused the instance
     * to terminate on launch.</p> </li> <li> <p>
     * <code>Client.InstanceInitiatedShutdown</code>: The instance was shut down using
     * the <code>shutdown -h</code> command from the instance.</p> </li> <li> <p>
     * <code>Client.InstanceTerminated</code>: The instance was terminated or rebooted
     * during AMI creation.</p> </li> <li> <p>
     * <code>Client.UserInitiatedShutdown</code>: The instance was shut down using the
     * Amazon EC2 API.</p> </li> <li> <p> <code>Client.VolumeLimitExceeded</code>: The
     * limit on the number of EBS volumes or total storage was exceeded. Decrease usage
     * or request an increase in your limits.</p> </li> <li> <p>
     * <code>Client.InvalidSnapshot.NotFound</code>: The specified snapshot was not
     * found.</p> </li> </ul>
     */
    inline StateReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message for the state change.</p> <ul> <li> <p>
     * <code>Server.InsufficientInstanceCapacity</code>: There was insufficient
     * instance capacity to satisfy the launch request.</p> </li> <li> <p>
     * <code>Server.InternalError</code>: An internal error occurred during instance
     * launch, resulting in termination.</p> </li> <li> <p>
     * <code>Server.ScheduledStop</code>: The instance was stopped due to a scheduled
     * retirement.</p> </li> <li> <p> <code>Server.SpotInstanceTermination</code>: A
     * Spot Instance was terminated due to an increase in the Spot price.</p> </li>
     * <li> <p> <code>Client.InternalError</code>: A client error caused the instance
     * to terminate on launch.</p> </li> <li> <p>
     * <code>Client.InstanceInitiatedShutdown</code>: The instance was shut down using
     * the <code>shutdown -h</code> command from the instance.</p> </li> <li> <p>
     * <code>Client.InstanceTerminated</code>: The instance was terminated or rebooted
     * during AMI creation.</p> </li> <li> <p>
     * <code>Client.UserInitiatedShutdown</code>: The instance was shut down using the
     * Amazon EC2 API.</p> </li> <li> <p> <code>Client.VolumeLimitExceeded</code>: The
     * limit on the number of EBS volumes or total storage was exceeded. Decrease usage
     * or request an increase in your limits.</p> </li> <li> <p>
     * <code>Client.InvalidSnapshot.NotFound</code>: The specified snapshot was not
     * found.</p> </li> </ul>
     */
    inline StateReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message for the state change.</p> <ul> <li> <p>
     * <code>Server.InsufficientInstanceCapacity</code>: There was insufficient
     * instance capacity to satisfy the launch request.</p> </li> <li> <p>
     * <code>Server.InternalError</code>: An internal error occurred during instance
     * launch, resulting in termination.</p> </li> <li> <p>
     * <code>Server.ScheduledStop</code>: The instance was stopped due to a scheduled
     * retirement.</p> </li> <li> <p> <code>Server.SpotInstanceTermination</code>: A
     * Spot Instance was terminated due to an increase in the Spot price.</p> </li>
     * <li> <p> <code>Client.InternalError</code>: A client error caused the instance
     * to terminate on launch.</p> </li> <li> <p>
     * <code>Client.InstanceInitiatedShutdown</code>: The instance was shut down using
     * the <code>shutdown -h</code> command from the instance.</p> </li> <li> <p>
     * <code>Client.InstanceTerminated</code>: The instance was terminated or rebooted
     * during AMI creation.</p> </li> <li> <p>
     * <code>Client.UserInitiatedShutdown</code>: The instance was shut down using the
     * Amazon EC2 API.</p> </li> <li> <p> <code>Client.VolumeLimitExceeded</code>: The
     * limit on the number of EBS volumes or total storage was exceeded. Decrease usage
     * or request an increase in your limits.</p> </li> <li> <p>
     * <code>Client.InvalidSnapshot.NotFound</code>: The specified snapshot was not
     * found.</p> </li> </ul>
     */
    inline StateReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
