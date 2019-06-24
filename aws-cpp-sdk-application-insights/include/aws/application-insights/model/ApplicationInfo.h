/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ApplicationInsights
{
namespace Model
{

  /**
   * <p>Describes the status of the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ApplicationInfo">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONINSIGHTS_API ApplicationInfo
  {
  public:
    ApplicationInfo();
    ApplicationInfo(Aws::Utils::Json::JsonView jsonValue);
    ApplicationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }

    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }

    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }

    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }

    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }

    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline ApplicationInfo& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline ApplicationInfo& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline ApplicationInfo& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}


    /**
     * <p>The lifecycle of the application. </p>
     */
    inline const Aws::String& GetLifeCycle() const{ return m_lifeCycle; }

    /**
     * <p>The lifecycle of the application. </p>
     */
    inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }

    /**
     * <p>The lifecycle of the application. </p>
     */
    inline void SetLifeCycle(const Aws::String& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = value; }

    /**
     * <p>The lifecycle of the application. </p>
     */
    inline void SetLifeCycle(Aws::String&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::move(value); }

    /**
     * <p>The lifecycle of the application. </p>
     */
    inline void SetLifeCycle(const char* value) { m_lifeCycleHasBeenSet = true; m_lifeCycle.assign(value); }

    /**
     * <p>The lifecycle of the application. </p>
     */
    inline ApplicationInfo& WithLifeCycle(const Aws::String& value) { SetLifeCycle(value); return *this;}

    /**
     * <p>The lifecycle of the application. </p>
     */
    inline ApplicationInfo& WithLifeCycle(Aws::String&& value) { SetLifeCycle(std::move(value)); return *this;}

    /**
     * <p>The lifecycle of the application. </p>
     */
    inline ApplicationInfo& WithLifeCycle(const char* value) { SetLifeCycle(value); return *this;}


    /**
     * <p>The issues on the user side that are blocking Application Insights from fully
     * monitoring the application.</p>
     */
    inline const Aws::String& GetRemarks() const{ return m_remarks; }

    /**
     * <p>The issues on the user side that are blocking Application Insights from fully
     * monitoring the application.</p>
     */
    inline bool RemarksHasBeenSet() const { return m_remarksHasBeenSet; }

    /**
     * <p>The issues on the user side that are blocking Application Insights from fully
     * monitoring the application.</p>
     */
    inline void SetRemarks(const Aws::String& value) { m_remarksHasBeenSet = true; m_remarks = value; }

    /**
     * <p>The issues on the user side that are blocking Application Insights from fully
     * monitoring the application.</p>
     */
    inline void SetRemarks(Aws::String&& value) { m_remarksHasBeenSet = true; m_remarks = std::move(value); }

    /**
     * <p>The issues on the user side that are blocking Application Insights from fully
     * monitoring the application.</p>
     */
    inline void SetRemarks(const char* value) { m_remarksHasBeenSet = true; m_remarks.assign(value); }

    /**
     * <p>The issues on the user side that are blocking Application Insights from fully
     * monitoring the application.</p>
     */
    inline ApplicationInfo& WithRemarks(const Aws::String& value) { SetRemarks(value); return *this;}

    /**
     * <p>The issues on the user side that are blocking Application Insights from fully
     * monitoring the application.</p>
     */
    inline ApplicationInfo& WithRemarks(Aws::String&& value) { SetRemarks(std::move(value)); return *this;}

    /**
     * <p>The issues on the user side that are blocking Application Insights from fully
     * monitoring the application.</p>
     */
    inline ApplicationInfo& WithRemarks(const char* value) { SetRemarks(value); return *this;}

  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet;

    Aws::String m_lifeCycle;
    bool m_lifeCycleHasBeenSet;

    Aws::String m_remarks;
    bool m_remarksHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
