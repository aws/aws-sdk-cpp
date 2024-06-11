﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about the DNS server to be used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DnsServersOptionsModifyStructure">AWS
   * API Reference</a></p>
   */
  class DnsServersOptionsModifyStructure
  {
  public:
    AWS_EC2_API DnsServersOptionsModifyStructure();
    AWS_EC2_API DnsServersOptionsModifyStructure(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DnsServersOptionsModifyStructure& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IPv4 address range, in CIDR notation, of the DNS servers to be used. You
     * can specify up to two DNS servers. Ensure that the DNS servers can be reached by
     * the clients. The specified values overwrite the existing values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomDnsServers() const{ return m_customDnsServers; }
    inline bool CustomDnsServersHasBeenSet() const { return m_customDnsServersHasBeenSet; }
    inline void SetCustomDnsServers(const Aws::Vector<Aws::String>& value) { m_customDnsServersHasBeenSet = true; m_customDnsServers = value; }
    inline void SetCustomDnsServers(Aws::Vector<Aws::String>&& value) { m_customDnsServersHasBeenSet = true; m_customDnsServers = std::move(value); }
    inline DnsServersOptionsModifyStructure& WithCustomDnsServers(const Aws::Vector<Aws::String>& value) { SetCustomDnsServers(value); return *this;}
    inline DnsServersOptionsModifyStructure& WithCustomDnsServers(Aws::Vector<Aws::String>&& value) { SetCustomDnsServers(std::move(value)); return *this;}
    inline DnsServersOptionsModifyStructure& AddCustomDnsServers(const Aws::String& value) { m_customDnsServersHasBeenSet = true; m_customDnsServers.push_back(value); return *this; }
    inline DnsServersOptionsModifyStructure& AddCustomDnsServers(Aws::String&& value) { m_customDnsServersHasBeenSet = true; m_customDnsServers.push_back(std::move(value)); return *this; }
    inline DnsServersOptionsModifyStructure& AddCustomDnsServers(const char* value) { m_customDnsServersHasBeenSet = true; m_customDnsServers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether DNS servers should be used. Specify <code>False</code> to
     * delete the existing DNS servers.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline DnsServersOptionsModifyStructure& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_customDnsServers;
    bool m_customDnsServersHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
