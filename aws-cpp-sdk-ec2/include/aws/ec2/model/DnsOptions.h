/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/DnsRecordIpType.h>
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
   * <p>Describes the DNS options for an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DnsOptions">AWS API
   * Reference</a></p>
   */
  class DnsOptions
  {
  public:
    AWS_EC2_API DnsOptions();
    AWS_EC2_API DnsOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DnsOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The DNS records created for the endpoint.</p>
     */
    inline const DnsRecordIpType& GetDnsRecordIpType() const{ return m_dnsRecordIpType; }

    /**
     * <p>The DNS records created for the endpoint.</p>
     */
    inline bool DnsRecordIpTypeHasBeenSet() const { return m_dnsRecordIpTypeHasBeenSet; }

    /**
     * <p>The DNS records created for the endpoint.</p>
     */
    inline void SetDnsRecordIpType(const DnsRecordIpType& value) { m_dnsRecordIpTypeHasBeenSet = true; m_dnsRecordIpType = value; }

    /**
     * <p>The DNS records created for the endpoint.</p>
     */
    inline void SetDnsRecordIpType(DnsRecordIpType&& value) { m_dnsRecordIpTypeHasBeenSet = true; m_dnsRecordIpType = std::move(value); }

    /**
     * <p>The DNS records created for the endpoint.</p>
     */
    inline DnsOptions& WithDnsRecordIpType(const DnsRecordIpType& value) { SetDnsRecordIpType(value); return *this;}

    /**
     * <p>The DNS records created for the endpoint.</p>
     */
    inline DnsOptions& WithDnsRecordIpType(DnsRecordIpType&& value) { SetDnsRecordIpType(std::move(value)); return *this;}

  private:

    DnsRecordIpType m_dnsRecordIpType;
    bool m_dnsRecordIpTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
