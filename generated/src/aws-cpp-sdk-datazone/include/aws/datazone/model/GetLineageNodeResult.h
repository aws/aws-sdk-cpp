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
    AWS_DATAZONE_API GetLineageNodeResult() = default;
    AWS_DATAZONE_API GetLineageNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetLineageNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp at which the data lineage node was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetLineageNodeResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the data lineage node.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetLineageNodeResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data lineage node.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetLineageNodeResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where you're getting the data lineage node.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    GetLineageNodeResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The downsteam nodes of the specified data lineage node.</p>
     */
    inline const Aws::Vector<LineageNodeReference>& GetDownstreamNodes() const { return m_downstreamNodes; }
    template<typename DownstreamNodesT = Aws::Vector<LineageNodeReference>>
    void SetDownstreamNodes(DownstreamNodesT&& value) { m_downstreamNodesHasBeenSet = true; m_downstreamNodes = std::forward<DownstreamNodesT>(value); }
    template<typename DownstreamNodesT = Aws::Vector<LineageNodeReference>>
    GetLineageNodeResult& WithDownstreamNodes(DownstreamNodesT&& value) { SetDownstreamNodes(std::forward<DownstreamNodesT>(value)); return *this;}
    template<typename DownstreamNodesT = LineageNodeReference>
    GetLineageNodeResult& AddDownstreamNodes(DownstreamNodesT&& value) { m_downstreamNodesHasBeenSet = true; m_downstreamNodes.emplace_back(std::forward<DownstreamNodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of the event described in the data lineage node.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTimestamp() const { return m_eventTimestamp; }
    template<typename EventTimestampT = Aws::Utils::DateTime>
    void SetEventTimestamp(EventTimestampT&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::forward<EventTimestampT>(value); }
    template<typename EventTimestampT = Aws::Utils::DateTime>
    GetLineageNodeResult& WithEventTimestamp(EventTimestampT&& value) { SetEventTimestamp(std::forward<EventTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the specified data lineage node.</p>
     */
    inline const Aws::Vector<FormOutput>& GetFormsOutput() const { return m_formsOutput; }
    template<typename FormsOutputT = Aws::Vector<FormOutput>>
    void SetFormsOutput(FormsOutputT&& value) { m_formsOutputHasBeenSet = true; m_formsOutput = std::forward<FormsOutputT>(value); }
    template<typename FormsOutputT = Aws::Vector<FormOutput>>
    GetLineageNodeResult& WithFormsOutput(FormsOutputT&& value) { SetFormsOutput(std::forward<FormsOutputT>(value)); return *this;}
    template<typename FormsOutputT = FormOutput>
    GetLineageNodeResult& AddFormsOutput(FormsOutputT&& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace_back(std::forward<FormsOutputT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the data lineage node.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetLineageNodeResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data lineage node.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetLineageNodeResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source identifier of the data lineage node.</p>
     */
    inline const Aws::String& GetSourceIdentifier() const { return m_sourceIdentifier; }
    template<typename SourceIdentifierT = Aws::String>
    void SetSourceIdentifier(SourceIdentifierT&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::forward<SourceIdentifierT>(value); }
    template<typename SourceIdentifierT = Aws::String>
    GetLineageNodeResult& WithSourceIdentifier(SourceIdentifierT&& value) { SetSourceIdentifier(std::forward<SourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the type of the specified data lineage node.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    GetLineageNodeResult& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision type of the specified data lineage node.</p>
     */
    inline const Aws::String& GetTypeRevision() const { return m_typeRevision; }
    template<typename TypeRevisionT = Aws::String>
    void SetTypeRevision(TypeRevisionT&& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = std::forward<TypeRevisionT>(value); }
    template<typename TypeRevisionT = Aws::String>
    GetLineageNodeResult& WithTypeRevision(TypeRevisionT&& value) { SetTypeRevision(std::forward<TypeRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the data lineage node was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetLineageNodeResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who updated the data lineage node.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    GetLineageNodeResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upstream nodes of the specified data lineage node.</p>
     */
    inline const Aws::Vector<LineageNodeReference>& GetUpstreamNodes() const { return m_upstreamNodes; }
    template<typename UpstreamNodesT = Aws::Vector<LineageNodeReference>>
    void SetUpstreamNodes(UpstreamNodesT&& value) { m_upstreamNodesHasBeenSet = true; m_upstreamNodes = std::forward<UpstreamNodesT>(value); }
    template<typename UpstreamNodesT = Aws::Vector<LineageNodeReference>>
    GetLineageNodeResult& WithUpstreamNodes(UpstreamNodesT&& value) { SetUpstreamNodes(std::forward<UpstreamNodesT>(value)); return *this;}
    template<typename UpstreamNodesT = LineageNodeReference>
    GetLineageNodeResult& AddUpstreamNodes(UpstreamNodesT&& value) { m_upstreamNodesHasBeenSet = true; m_upstreamNodes.emplace_back(std::forward<UpstreamNodesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLineageNodeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Vector<LineageNodeReference> m_downstreamNodes;
    bool m_downstreamNodesHasBeenSet = false;

    Aws::Utils::DateTime m_eventTimestamp{};
    bool m_eventTimestampHasBeenSet = false;

    Aws::Vector<FormOutput> m_formsOutput;
    bool m_formsOutputHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_typeRevision;
    bool m_typeRevisionHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::Vector<LineageNodeReference> m_upstreamNodes;
    bool m_upstreamNodesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
