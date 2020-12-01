/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/honeycode/model/TableDataImportJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/TableDataImportJobMetadata.h>
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
namespace Honeycode
{
namespace Model
{
  class AWS_HONEYCODE_API DescribeTableDataImportJobResult
  {
  public:
    DescribeTableDataImportJobResult();
    DescribeTableDataImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTableDataImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The current status of the import job. </p>
     */
    inline const TableDataImportJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p> The current status of the import job. </p>
     */
    inline void SetJobStatus(const TableDataImportJobStatus& value) { m_jobStatus = value; }

    /**
     * <p> The current status of the import job. </p>
     */
    inline void SetJobStatus(TableDataImportJobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p> The current status of the import job. </p>
     */
    inline DescribeTableDataImportJobResult& WithJobStatus(const TableDataImportJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p> The current status of the import job. </p>
     */
    inline DescribeTableDataImportJobResult& WithJobStatus(TableDataImportJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p> A message providing more details about the current status of the import job.
     * </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p> A message providing more details about the current status of the import job.
     * </p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p> A message providing more details about the current status of the import job.
     * </p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p> A message providing more details about the current status of the import job.
     * </p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p> A message providing more details about the current status of the import job.
     * </p>
     */
    inline DescribeTableDataImportJobResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p> A message providing more details about the current status of the import job.
     * </p>
     */
    inline DescribeTableDataImportJobResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p> A message providing more details about the current status of the import job.
     * </p>
     */
    inline DescribeTableDataImportJobResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p> The metadata about the job that was submitted for import. </p>
     */
    inline const TableDataImportJobMetadata& GetJobMetadata() const{ return m_jobMetadata; }

    /**
     * <p> The metadata about the job that was submitted for import. </p>
     */
    inline void SetJobMetadata(const TableDataImportJobMetadata& value) { m_jobMetadata = value; }

    /**
     * <p> The metadata about the job that was submitted for import. </p>
     */
    inline void SetJobMetadata(TableDataImportJobMetadata&& value) { m_jobMetadata = std::move(value); }

    /**
     * <p> The metadata about the job that was submitted for import. </p>
     */
    inline DescribeTableDataImportJobResult& WithJobMetadata(const TableDataImportJobMetadata& value) { SetJobMetadata(value); return *this;}

    /**
     * <p> The metadata about the job that was submitted for import. </p>
     */
    inline DescribeTableDataImportJobResult& WithJobMetadata(TableDataImportJobMetadata&& value) { SetJobMetadata(std::move(value)); return *this;}

  private:

    TableDataImportJobStatus m_jobStatus;

    Aws::String m_message;

    TableDataImportJobMetadata m_jobMetadata;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
