/**
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
   * <p>Describes an address range of an IPv4 address pool.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PublicIpv4PoolRange">AWS
   * API Reference</a></p>
   */
  class PublicIpv4PoolRange
  {
  public:
    AWS_EC2_API PublicIpv4PoolRange() = default;
    AWS_EC2_API PublicIpv4PoolRange(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PublicIpv4PoolRange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The first IP address in the range.</p>
     */
    inline const Aws::String& GetFirstAddress() const { return m_firstAddress; }
    inline bool FirstAddressHasBeenSet() const { return m_firstAddressHasBeenSet; }
    template<typename FirstAddressT = Aws::String>
    void SetFirstAddress(FirstAddressT&& value) { m_firstAddressHasBeenSet = true; m_firstAddress = std::forward<FirstAddressT>(value); }
    template<typename FirstAddressT = Aws::String>
    PublicIpv4PoolRange& WithFirstAddress(FirstAddressT&& value) { SetFirstAddress(std::forward<FirstAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last IP address in the range.</p>
     */
    inline const Aws::String& GetLastAddress() const { return m_lastAddress; }
    inline bool LastAddressHasBeenSet() const { return m_lastAddressHasBeenSet; }
    template<typename LastAddressT = Aws::String>
    void SetLastAddress(LastAddressT&& value) { m_lastAddressHasBeenSet = true; m_lastAddress = std::forward<LastAddressT>(value); }
    template<typename LastAddressT = Aws::String>
    PublicIpv4PoolRange& WithLastAddress(LastAddressT&& value) { SetLastAddress(std::forward<LastAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of addresses in the range.</p>
     */
    inline int GetAddressCount() const { return m_addressCount; }
    inline bool AddressCountHasBeenSet() const { return m_addressCountHasBeenSet; }
    inline void SetAddressCount(int value) { m_addressCountHasBeenSet = true; m_addressCount = value; }
    inline PublicIpv4PoolRange& WithAddressCount(int value) { SetAddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of available addresses in the range.</p>
     */
    inline int GetAvailableAddressCount() const { return m_availableAddressCount; }
    inline bool AvailableAddressCountHasBeenSet() const { return m_availableAddressCountHasBeenSet; }
    inline void SetAvailableAddressCount(int value) { m_availableAddressCountHasBeenSet = true; m_availableAddressCount = value; }
    inline PublicIpv4PoolRange& WithAvailableAddressCount(int value) { SetAvailableAddressCount(value); return *this;}
    ///@}
  private:

    Aws::String m_firstAddress;
    bool m_firstAddressHasBeenSet = false;

    Aws::String m_lastAddress;
    bool m_lastAddressHasBeenSet = false;

    int m_addressCount{0};
    bool m_addressCountHasBeenSet = false;

    int m_availableAddressCount{0};
    bool m_availableAddressCountHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
