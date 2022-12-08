/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
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
namespace QLDB
{
namespace Model
{
  class ExportJournalToS3Result
  {
  public:
    AWS_QLDB_API ExportJournalToS3Result();
    AWS_QLDB_API ExportJournalToS3Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API ExportJournalToS3Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The UUID (represented in Base62-encoded text) that QLDB assigns to each
     * journal export job.</p> <p>To describe your export request and check the status
     * of the job, you can use <code>ExportId</code> to call
     * <code>DescribeJournalS3Export</code>.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }

    /**
     * <p>The UUID (represented in Base62-encoded text) that QLDB assigns to each
     * journal export job.</p> <p>To describe your export request and check the status
     * of the job, you can use <code>ExportId</code> to call
     * <code>DescribeJournalS3Export</code>.</p>
     */
    inline void SetExportId(const Aws::String& value) { m_exportId = value; }

    /**
     * <p>The UUID (represented in Base62-encoded text) that QLDB assigns to each
     * journal export job.</p> <p>To describe your export request and check the status
     * of the job, you can use <code>ExportId</code> to call
     * <code>DescribeJournalS3Export</code>.</p>
     */
    inline void SetExportId(Aws::String&& value) { m_exportId = std::move(value); }

    /**
     * <p>The UUID (represented in Base62-encoded text) that QLDB assigns to each
     * journal export job.</p> <p>To describe your export request and check the status
     * of the job, you can use <code>ExportId</code> to call
     * <code>DescribeJournalS3Export</code>.</p>
     */
    inline void SetExportId(const char* value) { m_exportId.assign(value); }

    /**
     * <p>The UUID (represented in Base62-encoded text) that QLDB assigns to each
     * journal export job.</p> <p>To describe your export request and check the status
     * of the job, you can use <code>ExportId</code> to call
     * <code>DescribeJournalS3Export</code>.</p>
     */
    inline ExportJournalToS3Result& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}

    /**
     * <p>The UUID (represented in Base62-encoded text) that QLDB assigns to each
     * journal export job.</p> <p>To describe your export request and check the status
     * of the job, you can use <code>ExportId</code> to call
     * <code>DescribeJournalS3Export</code>.</p>
     */
    inline ExportJournalToS3Result& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}

    /**
     * <p>The UUID (represented in Base62-encoded text) that QLDB assigns to each
     * journal export job.</p> <p>To describe your export request and check the status
     * of the job, you can use <code>ExportId</code> to call
     * <code>DescribeJournalS3Export</code>.</p>
     */
    inline ExportJournalToS3Result& WithExportId(const char* value) { SetExportId(value); return *this;}

  private:

    Aws::String m_exportId;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
