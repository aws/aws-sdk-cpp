/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AssociatedNetworkType.h>
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
   * <p>Describes a target network that is associated with a Client VPN endpoint. A
   * target network is a subnet in a VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociatedTargetNetwork">AWS
   * API Reference</a></p>
   */
  class AssociatedTargetNetwork
  {
  public:
    AWS_EC2_API AssociatedTargetNetwork() = default;
    AWS_EC2_API AssociatedTargetNetwork(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AssociatedTargetNetwork& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetNetworkId() const { return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    template<typename NetworkIdT = Aws::String>
    void SetNetworkId(NetworkIdT&& value) { m_networkIdHasBeenSet = true; m_networkId = std::forward<NetworkIdT>(value); }
    template<typename NetworkIdT = Aws::String>
    AssociatedTargetNetwork& WithNetworkId(NetworkIdT&& value) { SetNetworkId(std::forward<NetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target network type.</p>
     */
    inline AssociatedNetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(AssociatedNetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline AssociatedTargetNetwork& WithNetworkType(AssociatedNetworkType value) { SetNetworkType(value); return *this;}
    ///@}
  private:

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    AssociatedNetworkType m_networkType{AssociatedNetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
