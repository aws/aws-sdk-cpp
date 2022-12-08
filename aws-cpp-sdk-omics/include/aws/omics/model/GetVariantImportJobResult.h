/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/JobStatus.h>
#include <aws/omics/model/VariantImportItemDetail.h>
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
  class GetVariantImportJobResult
  {
  public:
    AWS_OMICS_API GetVariantImportJobResult();
    AWS_OMICS_API GetVariantImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetVariantImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetVariantImportJobResult& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>When the job completed.</p>
     */
    inline GetVariantImportJobResult& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


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
    inline GetVariantImportJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the job was created.</p>
     */
    inline GetVariantImportJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The job's destination variant store.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>The job's destination variant store.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationName = value; }

    /**
     * <p>The job's destination variant store.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationName = std::move(value); }

    /**
     * <p>The job's destination variant store.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationName.assign(value); }

    /**
     * <p>The job's destination variant store.</p>
     */
    inline GetVariantImportJobResult& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>The job's destination variant store.</p>
     */
    inline GetVariantImportJobResult& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>The job's destination variant store.</p>
     */
    inline GetVariantImportJobResult& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}


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
    inline GetVariantImportJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline GetVariantImportJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline GetVariantImportJobResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The job's items.</p>
     */
    inline const Aws::Vector<VariantImportItemDetail>& GetItems() const{ return m_items; }

    /**
     * <p>The job's items.</p>
     */
    inline void SetItems(const Aws::Vector<VariantImportItemDetail>& value) { m_items = value; }

    /**
     * <p>The job's items.</p>
     */
    inline void SetItems(Aws::Vector<VariantImportItemDetail>&& value) { m_items = std::move(value); }

    /**
     * <p>The job's items.</p>
     */
    inline GetVariantImportJobResult& WithItems(const Aws::Vector<VariantImportItemDetail>& value) { SetItems(value); return *this;}

    /**
     * <p>The job's items.</p>
     */
    inline GetVariantImportJobResult& WithItems(Aws::Vector<VariantImportItemDetail>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The job's items.</p>
     */
    inline GetVariantImportJobResult& AddItems(const VariantImportItemDetail& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The job's items.</p>
     */
    inline GetVariantImportJobResult& AddItems(VariantImportItemDetail&& value) { m_items.push_back(std::move(value)); return *this; }


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
    inline GetVariantImportJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The job's service role ARN.</p>
     */
    inline GetVariantImportJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The job's service role ARN.</p>
     */
    inline GetVariantImportJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The job's left normalization setting.</p>
     */
    inline bool GetRunLeftNormalization() const{ return m_runLeftNormalization; }

    /**
     * <p>The job's left normalization setting.</p>
     */
    inline void SetRunLeftNormalization(bool value) { m_runLeftNormalization = value; }

    /**
     * <p>The job's left normalization setting.</p>
     */
    inline GetVariantImportJobResult& WithRunLeftNormalization(bool value) { SetRunLeftNormalization(value); return *this;}


    /**
     * <p>The job's status.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(const JobStatus& value) { m_status = value; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(JobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The job's status.</p>
     */
    inline GetVariantImportJobResult& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The job's status.</p>
     */
    inline GetVariantImportJobResult& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline GetVariantImportJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The job's status message.</p>
     */
    inline GetVariantImportJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The job's status message.</p>
     */
    inline GetVariantImportJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>When the job was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>When the job was updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>When the job was updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>When the job was updated.</p>
     */
    inline GetVariantImportJobResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>When the job was updated.</p>
     */
    inline GetVariantImportJobResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_completionTime;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_destinationName;

    Aws::String m_id;

    Aws::Vector<VariantImportItemDetail> m_items;

    Aws::String m_roleArn;

    bool m_runLeftNormalization;

    JobStatus m_status;

    Aws::String m_statusMessage;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
