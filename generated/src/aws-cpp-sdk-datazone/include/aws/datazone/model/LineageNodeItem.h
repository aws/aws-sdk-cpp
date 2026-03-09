/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/FormOutput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The summary and output forms of a LineageNode</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/LineageNodeItem">AWS
 * API Reference</a></p>
 */
class LineageNodeItem {
 public:
  AWS_DATAZONE_API LineageNodeItem() = default;
  AWS_DATAZONE_API LineageNodeItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API LineageNodeItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the domain of the data lineage node.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  LineageNodeItem& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the data lineage node.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  LineageNodeItem& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the data lineage node.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  LineageNodeItem& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the data lineage node was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  LineageNodeItem& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user who created the data lineage node.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  LineageNodeItem& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the data lineage node was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  LineageNodeItem& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user who updated the data lineage node.</p>
   */
  inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
  inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
  template <typename UpdatedByT = Aws::String>
  void SetUpdatedBy(UpdatedByT&& value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = std::forward<UpdatedByT>(value);
  }
  template <typename UpdatedByT = Aws::String>
  LineageNodeItem& WithUpdatedBy(UpdatedByT&& value) {
    SetUpdatedBy(std::forward<UpdatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the data lineage node.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  LineageNodeItem& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the type of the data lineage node.</p>
   */
  inline const Aws::String& GetTypeName() const { return m_typeName; }
  inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
  template <typename TypeNameT = Aws::String>
  void SetTypeName(TypeNameT&& value) {
    m_typeNameHasBeenSet = true;
    m_typeName = std::forward<TypeNameT>(value);
  }
  template <typename TypeNameT = Aws::String>
  LineageNodeItem& WithTypeName(TypeNameT&& value) {
    SetTypeName(std::forward<TypeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the revision of the data lineage node.</p>
   */
  inline const Aws::String& GetTypeRevision() const { return m_typeRevision; }
  inline bool TypeRevisionHasBeenSet() const { return m_typeRevisionHasBeenSet; }
  template <typename TypeRevisionT = Aws::String>
  void SetTypeRevision(TypeRevisionT&& value) {
    m_typeRevisionHasBeenSet = true;
    m_typeRevision = std::forward<TypeRevisionT>(value);
  }
  template <typename TypeRevisionT = Aws::String>
  LineageNodeItem& WithTypeRevision(TypeRevisionT&& value) {
    SetTypeRevision(std::forward<TypeRevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alternate ID of the data lineage node.</p>
   */
  inline const Aws::String& GetSourceIdentifier() const { return m_sourceIdentifier; }
  inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }
  template <typename SourceIdentifierT = Aws::String>
  void SetSourceIdentifier(SourceIdentifierT&& value) {
    m_sourceIdentifierHasBeenSet = true;
    m_sourceIdentifier = std::forward<SourceIdentifierT>(value);
  }
  template <typename SourceIdentifierT = Aws::String>
  LineageNodeItem& WithSourceIdentifier(SourceIdentifierT&& value) {
    SetSourceIdentifier(std::forward<SourceIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The event timestamp of the data lineage node.</p>
   */
  inline const Aws::Utils::DateTime& GetEventTimestamp() const { return m_eventTimestamp; }
  inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }
  template <typename EventTimestampT = Aws::Utils::DateTime>
  void SetEventTimestamp(EventTimestampT&& value) {
    m_eventTimestampHasBeenSet = true;
    m_eventTimestamp = std::forward<EventTimestampT>(value);
  }
  template <typename EventTimestampT = Aws::Utils::DateTime>
  LineageNodeItem& WithEventTimestamp(EventTimestampT&& value) {
    SetEventTimestamp(std::forward<EventTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The forms included in the additional attributes of a data lineage node.</p>
   */
  inline const Aws::Vector<FormOutput>& GetFormsOutput() const { return m_formsOutput; }
  inline bool FormsOutputHasBeenSet() const { return m_formsOutputHasBeenSet; }
  template <typename FormsOutputT = Aws::Vector<FormOutput>>
  void SetFormsOutput(FormsOutputT&& value) {
    m_formsOutputHasBeenSet = true;
    m_formsOutput = std::forward<FormsOutputT>(value);
  }
  template <typename FormsOutputT = Aws::Vector<FormOutput>>
  LineageNodeItem& WithFormsOutput(FormsOutputT&& value) {
    SetFormsOutput(std::forward<FormsOutputT>(value));
    return *this;
  }
  template <typename FormsOutputT = FormOutput>
  LineageNodeItem& AddFormsOutput(FormsOutputT&& value) {
    m_formsOutputHasBeenSet = true;
    m_formsOutput.emplace_back(std::forward<FormsOutputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the upstream data lineage nodes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetUpstreamLineageNodeIds() const { return m_upstreamLineageNodeIds; }
  inline bool UpstreamLineageNodeIdsHasBeenSet() const { return m_upstreamLineageNodeIdsHasBeenSet; }
  template <typename UpstreamLineageNodeIdsT = Aws::Vector<Aws::String>>
  void SetUpstreamLineageNodeIds(UpstreamLineageNodeIdsT&& value) {
    m_upstreamLineageNodeIdsHasBeenSet = true;
    m_upstreamLineageNodeIds = std::forward<UpstreamLineageNodeIdsT>(value);
  }
  template <typename UpstreamLineageNodeIdsT = Aws::Vector<Aws::String>>
  LineageNodeItem& WithUpstreamLineageNodeIds(UpstreamLineageNodeIdsT&& value) {
    SetUpstreamLineageNodeIds(std::forward<UpstreamLineageNodeIdsT>(value));
    return *this;
  }
  template <typename UpstreamLineageNodeIdsT = Aws::String>
  LineageNodeItem& AddUpstreamLineageNodeIds(UpstreamLineageNodeIdsT&& value) {
    m_upstreamLineageNodeIdsHasBeenSet = true;
    m_upstreamLineageNodeIds.emplace_back(std::forward<UpstreamLineageNodeIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the downstream data lineage nodes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDownstreamLineageNodeIds() const { return m_downstreamLineageNodeIds; }
  inline bool DownstreamLineageNodeIdsHasBeenSet() const { return m_downstreamLineageNodeIdsHasBeenSet; }
  template <typename DownstreamLineageNodeIdsT = Aws::Vector<Aws::String>>
  void SetDownstreamLineageNodeIds(DownstreamLineageNodeIdsT&& value) {
    m_downstreamLineageNodeIdsHasBeenSet = true;
    m_downstreamLineageNodeIds = std::forward<DownstreamLineageNodeIdsT>(value);
  }
  template <typename DownstreamLineageNodeIdsT = Aws::Vector<Aws::String>>
  LineageNodeItem& WithDownstreamLineageNodeIds(DownstreamLineageNodeIdsT&& value) {
    SetDownstreamLineageNodeIds(std::forward<DownstreamLineageNodeIdsT>(value));
    return *this;
  }
  template <typename DownstreamLineageNodeIdsT = Aws::String>
  LineageNodeItem& AddDownstreamLineageNodeIds(DownstreamLineageNodeIdsT&& value) {
    m_downstreamLineageNodeIdsHasBeenSet = true;
    m_downstreamLineageNodeIds.emplace_back(std::forward<DownstreamLineageNodeIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_updatedBy;

  Aws::String m_id;

  Aws::String m_typeName;

  Aws::String m_typeRevision;

  Aws::String m_sourceIdentifier;

  Aws::Utils::DateTime m_eventTimestamp{};

  Aws::Vector<FormOutput> m_formsOutput;

  Aws::Vector<Aws::String> m_upstreamLineageNodeIds;

  Aws::Vector<Aws::String> m_downstreamLineageNodeIds;
  bool m_domainIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_updatedByHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_typeNameHasBeenSet = false;
  bool m_typeRevisionHasBeenSet = false;
  bool m_sourceIdentifierHasBeenSet = false;
  bool m_eventTimestampHasBeenSet = false;
  bool m_formsOutputHasBeenSet = false;
  bool m_upstreamLineageNodeIdsHasBeenSet = false;
  bool m_downstreamLineageNodeIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
