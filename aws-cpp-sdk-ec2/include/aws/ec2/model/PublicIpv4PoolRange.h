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
   * <p>Describes an address range of an IPv4 address pool.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PublicIpv4PoolRange">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API PublicIpv4PoolRange
  {
  public:
    PublicIpv4PoolRange();
    PublicIpv4PoolRange(const Aws::Utils::Xml::XmlNode& xmlNode);
    PublicIpv4PoolRange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The first IP address in the range.</p>
     */
    inline const Aws::String& GetFirstAddress() const{ return m_firstAddress; }

    /**
     * <p>The first IP address in the range.</p>
     */
    inline bool FirstAddressHasBeenSet() const { return m_firstAddressHasBeenSet; }

    /**
     * <p>The first IP address in the range.</p>
     */
    inline void SetFirstAddress(const Aws::String& value) { m_firstAddressHasBeenSet = true; m_firstAddress = value; }

    /**
     * <p>The first IP address in the range.</p>
     */
    inline void SetFirstAddress(Aws::String&& value) { m_firstAddressHasBeenSet = true; m_firstAddress = std::move(value); }

    /**
     * <p>The first IP address in the range.</p>
     */
    inline void SetFirstAddress(const char* value) { m_firstAddressHasBeenSet = true; m_firstAddress.assign(value); }

    /**
     * <p>The first IP address in the range.</p>
     */
    inline PublicIpv4PoolRange& WithFirstAddress(const Aws::String& value) { SetFirstAddress(value); return *this;}

    /**
     * <p>The first IP address in the range.</p>
     */
    inline PublicIpv4PoolRange& WithFirstAddress(Aws::String&& value) { SetFirstAddress(std::move(value)); return *this;}

    /**
     * <p>The first IP address in the range.</p>
     */
    inline PublicIpv4PoolRange& WithFirstAddress(const char* value) { SetFirstAddress(value); return *this;}


    /**
     * <p>The last IP address in the range.</p>
     */
    inline const Aws::String& GetLastAddress() const{ return m_lastAddress; }

    /**
     * <p>The last IP address in the range.</p>
     */
    inline bool LastAddressHasBeenSet() const { return m_lastAddressHasBeenSet; }

    /**
     * <p>The last IP address in the range.</p>
     */
    inline void SetLastAddress(const Aws::String& value) { m_lastAddressHasBeenSet = true; m_lastAddress = value; }

    /**
     * <p>The last IP address in the range.</p>
     */
    inline void SetLastAddress(Aws::String&& value) { m_lastAddressHasBeenSet = true; m_lastAddress = std::move(value); }

    /**
     * <p>The last IP address in the range.</p>
     */
    inline void SetLastAddress(const char* value) { m_lastAddressHasBeenSet = true; m_lastAddress.assign(value); }

    /**
     * <p>The last IP address in the range.</p>
     */
    inline PublicIpv4PoolRange& WithLastAddress(const Aws::String& value) { SetLastAddress(value); return *this;}

    /**
     * <p>The last IP address in the range.</p>
     */
    inline PublicIpv4PoolRange& WithLastAddress(Aws::String&& value) { SetLastAddress(std::move(value)); return *this;}

    /**
     * <p>The last IP address in the range.</p>
     */
    inline PublicIpv4PoolRange& WithLastAddress(const char* value) { SetLastAddress(value); return *this;}


    /**
     * <p>The number of addresses in the range.</p>
     */
    inline int GetAddressCount() const{ return m_addressCount; }

    /**
     * <p>The number of addresses in the range.</p>
     */
    inline bool AddressCountHasBeenSet() const { return m_addressCountHasBeenSet; }

    /**
     * <p>The number of addresses in the range.</p>
     */
    inline void SetAddressCount(int value) { m_addressCountHasBeenSet = true; m_addressCount = value; }

    /**
     * <p>The number of addresses in the range.</p>
     */
    inline PublicIpv4PoolRange& WithAddressCount(int value) { SetAddressCount(value); return *this;}


    /**
     * <p>The number of available addresses in the range.</p>
     */
    inline int GetAvailableAddressCount() const{ return m_availableAddressCount; }

    /**
     * <p>The number of available addresses in the range.</p>
     */
    inline bool AvailableAddressCountHasBeenSet() const { return m_availableAddressCountHasBeenSet; }

    /**
     * <p>The number of available addresses in the range.</p>
     */
    inline void SetAvailableAddressCount(int value) { m_availableAddressCountHasBeenSet = true; m_availableAddressCount = value; }

    /**
     * <p>The number of available addresses in the range.</p>
     */
    inline PublicIpv4PoolRange& WithAvailableAddressCount(int value) { SetAvailableAddressCount(value); return *this;}

  private:

    Aws::String m_firstAddress;
    bool m_firstAddressHasBeenSet;

    Aws::String m_lastAddress;
    bool m_lastAddressHasBeenSet;

    int m_addressCount;
    bool m_addressCountHasBeenSet;

    int m_availableAddressCount;
    bool m_availableAddressCountHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
