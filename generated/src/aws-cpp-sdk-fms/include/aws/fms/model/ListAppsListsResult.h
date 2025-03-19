/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/AppsListDataSummary.h>
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
namespace FMS
{
namespace Model
{
  class ListAppsListsResult
  {
  public:
    AWS_FMS_API ListAppsListsResult() = default;
    AWS_FMS_API ListAppsListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API ListAppsListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>AppsListDataSummary</code> objects.</p>
     */
    inline const Aws::Vector<AppsListDataSummary>& GetAppsLists() const { return m_appsLists; }
    template<typename AppsListsT = Aws::Vector<AppsListDataSummary>>
    void SetAppsLists(AppsListsT&& value) { m_appsListsHasBeenSet = true; m_appsLists = std::forward<AppsListsT>(value); }
    template<typename AppsListsT = Aws::Vector<AppsListDataSummary>>
    ListAppsListsResult& WithAppsLists(AppsListsT&& value) { SetAppsLists(std::forward<AppsListsT>(value)); return *this;}
    template<typename AppsListsT = AppsListDataSummary>
    ListAppsListsResult& AddAppsLists(AppsListsT&& value) { m_appsListsHasBeenSet = true; m_appsLists.emplace_back(std::forward<AppsListsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. You can use this token in subsequent requests to retrieve the next
     * batch of objects.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppsListsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppsListsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AppsListDataSummary> m_appsLists;
    bool m_appsListsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
