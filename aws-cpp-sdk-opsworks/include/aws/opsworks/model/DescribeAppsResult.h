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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/App.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeApps</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeAppsResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeAppsResult
  {
  public:
    DescribeAppsResult();
    DescribeAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>App</code> objects that describe the specified apps. </p>
     */
    inline const Aws::Vector<App>& GetApps() const{ return m_apps; }

    /**
     * <p>An array of <code>App</code> objects that describe the specified apps. </p>
     */
    inline void SetApps(const Aws::Vector<App>& value) { m_apps = value; }

    /**
     * <p>An array of <code>App</code> objects that describe the specified apps. </p>
     */
    inline void SetApps(Aws::Vector<App>&& value) { m_apps = std::move(value); }

    /**
     * <p>An array of <code>App</code> objects that describe the specified apps. </p>
     */
    inline DescribeAppsResult& WithApps(const Aws::Vector<App>& value) { SetApps(value); return *this;}

    /**
     * <p>An array of <code>App</code> objects that describe the specified apps. </p>
     */
    inline DescribeAppsResult& WithApps(Aws::Vector<App>&& value) { SetApps(std::move(value)); return *this;}

    /**
     * <p>An array of <code>App</code> objects that describe the specified apps. </p>
     */
    inline DescribeAppsResult& AddApps(const App& value) { m_apps.push_back(value); return *this; }

    /**
     * <p>An array of <code>App</code> objects that describe the specified apps. </p>
     */
    inline DescribeAppsResult& AddApps(App&& value) { m_apps.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<App> m_apps;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
