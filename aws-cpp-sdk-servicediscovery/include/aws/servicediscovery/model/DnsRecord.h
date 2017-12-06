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
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/RecordType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the resource record sets that
   * you want Amazon Route 53 to create when you register an instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DnsRecord">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API DnsRecord
  {
  public:
    DnsRecord();
    DnsRecord(const Aws::Utils::Json::JsonValue& jsonValue);
    DnsRecord& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the resource, which indicates the value that Amazon Route 53
     * returns in response to DNS queries. The following values are supported:</p> <ul>
     * <li> <p> <b>A</b>: Amazon Route 53 returns the IP address of the resource in
     * IPv4 format, such as 192.0.2.44.</p> </li> <li> <p> <b>AAAA</b>: Amazon Route 53
     * returns the IP address of the resource in IPv6 format, such as
     * 2001:0db8:85a3:0000:0000:abcd:0001:2345.</p> </li> <li> <p> <b>SRV</b>: Amazon
     * Route 53 returns the value for an SRV record. The value for an SRV record uses
     * the following template, which can't be changed:</p> <p> <code>priority weight
     * port resource-record-set-name</code> </p> <p>The values of <code>priority</code>
     * and <code>weight</code> are both set to 1. The value of port comes from the
     * value that you specify for <code>Port</code> when you submit a
     * <a>RegisterInstance</a> request.</p> </li> </ul>
     */
    inline const RecordType& GetType() const{ return m_type; }

    /**
     * <p>The type of the resource, which indicates the value that Amazon Route 53
     * returns in response to DNS queries. The following values are supported:</p> <ul>
     * <li> <p> <b>A</b>: Amazon Route 53 returns the IP address of the resource in
     * IPv4 format, such as 192.0.2.44.</p> </li> <li> <p> <b>AAAA</b>: Amazon Route 53
     * returns the IP address of the resource in IPv6 format, such as
     * 2001:0db8:85a3:0000:0000:abcd:0001:2345.</p> </li> <li> <p> <b>SRV</b>: Amazon
     * Route 53 returns the value for an SRV record. The value for an SRV record uses
     * the following template, which can't be changed:</p> <p> <code>priority weight
     * port resource-record-set-name</code> </p> <p>The values of <code>priority</code>
     * and <code>weight</code> are both set to 1. The value of port comes from the
     * value that you specify for <code>Port</code> when you submit a
     * <a>RegisterInstance</a> request.</p> </li> </ul>
     */
    inline void SetType(const RecordType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the resource, which indicates the value that Amazon Route 53
     * returns in response to DNS queries. The following values are supported:</p> <ul>
     * <li> <p> <b>A</b>: Amazon Route 53 returns the IP address of the resource in
     * IPv4 format, such as 192.0.2.44.</p> </li> <li> <p> <b>AAAA</b>: Amazon Route 53
     * returns the IP address of the resource in IPv6 format, such as
     * 2001:0db8:85a3:0000:0000:abcd:0001:2345.</p> </li> <li> <p> <b>SRV</b>: Amazon
     * Route 53 returns the value for an SRV record. The value for an SRV record uses
     * the following template, which can't be changed:</p> <p> <code>priority weight
     * port resource-record-set-name</code> </p> <p>The values of <code>priority</code>
     * and <code>weight</code> are both set to 1. The value of port comes from the
     * value that you specify for <code>Port</code> when you submit a
     * <a>RegisterInstance</a> request.</p> </li> </ul>
     */
    inline void SetType(RecordType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the resource, which indicates the value that Amazon Route 53
     * returns in response to DNS queries. The following values are supported:</p> <ul>
     * <li> <p> <b>A</b>: Amazon Route 53 returns the IP address of the resource in
     * IPv4 format, such as 192.0.2.44.</p> </li> <li> <p> <b>AAAA</b>: Amazon Route 53
     * returns the IP address of the resource in IPv6 format, such as
     * 2001:0db8:85a3:0000:0000:abcd:0001:2345.</p> </li> <li> <p> <b>SRV</b>: Amazon
     * Route 53 returns the value for an SRV record. The value for an SRV record uses
     * the following template, which can't be changed:</p> <p> <code>priority weight
     * port resource-record-set-name</code> </p> <p>The values of <code>priority</code>
     * and <code>weight</code> are both set to 1. The value of port comes from the
     * value that you specify for <code>Port</code> when you submit a
     * <a>RegisterInstance</a> request.</p> </li> </ul>
     */
    inline DnsRecord& WithType(const RecordType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the resource, which indicates the value that Amazon Route 53
     * returns in response to DNS queries. The following values are supported:</p> <ul>
     * <li> <p> <b>A</b>: Amazon Route 53 returns the IP address of the resource in
     * IPv4 format, such as 192.0.2.44.</p> </li> <li> <p> <b>AAAA</b>: Amazon Route 53
     * returns the IP address of the resource in IPv6 format, such as
     * 2001:0db8:85a3:0000:0000:abcd:0001:2345.</p> </li> <li> <p> <b>SRV</b>: Amazon
     * Route 53 returns the value for an SRV record. The value for an SRV record uses
     * the following template, which can't be changed:</p> <p> <code>priority weight
     * port resource-record-set-name</code> </p> <p>The values of <code>priority</code>
     * and <code>weight</code> are both set to 1. The value of port comes from the
     * value that you specify for <code>Port</code> when you submit a
     * <a>RegisterInstance</a> request.</p> </li> </ul>
     */
    inline DnsRecord& WithType(RecordType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The amount of time, in seconds, that you want DNS resolvers to cache the
     * settings for this resource record set.</p>
     */
    inline long long GetTTL() const{ return m_tTL; }

    /**
     * <p>The amount of time, in seconds, that you want DNS resolvers to cache the
     * settings for this resource record set.</p>
     */
    inline void SetTTL(long long value) { m_tTLHasBeenSet = true; m_tTL = value; }

    /**
     * <p>The amount of time, in seconds, that you want DNS resolvers to cache the
     * settings for this resource record set.</p>
     */
    inline DnsRecord& WithTTL(long long value) { SetTTL(value); return *this;}

  private:

    RecordType m_type;
    bool m_typeHasBeenSet;

    long long m_tTL;
    bool m_tTLHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
