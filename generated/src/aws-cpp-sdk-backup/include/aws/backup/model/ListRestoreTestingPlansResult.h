/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/RestoreTestingPlanForList.h>
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
namespace Backup
{
namespace Model
{
  class ListRestoreTestingPlansResult
  {
  public:
    AWS_BACKUP_API ListRestoreTestingPlansResult() = default;
    AWS_BACKUP_API ListRestoreTestingPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListRestoreTestingPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the nexttoken.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRestoreTestingPlansResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a returned list of restore testing plans.</p>
     */
    inline const Aws::Vector<RestoreTestingPlanForList>& GetRestoreTestingPlans() const { return m_restoreTestingPlans; }
    template<typename RestoreTestingPlansT = Aws::Vector<RestoreTestingPlanForList>>
    void SetRestoreTestingPlans(RestoreTestingPlansT&& value) { m_restoreTestingPlansHasBeenSet = true; m_restoreTestingPlans = std::forward<RestoreTestingPlansT>(value); }
    template<typename RestoreTestingPlansT = Aws::Vector<RestoreTestingPlanForList>>
    ListRestoreTestingPlansResult& WithRestoreTestingPlans(RestoreTestingPlansT&& value) { SetRestoreTestingPlans(std::forward<RestoreTestingPlansT>(value)); return *this;}
    template<typename RestoreTestingPlansT = RestoreTestingPlanForList>
    ListRestoreTestingPlansResult& AddRestoreTestingPlans(RestoreTestingPlansT&& value) { m_restoreTestingPlansHasBeenSet = true; m_restoreTestingPlans.emplace_back(std::forward<RestoreTestingPlansT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRestoreTestingPlansResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RestoreTestingPlanForList> m_restoreTestingPlans;
    bool m_restoreTestingPlansHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
