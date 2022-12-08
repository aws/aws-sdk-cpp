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
    AWS_LEXMODELSV2_API DeleteExportResult();
    AWS_LEXMODELSV2_API DeleteExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DeleteExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the deleted export.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }

    /**
     * <p>The unique identifier of the deleted export.</p>
     */
    inline void SetExportId(const Aws::String& value) { m_exportId = value; }

    /**
     * <p>The unique identifier of the deleted export.</p>
     */
    inline void SetExportId(Aws::String&& value) { m_exportId = std::move(value); }

    /**
     * <p>The unique identifier of the deleted export.</p>
     */
    inline void SetExportId(const char* value) { m_exportId.assign(value); }

    /**
     * <p>The unique identifier of the deleted export.</p>
     */
    inline DeleteExportResult& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}

    /**
     * <p>The unique identifier of the deleted export.</p>
     */
    inline DeleteExportResult& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the deleted export.</p>
     */
    inline DeleteExportResult& WithExportId(const char* value) { SetExportId(value); return *this;}


    /**
     * <p>The current status of the deletion. When the deletion is complete, the export
     * will no longer be returned by the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_ListExports.html">ListExports</a>
     * operation and calls to the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeExport.html">
     * DescribeExport</a> operation with the export identifier will fail.</p>
     */
    inline const ExportStatus& GetExportStatus() const{ return m_exportStatus; }

    /**
     * <p>The current status of the deletion. When the deletion is complete, the export
     * will no longer be returned by the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_ListExports.html">ListExports</a>
     * operation and calls to the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeExport.html">
     * DescribeExport</a> operation with the export identifier will fail.</p>
     */
    inline void SetExportStatus(const ExportStatus& value) { m_exportStatus = value; }

    /**
     * <p>The current status of the deletion. When the deletion is complete, the export
     * will no longer be returned by the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_ListExports.html">ListExports</a>
     * operation and calls to the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeExport.html">
     * DescribeExport</a> operation with the export identifier will fail.</p>
     */
    inline void SetExportStatus(ExportStatus&& value) { m_exportStatus = std::move(value); }

    /**
     * <p>The current status of the deletion. When the deletion is complete, the export
     * will no longer be returned by the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_ListExports.html">ListExports</a>
     * operation and calls to the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeExport.html">
     * DescribeExport</a> operation with the export identifier will fail.</p>
     */
    inline DeleteExportResult& WithExportStatus(const ExportStatus& value) { SetExportStatus(value); return *this;}

    /**
     * <p>The current status of the deletion. When the deletion is complete, the export
     * will no longer be returned by the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_ListExports.html">ListExports</a>
     * operation and calls to the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeExport.html">
     * DescribeExport</a> operation with the export identifier will fail.</p>
     */
    inline DeleteExportResult& WithExportStatus(ExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}

  private:

    Aws::String m_exportId;

    ExportStatus m_exportStatus;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
