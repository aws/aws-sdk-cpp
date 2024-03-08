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
    AWS_BCMDATAEXPORTS_API GetExportResult();
    AWS_BCMDATAEXPORTS_API GetExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMDATAEXPORTS_API GetExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The data for this specific export.</p>
     */
    inline const Export& GetExport() const{ return m_export; }

    /**
     * <p>The data for this specific export.</p>
     */
    inline void SetExport(const Export& value) { m_export = value; }

    /**
     * <p>The data for this specific export.</p>
     */
    inline void SetExport(Export&& value) { m_export = std::move(value); }

    /**
     * <p>The data for this specific export.</p>
     */
    inline GetExportResult& WithExport(const Export& value) { SetExport(value); return *this;}

    /**
     * <p>The data for this specific export.</p>
     */
    inline GetExportResult& WithExport(Export&& value) { SetExport(std::move(value)); return *this;}


    /**
     * <p>The status of this specific export.</p>
     */
    inline const ExportStatus& GetExportStatus() const{ return m_exportStatus; }

    /**
     * <p>The status of this specific export.</p>
     */
    inline void SetExportStatus(const ExportStatus& value) { m_exportStatus = value; }

    /**
     * <p>The status of this specific export.</p>
     */
    inline void SetExportStatus(ExportStatus&& value) { m_exportStatus = std::move(value); }

    /**
     * <p>The status of this specific export.</p>
     */
    inline GetExportResult& WithExportStatus(const ExportStatus& value) { SetExportStatus(value); return *this;}

    /**
     * <p>The status of this specific export.</p>
     */
    inline GetExportResult& WithExportStatus(ExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Export m_export;

    ExportStatus m_exportStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
