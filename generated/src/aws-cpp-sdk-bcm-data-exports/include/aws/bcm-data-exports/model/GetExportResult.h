/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/bcm-data-exports/model/Export.h>
#include <aws/bcm-data-exports/model/ExportStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BCMDataExports
{
namespace Model
{
  class GetExportResult
  {
  public:
    AWS_BCMDATAEXPORTS_API GetExportResult() = default;
    AWS_BCMDATAEXPORTS_API GetExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMDATAEXPORTS_API GetExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data for this specific export.</p>
     */
    inline const Export& GetExport() const { return m_export; }
    template<typename ExportT = Export>
    void SetExport(ExportT&& value) { m_exportHasBeenSet = true; m_export = std::forward<ExportT>(value); }
    template<typename ExportT = Export>
    GetExportResult& WithExport(ExportT&& value) { SetExport(std::forward<ExportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this specific export.</p>
     */
    inline const ExportStatus& GetExportStatus() const { return m_exportStatus; }
    template<typename ExportStatusT = ExportStatus>
    void SetExportStatus(ExportStatusT&& value) { m_exportStatusHasBeenSet = true; m_exportStatus = std::forward<ExportStatusT>(value); }
    template<typename ExportStatusT = ExportStatus>
    GetExportResult& WithExportStatus(ExportStatusT&& value) { SetExportStatus(std::forward<ExportStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetExportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Export m_export;
    bool m_exportHasBeenSet = false;

    ExportStatus m_exportStatus;
    bool m_exportStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
