/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/model/JournalS3ExportDescription.h>
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
namespace QLDB
{
namespace Model
{
  class ListJournalS3ExportsForLedgerResult
  {
  public:
    AWS_QLDB_API ListJournalS3ExportsForLedgerResult();
    AWS_QLDB_API ListJournalS3ExportsForLedgerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API ListJournalS3ExportsForLedgerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The array of journal export job descriptions that are associated with the
     * specified ledger.</p>
     */
    inline const Aws::Vector<JournalS3ExportDescription>& GetJournalS3Exports() const{ return m_journalS3Exports; }

    /**
     * <p>The array of journal export job descriptions that are associated with the
     * specified ledger.</p>
     */
    inline void SetJournalS3Exports(const Aws::Vector<JournalS3ExportDescription>& value) { m_journalS3Exports = value; }

    /**
     * <p>The array of journal export job descriptions that are associated with the
     * specified ledger.</p>
     */
    inline void SetJournalS3Exports(Aws::Vector<JournalS3ExportDescription>&& value) { m_journalS3Exports = std::move(value); }

    /**
     * <p>The array of journal export job descriptions that are associated with the
     * specified ledger.</p>
     */
    inline ListJournalS3ExportsForLedgerResult& WithJournalS3Exports(const Aws::Vector<JournalS3ExportDescription>& value) { SetJournalS3Exports(value); return *this;}

    /**
     * <p>The array of journal export job descriptions that are associated with the
     * specified ledger.</p>
     */
    inline ListJournalS3ExportsForLedgerResult& WithJournalS3Exports(Aws::Vector<JournalS3ExportDescription>&& value) { SetJournalS3Exports(std::move(value)); return *this;}

    /**
     * <p>The array of journal export job descriptions that are associated with the
     * specified ledger.</p>
     */
    inline ListJournalS3ExportsForLedgerResult& AddJournalS3Exports(const JournalS3ExportDescription& value) { m_journalS3Exports.push_back(value); return *this; }

    /**
     * <p>The array of journal export job descriptions that are associated with the
     * specified ledger.</p>
     */
    inline ListJournalS3ExportsForLedgerResult& AddJournalS3Exports(JournalS3ExportDescription&& value) { m_journalS3Exports.push_back(std::move(value)); return *this; }


    /**
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent
     * <code>ListJournalS3ExportsForLedger</code> call.</p> </li> </ul>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent
     * <code>ListJournalS3ExportsForLedger</code> call.</p> </li> </ul>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent
     * <code>ListJournalS3ExportsForLedger</code> call.</p> </li> </ul>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent
     * <code>ListJournalS3ExportsForLedger</code> call.</p> </li> </ul>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent
     * <code>ListJournalS3ExportsForLedger</code> call.</p> </li> </ul>
     */
    inline ListJournalS3ExportsForLedgerResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent
     * <code>ListJournalS3ExportsForLedger</code> call.</p> </li> </ul>
     */
    inline ListJournalS3ExportsForLedgerResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent
     * <code>ListJournalS3ExportsForLedger</code> call.</p> </li> </ul>
     */
    inline ListJournalS3ExportsForLedgerResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<JournalS3ExportDescription> m_journalS3Exports;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
