/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/ApplicationInfo.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class ListApplicationsResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ListApplicationsResult() = default;
    AWS_APPLICATIONINSIGHTS_API ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of applications.</p>
     */
    inline const Aws::Vector<ApplicationInfo>& GetApplicationInfoList() const { return m_applicationInfoList; }
    template<typename ApplicationInfoListT = Aws::Vector<ApplicationInfo>>
    void SetApplicationInfoList(ApplicationInfoListT&& value) { m_applicationInfoListHasBeenSet = true; m_applicationInfoList = std::forward<ApplicationInfoListT>(value); }
    template<typename ApplicationInfoListT = Aws::Vector<ApplicationInfo>>
    ListApplicationsResult& WithApplicationInfoList(ApplicationInfoListT&& value) { SetApplicationInfoList(std::forward<ApplicationInfoListT>(value)); return *this;}
    template<typename ApplicationInfoListT = ApplicationInfo>
    ListApplicationsResult& AddApplicationInfoList(ApplicationInfoListT&& value) { m_applicationInfoListHasBeenSet = true; m_applicationInfoList.emplace_back(std::forward<ApplicationInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationInfo> m_applicationInfoList;
    bool m_applicationInfoListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
