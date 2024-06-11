/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/DestinationConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iottwinmaker/model/MetadataTransferJobStatus.h>
#include <aws/iottwinmaker/model/MetadataTransferJobProgress.h>
#include <aws/iottwinmaker/model/SourceConfiguration.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class GetMetadataTransferJobResult
  {
  public:
    AWS_IOTTWINMAKER_API GetMetadataTransferJobResult();
    AWS_IOTTWINMAKER_API GetMetadataTransferJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API GetMetadataTransferJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline const Aws::String& GetMetadataTransferJobId() const{ return m_metadataTransferJobId; }
    inline void SetMetadataTransferJobId(const Aws::String& value) { m_metadataTransferJobId = value; }
    inline void SetMetadataTransferJobId(Aws::String&& value) { m_metadataTransferJobId = std::move(value); }
    inline void SetMetadataTransferJobId(const char* value) { m_metadataTransferJobId.assign(value); }
    inline GetMetadataTransferJobResult& WithMetadataTransferJobId(const Aws::String& value) { SetMetadataTransferJobId(value); return *this;}
    inline GetMetadataTransferJobResult& WithMetadataTransferJobId(Aws::String&& value) { SetMetadataTransferJobId(std::move(value)); return *this;}
    inline GetMetadataTransferJobResult& WithMetadataTransferJobId(const char* value) { SetMetadataTransferJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetMetadataTransferJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetMetadataTransferJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetMetadataTransferJobResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetMetadataTransferJobResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetMetadataTransferJobResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetMetadataTransferJobResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job's sources.</p>
     */
    inline const Aws::Vector<SourceConfiguration>& GetSources() const{ return m_sources; }
    inline void SetSources(const Aws::Vector<SourceConfiguration>& value) { m_sources = value; }
    inline void SetSources(Aws::Vector<SourceConfiguration>&& value) { m_sources = std::move(value); }
    inline GetMetadataTransferJobResult& WithSources(const Aws::Vector<SourceConfiguration>& value) { SetSources(value); return *this;}
    inline GetMetadataTransferJobResult& WithSources(Aws::Vector<SourceConfiguration>&& value) { SetSources(std::move(value)); return *this;}
    inline GetMetadataTransferJobResult& AddSources(const SourceConfiguration& value) { m_sources.push_back(value); return *this; }
    inline GetMetadataTransferJobResult& AddSources(SourceConfiguration&& value) { m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job's destination.</p>
     */
    inline const DestinationConfiguration& GetDestination() const{ return m_destination; }
    inline void SetDestination(const DestinationConfiguration& value) { m_destination = value; }
    inline void SetDestination(DestinationConfiguration&& value) { m_destination = std::move(value); }
    inline GetMetadataTransferJobResult& WithDestination(const DestinationConfiguration& value) { SetDestination(value); return *this;}
    inline GetMetadataTransferJobResult& WithDestination(DestinationConfiguration&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job's role.</p>
     */
    inline const Aws::String& GetMetadataTransferJobRole() const{ return m_metadataTransferJobRole; }
    inline void SetMetadataTransferJobRole(const Aws::String& value) { m_metadataTransferJobRole = value; }
    inline void SetMetadataTransferJobRole(Aws::String&& value) { m_metadataTransferJobRole = std::move(value); }
    inline void SetMetadataTransferJobRole(const char* value) { m_metadataTransferJobRole.assign(value); }
    inline GetMetadataTransferJobResult& WithMetadataTransferJobRole(const Aws::String& value) { SetMetadataTransferJobRole(value); return *this;}
    inline GetMetadataTransferJobResult& WithMetadataTransferJobRole(Aws::String&& value) { SetMetadataTransferJobRole(std::move(value)); return *this;}
    inline GetMetadataTransferJobResult& WithMetadataTransferJobRole(const char* value) { SetMetadataTransferJobRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job's report URL.</p>
     */
    inline const Aws::String& GetReportUrl() const{ return m_reportUrl; }
    inline void SetReportUrl(const Aws::String& value) { m_reportUrl = value; }
    inline void SetReportUrl(Aws::String&& value) { m_reportUrl = std::move(value); }
    inline void SetReportUrl(const char* value) { m_reportUrl.assign(value); }
    inline GetMetadataTransferJobResult& WithReportUrl(const Aws::String& value) { SetReportUrl(value); return *this;}
    inline GetMetadataTransferJobResult& WithReportUrl(Aws::String&& value) { SetReportUrl(std::move(value)); return *this;}
    inline GetMetadataTransferJobResult& WithReportUrl(const char* value) { SetReportUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job's creation DateTime property.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline GetMetadataTransferJobResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline GetMetadataTransferJobResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job's update DateTime property.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTime = value; }
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTime = std::move(value); }
    inline GetMetadataTransferJobResult& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}
    inline GetMetadataTransferJobResult& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job's status.</p>
     */
    inline const MetadataTransferJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const MetadataTransferJobStatus& value) { m_status = value; }
    inline void SetStatus(MetadataTransferJobStatus&& value) { m_status = std::move(value); }
    inline GetMetadataTransferJobResult& WithStatus(const MetadataTransferJobStatus& value) { SetStatus(value); return *this;}
    inline GetMetadataTransferJobResult& WithStatus(MetadataTransferJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job's progress.</p>
     */
    inline const MetadataTransferJobProgress& GetProgress() const{ return m_progress; }
    inline void SetProgress(const MetadataTransferJobProgress& value) { m_progress = value; }
    inline void SetProgress(MetadataTransferJobProgress&& value) { m_progress = std::move(value); }
    inline GetMetadataTransferJobResult& WithProgress(const MetadataTransferJobProgress& value) { SetProgress(value); return *this;}
    inline GetMetadataTransferJobResult& WithProgress(MetadataTransferJobProgress&& value) { SetProgress(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMetadataTransferJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMetadataTransferJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMetadataTransferJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_metadataTransferJobId;

    Aws::String m_arn;

    Aws::String m_description;

    Aws::Vector<SourceConfiguration> m_sources;

    DestinationConfiguration m_destination;

    Aws::String m_metadataTransferJobRole;

    Aws::String m_reportUrl;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_updateDateTime;

    MetadataTransferJobStatus m_status;

    MetadataTransferJobProgress m_progress;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
