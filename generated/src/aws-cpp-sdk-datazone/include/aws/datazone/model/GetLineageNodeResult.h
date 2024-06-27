/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/LineageNodeReference.h>
#include <aws/datazone/model/FormOutput.h>
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
namespace DataZone
{
namespace Model
{
  class GetLineageNodeResult
  {
  public:
    AWS_DATAZONE_API GetLineageNodeResult();
    AWS_DATAZONE_API GetLineageNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetLineageNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp at which the data lineage node was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetLineageNodeResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetLineageNodeResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the data lineage node.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetLineageNodeResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetLineageNodeResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetLineageNodeResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data lineage node.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetLineageNodeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetLineageNodeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetLineageNodeResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where you're getting the data lineage node.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline GetLineageNodeResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GetLineageNodeResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GetLineageNodeResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The downsteam nodes of the specified data lineage node.</p>
     */
    inline const Aws::Vector<LineageNodeReference>& GetDownstreamNodes() const{ return m_downstreamNodes; }
    inline void SetDownstreamNodes(const Aws::Vector<LineageNodeReference>& value) { m_downstreamNodes = value; }
    inline void SetDownstreamNodes(Aws::Vector<LineageNodeReference>&& value) { m_downstreamNodes = std::move(value); }
    inline GetLineageNodeResult& WithDownstreamNodes(const Aws::Vector<LineageNodeReference>& value) { SetDownstreamNodes(value); return *this;}
    inline GetLineageNodeResult& WithDownstreamNodes(Aws::Vector<LineageNodeReference>&& value) { SetDownstreamNodes(std::move(value)); return *this;}
    inline GetLineageNodeResult& AddDownstreamNodes(const LineageNodeReference& value) { m_downstreamNodes.push_back(value); return *this; }
    inline GetLineageNodeResult& AddDownstreamNodes(LineageNodeReference&& value) { m_downstreamNodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of the event described in the data lineage node.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTimestamp() const{ return m_eventTimestamp; }
    inline void SetEventTimestamp(const Aws::Utils::DateTime& value) { m_eventTimestamp = value; }
    inline void SetEventTimestamp(Aws::Utils::DateTime&& value) { m_eventTimestamp = std::move(value); }
    inline GetLineageNodeResult& WithEventTimestamp(const Aws::Utils::DateTime& value) { SetEventTimestamp(value); return *this;}
    inline GetLineageNodeResult& WithEventTimestamp(Aws::Utils::DateTime&& value) { SetEventTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the specified data lineage node.</p>
     */
    inline const Aws::Vector<FormOutput>& GetFormsOutput() const{ return m_formsOutput; }
    inline void SetFormsOutput(const Aws::Vector<FormOutput>& value) { m_formsOutput = value; }
    inline void SetFormsOutput(Aws::Vector<FormOutput>&& value) { m_formsOutput = std::move(value); }
    inline GetLineageNodeResult& WithFormsOutput(const Aws::Vector<FormOutput>& value) { SetFormsOutput(value); return *this;}
    inline GetLineageNodeResult& WithFormsOutput(Aws::Vector<FormOutput>&& value) { SetFormsOutput(std::move(value)); return *this;}
    inline GetLineageNodeResult& AddFormsOutput(const FormOutput& value) { m_formsOutput.push_back(value); return *this; }
    inline GetLineageNodeResult& AddFormsOutput(FormOutput&& value) { m_formsOutput.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the data lineage node.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetLineageNodeResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetLineageNodeResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetLineageNodeResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data lineage node.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetLineageNodeResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetLineageNodeResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetLineageNodeResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source identifier of the data lineage node.</p>
     */
    inline const Aws::String& GetSourceIdentifier() const{ return m_sourceIdentifier; }
    inline void SetSourceIdentifier(const Aws::String& value) { m_sourceIdentifier = value; }
    inline void SetSourceIdentifier(Aws::String&& value) { m_sourceIdentifier = std::move(value); }
    inline void SetSourceIdentifier(const char* value) { m_sourceIdentifier.assign(value); }
    inline GetLineageNodeResult& WithSourceIdentifier(const Aws::String& value) { SetSourceIdentifier(value); return *this;}
    inline GetLineageNodeResult& WithSourceIdentifier(Aws::String&& value) { SetSourceIdentifier(std::move(value)); return *this;}
    inline GetLineageNodeResult& WithSourceIdentifier(const char* value) { SetSourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the type of the specified data lineage node.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline void SetTypeName(const Aws::String& value) { m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeName.assign(value); }
    inline GetLineageNodeResult& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline GetLineageNodeResult& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline GetLineageNodeResult& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision type of the specified data lineage node.</p>
     */
    inline const Aws::String& GetTypeRevision() const{ return m_typeRevision; }
    inline void SetTypeRevision(const Aws::String& value) { m_typeRevision = value; }
    inline void SetTypeRevision(Aws::String&& value) { m_typeRevision = std::move(value); }
    inline void SetTypeRevision(const char* value) { m_typeRevision.assign(value); }
    inline GetLineageNodeResult& WithTypeRevision(const Aws::String& value) { SetTypeRevision(value); return *this;}
    inline GetLineageNodeResult& WithTypeRevision(Aws::String&& value) { SetTypeRevision(std::move(value)); return *this;}
    inline GetLineageNodeResult& WithTypeRevision(const char* value) { SetTypeRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the data lineage node was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetLineageNodeResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetLineageNodeResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who updated the data lineage node.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetLineageNodeResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetLineageNodeResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetLineageNodeResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upstream nodes of the specified data lineage node.</p>
     */
    inline const Aws::Vector<LineageNodeReference>& GetUpstreamNodes() const{ return m_upstreamNodes; }
    inline void SetUpstreamNodes(const Aws::Vector<LineageNodeReference>& value) { m_upstreamNodes = value; }
    inline void SetUpstreamNodes(Aws::Vector<LineageNodeReference>&& value) { m_upstreamNodes = std::move(value); }
    inline GetLineageNodeResult& WithUpstreamNodes(const Aws::Vector<LineageNodeReference>& value) { SetUpstreamNodes(value); return *this;}
    inline GetLineageNodeResult& WithUpstreamNodes(Aws::Vector<LineageNodeReference>&& value) { SetUpstreamNodes(std::move(value)); return *this;}
    inline GetLineageNodeResult& AddUpstreamNodes(const LineageNodeReference& value) { m_upstreamNodes.push_back(value); return *this; }
    inline GetLineageNodeResult& AddUpstreamNodes(LineageNodeReference&& value) { m_upstreamNodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLineageNodeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLineageNodeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLineageNodeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::Vector<LineageNodeReference> m_downstreamNodes;

    Aws::Utils::DateTime m_eventTimestamp;

    Aws::Vector<FormOutput> m_formsOutput;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_sourceIdentifier;

    Aws::String m_typeName;

    Aws::String m_typeRevision;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::Vector<LineageNodeReference> m_upstreamNodes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
