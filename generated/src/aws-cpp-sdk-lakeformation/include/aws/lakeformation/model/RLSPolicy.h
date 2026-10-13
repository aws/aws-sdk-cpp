/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/Column.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LakeFormation {
namespace Model {

/**
 * <p>A structure that describes a row-level security policy, including the columns
 * its filter expression references and the filter expression itself.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RLSPolicy">AWS
 * API Reference</a></p>
 */
class RLSPolicy {
 public:
  AWS_LAKEFORMATION_API RLSPolicy() = default;
  AWS_LAKEFORMATION_API RLSPolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API RLSPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier for the Data Catalog that contains the policy. By default, the
   * account ID.</p>
   */
  inline const Aws::String& GetCatalogId() const { return m_catalogId; }
  inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
  template <typename CatalogIdT = Aws::String>
  void SetCatalogId(CatalogIdT&& value) {
    m_catalogIdHasBeenSet = true;
    m_catalogId = std::forward<CatalogIdT>(value);
  }
  template <typename CatalogIdT = Aws::String>
  RLSPolicy& WithCatalogId(CatalogIdT&& value) {
    SetCatalogId(std::forward<CatalogIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the row-level security policy.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RLSPolicy& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of columns that the filter expression references.</p>
   */
  inline const Aws::Vector<Column>& GetAttachmentColumns() const { return m_attachmentColumns; }
  inline bool AttachmentColumnsHasBeenSet() const { return m_attachmentColumnsHasBeenSet; }
  template <typename AttachmentColumnsT = Aws::Vector<Column>>
  void SetAttachmentColumns(AttachmentColumnsT&& value) {
    m_attachmentColumnsHasBeenSet = true;
    m_attachmentColumns = std::forward<AttachmentColumnsT>(value);
  }
  template <typename AttachmentColumnsT = Aws::Vector<Column>>
  RLSPolicy& WithAttachmentColumns(AttachmentColumnsT&& value) {
    SetAttachmentColumns(std::forward<AttachmentColumnsT>(value));
    return *this;
  }
  template <typename AttachmentColumnsT = Column>
  RLSPolicy& AddAttachmentColumns(AttachmentColumnsT&& value) {
    m_attachmentColumnsHasBeenSet = true;
    m_attachmentColumns.emplace_back(std::forward<AttachmentColumnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filter predicate, written in a SQL-like syntax, that determines which
   * rows are returned to the principal.</p>
   */
  inline const Aws::String& GetFilterExpression() const { return m_filterExpression; }
  inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
  template <typename FilterExpressionT = Aws::String>
  void SetFilterExpression(FilterExpressionT&& value) {
    m_filterExpressionHasBeenSet = true;
    m_filterExpression = std::forward<FilterExpressionT>(value);
  }
  template <typename FilterExpressionT = Aws::String>
  RLSPolicy& WithFilterExpression(FilterExpressionT&& value) {
    SetFilterExpression(std::forward<FilterExpressionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalogId;

  Aws::String m_name;

  Aws::Vector<Column> m_attachmentColumns;

  Aws::String m_filterExpression;
  bool m_catalogIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_attachmentColumnsHasBeenSet = false;
  bool m_filterExpressionHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
