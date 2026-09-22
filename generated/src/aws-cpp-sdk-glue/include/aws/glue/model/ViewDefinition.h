/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/LastRefreshType.h>
#include <aws/glue/model/SubObjectStatistics.h>
#include <aws/glue/model/ViewRepresentation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>A structure containing details for representations.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ViewDefinition">AWS
 * API Reference</a></p>
 */
class ViewDefinition {
 public:
  AWS_GLUE_API ViewDefinition() = default;
  AWS_GLUE_API ViewDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API ViewDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>You can set this flag as true to instruct the engine not to push
   * user-provided operations into the logical plan of the view during query
   * planning. However, setting this flag does not guarantee that the engine will
   * comply. Refer to the engine's documentation to understand the guarantees
   * provided, if any.</p>
   */
  inline bool GetIsProtected() const { return m_isProtected; }
  inline bool IsProtectedHasBeenSet() const { return m_isProtectedHasBeenSet; }
  inline void SetIsProtected(bool value) {
    m_isProtectedHasBeenSet = true;
    m_isProtected = value;
  }
  inline ViewDefinition& WithIsProtected(bool value) {
    SetIsProtected(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The definer of a view in SQL.</p>
   */
  inline const Aws::String& GetDefiner() const { return m_definer; }
  inline bool DefinerHasBeenSet() const { return m_definerHasBeenSet; }
  template <typename DefinerT = Aws::String>
  void SetDefiner(DefinerT&& value) {
    m_definerHasBeenSet = true;
    m_definer = std::forward<DefinerT>(value);
  }
  template <typename DefinerT = Aws::String>
  ViewDefinition& WithDefiner(DefinerT&& value) {
    SetDefiner(std::forward<DefinerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID value that identifies this view's version. For materialized views, the
   * version ID is the Apache Iceberg table's snapshot ID. </p>
   */
  inline long long GetViewVersionId() const { return m_viewVersionId; }
  inline bool ViewVersionIdHasBeenSet() const { return m_viewVersionIdHasBeenSet; }
  inline void SetViewVersionId(long long value) {
    m_viewVersionIdHasBeenSet = true;
    m_viewVersionId = value;
  }
  inline ViewDefinition& WithViewVersionId(long long value) {
    SetViewVersionId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version ID of the Apache Iceberg table.</p>
   */
  inline const Aws::String& GetViewVersionToken() const { return m_viewVersionToken; }
  inline bool ViewVersionTokenHasBeenSet() const { return m_viewVersionTokenHasBeenSet; }
  template <typename ViewVersionTokenT = Aws::String>
  void SetViewVersionToken(ViewVersionTokenT&& value) {
    m_viewVersionTokenHasBeenSet = true;
    m_viewVersionToken = std::forward<ViewVersionTokenT>(value);
  }
  template <typename ViewVersionTokenT = Aws::String>
  ViewDefinition& WithViewVersionToken(ViewVersionTokenT&& value) {
    SetViewVersionToken(std::forward<ViewVersionTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Auto refresh interval in seconds for the materialized view. If not specified,
   * the view will not automatically refresh.</p>
   */
  inline long long GetRefreshSeconds() const { return m_refreshSeconds; }
  inline bool RefreshSecondsHasBeenSet() const { return m_refreshSecondsHasBeenSet; }
  inline void SetRefreshSeconds(long long value) {
    m_refreshSecondsHasBeenSet = true;
    m_refreshSeconds = value;
  }
  inline ViewDefinition& WithRefreshSeconds(long long value) {
    SetRefreshSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sets the method used for the most recent refresh.</p>
   */
  inline LastRefreshType GetLastRefreshType() const { return m_lastRefreshType; }
  inline bool LastRefreshTypeHasBeenSet() const { return m_lastRefreshTypeHasBeenSet; }
  inline void SetLastRefreshType(LastRefreshType value) {
    m_lastRefreshTypeHasBeenSet = true;
    m_lastRefreshType = value;
  }
  inline ViewDefinition& WithLastRefreshType(LastRefreshType value) {
    SetLastRefreshType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of table Amazon Resource Names (ARNs).</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubObjects() const { return m_subObjects; }
  inline bool SubObjectsHasBeenSet() const { return m_subObjectsHasBeenSet; }
  template <typename SubObjectsT = Aws::Vector<Aws::String>>
  void SetSubObjects(SubObjectsT&& value) {
    m_subObjectsHasBeenSet = true;
    m_subObjects = std::forward<SubObjectsT>(value);
  }
  template <typename SubObjectsT = Aws::Vector<Aws::String>>
  ViewDefinition& WithSubObjects(SubObjectsT&& value) {
    SetSubObjects(std::forward<SubObjectsT>(value));
    return *this;
  }
  template <typename SubObjectsT = Aws::String>
  ViewDefinition& AddSubObjects(SubObjectsT&& value) {
    m_subObjectsHasBeenSet = true;
    m_subObjects.emplace_back(std::forward<SubObjectsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of the Apache Iceberg table versions referenced by the materialized
   * view.</p>
   */
  inline const Aws::Vector<long long>& GetSubObjectVersionIds() const { return m_subObjectVersionIds; }
  inline bool SubObjectVersionIdsHasBeenSet() const { return m_subObjectVersionIdsHasBeenSet; }
  template <typename SubObjectVersionIdsT = Aws::Vector<long long>>
  void SetSubObjectVersionIds(SubObjectVersionIdsT&& value) {
    m_subObjectVersionIdsHasBeenSet = true;
    m_subObjectVersionIds = std::forward<SubObjectVersionIdsT>(value);
  }
  template <typename SubObjectVersionIdsT = Aws::Vector<long long>>
  ViewDefinition& WithSubObjectVersionIds(SubObjectVersionIdsT&& value) {
    SetSubObjectVersionIds(std::forward<SubObjectVersionIdsT>(value));
    return *this;
  }
  inline ViewDefinition& AddSubObjectVersionIds(long long value) {
    m_subObjectVersionIdsHasBeenSet = true;
    m_subObjectVersionIds.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Statistics captured for each sub-object referenced by the materialized view
   * as of its most recent refresh, such as the source type, Glue version ID, and the
   * partition, file, and byte counts. Each entry describes one sub-object,
   * identified by its source type.</p>
   */
  inline const Aws::Vector<SubObjectStatistics>& GetSubObjectsStatistics() const { return m_subObjectsStatistics; }
  inline bool SubObjectsStatisticsHasBeenSet() const { return m_subObjectsStatisticsHasBeenSet; }
  template <typename SubObjectsStatisticsT = Aws::Vector<SubObjectStatistics>>
  void SetSubObjectsStatistics(SubObjectsStatisticsT&& value) {
    m_subObjectsStatisticsHasBeenSet = true;
    m_subObjectsStatistics = std::forward<SubObjectsStatisticsT>(value);
  }
  template <typename SubObjectsStatisticsT = Aws::Vector<SubObjectStatistics>>
  ViewDefinition& WithSubObjectsStatistics(SubObjectsStatisticsT&& value) {
    SetSubObjectsStatistics(std::forward<SubObjectsStatisticsT>(value));
    return *this;
  }
  template <typename SubObjectsStatisticsT = SubObjectStatistics>
  ViewDefinition& AddSubObjectsStatistics(SubObjectsStatisticsT&& value) {
    m_subObjectsStatisticsHasBeenSet = true;
    m_subObjectsStatistics.emplace_back(std::forward<SubObjectsStatisticsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of representations.</p>
   */
  inline const Aws::Vector<ViewRepresentation>& GetRepresentations() const { return m_representations; }
  inline bool RepresentationsHasBeenSet() const { return m_representationsHasBeenSet; }
  template <typename RepresentationsT = Aws::Vector<ViewRepresentation>>
  void SetRepresentations(RepresentationsT&& value) {
    m_representationsHasBeenSet = true;
    m_representations = std::forward<RepresentationsT>(value);
  }
  template <typename RepresentationsT = Aws::Vector<ViewRepresentation>>
  ViewDefinition& WithRepresentations(RepresentationsT&& value) {
    SetRepresentations(std::forward<RepresentationsT>(value));
    return *this;
  }
  template <typename RepresentationsT = ViewRepresentation>
  ViewDefinition& AddRepresentations(RepresentationsT&& value) {
    m_representationsHasBeenSet = true;
    m_representations.emplace_back(std::forward<RepresentationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of key-value pairs containing Spark Declarative Pipelines (SDP)
   * information for the materialized view.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetSparkPipelineInfo() const { return m_sparkPipelineInfo; }
  inline bool SparkPipelineInfoHasBeenSet() const { return m_sparkPipelineInfoHasBeenSet; }
  template <typename SparkPipelineInfoT = Aws::Map<Aws::String, Aws::String>>
  void SetSparkPipelineInfo(SparkPipelineInfoT&& value) {
    m_sparkPipelineInfoHasBeenSet = true;
    m_sparkPipelineInfo = std::forward<SparkPipelineInfoT>(value);
  }
  template <typename SparkPipelineInfoT = Aws::Map<Aws::String, Aws::String>>
  ViewDefinition& WithSparkPipelineInfo(SparkPipelineInfoT&& value) {
    SetSparkPipelineInfo(std::forward<SparkPipelineInfoT>(value));
    return *this;
  }
  template <typename SparkPipelineInfoKeyT = Aws::String, typename SparkPipelineInfoValueT = Aws::String>
  ViewDefinition& AddSparkPipelineInfo(SparkPipelineInfoKeyT&& key, SparkPipelineInfoValueT&& value) {
    m_sparkPipelineInfoHasBeenSet = true;
    m_sparkPipelineInfo.emplace(std::forward<SparkPipelineInfoKeyT>(key), std::forward<SparkPipelineInfoValueT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_isProtected{false};

  Aws::String m_definer;

  long long m_viewVersionId{0};

  Aws::String m_viewVersionToken;

  long long m_refreshSeconds{0};

  LastRefreshType m_lastRefreshType{LastRefreshType::NOT_SET};

  Aws::Vector<Aws::String> m_subObjects;

  Aws::Vector<long long> m_subObjectVersionIds;

  Aws::Vector<SubObjectStatistics> m_subObjectsStatistics;

  Aws::Vector<ViewRepresentation> m_representations;

  Aws::Map<Aws::String, Aws::String> m_sparkPipelineInfo;
  bool m_isProtectedHasBeenSet = false;
  bool m_definerHasBeenSet = false;
  bool m_viewVersionIdHasBeenSet = false;
  bool m_viewVersionTokenHasBeenSet = false;
  bool m_refreshSecondsHasBeenSet = false;
  bool m_lastRefreshTypeHasBeenSet = false;
  bool m_subObjectsHasBeenSet = false;
  bool m_subObjectVersionIdsHasBeenSet = false;
  bool m_subObjectsStatisticsHasBeenSet = false;
  bool m_representationsHasBeenSet = false;
  bool m_sparkPipelineInfoHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
