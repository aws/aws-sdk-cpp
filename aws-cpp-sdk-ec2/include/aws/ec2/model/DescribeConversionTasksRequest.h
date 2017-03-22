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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeConversionTasks.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeConversionTasksRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeConversionTasksRequest : public EC2Request
  {
  public:
    DescribeConversionTasksRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeConversionTasksRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>One or more conversion task IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConversionTaskIds() const{ return m_conversionTaskIds; }

    /**
     * <p>One or more conversion task IDs.</p>
     */
    inline void SetConversionTaskIds(const Aws::Vector<Aws::String>& value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds = value; }

    /**
     * <p>One or more conversion task IDs.</p>
     */
    inline void SetConversionTaskIds(Aws::Vector<Aws::String>&& value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds = value; }

    /**
     * <p>One or more conversion task IDs.</p>
     */
    inline DescribeConversionTasksRequest& WithConversionTaskIds(const Aws::Vector<Aws::String>& value) { SetConversionTaskIds(value); return *this;}

    /**
     * <p>One or more conversion task IDs.</p>
     */
    inline DescribeConversionTasksRequest& WithConversionTaskIds(Aws::Vector<Aws::String>&& value) { SetConversionTaskIds(value); return *this;}

    /**
     * <p>One or more conversion task IDs.</p>
     */
    inline DescribeConversionTasksRequest& AddConversionTaskIds(const Aws::String& value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds.push_back(value); return *this; }

    /**
     * <p>One or more conversion task IDs.</p>
     */
    inline DescribeConversionTasksRequest& AddConversionTaskIds(Aws::String&& value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds.push_back(value); return *this; }

    /**
     * <p>One or more conversion task IDs.</p>
     */
    inline DescribeConversionTasksRequest& AddConversionTaskIds(const char* value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds.push_back(value); return *this; }

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::Vector<Aws::String> m_conversionTaskIds;
    bool m_conversionTaskIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
