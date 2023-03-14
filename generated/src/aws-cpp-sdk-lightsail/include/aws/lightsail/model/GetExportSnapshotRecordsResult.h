/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ExportSnapshotRecord.h>
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
namespace Lightsail
{
namespace Model
{
  class GetExportSnapshotRecordsResult
  {
  public:
    AWS_LIGHTSAIL_API GetExportSnapshotRecordsResult();
    AWS_LIGHTSAIL_API GetExportSnapshotRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetExportSnapshotRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects describing the export snapshot records.</p>
     */
    inline const Aws::Vector<ExportSnapshotRecord>& GetExportSnapshotRecords() const{ return m_exportSnapshotRecords; }

    /**
     * <p>A list of objects describing the export snapshot records.</p>
     */
    inline void SetExportSnapshotRecords(const Aws::Vector<ExportSnapshotRecord>& value) { m_exportSnapshotRecords = value; }

    /**
     * <p>A list of objects describing the export snapshot records.</p>
     */
    inline void SetExportSnapshotRecords(Aws::Vector<ExportSnapshotRecord>&& value) { m_exportSnapshotRecords = std::move(value); }

    /**
     * <p>A list of objects describing the export snapshot records.</p>
     */
    inline GetExportSnapshotRecordsResult& WithExportSnapshotRecords(const Aws::Vector<ExportSnapshotRecord>& value) { SetExportSnapshotRecords(value); return *this;}

    /**
     * <p>A list of objects describing the export snapshot records.</p>
     */
    inline GetExportSnapshotRecordsResult& WithExportSnapshotRecords(Aws::Vector<ExportSnapshotRecord>&& value) { SetExportSnapshotRecords(std::move(value)); return *this;}

    /**
     * <p>A list of objects describing the export snapshot records.</p>
     */
    inline GetExportSnapshotRecordsResult& AddExportSnapshotRecords(const ExportSnapshotRecord& value) { m_exportSnapshotRecords.push_back(value); return *this; }

    /**
     * <p>A list of objects describing the export snapshot records.</p>
     */
    inline GetExportSnapshotRecordsResult& AddExportSnapshotRecords(ExportSnapshotRecord&& value) { m_exportSnapshotRecords.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetExportSnapshotRecords</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetExportSnapshotRecords</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetExportSnapshotRecords</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetExportSnapshotRecords</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetExportSnapshotRecords</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline GetExportSnapshotRecordsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetExportSnapshotRecords</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline GetExportSnapshotRecordsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetExportSnapshotRecords</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline GetExportSnapshotRecordsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetExportSnapshotRecordsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetExportSnapshotRecordsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetExportSnapshotRecordsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ExportSnapshotRecord> m_exportSnapshotRecords;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
