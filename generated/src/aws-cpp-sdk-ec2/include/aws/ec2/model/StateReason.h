﻿/**
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
   * <p>Describes a state change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StateReason">AWS API
   * Reference</a></p>
   */
  class StateReason
  {
  public:
    AWS_EC2_API StateReason();
    AWS_EC2_API StateReason(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API StateReason& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The reason code for the state change.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline StateReason& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline StateReason& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline StateReason& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message for the state change.</p> <ul> <li> <p>
     * <code>Server.InsufficientInstanceCapacity</code>: There was insufficient
     * capacity available to satisfy the launch request.</p> </li> <li> <p>
     * <code>Server.InternalError</code>: An internal error caused the instance to
     * terminate during launch.</p> </li> <li> <p> <code>Server.ScheduledStop</code>:
     * The instance was stopped due to a scheduled retirement.</p> </li> <li> <p>
     * <code>Server.SpotInstanceShutdown</code>: The instance was stopped because the
     * number of Spot requests with a maximum price equal to or higher than the Spot
     * price exceeded available capacity or because of an increase in the Spot
     * price.</p> </li> <li> <p> <code>Server.SpotInstanceTermination</code>: The
     * instance was terminated because the number of Spot requests with a maximum price
     * equal to or higher than the Spot price exceeded available capacity or because of
     * an increase in the Spot price.</p> </li> <li> <p>
     * <code>Client.InstanceInitiatedShutdown</code>: The instance was shut down from
     * the operating system of the instance.</p> </li> <li> <p>
     * <code>Client.InstanceTerminated</code>: The instance was terminated or rebooted
     * during AMI creation.</p> </li> <li> <p> <code>Client.InternalError</code>: A
     * client error caused the instance to terminate during launch.</p> </li> <li> <p>
     * <code>Client.InvalidSnapshot.NotFound</code>: The specified snapshot was not
     * found.</p> </li> <li> <p> <code>Client.UserInitiatedHibernate</code>:
     * Hibernation was initiated on the instance.</p> </li> <li> <p>
     * <code>Client.UserInitiatedShutdown</code>: The instance was shut down using the
     * Amazon EC2 API.</p> </li> <li> <p> <code>Client.VolumeLimitExceeded</code>: The
     * limit on the number of EBS volumes or total storage was exceeded. Decrease usage
     * or request an increase in your account limits.</p> </li> </ul>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline StateReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline StateReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline StateReason& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
