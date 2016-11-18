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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeLaunchConfigurations.</p>
   */
  class AWS_AUTOSCALING_API DescribeLaunchConfigurationsRequest : public AutoScalingRequest
  {
  public:
    DescribeLaunchConfigurationsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The launch configuration names. If you omit this parameter, all launch
     * configurations are described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLaunchConfigurationNames() const{ return m_launchConfigurationNames; }

    /**
     * <p>The launch configuration names. If you omit this parameter, all launch
     * configurations are described.</p>
     */
    inline void SetLaunchConfigurationNames(const Aws::Vector<Aws::String>& value) { m_launchConfigurationNamesHasBeenSet = true; m_launchConfigurationNames = value; }

    /**
     * <p>The launch configuration names. If you omit this parameter, all launch
     * configurations are described.</p>
     */
    inline void SetLaunchConfigurationNames(Aws::Vector<Aws::String>&& value) { m_launchConfigurationNamesHasBeenSet = true; m_launchConfigurationNames = value; }

    /**
     * <p>The launch configuration names. If you omit this parameter, all launch
     * configurations are described.</p>
     */
    inline DescribeLaunchConfigurationsRequest& WithLaunchConfigurationNames(const Aws::Vector<Aws::String>& value) { SetLaunchConfigurationNames(value); return *this;}

    /**
     * <p>The launch configuration names. If you omit this parameter, all launch
     * configurations are described.</p>
     */
    inline DescribeLaunchConfigurationsRequest& WithLaunchConfigurationNames(Aws::Vector<Aws::String>&& value) { SetLaunchConfigurationNames(value); return *this;}

    /**
     * <p>The launch configuration names. If you omit this parameter, all launch
     * configurations are described.</p>
     */
    inline DescribeLaunchConfigurationsRequest& AddLaunchConfigurationNames(const Aws::String& value) { m_launchConfigurationNamesHasBeenSet = true; m_launchConfigurationNames.push_back(value); return *this; }

    /**
     * <p>The launch configuration names. If you omit this parameter, all launch
     * configurations are described.</p>
     */
    inline DescribeLaunchConfigurationsRequest& AddLaunchConfigurationNames(Aws::String&& value) { m_launchConfigurationNamesHasBeenSet = true; m_launchConfigurationNames.push_back(value); return *this; }

    /**
     * <p>The launch configuration names. If you omit this parameter, all launch
     * configurations are described.</p>
     */
    inline DescribeLaunchConfigurationsRequest& AddLaunchConfigurationNames(const char* value) { m_launchConfigurationNamesHasBeenSet = true; m_launchConfigurationNames.push_back(value); return *this; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeLaunchConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeLaunchConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeLaunchConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of items to return with this call. The default is 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of items to return with this call. The default is 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of items to return with this call. The default is 100.</p>
     */
    inline DescribeLaunchConfigurationsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_launchConfigurationNames;
    bool m_launchConfigurationNamesHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
