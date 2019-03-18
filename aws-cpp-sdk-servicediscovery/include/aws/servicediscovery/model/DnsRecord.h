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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the Route 53 DNS records that
   * you want AWS Cloud Map to create when you register an instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DnsRecord">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API DnsRecord
  {
  public:
    DnsRecord();
    DnsRecord(Aws::Utils::Json::JsonView jsonValue);
    DnsRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the resource, which indicates the type of value that Route 53
     * returns in response to DNS queries.</p> <p>Note the following:</p> <ul> <li> <p>
     * <b>A, AAAA, and SRV records:</b> You can specify settings for a maximum of one
     * A, one AAAA, and one SRV record. You can specify them in any combination.</p>
     * </li> <li> <p> <b>CNAME records:</b> If you specify <code>CNAME</code> for
     * <code>Type</code>, you can't define any other records. This is a limitation of
     * DNS: you can't create a CNAME record and any other type of record that has the
     * same name as a CNAME record.</p> </li> <li> <p> <b>Alias records:</b> If you
     * want AWS Cloud Map to create a Route 53 alias record when you register an
     * instance, specify <code>A</code> or <code>AAAA</code> for <code>Type</code>.</p>
     * </li> <li> <p> <b>All records:</b> You specify settings other than
     * <code>TTL</code> and <code>Type</code> when you register an instance.</p> </li>
     * </ul> <p>The following values are supported:</p> <p> <b>A</b> </p> <p>Route 53
     * returns the IP address of the resource in IPv4 format, such as 192.0.2.44.</p>
     * <p> <b>AAAA</b> </p> <p>Route 53 returns the IP address of the resource in IPv6
     * format, such as 2001:0db8:85a3:0000:0000:abcd:0001:2345.</p> <p> <b>CNAME</b>
     * </p> <p>Route 53 returns the domain name of the resource, such as
     * www.example.com. Note the following:</p> <ul> <li> <p>You specify the domain
     * name that you want to route traffic to when you register an instance. For more
     * information, see <a>RegisterInstanceRequest$Attributes</a>.</p> </li> <li>
     * <p>You must specify <code>WEIGHTED</code> for the value of
     * <code>RoutingPolicy</code>.</p> </li> <li> <p>You can't specify both
     * <code>CNAME</code> for <code>Type</code> and settings for
     * <code>HealthCheckConfig</code>. If you do, the request will fail with an
     * <code>InvalidInput</code> error.</p> </li> </ul> <p> <b>SRV</b> </p> <p>Route 53
     * returns the value for an SRV record. The value for an SRV record uses the
     * following values:</p> <p> <code>priority weight port service-hostname</code>
     * </p> <p>Note the following about the values:</p> <ul> <li> <p>The values of
     * <code>priority</code> and <code>weight</code> are both set to <code>1</code> and
     * can't be changed. </p> </li> <li> <p>The value of <code>port</code> comes from
     * the value that you specify for the <code>AWS_INSTANCE_PORT</code> attribute when
     * you submit a <a>RegisterInstance</a> request. </p> </li> <li> <p>The value of
     * <code>service-hostname</code> is a concatenation of the following values:</p>
     * <ul> <li> <p>The value that you specify for <code>InstanceId</code> when you
     * register an instance.</p> </li> <li> <p>The name of the service.</p> </li> <li>
     * <p>The name of the namespace. </p> </li> </ul> <p>For example, if the value of
     * <code>InstanceId</code> is <code>test</code>, the name of the service is
     * <code>backend</code>, and the name of the namespace is <code>example.com</code>,
     * the value of <code>service-hostname</code> is:</p> <p>
     * <code>test.backend.example.com</code> </p> </li> </ul> <p>If you specify
     * settings for an SRV record and if you specify values for
     * <code>AWS_INSTANCE_IPV4</code>, <code>AWS_INSTANCE_IPV6</code>, or both in the
     * <code>RegisterInstance</code> request, AWS Cloud Map automatically creates
     * <code>A</code> and/or <code>AAAA</code> records that have the same name as the
     * value of <code>service-hostname</code> in the SRV record. You can ignore these
     * records.</p>
     */
    inline const RecordType& GetType() const{ return m_type; }

    /**
     * <p>The type of the resource, which indicates the type of value that Route 53
     * returns in response to DNS queries.</p> <p>Note the following:</p> <ul> <li> <p>
     * <b>A, AAAA, and SRV records:</b> You can specify settings for a maximum of one
     * A, one AAAA, and one SRV record. You can specify them in any combination.</p>
     * </li> <li> <p> <b>CNAME records:</b> If you specify <code>CNAME</code> for
     * <code>Type</code>, you can't define any other records. This is a limitation of
     * DNS: you can't create a CNAME record and any other type of record that has the
     * same name as a CNAME record.</p> </li> <li> <p> <b>Alias records:</b> If you
     * want AWS Cloud Map to create a Route 53 alias record when you register an
     * instance, specify <code>A</code> or <code>AAAA</code> for <code>Type</code>.</p>
     * </li> <li> <p> <b>All records:</b> You specify settings other than
     * <code>TTL</code> and <code>Type</code> when you register an instance.</p> </li>
     * </ul> <p>The following values are supported:</p> <p> <b>A</b> </p> <p>Route 53
     * returns the IP address of the resource in IPv4 format, such as 192.0.2.44.</p>
     * <p> <b>AAAA</b> </p> <p>Route 53 returns the IP address of the resource in IPv6
     * format, such as 2001:0db8:85a3:0000:0000:abcd:0001:2345.</p> <p> <b>CNAME</b>
     * </p> <p>Route 53 returns the domain name of the resource, such as
     * www.example.com. Note the following:</p> <ul> <li> <p>You specify the domain
     * name that you want to route traffic to when you register an instance. For more
     * information, see <a>RegisterInstanceRequest$Attributes</a>.</p> </li> <li>
     * <p>You must specify <code>WEIGHTED</code> for the value of
     * <code>RoutingPolicy</code>.</p> </li> <li> <p>You can't specify both
     * <code>CNAME</code> for <code>Type</code> and settings for
     * <code>HealthCheckConfig</code>. If you do, the request will fail with an
     * <code>InvalidInput</code> error.</p> </li> </ul> <p> <b>SRV</b> </p> <p>Route 53
     * returns the value for an SRV record. The value for an SRV record uses the
     * following values:</p> <p> <code>priority weight port service-hostname</code>
     * </p> <p>Note the following about the values:</p> <ul> <li> <p>The values of
     * <code>priority</code> and <code>weight</code> are both set to <code>1</code> and
     * can't be changed. </p> </li> <li> <p>The value of <code>port</code> comes from
     * the value that you specify for the <code>AWS_INSTANCE_PORT</code> attribute when
     * you submit a <a>RegisterInstance</a> request. </p> </li> <li> <p>The value of
     * <code>service-hostname</code> is a concatenation of the following values:</p>
     * <ul> <li> <p>The value that you specify for <code>InstanceId</code> when you
     * register an instance.</p> </li> <li> <p>The name of the service.</p> </li> <li>
     * <p>The name of the namespace. </p> </li> </ul> <p>For example, if the value of
     * <code>InstanceId</code> is <code>test</code>, the name of the service is
     * <code>backend</code>, and the name of the namespace is <code>example.com</code>,
     * the value of <code>service-hostname</code> is:</p> <p>
     * <code>test.backend.example.com</code> </p> </li> </ul> <p>If you specify
     * settings for an SRV record and if you specify values for
     * <code>AWS_INSTANCE_IPV4</code>, <code>AWS_INSTANCE_IPV6</code>, or both in the
     * <code>RegisterInstance</code> request, AWS Cloud Map automatically creates
     * <code>A</code> and/or <code>AAAA</code> records that have the same name as the
     * value of <code>service-hostname</code> in the SRV record. You can ignore these
     * records.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the resource, which indicates the type of value that Route 53
     * returns in response to DNS queries.</p> <p>Note the following:</p> <ul> <li> <p>
     * <b>A, AAAA, and SRV records:</b> You can specify settings for a maximum of one
     * A, one AAAA, and one SRV record. You can specify them in any combination.</p>
     * </li> <li> <p> <b>CNAME records:</b> If you specify <code>CNAME</code> for
     * <code>Type</code>, you can't define any other records. This is a limitation of
     * DNS: you can't create a CNAME record and any other type of record that has the
     * same name as a CNAME record.</p> </li> <li> <p> <b>Alias records:</b> If you
     * want AWS Cloud Map to create a Route 53 alias record when you register an
     * instance, specify <code>A</code> or <code>AAAA</code> for <code>Type</code>.</p>
     * </li> <li> <p> <b>All records:</b> You specify settings other than
     * <code>TTL</code> and <code>Type</code> when you register an instance.</p> </li>
     * </ul> <p>The following values are supported:</p> <p> <b>A</b> </p> <p>Route 53
     * returns the IP address of the resource in IPv4 format, such as 192.0.2.44.</p>
     * <p> <b>AAAA</b> </p> <p>Route 53 returns the IP address of the resource in IPv6
     * format, such as 2001:0db8:85a3:0000:0000:abcd:0001:2345.</p> <p> <b>CNAME</b>
     * </p> <p>Route 53 returns the domain name of the resource, such as
     * www.example.com. Note the following:</p> <ul> <li> <p>You specify the domain
     * name that you want to route traffic to when you register an instance. For more
     * information, see <a>RegisterInstanceRequest$Attributes</a>.</p> </li> <li>
     * <p>You must specify <code>WEIGHTED</code> for the value of
     * <code>RoutingPolicy</code>.</p> </li> <li> <p>You can't specify both
     * <code>CNAME</code> for <code>Type</code> and settings for
     * <code>HealthCheckConfig</code>. If you do, the request will fail with an
     * <code>InvalidInput</code> error.</p> </li> </ul> <p> <b>SRV</b> </p> <p>Route 53
     * returns the value for an SRV record. The value for an SRV record uses the
     * following values:</p> <p> <code>priority weight port service-hostname</code>
     * </p> <p>Note the following about the values:</p> <ul> <li> <p>The values of
     * <code>priority</code> and <code>weight</code> are both set to <code>1</code> and
     * can't be changed. </p> </li> <li> <p>The value of <code>port</code> comes from
     * the value that you specify for the <code>AWS_INSTANCE_PORT</code> attribute when
     * you submit a <a>RegisterInstance</a> request. </p> </li> <li> <p>The value of
     * <code>service-hostname</code> is a concatenation of the following values:</p>
     * <ul> <li> <p>The value that you specify for <code>InstanceId</code> when you
     * register an instance.</p> </li> <li> <p>The name of the service.</p> </li> <li>
     * <p>The name of the namespace. </p> </li> </ul> <p>For example, if the value of
     * <code>InstanceId</code> is <code>test</code>, the name of the service is
     * <code>backend</code>, and the name of the namespace is <code>example.com</code>,
     * the value of <code>service-hostname</code> is:</p> <p>
     * <code>test.backend.example.com</code> </p> </li> </ul> <p>If you specify
     * settings for an SRV record and if you specify values for
     * <code>AWS_INSTANCE_IPV4</code>, <code>AWS_INSTANCE_IPV6</code>, or both in the
     * <code>RegisterInstance</code> request, AWS Cloud Map automatically creates
     * <code>A</code> and/or <code>AAAA</code> records that have the same name as the
     * value of <code>service-hostname</code> in the SRV record. You can ignore these
     * records.</p>
     */
    inline void SetType(const RecordType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the resource, which indicates the type of value that Route 53
     * returns in response to DNS queries.</p> <p>Note the following:</p> <ul> <li> <p>
     * <b>A, AAAA, and SRV records:</b> You can specify settings for a maximum of one
     * A, one AAAA, and one SRV record. You can specify them in any combination.</p>
     * </li> <li> <p> <b>CNAME records:</b> If you specify <code>CNAME</code> for
     * <code>Type</code>, you can't define any other records. This is a limitation of
     * DNS: you can't create a CNAME record and any other type of record that has the
     * same name as a CNAME record.</p> </li> <li> <p> <b>Alias records:</b> If you
     * want AWS Cloud Map to create a Route 53 alias record when you register an
     * instance, specify <code>A</code> or <code>AAAA</code> for <code>Type</code>.</p>
     * </li> <li> <p> <b>All records:</b> You specify settings other than
     * <code>TTL</code> and <code>Type</code> when you register an instance.</p> </li>
     * </ul> <p>The following values are supported:</p> <p> <b>A</b> </p> <p>Route 53
     * returns the IP address of the resource in IPv4 format, such as 192.0.2.44.</p>
     * <p> <b>AAAA</b> </p> <p>Route 53 returns the IP address of the resource in IPv6
     * format, such as 2001:0db8:85a3:0000:0000:abcd:0001:2345.</p> <p> <b>CNAME</b>
     * </p> <p>Route 53 returns the domain name of the resource, such as
     * www.example.com. Note the following:</p> <ul> <li> <p>You specify the domain
     * name that you want to route traffic to when you register an instance. For more
     * information, see <a>RegisterInstanceRequest$Attributes</a>.</p> </li> <li>
     * <p>You must specify <code>WEIGHTED</code> for the value of
     * <code>RoutingPolicy</code>.</p> </li> <li> <p>You can't specify both
     * <code>CNAME</code> for <code>Type</code> and settings for
     * <code>HealthCheckConfig</code>. If you do, the request will fail with an
     * <code>InvalidInput</code> error.</p> </li> </ul> <p> <b>SRV</b> </p> <p>Route 53
     * returns the value for an SRV record. The value for an SRV record uses the
     * following values:</p> <p> <code>priority weight port service-hostname</code>
     * </p> <p>Note the following about the values:</p> <ul> <li> <p>The values of
     * <code>priority</code> and <code>weight</code> are both set to <code>1</code> and
     * can't be changed. </p> </li> <li> <p>The value of <code>port</code> comes from
     * the value that you specify for the <code>AWS_INSTANCE_PORT</code> attribute when
     * you submit a <a>RegisterInstance</a> request. </p> </li> <li> <p>The value of
     * <code>service-hostname</code> is a concatenation of the following values:</p>
     * <ul> <li> <p>The value that you specify for <code>InstanceId</code> when you
     * register an instance.</p> </li> <li> <p>The name of the service.</p> </li> <li>
     * <p>The name of the namespace. </p> </li> </ul> <p>For example, if the value of
     * <code>InstanceId</code> is <code>test</code>, the name of the service is
     * <code>backend</code>, and the name of the namespace is <code>example.com</code>,
     * the value of <code>service-hostname</code> is:</p> <p>
     * <code>test.backend.example.com</code> </p> </li> </ul> <p>If you specify
     * settings for an SRV record and if you specify values for
     * <code>AWS_INSTANCE_IPV4</code>, <code>AWS_INSTANCE_IPV6</code>, or both in the
     * <code>RegisterInstance</code> request, AWS Cloud Map automatically creates
     * <code>A</code> and/or <code>AAAA</code> records that have the same name as the
     * value of <code>service-hostname</code> in the SRV record. You can ignore these
     * records.</p>
     */
    inline void SetType(RecordType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the resource, which indicates the type of value that Route 53
     * returns in response to DNS queries.</p> <p>Note the following:</p> <ul> <li> <p>
     * <b>A, AAAA, and SRV records:</b> You can specify settings for a maximum of one
     * A, one AAAA, and one SRV record. You can specify them in any combination.</p>
     * </li> <li> <p> <b>CNAME records:</b> If you specify <code>CNAME</code> for
     * <code>Type</code>, you can't define any other records. This is a limitation of
     * DNS: you can't create a CNAME record and any other type of record that has the
     * same name as a CNAME record.</p> </li> <li> <p> <b>Alias records:</b> If you
     * want AWS Cloud Map to create a Route 53 alias record when you register an
     * instance, specify <code>A</code> or <code>AAAA</code> for <code>Type</code>.</p>
     * </li> <li> <p> <b>All records:</b> You specify settings other than
     * <code>TTL</code> and <code>Type</code> when you register an instance.</p> </li>
     * </ul> <p>The following values are supported:</p> <p> <b>A</b> </p> <p>Route 53
     * returns the IP address of the resource in IPv4 format, such as 192.0.2.44.</p>
     * <p> <b>AAAA</b> </p> <p>Route 53 returns the IP address of the resource in IPv6
     * format, such as 2001:0db8:85a3:0000:0000:abcd:0001:2345.</p> <p> <b>CNAME</b>
     * </p> <p>Route 53 returns the domain name of the resource, such as
     * www.example.com. Note the following:</p> <ul> <li> <p>You specify the domain
     * name that you want to route traffic to when you register an instance. For more
     * information, see <a>RegisterInstanceRequest$Attributes</a>.</p> </li> <li>
     * <p>You must specify <code>WEIGHTED</code> for the value of
     * <code>RoutingPolicy</code>.</p> </li> <li> <p>You can't specify both
     * <code>CNAME</code> for <code>Type</code> and settings for
     * <code>HealthCheckConfig</code>. If you do, the request will fail with an
     * <code>InvalidInput</code> error.</p> </li> </ul> <p> <b>SRV</b> </p> <p>Route 53
     * returns the value for an SRV record. The value for an SRV record uses the
     * following values:</p> <p> <code>priority weight port service-hostname</code>
     * </p> <p>Note the following about the values:</p> <ul> <li> <p>The values of
     * <code>priority</code> and <code>weight</code> are both set to <code>1</code> and
     * can't be changed. </p> </li> <li> <p>The value of <code>port</code> comes from
     * the value that you specify for the <code>AWS_INSTANCE_PORT</code> attribute when
     * you submit a <a>RegisterInstance</a> request. </p> </li> <li> <p>The value of
     * <code>service-hostname</code> is a concatenation of the following values:</p>
     * <ul> <li> <p>The value that you specify for <code>InstanceId</code> when you
     * register an instance.</p> </li> <li> <p>The name of the service.</p> </li> <li>
     * <p>The name of the namespace. </p> </li> </ul> <p>For example, if the value of
     * <code>InstanceId</code> is <code>test</code>, the name of the service is
     * <code>backend</code>, and the name of the namespace is <code>example.com</code>,
     * the value of <code>service-hostname</code> is:</p> <p>
     * <code>test.backend.example.com</code> </p> </li> </ul> <p>If you specify
     * settings for an SRV record and if you specify values for
     * <code>AWS_INSTANCE_IPV4</code>, <code>AWS_INSTANCE_IPV6</code>, or both in the
     * <code>RegisterInstance</code> request, AWS Cloud Map automatically creates
     * <code>A</code> and/or <code>AAAA</code> records that have the same name as the
     * value of <code>service-hostname</code> in the SRV record. You can ignore these
     * records.</p>
     */
    inline DnsRecord& WithType(const RecordType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the resource, which indicates the type of value that Route 53
     * returns in response to DNS queries.</p> <p>Note the following:</p> <ul> <li> <p>
     * <b>A, AAAA, and SRV records:</b> You can specify settings for a maximum of one
     * A, one AAAA, and one SRV record. You can specify them in any combination.</p>
     * </li> <li> <p> <b>CNAME records:</b> If you specify <code>CNAME</code> for
     * <code>Type</code>, you can't define any other records. This is a limitation of
     * DNS: you can't create a CNAME record and any other type of record that has the
     * same name as a CNAME record.</p> </li> <li> <p> <b>Alias records:</b> If you
     * want AWS Cloud Map to create a Route 53 alias record when you register an
     * instance, specify <code>A</code> or <code>AAAA</code> for <code>Type</code>.</p>
     * </li> <li> <p> <b>All records:</b> You specify settings other than
     * <code>TTL</code> and <code>Type</code> when you register an instance.</p> </li>
     * </ul> <p>The following values are supported:</p> <p> <b>A</b> </p> <p>Route 53
     * returns the IP address of the resource in IPv4 format, such as 192.0.2.44.</p>
     * <p> <b>AAAA</b> </p> <p>Route 53 returns the IP address of the resource in IPv6
     * format, such as 2001:0db8:85a3:0000:0000:abcd:0001:2345.</p> <p> <b>CNAME</b>
     * </p> <p>Route 53 returns the domain name of the resource, such as
     * www.example.com. Note the following:</p> <ul> <li> <p>You specify the domain
     * name that you want to route traffic to when you register an instance. For more
     * information, see <a>RegisterInstanceRequest$Attributes</a>.</p> </li> <li>
     * <p>You must specify <code>WEIGHTED</code> for the value of
     * <code>RoutingPolicy</code>.</p> </li> <li> <p>You can't specify both
     * <code>CNAME</code> for <code>Type</code> and settings for
     * <code>HealthCheckConfig</code>. If you do, the request will fail with an
     * <code>InvalidInput</code> error.</p> </li> </ul> <p> <b>SRV</b> </p> <p>Route 53
     * returns the value for an SRV record. The value for an SRV record uses the
     * following values:</p> <p> <code>priority weight port service-hostname</code>
     * </p> <p>Note the following about the values:</p> <ul> <li> <p>The values of
     * <code>priority</code> and <code>weight</code> are both set to <code>1</code> and
     * can't be changed. </p> </li> <li> <p>The value of <code>port</code> comes from
     * the value that you specify for the <code>AWS_INSTANCE_PORT</code> attribute when
     * you submit a <a>RegisterInstance</a> request. </p> </li> <li> <p>The value of
     * <code>service-hostname</code> is a concatenation of the following values:</p>
     * <ul> <li> <p>The value that you specify for <code>InstanceId</code> when you
     * register an instance.</p> </li> <li> <p>The name of the service.</p> </li> <li>
     * <p>The name of the namespace. </p> </li> </ul> <p>For example, if the value of
     * <code>InstanceId</code> is <code>test</code>, the name of the service is
     * <code>backend</code>, and the name of the namespace is <code>example.com</code>,
     * the value of <code>service-hostname</code> is:</p> <p>
     * <code>test.backend.example.com</code> </p> </li> </ul> <p>If you specify
     * settings for an SRV record and if you specify values for
     * <code>AWS_INSTANCE_IPV4</code>, <code>AWS_INSTANCE_IPV6</code>, or both in the
     * <code>RegisterInstance</code> request, AWS Cloud Map automatically creates
     * <code>A</code> and/or <code>AAAA</code> records that have the same name as the
     * value of <code>service-hostname</code> in the SRV record. You can ignore these
     * records.</p>
     */
    inline DnsRecord& WithType(RecordType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The amount of time, in seconds, that you want DNS resolvers to cache the
     * settings for this record.</p> <note> <p>Alias records don't include a TTL
     * because Route 53 uses the TTL for the AWS resource that an alias record routes
     * traffic to. If you include the <code>AWS_ALIAS_DNS_NAME</code> attribute when
     * you submit a <a>RegisterInstance</a> request, the <code>TTL</code> value is
     * ignored. Always specify a TTL for the service; you can use a service to register
     * instances that create either alias or non-alias records.</p> </note>
     */
    inline long long GetTTL() const{ return m_tTL; }

    /**
     * <p>The amount of time, in seconds, that you want DNS resolvers to cache the
     * settings for this record.</p> <note> <p>Alias records don't include a TTL
     * because Route 53 uses the TTL for the AWS resource that an alias record routes
     * traffic to. If you include the <code>AWS_ALIAS_DNS_NAME</code> attribute when
     * you submit a <a>RegisterInstance</a> request, the <code>TTL</code> value is
     * ignored. Always specify a TTL for the service; you can use a service to register
     * instances that create either alias or non-alias records.</p> </note>
     */
    inline bool TTLHasBeenSet() const { return m_tTLHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, that you want DNS resolvers to cache the
     * settings for this record.</p> <note> <p>Alias records don't include a TTL
     * because Route 53 uses the TTL for the AWS resource that an alias record routes
     * traffic to. If you include the <code>AWS_ALIAS_DNS_NAME</code> attribute when
     * you submit a <a>RegisterInstance</a> request, the <code>TTL</code> value is
     * ignored. Always specify a TTL for the service; you can use a service to register
     * instances that create either alias or non-alias records.</p> </note>
     */
    inline void SetTTL(long long value) { m_tTLHasBeenSet = true; m_tTL = value; }

    /**
     * <p>The amount of time, in seconds, that you want DNS resolvers to cache the
     * settings for this record.</p> <note> <p>Alias records don't include a TTL
     * because Route 53 uses the TTL for the AWS resource that an alias record routes
     * traffic to. If you include the <code>AWS_ALIAS_DNS_NAME</code> attribute when
     * you submit a <a>RegisterInstance</a> request, the <code>TTL</code> value is
     * ignored. Always specify a TTL for the service; you can use a service to register
     * instances that create either alias or non-alias records.</p> </note>
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
