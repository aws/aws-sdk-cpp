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
  class AWS_OPSWORKS_API DescribeAppsRequest : public OpsWorksRequest
  {
  public:
    DescribeAppsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApps"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The app stack ID. If you use this parameter, <code>DescribeApps</code>
     * returns a description of the apps in the specified stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The app stack ID. If you use this parameter, <code>DescribeApps</code>
     * returns a description of the apps in the specified stack.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The app stack ID. If you use this parameter, <code>DescribeApps</code>
     * returns a description of the apps in the specified stack.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The app stack ID. If you use this parameter, <code>DescribeApps</code>
     * returns a description of the apps in the specified stack.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The app stack ID. If you use this parameter, <code>DescribeApps</code>
     * returns a description of the apps in the specified stack.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The app stack ID. If you use this parameter, <code>DescribeApps</code>
     * returns a description of the apps in the specified stack.</p>
     */
    inline DescribeAppsRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The app stack ID. If you use this parameter, <code>DescribeApps</code>
     * returns a description of the apps in the specified stack.</p>
     */
    inline DescribeAppsRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The app stack ID. If you use this parameter, <code>DescribeApps</code>
     * returns a description of the apps in the specified stack.</p>
     */
    inline DescribeAppsRequest& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>An array of app IDs for the apps to be described. If you use this parameter,
     * <code>DescribeApps</code> returns a description of the specified apps.
     * Otherwise, it returns a description of every app.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAppIds() const{ return m_appIds; }

    /**
     * <p>An array of app IDs for the apps to be described. If you use this parameter,
     * <code>DescribeApps</code> returns a description of the specified apps.
     * Otherwise, it returns a description of every app.</p>
     */
    inline bool AppIdsHasBeenSet() const { return m_appIdsHasBeenSet; }

    /**
     * <p>An array of app IDs for the apps to be described. If you use this parameter,
     * <code>DescribeApps</code> returns a description of the specified apps.
     * Otherwise, it returns a description of every app.</p>
     */
    inline void SetAppIds(const Aws::Vector<Aws::String>& value) { m_appIdsHasBeenSet = true; m_appIds = value; }

    /**
     * <p>An array of app IDs for the apps to be described. If you use this parameter,
     * <code>DescribeApps</code> returns a description of the specified apps.
     * Otherwise, it returns a description of every app.</p>
     */
    inline void SetAppIds(Aws::Vector<Aws::String>&& value) { m_appIdsHasBeenSet = true; m_appIds = std::move(value); }

    /**
     * <p>An array of app IDs for the apps to be described. If you use this parameter,
     * <code>DescribeApps</code> returns a description of the specified apps.
     * Otherwise, it returns a description of every app.</p>
     */
    inline DescribeAppsRequest& WithAppIds(const Aws::Vector<Aws::String>& value) { SetAppIds(value); return *this;}

    /**
     * <p>An array of app IDs for the apps to be described. If you use this parameter,
     * <code>DescribeApps</code> returns a description of the specified apps.
     * Otherwise, it returns a description of every app.</p>
     */
    inline DescribeAppsRequest& WithAppIds(Aws::Vector<Aws::String>&& value) { SetAppIds(std::move(value)); return *this;}

    /**
     * <p>An array of app IDs for the apps to be described. If you use this parameter,
     * <code>DescribeApps</code> returns a description of the specified apps.
     * Otherwise, it returns a description of every app.</p>
     */
    inline DescribeAppsRequest& AddAppIds(const Aws::String& value) { m_appIdsHasBeenSet = true; m_appIds.push_back(value); return *this; }

    /**
     * <p>An array of app IDs for the apps to be described. If you use this parameter,
     * <code>DescribeApps</code> returns a description of the specified apps.
     * Otherwise, it returns a description of every app.</p>
     */
    inline DescribeAppsRequest& AddAppIds(Aws::String&& value) { m_appIdsHasBeenSet = true; m_appIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of app IDs for the apps to be described. If you use this parameter,
     * <code>DescribeApps</code> returns a description of the specified apps.
     * Otherwise, it returns a description of every app.</p>
     */
    inline DescribeAppsRequest& AddAppIds(const char* value) { m_appIdsHasBeenSet = true; m_appIds.push_back(value); return *this; }

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::Vector<Aws::String> m_appIds;
    bool m_appIdsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
