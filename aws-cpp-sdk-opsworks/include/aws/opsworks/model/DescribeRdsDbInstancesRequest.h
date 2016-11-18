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
  class AWS_OPSWORKS_API DescribeRdsDbInstancesRequest : public OpsWorksRequest
  {
  public:
    DescribeRdsDbInstancesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The stack ID that the instances are registered with. The operation returns
     * descriptions of all registered Amazon RDS instances.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID that the instances are registered with. The operation returns
     * descriptions of all registered Amazon RDS instances.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID that the instances are registered with. The operation returns
     * descriptions of all registered Amazon RDS instances.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID that the instances are registered with. The operation returns
     * descriptions of all registered Amazon RDS instances.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID that the instances are registered with. The operation returns
     * descriptions of all registered Amazon RDS instances.</p>
     */
    inline DescribeRdsDbInstancesRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID that the instances are registered with. The operation returns
     * descriptions of all registered Amazon RDS instances.</p>
     */
    inline DescribeRdsDbInstancesRequest& WithStackId(Aws::String&& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID that the instances are registered with. The operation returns
     * descriptions of all registered Amazon RDS instances.</p>
     */
    inline DescribeRdsDbInstancesRequest& WithStackId(const char* value) { SetStackId(value); return *this;}

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRdsDbInstanceArns() const{ return m_rdsDbInstanceArns; }

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline void SetRdsDbInstanceArns(const Aws::Vector<Aws::String>& value) { m_rdsDbInstanceArnsHasBeenSet = true; m_rdsDbInstanceArns = value; }

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline void SetRdsDbInstanceArns(Aws::Vector<Aws::String>&& value) { m_rdsDbInstanceArnsHasBeenSet = true; m_rdsDbInstanceArns = value; }

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline DescribeRdsDbInstancesRequest& WithRdsDbInstanceArns(const Aws::Vector<Aws::String>& value) { SetRdsDbInstanceArns(value); return *this;}

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline DescribeRdsDbInstancesRequest& WithRdsDbInstanceArns(Aws::Vector<Aws::String>&& value) { SetRdsDbInstanceArns(value); return *this;}

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline DescribeRdsDbInstancesRequest& AddRdsDbInstanceArns(const Aws::String& value) { m_rdsDbInstanceArnsHasBeenSet = true; m_rdsDbInstanceArns.push_back(value); return *this; }

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline DescribeRdsDbInstancesRequest& AddRdsDbInstanceArns(Aws::String&& value) { m_rdsDbInstanceArnsHasBeenSet = true; m_rdsDbInstanceArns.push_back(value); return *this; }

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline DescribeRdsDbInstancesRequest& AddRdsDbInstanceArns(const char* value) { m_rdsDbInstanceArnsHasBeenSet = true; m_rdsDbInstanceArns.push_back(value); return *this; }

  private:
    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;
    Aws::Vector<Aws::String> m_rdsDbInstanceArns;
    bool m_rdsDbInstanceArnsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
