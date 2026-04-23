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
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/App.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p> Result structure for an Amplify App list request. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListAppsResult">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API ListAppsResult
  {
  public:
    ListAppsResult();
    ListAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> List of Amplify Apps. </p>
     */
    inline const Aws::Vector<App>& GetApps() const{ return m_apps; }

    /**
     * <p> List of Amplify Apps. </p>
     */
    inline void SetApps(const Aws::Vector<App>& value) { m_apps = value; }

    /**
     * <p> List of Amplify Apps. </p>
     */
    inline void SetApps(Aws::Vector<App>&& value) { m_apps = std::move(value); }

    /**
     * <p> List of Amplify Apps. </p>
     */
    inline ListAppsResult& WithApps(const Aws::Vector<App>& value) { SetApps(value); return *this;}

    /**
     * <p> List of Amplify Apps. </p>
     */
    inline ListAppsResult& WithApps(Aws::Vector<App>&& value) { SetApps(std::move(value)); return *this;}

    /**
     * <p> List of Amplify Apps. </p>
     */
    inline ListAppsResult& AddApps(const App& value) { m_apps.push_back(value); return *this; }

    /**
     * <p> List of Amplify Apps. </p>
     */
    inline ListAppsResult& AddApps(App&& value) { m_apps.push_back(std::move(value)); return *this; }


    /**
     * <p> Pagination token. Set to null to start listing Apps from start. If non-null
     * pagination token is returned in a result, then pass its value in here to list
     * more projects. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Pagination token. Set to null to start listing Apps from start. If non-null
     * pagination token is returned in a result, then pass its value in here to list
     * more projects. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> Pagination token. Set to null to start listing Apps from start. If non-null
     * pagination token is returned in a result, then pass its value in here to list
     * more projects. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> Pagination token. Set to null to start listing Apps from start. If non-null
     * pagination token is returned in a result, then pass its value in here to list
     * more projects. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> Pagination token. Set to null to start listing Apps from start. If non-null
     * pagination token is returned in a result, then pass its value in here to list
     * more projects. </p>
     */
    inline ListAppsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Pagination token. Set to null to start listing Apps from start. If non-null
     * pagination token is returned in a result, then pass its value in here to list
     * more projects. </p>
     */
    inline ListAppsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Pagination token. Set to null to start listing Apps from start. If non-null
     * pagination token is returned in a result, then pass its value in here to list
     * more projects. </p>
     */
    inline ListAppsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<App> m_apps;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
