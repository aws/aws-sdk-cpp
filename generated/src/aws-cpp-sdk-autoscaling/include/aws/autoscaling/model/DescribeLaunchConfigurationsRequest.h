/**
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
  class DescribeLaunchConfigurationsRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API DescribeLaunchConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLaunchConfigurations"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The launch configuration names. If you omit this property, all launch
     * configurations are described.</p> <p>Array Members: Maximum number of 50
     * items.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLaunchConfigurationNames() const { return m_launchConfigurationNames; }
    inline bool LaunchConfigurationNamesHasBeenSet() const { return m_launchConfigurationNamesHasBeenSet; }
    template<typename LaunchConfigurationNamesT = Aws::Vector<Aws::String>>
    void SetLaunchConfigurationNames(LaunchConfigurationNamesT&& value) { m_launchConfigurationNamesHasBeenSet = true; m_launchConfigurationNames = std::forward<LaunchConfigurationNamesT>(value); }
    template<typename LaunchConfigurationNamesT = Aws::Vector<Aws::String>>
    DescribeLaunchConfigurationsRequest& WithLaunchConfigurationNames(LaunchConfigurationNamesT&& value) { SetLaunchConfigurationNames(std::forward<LaunchConfigurationNamesT>(value)); return *this;}
    template<typename LaunchConfigurationNamesT = Aws::String>
    DescribeLaunchConfigurationsRequest& AddLaunchConfigurationNames(LaunchConfigurationNamesT&& value) { m_launchConfigurationNamesHasBeenSet = true; m_launchConfigurationNames.emplace_back(std::forward<LaunchConfigurationNamesT>(value)); return *this; }
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
    DescribeLaunchConfigurationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call. The default value is
     * <code>50</code> and the maximum value is <code>100</code>.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeLaunchConfigurationsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_launchConfigurationNames;
    bool m_launchConfigurationNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
