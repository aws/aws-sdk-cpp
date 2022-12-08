/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/ReadSetExportJobStatus.h>
#include <aws/omics/model/ExportReadSetDetail.h>
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
namespace Omics
{
namespace Model
{
  class GetReadSetExportJobResult
  {
  public:
    AWS_OMICS_API GetReadSetExportJobResult();
    AWS_OMICS_API GetReadSetExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetReadSetExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When the job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>When the job completed.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTime = value; }

    /**
     * <p>When the job completed.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTime = std::move(value); }

    /**
     * <p>When the job completed.</p>
     */
    inline GetReadSetExportJobResult& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>When the job completed.</p>
     */
    inline GetReadSetExportJobResult& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the job was created.</p>
     */
    inline GetReadSetExportJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the job was created.</p>
     */
    inline GetReadSetExportJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The job's destination in Amazon S3.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The job's destination in Amazon S3.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destination = value; }

    /**
     * <p>The job's destination in Amazon S3.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destination = std::move(value); }

    /**
     * <p>The job's destination in Amazon S3.</p>
     */
    inline void SetDestination(const char* value) { m_destination.assign(value); }

    /**
     * <p>The job's destination in Amazon S3.</p>
     */
    inline GetReadSetExportJobResult& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The job's destination in Amazon S3.</p>
     */
    inline GetReadSetExportJobResult& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The job's destination in Amazon S3.</p>
     */
    inline GetReadSetExportJobResult& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline GetReadSetExportJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline GetReadSetExportJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline GetReadSetExportJobResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The job's read sets.</p>
     */
    inline const Aws::Vector<ExportReadSetDetail>& GetReadSets() const{ return m_readSets; }

    /**
     * <p>The job's read sets.</p>
     */
    inline void SetReadSets(const Aws::Vector<ExportReadSetDetail>& value) { m_readSets = value; }

    /**
     * <p>The job's read sets.</p>
     */
    inline void SetReadSets(Aws::Vector<ExportReadSetDetail>&& value) { m_readSets = std::move(value); }

    /**
     * <p>The job's read sets.</p>
     */
    inline GetReadSetExportJobResult& WithReadSets(const Aws::Vector<ExportReadSetDetail>& value) { SetReadSets(value); return *this;}

    /**
     * <p>The job's read sets.</p>
     */
    inline GetReadSetExportJobResult& WithReadSets(Aws::Vector<ExportReadSetDetail>&& value) { SetReadSets(std::move(value)); return *this;}

    /**
     * <p>The job's read sets.</p>
     */
    inline GetReadSetExportJobResult& AddReadSets(const ExportReadSetDetail& value) { m_readSets.push_back(value); return *this; }

    /**
     * <p>The job's read sets.</p>
     */
    inline GetReadSetExportJobResult& AddReadSets(ExportReadSetDetail&& value) { m_readSets.push_back(std::move(value)); return *this; }


    /**
     * <p>The job's sequence store ID.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }

    /**
     * <p>The job's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreId = value; }

    /**
     * <p>The job's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreId = std::move(value); }

    /**
     * <p>The job's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreId.assign(value); }

    /**
     * <p>The job's sequence store ID.</p>
     */
    inline GetReadSetExportJobResult& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}

    /**
     * <p>The job's sequence store ID.</p>
     */
    inline GetReadSetExportJobResult& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}

    /**
     * <p>The job's sequence store ID.</p>
     */
    inline GetReadSetExportJobResult& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}


    /**
     * <p>The job's status.</p>
     */
    inline const ReadSetExportJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(const ReadSetExportJobStatus& value) { m_status = value; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(ReadSetExportJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The job's status.</p>
     */
    inline GetReadSetExportJobResult& WithStatus(const ReadSetExportJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The job's status.</p>
     */
    inline GetReadSetExportJobResult& WithStatus(ReadSetExportJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The job's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The job's status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>The job's status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>The job's status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>The job's status message.</p>
     */
    inline GetReadSetExportJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The job's status message.</p>
     */
    inline GetReadSetExportJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The job's status message.</p>
     */
    inline GetReadSetExportJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::Utils::DateTime m_completionTime;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_destination;

    Aws::String m_id;

    Aws::Vector<ExportReadSetDetail> m_readSets;

    Aws::String m_sequenceStoreId;

    ReadSetExportJobStatus m_status;

    Aws::String m_statusMessage;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
