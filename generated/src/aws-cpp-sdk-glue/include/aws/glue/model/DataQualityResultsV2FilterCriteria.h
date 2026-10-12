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
 * <p>Describes the criteria used to filter the data quality results returned by
 * <code>ListDataQualityResultsV2</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityResultsV2FilterCriteria">AWS
 * API Reference</a></p>
 */
class DataQualityResultsV2FilterCriteria {
 public:
  AWS_GLUE_API DataQualityResultsV2FilterCriteria() = default;
  AWS_GLUE_API DataQualityResultsV2FilterCriteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API DataQualityResultsV2FilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The data source used to filter the results. For example, you can retrieve all
   * results for an Glue table. <code>DatabaseName</code> and <code>TableName</code>
   * are required. If you omit <code>CatalogId</code>, the catalog of the calling
   * account is used.</p> <p>When you filter by data source, a page of results can be
   * empty but still include a <code>NextToken</code>. Keep requesting pages until
   * <code>NextToken</code> is absent.</p>
   */
  inline const DataSource& GetDataSource() const { return m_dataSource; }
  inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
  template <typename DataSourceT = DataSource>
  void SetDataSource(DataSourceT&& value) {
    m_dataSourceHasBeenSet = true;
    m_dataSource = std::forward<DataSourceT>(value);
  }
  template <typename DataSourceT = DataSource>
  DataQualityResultsV2FilterCriteria& WithDataSource(DataSourceT&& value) {
    SetDataSource(std::forward<DataSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time after which to include published results.</p>
   */
  inline const Aws::Utils::DateTime& GetPublishedAfter() const { return m_publishedAfter; }
  inline bool PublishedAfterHasBeenSet() const { return m_publishedAfterHasBeenSet; }
  template <typename PublishedAfterT = Aws::Utils::DateTime>
  void SetPublishedAfter(PublishedAfterT&& value) {
    m_publishedAfterHasBeenSet = true;
    m_publishedAfter = std::forward<PublishedAfterT>(value);
  }
  template <typename PublishedAfterT = Aws::Utils::DateTime>
  DataQualityResultsV2FilterCriteria& WithPublishedAfter(PublishedAfterT&& value) {
    SetPublishedAfter(std::forward<PublishedAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time before which to include published results.</p>
   */
  inline const Aws::Utils::DateTime& GetPublishedBefore() const { return m_publishedBefore; }
  inline bool PublishedBeforeHasBeenSet() const { return m_publishedBeforeHasBeenSet; }
  template <typename PublishedBeforeT = Aws::Utils::DateTime>
  void SetPublishedBefore(PublishedBeforeT&& value) {
    m_publishedBeforeHasBeenSet = true;
    m_publishedBefore = std::forward<PublishedBeforeT>(value);
  }
  template <typename PublishedBeforeT = Aws::Utils::DateTime>
  DataQualityResultsV2FilterCriteria& WithPublishedBefore(PublishedBeforeT&& value) {
    SetPublishedBefore(std::forward<PublishedBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The platform dimensions to filter results by.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const { return m_dimensions; }
  inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
  template <typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
  void SetDimensions(DimensionsT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions = std::forward<DimensionsT>(value);
  }
  template <typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
  DataQualityResultsV2FilterCriteria& WithDimensions(DimensionsT&& value) {
    SetDimensions(std::forward<DimensionsT>(value));
    return *this;
  }
  template <typename DimensionsKeyT = Aws::String, typename DimensionsValueT = Aws::String>
  DataQualityResultsV2FilterCriteria& AddDimensions(DimensionsKeyT&& key, DimensionsValueT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions.emplace(std::forward<DimensionsKeyT>(key), std::forward<DimensionsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The evaluation context to filter results by.</p>
   */
  inline const Aws::String& GetEvaluationContext() const { return m_evaluationContext; }
  inline bool EvaluationContextHasBeenSet() const { return m_evaluationContextHasBeenSet; }
  template <typename EvaluationContextT = Aws::String>
  void SetEvaluationContext(EvaluationContextT&& value) {
    m_evaluationContextHasBeenSet = true;
    m_evaluationContext = std::forward<EvaluationContextT>(value);
  }
  template <typename EvaluationContextT = Aws::String>
  DataQualityResultsV2FilterCriteria& WithEvaluationContext(EvaluationContextT&& value) {
    SetEvaluationContext(std::forward<EvaluationContextT>(value));
    return *this;
  }
  ///@}
 private:
  DataSource m_dataSource;

  Aws::Utils::DateTime m_publishedAfter{};

  Aws::Utils::DateTime m_publishedBefore{};

  Aws::Map<Aws::String, Aws::String> m_dimensions;

  Aws::String m_evaluationContext;
  bool m_dataSourceHasBeenSet = false;
  bool m_publishedAfterHasBeenSet = false;
  bool m_publishedBeforeHasBeenSet = false;
  bool m_dimensionsHasBeenSet = false;
  bool m_evaluationContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
