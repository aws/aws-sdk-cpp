/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/ExportStatus.h>
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
namespace LexModelsV2
{
namespace Model
{
  class DeleteExportResult
  {
  public:
    AWS_LEXMODELSV2_API DeleteExportResult() = default;
    AWS_LEXMODELSV2_API DeleteExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DeleteExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the deleted export.</p>
     */
    inline const Aws::String& GetExportId() const { return m_exportId; }
    template<typename ExportIdT = Aws::String>
    void SetExportId(ExportIdT&& value) { m_exportIdHasBeenSet = true; m_exportId = std::forward<ExportIdT>(value); }
    template<typename ExportIdT = Aws::String>
    DeleteExportResult& WithExportId(ExportIdT&& value) { SetExportId(std::forward<ExportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the deletion. When the deletion is complete, the export
     * will no longer be returned by the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_ListExports.html">ListExports</a>
     * operation and calls to the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_DescribeExport.html">
     * DescribeExport</a> operation with the export identifier will fail.</p>
     */
    inline ExportStatus GetExportStatus() const { return m_exportStatus; }
    inline void SetExportStatus(ExportStatus value) { m_exportStatusHasBeenSet = true; m_exportStatus = value; }
    inline DeleteExportResult& WithExportStatus(ExportStatus value) { SetExportStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteExportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet = false;

    ExportStatus m_exportStatus{ExportStatus::NOT_SET};
    bool m_exportStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
