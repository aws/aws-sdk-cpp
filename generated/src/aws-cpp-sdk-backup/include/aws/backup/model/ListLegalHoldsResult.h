/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/LegalHold.h>
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
  class ListLegalHoldsResult
  {
  public:
    AWS_BACKUP_API ListLegalHoldsResult();
    AWS_BACKUP_API ListLegalHoldsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListLegalHoldsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListLegalHoldsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListLegalHoldsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListLegalHoldsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>This is an array of returned legal holds, both active and previous.</p>
     */
    inline const Aws::Vector<LegalHold>& GetLegalHolds() const{ return m_legalHolds; }

    /**
     * <p>This is an array of returned legal holds, both active and previous.</p>
     */
    inline void SetLegalHolds(const Aws::Vector<LegalHold>& value) { m_legalHolds = value; }

    /**
     * <p>This is an array of returned legal holds, both active and previous.</p>
     */
    inline void SetLegalHolds(Aws::Vector<LegalHold>&& value) { m_legalHolds = std::move(value); }

    /**
     * <p>This is an array of returned legal holds, both active and previous.</p>
     */
    inline ListLegalHoldsResult& WithLegalHolds(const Aws::Vector<LegalHold>& value) { SetLegalHolds(value); return *this;}

    /**
     * <p>This is an array of returned legal holds, both active and previous.</p>
     */
    inline ListLegalHoldsResult& WithLegalHolds(Aws::Vector<LegalHold>&& value) { SetLegalHolds(std::move(value)); return *this;}

    /**
     * <p>This is an array of returned legal holds, both active and previous.</p>
     */
    inline ListLegalHoldsResult& AddLegalHolds(const LegalHold& value) { m_legalHolds.push_back(value); return *this; }

    /**
     * <p>This is an array of returned legal holds, both active and previous.</p>
     */
    inline ListLegalHoldsResult& AddLegalHolds(LegalHold&& value) { m_legalHolds.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<LegalHold> m_legalHolds;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
