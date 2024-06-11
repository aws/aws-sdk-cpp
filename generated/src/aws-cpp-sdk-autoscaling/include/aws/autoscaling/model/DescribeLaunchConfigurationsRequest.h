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
    AWS_AUTOSCALING_API DescribeLaunchConfigurationsRequest();

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
    inline const Aws::Vector<Aws::String>& GetLaunchConfigurationNames() const{ return m_launchConfigurationNames; }
    inline bool LaunchConfigurationNamesHasBeenSet() const { return m_launchConfigurationNamesHasBeenSet; }
    inline void SetLaunchConfigurationNames(const Aws::Vector<Aws::String>& value) { m_launchConfigurationNamesHasBeenSet = true; m_launchConfigurationNames = value; }
    inline void SetLaunchConfigurationNames(Aws::Vector<Aws::String>&& value) { m_launchConfigurationNamesHasBeenSet = true; m_launchConfigurationNames = std::move(value); }
    inline DescribeLaunchConfigurationsRequest& WithLaunchConfigurationNames(const Aws::Vector<Aws::String>& value) { SetLaunchConfigurationNames(value); return *this;}
    inline DescribeLaunchConfigurationsRequest& WithLaunchConfigurationNames(Aws::Vector<Aws::String>&& value) { SetLaunchConfigurationNames(std::move(value)); return *this;}
    inline DescribeLaunchConfigurationsRequest& AddLaunchConfigurationNames(const Aws::String& value) { m_launchConfigurationNamesHasBeenSet = true; m_launchConfigurationNames.push_back(value); return *this; }
    inline DescribeLaunchConfigurationsRequest& AddLaunchConfigurationNames(Aws::String&& value) { m_launchConfigurationNamesHasBeenSet = true; m_launchConfigurationNames.push_back(std::move(value)); return *this; }
    inline DescribeLaunchConfigurationsRequest& AddLaunchConfigurationNames(const char* value) { m_launchConfigurationNamesHasBeenSet = true; m_launchConfigurationNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeLaunchConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeLaunchConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeLaunchConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call. The default value is
     * <code>50</code> and the maximum value is <code>100</code>.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeLaunchConfigurationsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_launchConfigurationNames;
    bool m_launchConfigurationNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
