/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/UserAccessTaskItem.h>
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
  class StartUserAccessTasksResult
  {
  public:
    AWS_APPFABRIC_API StartUserAccessTasksResult() = default;
    AWS_APPFABRIC_API StartUserAccessTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API StartUserAccessTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a list of user access task information.</p>
     */
    inline const Aws::Vector<UserAccessTaskItem>& GetUserAccessTasksList() const { return m_userAccessTasksList; }
    template<typename UserAccessTasksListT = Aws::Vector<UserAccessTaskItem>>
    void SetUserAccessTasksList(UserAccessTasksListT&& value) { m_userAccessTasksListHasBeenSet = true; m_userAccessTasksList = std::forward<UserAccessTasksListT>(value); }
    template<typename UserAccessTasksListT = Aws::Vector<UserAccessTaskItem>>
    StartUserAccessTasksResult& WithUserAccessTasksList(UserAccessTasksListT&& value) { SetUserAccessTasksList(std::forward<UserAccessTasksListT>(value)); return *this;}
    template<typename UserAccessTasksListT = UserAccessTaskItem>
    StartUserAccessTasksResult& AddUserAccessTasksList(UserAccessTasksListT&& value) { m_userAccessTasksListHasBeenSet = true; m_userAccessTasksList.emplace_back(std::forward<UserAccessTasksListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartUserAccessTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserAccessTaskItem> m_userAccessTasksList;
    bool m_userAccessTasksListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
