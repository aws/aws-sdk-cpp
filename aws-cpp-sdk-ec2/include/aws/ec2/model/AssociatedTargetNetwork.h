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
  class AWS_EC2_API AssociatedTargetNetwork
  {
  public:
    AssociatedTargetNetwork();
    AssociatedTargetNetwork(const Aws::Utils::Xml::XmlNode& xmlNode);
    AssociatedTargetNetwork& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline AssociatedTargetNetwork& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline AssociatedTargetNetwork& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline AssociatedTargetNetwork& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}


    /**
     * <p>The target network type.</p>
     */
    inline const AssociatedNetworkType& GetNetworkType() const{ return m_networkType; }

    /**
     * <p>The target network type.</p>
     */
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }

    /**
     * <p>The target network type.</p>
     */
    inline void SetNetworkType(const AssociatedNetworkType& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }

    /**
     * <p>The target network type.</p>
     */
    inline void SetNetworkType(AssociatedNetworkType&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }

    /**
     * <p>The target network type.</p>
     */
    inline AssociatedTargetNetwork& WithNetworkType(const AssociatedNetworkType& value) { SetNetworkType(value); return *this;}

    /**
     * <p>The target network type.</p>
     */
    inline AssociatedTargetNetwork& WithNetworkType(AssociatedNetworkType&& value) { SetNetworkType(std::move(value)); return *this;}

  private:

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet;

    AssociatedNetworkType m_networkType;
    bool m_networkTypeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
