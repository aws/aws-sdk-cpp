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
   * <p>The result structure for an Amplify app list request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListAppsResult">AWS
   * API Reference</a></p>
   */
  class ListAppsResult
  {
  public:
    AWS_AMPLIFY_API ListAppsResult() = default;
    AWS_AMPLIFY_API ListAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API ListAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of Amplify apps. </p>
     */
    inline const Aws::Vector<App>& GetApps() const { return m_apps; }
    template<typename AppsT = Aws::Vector<App>>
    void SetApps(AppsT&& value) { m_appsHasBeenSet = true; m_apps = std::forward<AppsT>(value); }
    template<typename AppsT = Aws::Vector<App>>
    ListAppsResult& WithApps(AppsT&& value) { SetApps(std::forward<AppsT>(value)); return *this;}
    template<typename AppsT = App>
    ListAppsResult& AddApps(AppsT&& value) { m_appsHasBeenSet = true; m_apps.emplace_back(std::forward<AppsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token. Set to null to start listing apps from start. If
     * non-null, the pagination token is returned in a result. Pass its value in here
     * to list more projects. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<App> m_apps;
    bool m_appsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
