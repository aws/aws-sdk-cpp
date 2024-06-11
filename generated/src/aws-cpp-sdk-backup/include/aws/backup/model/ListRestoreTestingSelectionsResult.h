﻿/**
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
    AWS_BACKUP_API ListRestoreTestingSelectionsResult();
    AWS_BACKUP_API ListRestoreTestingSelectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListRestoreTestingSelectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the nexttoken.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRestoreTestingSelectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRestoreTestingSelectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRestoreTestingSelectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned restore testing selections associated with the restore testing
     * plan.</p>
     */
    inline const Aws::Vector<RestoreTestingSelectionForList>& GetRestoreTestingSelections() const{ return m_restoreTestingSelections; }
    inline void SetRestoreTestingSelections(const Aws::Vector<RestoreTestingSelectionForList>& value) { m_restoreTestingSelections = value; }
    inline void SetRestoreTestingSelections(Aws::Vector<RestoreTestingSelectionForList>&& value) { m_restoreTestingSelections = std::move(value); }
    inline ListRestoreTestingSelectionsResult& WithRestoreTestingSelections(const Aws::Vector<RestoreTestingSelectionForList>& value) { SetRestoreTestingSelections(value); return *this;}
    inline ListRestoreTestingSelectionsResult& WithRestoreTestingSelections(Aws::Vector<RestoreTestingSelectionForList>&& value) { SetRestoreTestingSelections(std::move(value)); return *this;}
    inline ListRestoreTestingSelectionsResult& AddRestoreTestingSelections(const RestoreTestingSelectionForList& value) { m_restoreTestingSelections.push_back(value); return *this; }
    inline ListRestoreTestingSelectionsResult& AddRestoreTestingSelections(RestoreTestingSelectionForList&& value) { m_restoreTestingSelections.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRestoreTestingSelectionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRestoreTestingSelectionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRestoreTestingSelectionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<RestoreTestingSelectionForList> m_restoreTestingSelections;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
