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
    AWS_EC2_API DescribeConversionTasksRequest() = default;

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
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeConversionTasksRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conversion task IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConversionTaskIds() const { return m_conversionTaskIds; }
    inline bool ConversionTaskIdsHasBeenSet() const { return m_conversionTaskIdsHasBeenSet; }
    template<typename ConversionTaskIdsT = Aws::Vector<Aws::String>>
    void SetConversionTaskIds(ConversionTaskIdsT&& value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds = std::forward<ConversionTaskIdsT>(value); }
    template<typename ConversionTaskIdsT = Aws::Vector<Aws::String>>
    DescribeConversionTasksRequest& WithConversionTaskIds(ConversionTaskIdsT&& value) { SetConversionTaskIds(std::forward<ConversionTaskIdsT>(value)); return *this;}
    template<typename ConversionTaskIdsT = Aws::String>
    DescribeConversionTasksRequest& AddConversionTaskIds(ConversionTaskIdsT&& value) { m_conversionTaskIdsHasBeenSet = true; m_conversionTaskIds.emplace_back(std::forward<ConversionTaskIdsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_conversionTaskIds;
    bool m_conversionTaskIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
