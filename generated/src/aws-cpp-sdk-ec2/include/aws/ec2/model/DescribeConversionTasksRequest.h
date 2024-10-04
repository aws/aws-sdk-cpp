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

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeConversionTasksRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conversion task IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConversionTaskIds() const{ return m_conversionTaskIds; }
    inline bool ConversionTaskIdsHasBeenSet() const { return m_conversionTaskIdsHasBeenSet; }
    inline void SetConversionTaskIds(const Aws::Vector<Aws::String>& value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds = value; }
    inline void SetConversionTaskIds(Aws::Vector<Aws::String>&& value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds = std::move(value); }
    inline DescribeConversionTasksRequest& WithConversionTaskIds(const Aws::Vector<Aws::String>& value) { SetConversionTaskIds(value); return *this;}
    inline DescribeConversionTasksRequest& WithConversionTaskIds(Aws::Vector<Aws::String>&& value) { SetConversionTaskIds(std::move(value)); return *this;}
    inline DescribeConversionTasksRequest& AddConversionTaskIds(const Aws::String& value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds.push_back(value); return *this; }
    inline DescribeConversionTasksRequest& AddConversionTaskIds(Aws::String&& value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds.push_back(std::move(value)); return *this; }
    inline DescribeConversionTasksRequest& AddConversionTaskIds(const char* value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds.push_back(value); return *this; }
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_conversionTaskIds;
    bool m_conversionTaskIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
