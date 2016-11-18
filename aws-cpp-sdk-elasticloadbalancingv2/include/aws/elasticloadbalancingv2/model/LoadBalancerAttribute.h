﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a load balancer attribute.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API LoadBalancerAttribute
  {
  public:
    LoadBalancerAttribute();
    LoadBalancerAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    LoadBalancerAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The name of the attribute.</p> <ul> <li> <p>
     * <code>access_logs.s3.enabled</code> - Indicates whether access logs stored in
     * Amazon S3 are enabled. The value is <code>true</code> or <code>false</code>.</p>
     * </li> <li> <p> <code>access_logs.s3.bucket</code> - The name of the S3 bucket
     * for the access logs. This attribute is required if access logs in Amazon S3 are
     * enabled. The bucket must exist in the same region as the load balancer and have
     * a bucket policy that grants Elastic Load Balancing permission to write to the
     * bucket.</p> </li> <li> <p> <code>access_logs.s3.prefix</code> - The prefix for
     * the location in the S3 bucket. If you don't specify a prefix, the access logs
     * are stored in the root of the bucket.</p> </li> <li> <p>
     * <code>deletion_protection.enabled</code> - Indicates whether deletion protection
     * is enabled. The value is <code>true</code> or <code>false</code>.</p> </li> <li>
     * <p> <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in
     * seconds. The valid range is 1-3600. The default is 60 seconds.</p> </li> </ul>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the attribute.</p> <ul> <li> <p>
     * <code>access_logs.s3.enabled</code> - Indicates whether access logs stored in
     * Amazon S3 are enabled. The value is <code>true</code> or <code>false</code>.</p>
     * </li> <li> <p> <code>access_logs.s3.bucket</code> - The name of the S3 bucket
     * for the access logs. This attribute is required if access logs in Amazon S3 are
     * enabled. The bucket must exist in the same region as the load balancer and have
     * a bucket policy that grants Elastic Load Balancing permission to write to the
     * bucket.</p> </li> <li> <p> <code>access_logs.s3.prefix</code> - The prefix for
     * the location in the S3 bucket. If you don't specify a prefix, the access logs
     * are stored in the root of the bucket.</p> </li> <li> <p>
     * <code>deletion_protection.enabled</code> - Indicates whether deletion protection
     * is enabled. The value is <code>true</code> or <code>false</code>.</p> </li> <li>
     * <p> <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in
     * seconds. The valid range is 1-3600. The default is 60 seconds.</p> </li> </ul>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the attribute.</p> <ul> <li> <p>
     * <code>access_logs.s3.enabled</code> - Indicates whether access logs stored in
     * Amazon S3 are enabled. The value is <code>true</code> or <code>false</code>.</p>
     * </li> <li> <p> <code>access_logs.s3.bucket</code> - The name of the S3 bucket
     * for the access logs. This attribute is required if access logs in Amazon S3 are
     * enabled. The bucket must exist in the same region as the load balancer and have
     * a bucket policy that grants Elastic Load Balancing permission to write to the
     * bucket.</p> </li> <li> <p> <code>access_logs.s3.prefix</code> - The prefix for
     * the location in the S3 bucket. If you don't specify a prefix, the access logs
     * are stored in the root of the bucket.</p> </li> <li> <p>
     * <code>deletion_protection.enabled</code> - Indicates whether deletion protection
     * is enabled. The value is <code>true</code> or <code>false</code>.</p> </li> <li>
     * <p> <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in
     * seconds. The valid range is 1-3600. The default is 60 seconds.</p> </li> </ul>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the attribute.</p> <ul> <li> <p>
     * <code>access_logs.s3.enabled</code> - Indicates whether access logs stored in
     * Amazon S3 are enabled. The value is <code>true</code> or <code>false</code>.</p>
     * </li> <li> <p> <code>access_logs.s3.bucket</code> - The name of the S3 bucket
     * for the access logs. This attribute is required if access logs in Amazon S3 are
     * enabled. The bucket must exist in the same region as the load balancer and have
     * a bucket policy that grants Elastic Load Balancing permission to write to the
     * bucket.</p> </li> <li> <p> <code>access_logs.s3.prefix</code> - The prefix for
     * the location in the S3 bucket. If you don't specify a prefix, the access logs
     * are stored in the root of the bucket.</p> </li> <li> <p>
     * <code>deletion_protection.enabled</code> - Indicates whether deletion protection
     * is enabled. The value is <code>true</code> or <code>false</code>.</p> </li> <li>
     * <p> <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in
     * seconds. The valid range is 1-3600. The default is 60 seconds.</p> </li> </ul>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the attribute.</p> <ul> <li> <p>
     * <code>access_logs.s3.enabled</code> - Indicates whether access logs stored in
     * Amazon S3 are enabled. The value is <code>true</code> or <code>false</code>.</p>
     * </li> <li> <p> <code>access_logs.s3.bucket</code> - The name of the S3 bucket
     * for the access logs. This attribute is required if access logs in Amazon S3 are
     * enabled. The bucket must exist in the same region as the load balancer and have
     * a bucket policy that grants Elastic Load Balancing permission to write to the
     * bucket.</p> </li> <li> <p> <code>access_logs.s3.prefix</code> - The prefix for
     * the location in the S3 bucket. If you don't specify a prefix, the access logs
     * are stored in the root of the bucket.</p> </li> <li> <p>
     * <code>deletion_protection.enabled</code> - Indicates whether deletion protection
     * is enabled. The value is <code>true</code> or <code>false</code>.</p> </li> <li>
     * <p> <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in
     * seconds. The valid range is 1-3600. The default is 60 seconds.</p> </li> </ul>
     */
    inline LoadBalancerAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the attribute.</p> <ul> <li> <p>
     * <code>access_logs.s3.enabled</code> - Indicates whether access logs stored in
     * Amazon S3 are enabled. The value is <code>true</code> or <code>false</code>.</p>
     * </li> <li> <p> <code>access_logs.s3.bucket</code> - The name of the S3 bucket
     * for the access logs. This attribute is required if access logs in Amazon S3 are
     * enabled. The bucket must exist in the same region as the load balancer and have
     * a bucket policy that grants Elastic Load Balancing permission to write to the
     * bucket.</p> </li> <li> <p> <code>access_logs.s3.prefix</code> - The prefix for
     * the location in the S3 bucket. If you don't specify a prefix, the access logs
     * are stored in the root of the bucket.</p> </li> <li> <p>
     * <code>deletion_protection.enabled</code> - Indicates whether deletion protection
     * is enabled. The value is <code>true</code> or <code>false</code>.</p> </li> <li>
     * <p> <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in
     * seconds. The valid range is 1-3600. The default is 60 seconds.</p> </li> </ul>
     */
    inline LoadBalancerAttribute& WithKey(Aws::String&& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the attribute.</p> <ul> <li> <p>
     * <code>access_logs.s3.enabled</code> - Indicates whether access logs stored in
     * Amazon S3 are enabled. The value is <code>true</code> or <code>false</code>.</p>
     * </li> <li> <p> <code>access_logs.s3.bucket</code> - The name of the S3 bucket
     * for the access logs. This attribute is required if access logs in Amazon S3 are
     * enabled. The bucket must exist in the same region as the load balancer and have
     * a bucket policy that grants Elastic Load Balancing permission to write to the
     * bucket.</p> </li> <li> <p> <code>access_logs.s3.prefix</code> - The prefix for
     * the location in the S3 bucket. If you don't specify a prefix, the access logs
     * are stored in the root of the bucket.</p> </li> <li> <p>
     * <code>deletion_protection.enabled</code> - Indicates whether deletion protection
     * is enabled. The value is <code>true</code> or <code>false</code>.</p> </li> <li>
     * <p> <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in
     * seconds. The valid range is 1-3600. The default is 60 seconds.</p> </li> </ul>
     */
    inline LoadBalancerAttribute& WithKey(const char* value) { SetKey(value); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the attribute.</p>
     */
    inline LoadBalancerAttribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline LoadBalancerAttribute& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline LoadBalancerAttribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    Aws::String m_key;
    bool m_keyHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
