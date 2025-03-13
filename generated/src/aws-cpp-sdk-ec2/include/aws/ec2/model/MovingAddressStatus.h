/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   *  <p>This action is deprecated.</p>  <p>Describes the status of a
   * moving Elastic IP address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MovingAddressStatus">AWS
   * API Reference</a></p>
   */
  class MovingAddressStatus
  {
  public:
    AWS_EC2_API MovingAddressStatus() = default;
    AWS_EC2_API MovingAddressStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API MovingAddressStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The status of the Elastic IP address that's being moved or restored.</p>
     */
    inline MoveStatus GetMoveStatus() const { return m_moveStatus; }
    inline bool MoveStatusHasBeenSet() const { return m_moveStatusHasBeenSet; }
    inline void SetMoveStatus(MoveStatus value) { m_moveStatusHasBeenSet = true; m_moveStatus = value; }
    inline MovingAddressStatus& WithMoveStatus(MoveStatus value) { SetMoveStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const { return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    template<typename PublicIpT = Aws::String>
    void SetPublicIp(PublicIpT&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::forward<PublicIpT>(value); }
    template<typename PublicIpT = Aws::String>
    MovingAddressStatus& WithPublicIp(PublicIpT&& value) { SetPublicIp(std::forward<PublicIpT>(value)); return *this;}
    ///@}
  private:

    MoveStatus m_moveStatus{MoveStatus::NOT_SET};
    bool m_moveStatusHasBeenSet = false;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
