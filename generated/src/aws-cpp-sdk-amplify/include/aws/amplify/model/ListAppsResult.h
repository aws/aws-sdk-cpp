/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p> The result structure for an Amplify app list request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListAppsResult">AWS
   * API Reference</a></p>
   */
  class ListAppsResult
  {
  public:
    AWS_AMPLIFY_API ListAppsResult();
    AWS_AMPLIFY_API ListAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API ListAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of Amplify apps. </p>
     */
    inline const Aws::Vector<App>& GetApps() const{ return m_apps; }

    /**
     * <p> A list of Amplify apps. </p>
     */
    inline void SetApps(const Aws::Vector<App>& value) { m_apps = value; }

    /**
     * <p> A list of Amplify apps. </p>
     */
    inline void SetApps(Aws::Vector<App>&& value) { m_apps = std::move(value); }

    /**
     * <p> A list of Amplify apps. </p>
     */
    inline ListAppsResult& WithApps(const Aws::Vector<App>& value) { SetApps(value); return *this;}

    /**
     * <p> A list of Amplify apps. </p>
     */
    inline ListAppsResult& WithApps(Aws::Vector<App>&& value) { SetApps(std::move(value)); return *this;}

    /**
     * <p> A list of Amplify apps. </p>
     */
    inline ListAppsResult& AddApps(const App& value) { m_apps.push_back(value); return *this; }

    /**
     * <p> A list of Amplify apps. </p>
     */
    inline ListAppsResult& AddApps(App&& value) { m_apps.push_back(std::move(value)); return *this; }


    /**
     * <p> A pagination token. Set to null to start listing apps from start. If
     * non-null, the pagination token is returned in a result. Pass its value in here
     * to list more projects. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A pagination token. Set to null to start listing apps from start. If
     * non-null, the pagination token is returned in a result. Pass its value in here
     * to list more projects. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A pagination token. Set to null to start listing apps from start. If
     * non-null, the pagination token is returned in a result. Pass its value in here
     * to list more projects. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A pagination token. Set to null to start listing apps from start. If
     * non-null, the pagination token is returned in a result. Pass its value in here
     * to list more projects. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A pagination token. Set to null to start listing apps from start. If
     * non-null, the pagination token is returned in a result. Pass its value in here
     * to list more projects. </p>
     */
    inline ListAppsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A pagination token. Set to null to start listing apps from start. If
     * non-null, the pagination token is returned in a result. Pass its value in here
     * to list more projects. </p>
     */
    inline ListAppsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A pagination token. Set to null to start listing apps from start. If
     * non-null, the pagination token is returned in a result. Pass its value in here
     * to list more projects. </p>
     */
    inline ListAppsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<App> m_apps;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
