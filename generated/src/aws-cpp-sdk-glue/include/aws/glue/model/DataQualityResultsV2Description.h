/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataSource.h>

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
 * <p>Describes a data quality result returned by
 * <code>ListDataQualityResultsV2</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityResultsV2Description">AWS
 * API Reference</a></p>
 */
class DataQualityResultsV2Description {
 public:
  AWS_GLUE_API DataQualityResultsV2Description() = default;
  AWS_GLUE_API DataQualityResultsV2Description(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API DataQualityResultsV2Description& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique result ID for this data quality result.</p>
   */
  inline const Aws::String& GetResultId() const { return m_resultId; }
  inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }
  template <typename ResultIdT = Aws::String>
  void SetResultId(ResultIdT&& value) {
    m_resultIdHasBeenSet = true;
    m_resultId = std::forward<ResultIdT>(value);
  }
  template <typename ResultIdT = Aws::String>
  DataQualityResultsV2Description& WithResultId(ResultIdT&& value) {
    SetResultId(std::forward<ResultIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The table associated with the data quality result, if any.</p>
   */
  inline const DataSource& GetDataSource() const { return m_dataSource; }
  inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
  template <typename DataSourceT = DataSource>
  void SetDataSource(DataSourceT&& value) {
    m_dataSourceHasBeenSet = true;
    m_dataSource = std::forward<DataSourceT>(value);
  }
  template <typename DataSourceT = DataSource>
  DataQualityResultsV2Description& WithDataSource(DataSourceT&& value) {
    SetDataSource(std::forward<DataSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when this data quality result was published.</p>
   */
  inline const Aws::Utils::DateTime& GetResultPublishedOn() const { return m_resultPublishedOn; }
  inline bool ResultPublishedOnHasBeenSet() const { return m_resultPublishedOnHasBeenSet; }
  template <typename ResultPublishedOnT = Aws::Utils::DateTime>
  void SetResultPublishedOn(ResultPublishedOnT&& value) {
    m_resultPublishedOnHasBeenSet = true;
    m_resultPublishedOn = std::forward<ResultPublishedOnT>(value);
  }
  template <typename ResultPublishedOnT = Aws::Utils::DateTime>
  DataQualityResultsV2Description& WithResultPublishedOn(ResultPublishedOnT&& value) {
    SetResultPublishedOn(std::forward<ResultPublishedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of platform-specific identifiers, such as cluster, application,
   * workgroup, or project IDs, that identify where the data quality evaluation
   * ran.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const { return m_dimensions; }
  inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
  template <typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
  void SetDimensions(DimensionsT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions = std::forward<DimensionsT>(value);
  }
  template <typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
  DataQualityResultsV2Description& WithDimensions(DimensionsT&& value) {
    SetDimensions(std::forward<DimensionsT>(value));
    return *this;
  }
  template <typename DimensionsKeyT = Aws::String, typename DimensionsValueT = Aws::String>
  DataQualityResultsV2Description& AddDimensions(DimensionsKeyT&& key, DimensionsValueT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions.emplace(std::forward<DimensionsKeyT>(key), std::forward<DimensionsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The evaluation context for the data quality result. This value identifies a
   * specific data quality result, or a series of related results, within a run.</p>
   */
  inline const Aws::String& GetEvaluationContext() const { return m_evaluationContext; }
  inline bool EvaluationContextHasBeenSet() const { return m_evaluationContextHasBeenSet; }
  template <typename EvaluationContextT = Aws::String>
  void SetEvaluationContext(EvaluationContextT&& value) {
    m_evaluationContextHasBeenSet = true;
    m_evaluationContext = std::forward<EvaluationContextT>(value);
  }
  template <typename EvaluationContextT = Aws::String>
  DataQualityResultsV2Description& WithEvaluationContext(EvaluationContextT&& value) {
    SetEvaluationContext(std::forward<EvaluationContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of user-provided descriptors that add contextual metadata and
   * configuration to the data quality result, such as database name, table name,
   * team, or environment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetDescriptors() const { return m_descriptors; }
  inline bool DescriptorsHasBeenSet() const { return m_descriptorsHasBeenSet; }
  template <typename DescriptorsT = Aws::Map<Aws::String, Aws::String>>
  void SetDescriptors(DescriptorsT&& value) {
    m_descriptorsHasBeenSet = true;
    m_descriptors = std::forward<DescriptorsT>(value);
  }
  template <typename DescriptorsT = Aws::Map<Aws::String, Aws::String>>
  DataQualityResultsV2Description& WithDescriptors(DescriptorsT&& value) {
    SetDescriptors(std::forward<DescriptorsT>(value));
    return *this;
  }
  template <typename DescriptorsKeyT = Aws::String, typename DescriptorsValueT = Aws::String>
  DataQualityResultsV2Description& AddDescriptors(DescriptorsKeyT&& key, DescriptorsValueT&& value) {
    m_descriptorsHasBeenSet = true;
    m_descriptors.emplace(std::forward<DescriptorsKeyT>(key), std::forward<DescriptorsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resultId;

  DataSource m_dataSource;

  Aws::Utils::DateTime m_resultPublishedOn{};

  Aws::Map<Aws::String, Aws::String> m_dimensions;

  Aws::String m_evaluationContext;

  Aws::Map<Aws::String, Aws::String> m_descriptors;
  bool m_resultIdHasBeenSet = false;
  bool m_dataSourceHasBeenSet = false;
  bool m_resultPublishedOnHasBeenSet = false;
  bool m_dimensionsHasBeenSet = false;
  bool m_evaluationContextHasBeenSet = false;
  bool m_descriptorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
