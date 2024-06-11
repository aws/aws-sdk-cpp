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
    AWS_EC2_API PublicIpv4PoolRange();
    AWS_EC2_API PublicIpv4PoolRange(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PublicIpv4PoolRange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The first IP address in the range.</p>
     */
    inline const Aws::String& GetFirstAddress() const{ return m_firstAddress; }
    inline bool FirstAddressHasBeenSet() const { return m_firstAddressHasBeenSet; }
    inline void SetFirstAddress(const Aws::String& value) { m_firstAddressHasBeenSet = true; m_firstAddress = value; }
    inline void SetFirstAddress(Aws::String&& value) { m_firstAddressHasBeenSet = true; m_firstAddress = std::move(value); }
    inline void SetFirstAddress(const char* value) { m_firstAddressHasBeenSet = true; m_firstAddress.assign(value); }
    inline PublicIpv4PoolRange& WithFirstAddress(const Aws::String& value) { SetFirstAddress(value); return *this;}
    inline PublicIpv4PoolRange& WithFirstAddress(Aws::String&& value) { SetFirstAddress(std::move(value)); return *this;}
    inline PublicIpv4PoolRange& WithFirstAddress(const char* value) { SetFirstAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last IP address in the range.</p>
     */
    inline const Aws::String& GetLastAddress() const{ return m_lastAddress; }
    inline bool LastAddressHasBeenSet() const { return m_lastAddressHasBeenSet; }
    inline void SetLastAddress(const Aws::String& value) { m_lastAddressHasBeenSet = true; m_lastAddress = value; }
    inline void SetLastAddress(Aws::String&& value) { m_lastAddressHasBeenSet = true; m_lastAddress = std::move(value); }
    inline void SetLastAddress(const char* value) { m_lastAddressHasBeenSet = true; m_lastAddress.assign(value); }
    inline PublicIpv4PoolRange& WithLastAddress(const Aws::String& value) { SetLastAddress(value); return *this;}
    inline PublicIpv4PoolRange& WithLastAddress(Aws::String&& value) { SetLastAddress(std::move(value)); return *this;}
    inline PublicIpv4PoolRange& WithLastAddress(const char* value) { SetLastAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of addresses in the range.</p>
     */
    inline int GetAddressCount() const{ return m_addressCount; }
    inline bool AddressCountHasBeenSet() const { return m_addressCountHasBeenSet; }
    inline void SetAddressCount(int value) { m_addressCountHasBeenSet = true; m_addressCount = value; }
    inline PublicIpv4PoolRange& WithAddressCount(int value) { SetAddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of available addresses in the range.</p>
     */
    inline int GetAvailableAddressCount() const{ return m_availableAddressCount; }
    inline bool AvailableAddressCountHasBeenSet() const { return m_availableAddressCountHasBeenSet; }
    inline void SetAvailableAddressCount(int value) { m_availableAddressCountHasBeenSet = true; m_availableAddressCount = value; }
    inline PublicIpv4PoolRange& WithAvailableAddressCount(int value) { SetAvailableAddressCount(value); return *this;}
    ///@}
  private:

    Aws::String m_firstAddress;
    bool m_firstAddressHasBeenSet = false;

    Aws::String m_lastAddress;
    bool m_lastAddressHasBeenSet = false;

    int m_addressCount;
    bool m_addressCountHasBeenSet = false;

    int m_availableAddressCount;
    bool m_availableAddressCountHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
