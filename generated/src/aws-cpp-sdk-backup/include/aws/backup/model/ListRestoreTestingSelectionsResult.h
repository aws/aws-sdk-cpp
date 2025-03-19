/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/RestoreTestingSelectionForList.h>
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
  class ListRestoreTestingSelectionsResult
  {
  public:
    AWS_BACKUP_API ListRestoreTestingSelectionsResult() = default;
    AWS_BACKUP_API ListRestoreTestingSelectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListRestoreTestingSelectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListRestoreTestingSelectionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned restore testing selections associated with the restore testing
     * plan.</p>
     */
    inline const Aws::Vector<RestoreTestingSelectionForList>& GetRestoreTestingSelections() const { return m_restoreTestingSelections; }
    template<typename RestoreTestingSelectionsT = Aws::Vector<RestoreTestingSelectionForList>>
    void SetRestoreTestingSelections(RestoreTestingSelectionsT&& value) { m_restoreTestingSelectionsHasBeenSet = true; m_restoreTestingSelections = std::forward<RestoreTestingSelectionsT>(value); }
    template<typename RestoreTestingSelectionsT = Aws::Vector<RestoreTestingSelectionForList>>
    ListRestoreTestingSelectionsResult& WithRestoreTestingSelections(RestoreTestingSelectionsT&& value) { SetRestoreTestingSelections(std::forward<RestoreTestingSelectionsT>(value)); return *this;}
    template<typename RestoreTestingSelectionsT = RestoreTestingSelectionForList>
    ListRestoreTestingSelectionsResult& AddRestoreTestingSelections(RestoreTestingSelectionsT&& value) { m_restoreTestingSelectionsHasBeenSet = true; m_restoreTestingSelections.emplace_back(std::forward<RestoreTestingSelectionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRestoreTestingSelectionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RestoreTestingSelectionForList> m_restoreTestingSelections;
    bool m_restoreTestingSelectionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
