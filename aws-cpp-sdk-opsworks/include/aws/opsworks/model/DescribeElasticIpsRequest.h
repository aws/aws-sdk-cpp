/*
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API DescribeElasticIpsRequest : public OpsWorksRequest
  {
  public:
    DescribeElasticIpsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The instance ID. If you include this parameter,
     * <code>DescribeElasticIps</code> returns a description of the Elastic IP
     * addresses associated with the specified instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID. If you include this parameter,
     * <code>DescribeElasticIps</code> returns a description of the Elastic IP
     * addresses associated with the specified instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID. If you include this parameter,
     * <code>DescribeElasticIps</code> returns a description of the Elastic IP
     * addresses associated with the specified instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID. If you include this parameter,
     * <code>DescribeElasticIps</code> returns a description of the Elastic IP
     * addresses associated with the specified instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID. If you include this parameter,
     * <code>DescribeElasticIps</code> returns a description of the Elastic IP
     * addresses associated with the specified instance.</p>
     */
    inline DescribeElasticIpsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID. If you include this parameter,
     * <code>DescribeElasticIps</code> returns a description of the Elastic IP
     * addresses associated with the specified instance.</p>
     */
    inline DescribeElasticIpsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID. If you include this parameter,
     * <code>DescribeElasticIps</code> returns a description of the Elastic IP
     * addresses associated with the specified instance.</p>
     */
    inline DescribeElasticIpsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>A stack ID. If you include this parameter, <code>DescribeElasticIps</code>
     * returns a description of the Elastic IP addresses that are registered with the
     * specified stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>A stack ID. If you include this parameter, <code>DescribeElasticIps</code>
     * returns a description of the Elastic IP addresses that are registered with the
     * specified stack.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>A stack ID. If you include this parameter, <code>DescribeElasticIps</code>
     * returns a description of the Elastic IP addresses that are registered with the
     * specified stack.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>A stack ID. If you include this parameter, <code>DescribeElasticIps</code>
     * returns a description of the Elastic IP addresses that are registered with the
     * specified stack.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>A stack ID. If you include this parameter, <code>DescribeElasticIps</code>
     * returns a description of the Elastic IP addresses that are registered with the
     * specified stack.</p>
     */
    inline DescribeElasticIpsRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>A stack ID. If you include this parameter, <code>DescribeElasticIps</code>
     * returns a description of the Elastic IP addresses that are registered with the
     * specified stack.</p>
     */
    inline DescribeElasticIpsRequest& WithStackId(Aws::String&& value) { SetStackId(value); return *this;}

    /**
     * <p>A stack ID. If you include this parameter, <code>DescribeElasticIps</code>
     * returns a description of the Elastic IP addresses that are registered with the
     * specified stack.</p>
     */
    inline DescribeElasticIpsRequest& WithStackId(const char* value) { SetStackId(value); return *this;}

    /**
     * <p>An array of Elastic IP addresses to be described. If you include this
     * parameter, <code>DescribeElasticIps</code> returns a description of the
     * specified Elastic IP addresses. Otherwise, it returns a description of every
     * Elastic IP address.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIps() const{ return m_ips; }

    /**
     * <p>An array of Elastic IP addresses to be described. If you include this
     * parameter, <code>DescribeElasticIps</code> returns a description of the
     * specified Elastic IP addresses. Otherwise, it returns a description of every
     * Elastic IP address.</p>
     */
    inline void SetIps(const Aws::Vector<Aws::String>& value) { m_ipsHasBeenSet = true; m_ips = value; }

    /**
     * <p>An array of Elastic IP addresses to be described. If you include this
     * parameter, <code>DescribeElasticIps</code> returns a description of the
     * specified Elastic IP addresses. Otherwise, it returns a description of every
     * Elastic IP address.</p>
     */
    inline void SetIps(Aws::Vector<Aws::String>&& value) { m_ipsHasBeenSet = true; m_ips = value; }

    /**
     * <p>An array of Elastic IP addresses to be described. If you include this
     * parameter, <code>DescribeElasticIps</code> returns a description of the
     * specified Elastic IP addresses. Otherwise, it returns a description of every
     * Elastic IP address.</p>
     */
    inline DescribeElasticIpsRequest& WithIps(const Aws::Vector<Aws::String>& value) { SetIps(value); return *this;}

    /**
     * <p>An array of Elastic IP addresses to be described. If you include this
     * parameter, <code>DescribeElasticIps</code> returns a description of the
     * specified Elastic IP addresses. Otherwise, it returns a description of every
     * Elastic IP address.</p>
     */
    inline DescribeElasticIpsRequest& WithIps(Aws::Vector<Aws::String>&& value) { SetIps(value); return *this;}

    /**
     * <p>An array of Elastic IP addresses to be described. If you include this
     * parameter, <code>DescribeElasticIps</code> returns a description of the
     * specified Elastic IP addresses. Otherwise, it returns a description of every
     * Elastic IP address.</p>
     */
    inline DescribeElasticIpsRequest& AddIps(const Aws::String& value) { m_ipsHasBeenSet = true; m_ips.push_back(value); return *this; }

    /**
     * <p>An array of Elastic IP addresses to be described. If you include this
     * parameter, <code>DescribeElasticIps</code> returns a description of the
     * specified Elastic IP addresses. Otherwise, it returns a description of every
     * Elastic IP address.</p>
     */
    inline DescribeElasticIpsRequest& AddIps(Aws::String&& value) { m_ipsHasBeenSet = true; m_ips.push_back(value); return *this; }

    /**
     * <p>An array of Elastic IP addresses to be described. If you include this
     * parameter, <code>DescribeElasticIps</code> returns a description of the
     * specified Elastic IP addresses. Otherwise, it returns a description of every
     * Elastic IP address.</p>
     */
    inline DescribeElasticIpsRequest& AddIps(const char* value) { m_ipsHasBeenSet = true; m_ips.push_back(value); return *this; }

  private:
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;
    Aws::Vector<Aws::String> m_ips;
    bool m_ipsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
