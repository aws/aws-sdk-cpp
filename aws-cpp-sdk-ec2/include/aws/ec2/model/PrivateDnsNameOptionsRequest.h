/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/HostnameType.h>
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
   * <p>Describes the options for instance hostnames.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PrivateDnsNameOptionsRequest">AWS
   * API Reference</a></p>
   */
  class PrivateDnsNameOptionsRequest
  {
  public:
    AWS_EC2_API PrivateDnsNameOptionsRequest();
    AWS_EC2_API PrivateDnsNameOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PrivateDnsNameOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of hostname for EC2 instances. For IPv4 only subnets, an instance
     * DNS name must be based on the instance IPv4 address. For IPv6 only subnets, an
     * instance DNS name must be based on the instance ID. For dual-stack subnets, you
     * can specify whether DNS names use the instance IPv4 address or the instance
     * ID.</p>
     */
    inline const HostnameType& GetHostnameType() const{ return m_hostnameType; }

    /**
     * <p>The type of hostname for EC2 instances. For IPv4 only subnets, an instance
     * DNS name must be based on the instance IPv4 address. For IPv6 only subnets, an
     * instance DNS name must be based on the instance ID. For dual-stack subnets, you
     * can specify whether DNS names use the instance IPv4 address or the instance
     * ID.</p>
     */
    inline bool HostnameTypeHasBeenSet() const { return m_hostnameTypeHasBeenSet; }

    /**
     * <p>The type of hostname for EC2 instances. For IPv4 only subnets, an instance
     * DNS name must be based on the instance IPv4 address. For IPv6 only subnets, an
     * instance DNS name must be based on the instance ID. For dual-stack subnets, you
     * can specify whether DNS names use the instance IPv4 address or the instance
     * ID.</p>
     */
    inline void SetHostnameType(const HostnameType& value) { m_hostnameTypeHasBeenSet = true; m_hostnameType = value; }

    /**
     * <p>The type of hostname for EC2 instances. For IPv4 only subnets, an instance
     * DNS name must be based on the instance IPv4 address. For IPv6 only subnets, an
     * instance DNS name must be based on the instance ID. For dual-stack subnets, you
     * can specify whether DNS names use the instance IPv4 address or the instance
     * ID.</p>
     */
    inline void SetHostnameType(HostnameType&& value) { m_hostnameTypeHasBeenSet = true; m_hostnameType = std::move(value); }

    /**
     * <p>The type of hostname for EC2 instances. For IPv4 only subnets, an instance
     * DNS name must be based on the instance IPv4 address. For IPv6 only subnets, an
     * instance DNS name must be based on the instance ID. For dual-stack subnets, you
     * can specify whether DNS names use the instance IPv4 address or the instance
     * ID.</p>
     */
    inline PrivateDnsNameOptionsRequest& WithHostnameType(const HostnameType& value) { SetHostnameType(value); return *this;}

    /**
     * <p>The type of hostname for EC2 instances. For IPv4 only subnets, an instance
     * DNS name must be based on the instance IPv4 address. For IPv6 only subnets, an
     * instance DNS name must be based on the instance ID. For dual-stack subnets, you
     * can specify whether DNS names use the instance IPv4 address or the instance
     * ID.</p>
     */
    inline PrivateDnsNameOptionsRequest& WithHostnameType(HostnameType&& value) { SetHostnameType(std::move(value)); return *this;}


    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p>
     */
    inline bool GetEnableResourceNameDnsARecord() const{ return m_enableResourceNameDnsARecord; }

    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p>
     */
    inline bool EnableResourceNameDnsARecordHasBeenSet() const { return m_enableResourceNameDnsARecordHasBeenSet; }

    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p>
     */
    inline void SetEnableResourceNameDnsARecord(bool value) { m_enableResourceNameDnsARecordHasBeenSet = true; m_enableResourceNameDnsARecord = value; }

    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p>
     */
    inline PrivateDnsNameOptionsRequest& WithEnableResourceNameDnsARecord(bool value) { SetEnableResourceNameDnsARecord(value); return *this;}


    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p>
     */
    inline bool GetEnableResourceNameDnsAAAARecord() const{ return m_enableResourceNameDnsAAAARecord; }

    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p>
     */
    inline bool EnableResourceNameDnsAAAARecordHasBeenSet() const { return m_enableResourceNameDnsAAAARecordHasBeenSet; }

    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p>
     */
    inline void SetEnableResourceNameDnsAAAARecord(bool value) { m_enableResourceNameDnsAAAARecordHasBeenSet = true; m_enableResourceNameDnsAAAARecord = value; }

    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p>
     */
    inline PrivateDnsNameOptionsRequest& WithEnableResourceNameDnsAAAARecord(bool value) { SetEnableResourceNameDnsAAAARecord(value); return *this;}

  private:

    HostnameType m_hostnameType;
    bool m_hostnameTypeHasBeenSet = false;

    bool m_enableResourceNameDnsARecord;
    bool m_enableResourceNameDnsARecordHasBeenSet = false;

    bool m_enableResourceNameDnsAAAARecord;
    bool m_enableResourceNameDnsAAAARecordHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
