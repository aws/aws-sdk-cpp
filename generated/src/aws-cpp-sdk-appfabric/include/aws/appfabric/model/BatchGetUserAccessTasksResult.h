/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/UserAccessResultItem.h>
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
namespace AppFabric
{
namespace Model
{
  class BatchGetUserAccessTasksResult
  {
  public:
    AWS_APPFABRIC_API BatchGetUserAccessTasksResult() = default;
    AWS_APPFABRIC_API BatchGetUserAccessTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API BatchGetUserAccessTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a list of user access results.</p>
     */
    inline const Aws::Vector<UserAccessResultItem>& GetUserAccessResultsList() const { return m_userAccessResultsList; }
    template<typename UserAccessResultsListT = Aws::Vector<UserAccessResultItem>>
    void SetUserAccessResultsList(UserAccessResultsListT&& value) { m_userAccessResultsListHasBeenSet = true; m_userAccessResultsList = std::forward<UserAccessResultsListT>(value); }
    template<typename UserAccessResultsListT = Aws::Vector<UserAccessResultItem>>
    BatchGetUserAccessTasksResult& WithUserAccessResultsList(UserAccessResultsListT&& value) { SetUserAccessResultsList(std::forward<UserAccessResultsListT>(value)); return *this;}
    template<typename UserAccessResultsListT = UserAccessResultItem>
    BatchGetUserAccessTasksResult& AddUserAccessResultsList(UserAccessResultsListT&& value) { m_userAccessResultsListHasBeenSet = true; m_userAccessResultsList.emplace_back(std::forward<UserAccessResultsListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetUserAccessTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserAccessResultItem> m_userAccessResultsList;
    bool m_userAccessResultsListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
