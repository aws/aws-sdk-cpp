﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class DescribeNotificationConfigurationsRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API DescribeNotificationConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNotificationConfigurations"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroupNames() const { return m_autoScalingGroupNames; }
    inline bool AutoScalingGroupNamesHasBeenSet() const { return m_autoScalingGroupNamesHasBeenSet; }
    template<typename AutoScalingGroupNamesT = Aws::Vector<Aws::String>>
    void SetAutoScalingGroupNames(AutoScalingGroupNamesT&& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames = std::forward<AutoScalingGroupNamesT>(value); }
    template<typename AutoScalingGroupNamesT = Aws::Vector<Aws::String>>
    DescribeNotificationConfigurationsRequest& WithAutoScalingGroupNames(AutoScalingGroupNamesT&& value) { SetAutoScalingGroupNames(std::forward<AutoScalingGroupNamesT>(value)); return *this;}
    template<typename AutoScalingGroupNamesT = Aws::String>
    DescribeNotificationConfigurationsRequest& AddAutoScalingGroupNames(AutoScalingGroupNamesT&& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames.emplace_back(std::forward<AutoScalingGroupNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeNotificationConfigurationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call. The default value is
     * <code>50</code> and the maximum value is <code>100</code>.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeNotificationConfigurationsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_autoScalingGroupNames;
    bool m_autoScalingGroupNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
