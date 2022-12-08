/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeConversionTasksRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeConversionTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConversionTasks"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The conversion task IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConversionTaskIds() const{ return m_conversionTaskIds; }

    /**
     * <p>The conversion task IDs.</p>
     */
    inline bool ConversionTaskIdsHasBeenSet() const { return m_conversionTaskIdsHasBeenSet; }

    /**
     * <p>The conversion task IDs.</p>
     */
    inline void SetConversionTaskIds(const Aws::Vector<Aws::String>& value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds = value; }

    /**
     * <p>The conversion task IDs.</p>
     */
    inline void SetConversionTaskIds(Aws::Vector<Aws::String>&& value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds = std::move(value); }

    /**
     * <p>The conversion task IDs.</p>
     */
    inline DescribeConversionTasksRequest& WithConversionTaskIds(const Aws::Vector<Aws::String>& value) { SetConversionTaskIds(value); return *this;}

    /**
     * <p>The conversion task IDs.</p>
     */
    inline DescribeConversionTasksRequest& WithConversionTaskIds(Aws::Vector<Aws::String>&& value) { SetConversionTaskIds(std::move(value)); return *this;}

    /**
     * <p>The conversion task IDs.</p>
     */
    inline DescribeConversionTasksRequest& AddConversionTaskIds(const Aws::String& value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds.push_back(value); return *this; }

    /**
     * <p>The conversion task IDs.</p>
     */
    inline DescribeConversionTasksRequest& AddConversionTaskIds(Aws::String&& value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The conversion task IDs.</p>
     */
    inline DescribeConversionTasksRequest& AddConversionTaskIds(const char* value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds.push_back(value); return *this; }


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
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

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

  private:

    Aws::Vector<Aws::String> m_conversionTaskIds;
    bool m_conversionTaskIdsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
