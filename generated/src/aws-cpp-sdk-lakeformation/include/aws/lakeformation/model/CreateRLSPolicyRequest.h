/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/Column.h>

#include <utility>

namespace Aws {
namespace LakeFormation {
namespace Model {

/**
 */
class CreateRLSPolicyRequest : public LakeFormationRequest {
 public:
  AWS_LAKEFORMATION_API CreateRLSPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRLSPolicy"; }

  AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique name for the row-level security policy within the Data Catalog.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateRLSPolicyRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of columns that the filter expression references. These columns
   * define the shape of the data that the policy can be attached to.</p>
   */
  inline const Aws::Vector<Column>& GetAttachmentColumns() const { return m_attachmentColumns; }
  inline bool AttachmentColumnsHasBeenSet() const { return m_attachmentColumnsHasBeenSet; }
  template <typename AttachmentColumnsT = Aws::Vector<Column>>
  void SetAttachmentColumns(AttachmentColumnsT&& value) {
    m_attachmentColumnsHasBeenSet = true;
    m_attachmentColumns = std::forward<AttachmentColumnsT>(value);
  }
  template <typename AttachmentColumnsT = Aws::Vector<Column>>
  CreateRLSPolicyRequest& WithAttachmentColumns(AttachmentColumnsT&& value) {
    SetAttachmentColumns(std::forward<AttachmentColumnsT>(value));
    return *this;
  }
  template <typename AttachmentColumnsT = Column>
  CreateRLSPolicyRequest& AddAttachmentColumns(AttachmentColumnsT&& value) {
    m_attachmentColumnsHasBeenSet = true;
    m_attachmentColumns.emplace_back(std::forward<AttachmentColumnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter predicate, written in a SQL-like syntax, that Lake Formation
   * evaluates against each row. Only the rows for which the expression evaluates to
   * true are returned to the principal.</p>
   */
  inline const Aws::String& GetFilterExpression() const { return m_filterExpression; }
  inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
  template <typename FilterExpressionT = Aws::String>
  void SetFilterExpression(FilterExpressionT&& value) {
    m_filterExpressionHasBeenSet = true;
    m_filterExpression = std::forward<FilterExpressionT>(value);
  }
  template <typename FilterExpressionT = Aws::String>
  CreateRLSPolicyRequest& WithFilterExpression(FilterExpressionT&& value) {
    SetFilterExpression(std::forward<FilterExpressionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<Column> m_attachmentColumns;

  Aws::String m_filterExpression;
  bool m_nameHasBeenSet = false;
  bool m_attachmentColumnsHasBeenSet = false;
  bool m_filterExpressionHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
