/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/ProtectedResource.h>
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
  class ListProtectedResourcesByBackupVaultResult
  {
  public:
    AWS_BACKUP_API ListProtectedResourcesByBackupVaultResult();
    AWS_BACKUP_API ListProtectedResourcesByBackupVaultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListProtectedResourcesByBackupVaultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>These are the results returned for the request
     * ListProtectedResourcesByBackupVault.</p>
     */
    inline const Aws::Vector<ProtectedResource>& GetResults() const{ return m_results; }

    /**
     * <p>These are the results returned for the request
     * ListProtectedResourcesByBackupVault.</p>
     */
    inline void SetResults(const Aws::Vector<ProtectedResource>& value) { m_results = value; }

    /**
     * <p>These are the results returned for the request
     * ListProtectedResourcesByBackupVault.</p>
     */
    inline void SetResults(Aws::Vector<ProtectedResource>&& value) { m_results = std::move(value); }

    /**
     * <p>These are the results returned for the request
     * ListProtectedResourcesByBackupVault.</p>
     */
    inline ListProtectedResourcesByBackupVaultResult& WithResults(const Aws::Vector<ProtectedResource>& value) { SetResults(value); return *this;}

    /**
     * <p>These are the results returned for the request
     * ListProtectedResourcesByBackupVault.</p>
     */
    inline ListProtectedResourcesByBackupVaultResult& WithResults(Aws::Vector<ProtectedResource>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>These are the results returned for the request
     * ListProtectedResourcesByBackupVault.</p>
     */
    inline ListProtectedResourcesByBackupVaultResult& AddResults(const ProtectedResource& value) { m_results.push_back(value); return *this; }

    /**
     * <p>These are the results returned for the request
     * ListProtectedResourcesByBackupVault.</p>
     */
    inline ListProtectedResourcesByBackupVaultResult& AddResults(ProtectedResource&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListProtectedResourcesByBackupVaultResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListProtectedResourcesByBackupVaultResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListProtectedResourcesByBackupVaultResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListProtectedResourcesByBackupVaultResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListProtectedResourcesByBackupVaultResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListProtectedResourcesByBackupVaultResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ProtectedResource> m_results;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
