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
    AWS_BACKUP_API ListRestoreTestingPlansResult();
    AWS_BACKUP_API ListRestoreTestingPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListRestoreTestingPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the nexttoken.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the nexttoken.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the nexttoken.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the nexttoken.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the nexttoken.</p>
     */
    inline ListRestoreTestingPlansResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the nexttoken.</p>
     */
    inline ListRestoreTestingPlansResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the nexttoken.</p>
     */
    inline ListRestoreTestingPlansResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>This is a returned list of restore testing plans.</p>
     */
    inline const Aws::Vector<RestoreTestingPlanForList>& GetRestoreTestingPlans() const{ return m_restoreTestingPlans; }

    /**
     * <p>This is a returned list of restore testing plans.</p>
     */
    inline void SetRestoreTestingPlans(const Aws::Vector<RestoreTestingPlanForList>& value) { m_restoreTestingPlans = value; }

    /**
     * <p>This is a returned list of restore testing plans.</p>
     */
    inline void SetRestoreTestingPlans(Aws::Vector<RestoreTestingPlanForList>&& value) { m_restoreTestingPlans = std::move(value); }

    /**
     * <p>This is a returned list of restore testing plans.</p>
     */
    inline ListRestoreTestingPlansResult& WithRestoreTestingPlans(const Aws::Vector<RestoreTestingPlanForList>& value) { SetRestoreTestingPlans(value); return *this;}

    /**
     * <p>This is a returned list of restore testing plans.</p>
     */
    inline ListRestoreTestingPlansResult& WithRestoreTestingPlans(Aws::Vector<RestoreTestingPlanForList>&& value) { SetRestoreTestingPlans(std::move(value)); return *this;}

    /**
     * <p>This is a returned list of restore testing plans.</p>
     */
    inline ListRestoreTestingPlansResult& AddRestoreTestingPlans(const RestoreTestingPlanForList& value) { m_restoreTestingPlans.push_back(value); return *this; }

    /**
     * <p>This is a returned list of restore testing plans.</p>
     */
    inline ListRestoreTestingPlansResult& AddRestoreTestingPlans(RestoreTestingPlanForList&& value) { m_restoreTestingPlans.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRestoreTestingPlansResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRestoreTestingPlansResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRestoreTestingPlansResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<RestoreTestingPlanForList> m_restoreTestingPlans;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
