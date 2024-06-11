﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PrivateDnsNameOptionsResponse">AWS
   * API Reference</a></p>
   */
  class PrivateDnsNameOptionsResponse
  {
  public:
    AWS_EC2_API PrivateDnsNameOptionsResponse();
    AWS_EC2_API PrivateDnsNameOptionsResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PrivateDnsNameOptionsResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of hostname to assign to an instance.</p>
     */
    inline const HostnameType& GetHostnameType() const{ return m_hostnameType; }
    inline bool HostnameTypeHasBeenSet() const { return m_hostnameTypeHasBeenSet; }
    inline void SetHostnameType(const HostnameType& value) { m_hostnameTypeHasBeenSet = true; m_hostnameType = value; }
    inline void SetHostnameType(HostnameType&& value) { m_hostnameTypeHasBeenSet = true; m_hostnameType = std::move(value); }
    inline PrivateDnsNameOptionsResponse& WithHostnameType(const HostnameType& value) { SetHostnameType(value); return *this;}
    inline PrivateDnsNameOptionsResponse& WithHostnameType(HostnameType&& value) { SetHostnameType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p>
     */
    inline bool GetEnableResourceNameDnsARecord() const{ return m_enableResourceNameDnsARecord; }
    inline bool EnableResourceNameDnsARecordHasBeenSet() const { return m_enableResourceNameDnsARecordHasBeenSet; }
    inline void SetEnableResourceNameDnsARecord(bool value) { m_enableResourceNameDnsARecordHasBeenSet = true; m_enableResourceNameDnsARecord = value; }
    inline PrivateDnsNameOptionsResponse& WithEnableResourceNameDnsARecord(bool value) { SetEnableResourceNameDnsARecord(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p>
     */
    inline bool GetEnableResourceNameDnsAAAARecord() const{ return m_enableResourceNameDnsAAAARecord; }
    inline bool EnableResourceNameDnsAAAARecordHasBeenSet() const { return m_enableResourceNameDnsAAAARecordHasBeenSet; }
    inline void SetEnableResourceNameDnsAAAARecord(bool value) { m_enableResourceNameDnsAAAARecordHasBeenSet = true; m_enableResourceNameDnsAAAARecord = value; }
    inline PrivateDnsNameOptionsResponse& WithEnableResourceNameDnsAAAARecord(bool value) { SetEnableResourceNameDnsAAAARecord(value); return *this;}
    ///@}
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
