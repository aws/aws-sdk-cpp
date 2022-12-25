/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DescribeRdsDbInstancesRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeRdsDbInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRdsDbInstances"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the stack with which the instances are registered. The operation
     * returns descriptions of all registered Amazon RDS instances.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The ID of the stack with which the instances are registered. The operation
     * returns descriptions of all registered Amazon RDS instances.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The ID of the stack with which the instances are registered. The operation
     * returns descriptions of all registered Amazon RDS instances.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The ID of the stack with which the instances are registered. The operation
     * returns descriptions of all registered Amazon RDS instances.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The ID of the stack with which the instances are registered. The operation
     * returns descriptions of all registered Amazon RDS instances.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The ID of the stack with which the instances are registered. The operation
     * returns descriptions of all registered Amazon RDS instances.</p>
     */
    inline DescribeRdsDbInstancesRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The ID of the stack with which the instances are registered. The operation
     * returns descriptions of all registered Amazon RDS instances.</p>
     */
    inline DescribeRdsDbInstancesRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The ID of the stack with which the instances are registered. The operation
     * returns descriptions of all registered Amazon RDS instances.</p>
     */
    inline DescribeRdsDbInstancesRequest& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRdsDbInstanceArns() const{ return m_rdsDbInstanceArns; }

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline bool RdsDbInstanceArnsHasBeenSet() const { return m_rdsDbInstanceArnsHasBeenSet; }

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline void SetRdsDbInstanceArns(const Aws::Vector<Aws::String>& value) { m_rdsDbInstanceArnsHasBeenSet = true; m_rdsDbInstanceArns = value; }

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline void SetRdsDbInstanceArns(Aws::Vector<Aws::String>&& value) { m_rdsDbInstanceArnsHasBeenSet = true; m_rdsDbInstanceArns = std::move(value); }

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline DescribeRdsDbInstancesRequest& WithRdsDbInstanceArns(const Aws::Vector<Aws::String>& value) { SetRdsDbInstanceArns(value); return *this;}

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline DescribeRdsDbInstancesRequest& WithRdsDbInstanceArns(Aws::Vector<Aws::String>&& value) { SetRdsDbInstanceArns(std::move(value)); return *this;}

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline DescribeRdsDbInstancesRequest& AddRdsDbInstanceArns(const Aws::String& value) { m_rdsDbInstanceArnsHasBeenSet = true; m_rdsDbInstanceArns.push_back(value); return *this; }

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline DescribeRdsDbInstancesRequest& AddRdsDbInstanceArns(Aws::String&& value) { m_rdsDbInstanceArnsHasBeenSet = true; m_rdsDbInstanceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline DescribeRdsDbInstancesRequest& AddRdsDbInstanceArns(const char* value) { m_rdsDbInstanceArnsHasBeenSet = true; m_rdsDbInstanceArns.push_back(value); return *this; }

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_rdsDbInstanceArns;
    bool m_rdsDbInstanceArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
