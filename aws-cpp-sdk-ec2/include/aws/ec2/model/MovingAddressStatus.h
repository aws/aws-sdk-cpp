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
#include <aws/ec2/model/MoveStatus.h>
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
   * <p>Describes the status of a moving Elastic IP address.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MovingAddressStatus">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API MovingAddressStatus
  {
  public:
    MovingAddressStatus();
    MovingAddressStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    MovingAddressStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The status of the Elastic IP address that's being moved to the EC2-VPC
     * platform, or restored to the EC2-Classic platform.</p>
     */
    inline const MoveStatus& GetMoveStatus() const{ return m_moveStatus; }

    /**
     * <p>The status of the Elastic IP address that's being moved to the EC2-VPC
     * platform, or restored to the EC2-Classic platform.</p>
     */
    inline void SetMoveStatus(const MoveStatus& value) { m_moveStatusHasBeenSet = true; m_moveStatus = value; }

    /**
     * <p>The status of the Elastic IP address that's being moved to the EC2-VPC
     * platform, or restored to the EC2-Classic platform.</p>
     */
    inline void SetMoveStatus(MoveStatus&& value) { m_moveStatusHasBeenSet = true; m_moveStatus = std::move(value); }

    /**
     * <p>The status of the Elastic IP address that's being moved to the EC2-VPC
     * platform, or restored to the EC2-Classic platform.</p>
     */
    inline MovingAddressStatus& WithMoveStatus(const MoveStatus& value) { SetMoveStatus(value); return *this;}

    /**
     * <p>The status of the Elastic IP address that's being moved to the EC2-VPC
     * platform, or restored to the EC2-Classic platform.</p>
     */
    inline MovingAddressStatus& WithMoveStatus(MoveStatus&& value) { SetMoveStatus(std::move(value)); return *this;}


    /**
     * <p>The Elastic IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline MovingAddressStatus& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The Elastic IP address.</p>
     */
    inline MovingAddressStatus& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>The Elastic IP address.</p>
     */
    inline MovingAddressStatus& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}

  private:

    MoveStatus m_moveStatus;
    bool m_moveStatusHasBeenSet;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
