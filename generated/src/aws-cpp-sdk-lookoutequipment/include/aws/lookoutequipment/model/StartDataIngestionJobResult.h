/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/IngestionJobStatus.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class StartDataIngestionJobResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API StartDataIngestionJobResult();
    AWS_LOOKOUTEQUIPMENT_API StartDataIngestionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API StartDataIngestionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline StartDataIngestionJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline StartDataIngestionJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline StartDataIngestionJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>Indicates the status of the <code>StartDataIngestionJob</code> operation.
     * </p>
     */
    inline const IngestionJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of the <code>StartDataIngestionJob</code> operation.
     * </p>
     */
    inline void SetStatus(const IngestionJobStatus& value) { m_status = value; }

    /**
     * <p>Indicates the status of the <code>StartDataIngestionJob</code> operation.
     * </p>
     */
    inline void SetStatus(IngestionJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Indicates the status of the <code>StartDataIngestionJob</code> operation.
     * </p>
     */
    inline StartDataIngestionJobResult& WithStatus(const IngestionJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of the <code>StartDataIngestionJob</code> operation.
     * </p>
     */
    inline StartDataIngestionJobResult& WithStatus(IngestionJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartDataIngestionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartDataIngestionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartDataIngestionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_jobId;

    IngestionJobStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
