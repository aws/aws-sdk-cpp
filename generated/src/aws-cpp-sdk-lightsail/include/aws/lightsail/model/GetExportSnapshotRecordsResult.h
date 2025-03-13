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
    AWS_LIGHTSAIL_API GetExportSnapshotRecordsResult() = default;
    AWS_LIGHTSAIL_API GetExportSnapshotRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetExportSnapshotRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects describing the export snapshot records.</p>
     */
    inline const Aws::Vector<ExportSnapshotRecord>& GetExportSnapshotRecords() const { return m_exportSnapshotRecords; }
    template<typename ExportSnapshotRecordsT = Aws::Vector<ExportSnapshotRecord>>
    void SetExportSnapshotRecords(ExportSnapshotRecordsT&& value) { m_exportSnapshotRecordsHasBeenSet = true; m_exportSnapshotRecords = std::forward<ExportSnapshotRecordsT>(value); }
    template<typename ExportSnapshotRecordsT = Aws::Vector<ExportSnapshotRecord>>
    GetExportSnapshotRecordsResult& WithExportSnapshotRecords(ExportSnapshotRecordsT&& value) { SetExportSnapshotRecords(std::forward<ExportSnapshotRecordsT>(value)); return *this;}
    template<typename ExportSnapshotRecordsT = ExportSnapshotRecord>
    GetExportSnapshotRecordsResult& AddExportSnapshotRecords(ExportSnapshotRecordsT&& value) { m_exportSnapshotRecordsHasBeenSet = true; m_exportSnapshotRecords.emplace_back(std::forward<ExportSnapshotRecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetExportSnapshotRecords</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetExportSnapshotRecordsResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetExportSnapshotRecordsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExportSnapshotRecord> m_exportSnapshotRecords;
    bool m_exportSnapshotRecordsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
