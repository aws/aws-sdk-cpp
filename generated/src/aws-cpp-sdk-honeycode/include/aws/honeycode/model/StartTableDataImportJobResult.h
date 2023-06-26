/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/TableDataImportJobStatus.h>
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
  class StartTableDataImportJobResult
  {
  public:
    AWS_HONEYCODE_API StartTableDataImportJobResult();
    AWS_HONEYCODE_API StartTableDataImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HONEYCODE_API StartTableDataImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The id that is assigned to this import job. Future requests to find out the
     * status of this import job need to send this id in the appropriate parameter in
     * the request. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p> The id that is assigned to this import job. Future requests to find out the
     * status of this import job need to send this id in the appropriate parameter in
     * the request. </p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p> The id that is assigned to this import job. Future requests to find out the
     * status of this import job need to send this id in the appropriate parameter in
     * the request. </p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p> The id that is assigned to this import job. Future requests to find out the
     * status of this import job need to send this id in the appropriate parameter in
     * the request. </p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p> The id that is assigned to this import job. Future requests to find out the
     * status of this import job need to send this id in the appropriate parameter in
     * the request. </p>
     */
    inline StartTableDataImportJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p> The id that is assigned to this import job. Future requests to find out the
     * status of this import job need to send this id in the appropriate parameter in
     * the request. </p>
     */
    inline StartTableDataImportJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p> The id that is assigned to this import job. Future requests to find out the
     * status of this import job need to send this id in the appropriate parameter in
     * the request. </p>
     */
    inline StartTableDataImportJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p> The status of the import job immediately after submitting the request. </p>
     */
    inline const TableDataImportJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p> The status of the import job immediately after submitting the request. </p>
     */
    inline void SetJobStatus(const TableDataImportJobStatus& value) { m_jobStatus = value; }

    /**
     * <p> The status of the import job immediately after submitting the request. </p>
     */
    inline void SetJobStatus(TableDataImportJobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p> The status of the import job immediately after submitting the request. </p>
     */
    inline StartTableDataImportJobResult& WithJobStatus(const TableDataImportJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p> The status of the import job immediately after submitting the request. </p>
     */
    inline StartTableDataImportJobResult& WithJobStatus(TableDataImportJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartTableDataImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartTableDataImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartTableDataImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_jobId;

    TableDataImportJobStatus m_jobStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
