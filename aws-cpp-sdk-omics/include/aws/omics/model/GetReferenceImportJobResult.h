/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/ReferenceImportJobStatus.h>
#include <aws/omics/model/ImportReferenceSourceItem.h>
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
  class GetReferenceImportJobResult
  {
  public:
    AWS_OMICS_API GetReferenceImportJobResult();
    AWS_OMICS_API GetReferenceImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetReferenceImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetReferenceImportJobResult& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>When the job completed.</p>
     */
    inline GetReferenceImportJobResult& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


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
    inline GetReferenceImportJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the job was created.</p>
     */
    inline GetReferenceImportJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline GetReferenceImportJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline GetReferenceImportJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline GetReferenceImportJobResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The job's reference store ID.</p>
     */
    inline const Aws::String& GetReferenceStoreId() const{ return m_referenceStoreId; }

    /**
     * <p>The job's reference store ID.</p>
     */
    inline void SetReferenceStoreId(const Aws::String& value) { m_referenceStoreId = value; }

    /**
     * <p>The job's reference store ID.</p>
     */
    inline void SetReferenceStoreId(Aws::String&& value) { m_referenceStoreId = std::move(value); }

    /**
     * <p>The job's reference store ID.</p>
     */
    inline void SetReferenceStoreId(const char* value) { m_referenceStoreId.assign(value); }

    /**
     * <p>The job's reference store ID.</p>
     */
    inline GetReferenceImportJobResult& WithReferenceStoreId(const Aws::String& value) { SetReferenceStoreId(value); return *this;}

    /**
     * <p>The job's reference store ID.</p>
     */
    inline GetReferenceImportJobResult& WithReferenceStoreId(Aws::String&& value) { SetReferenceStoreId(std::move(value)); return *this;}

    /**
     * <p>The job's reference store ID.</p>
     */
    inline GetReferenceImportJobResult& WithReferenceStoreId(const char* value) { SetReferenceStoreId(value); return *this;}


    /**
     * <p>The job's service role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The job's service role ARN.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The job's service role ARN.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The job's service role ARN.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The job's service role ARN.</p>
     */
    inline GetReferenceImportJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The job's service role ARN.</p>
     */
    inline GetReferenceImportJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The job's service role ARN.</p>
     */
    inline GetReferenceImportJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The job's sources.</p>
     */
    inline const Aws::Vector<ImportReferenceSourceItem>& GetSources() const{ return m_sources; }

    /**
     * <p>The job's sources.</p>
     */
    inline void SetSources(const Aws::Vector<ImportReferenceSourceItem>& value) { m_sources = value; }

    /**
     * <p>The job's sources.</p>
     */
    inline void SetSources(Aws::Vector<ImportReferenceSourceItem>&& value) { m_sources = std::move(value); }

    /**
     * <p>The job's sources.</p>
     */
    inline GetReferenceImportJobResult& WithSources(const Aws::Vector<ImportReferenceSourceItem>& value) { SetSources(value); return *this;}

    /**
     * <p>The job's sources.</p>
     */
    inline GetReferenceImportJobResult& WithSources(Aws::Vector<ImportReferenceSourceItem>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The job's sources.</p>
     */
    inline GetReferenceImportJobResult& AddSources(const ImportReferenceSourceItem& value) { m_sources.push_back(value); return *this; }

    /**
     * <p>The job's sources.</p>
     */
    inline GetReferenceImportJobResult& AddSources(ImportReferenceSourceItem&& value) { m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>The job's status.</p>
     */
    inline const ReferenceImportJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(const ReferenceImportJobStatus& value) { m_status = value; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(ReferenceImportJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The job's status.</p>
     */
    inline GetReferenceImportJobResult& WithStatus(const ReferenceImportJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The job's status.</p>
     */
    inline GetReferenceImportJobResult& WithStatus(ReferenceImportJobStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline GetReferenceImportJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The job's status message.</p>
     */
    inline GetReferenceImportJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The job's status message.</p>
     */
    inline GetReferenceImportJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::Utils::DateTime m_completionTime;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_id;

    Aws::String m_referenceStoreId;

    Aws::String m_roleArn;

    Aws::Vector<ImportReferenceSourceItem> m_sources;

    ReferenceImportJobStatus m_status;

    Aws::String m_statusMessage;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
