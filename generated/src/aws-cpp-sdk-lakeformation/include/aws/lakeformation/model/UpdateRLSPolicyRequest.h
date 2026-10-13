/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>

#include <utility>

namespace Aws {
namespace LakeFormation {
namespace Model {

/**
 */
class UpdateRLSPolicyRequest : public LakeFormationRequest {
 public:
  AWS_LAKEFORMATION_API UpdateRLSPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRLSPolicy"; }

  AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the row-level security policy to update.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateRLSPolicyRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new filter predicate, written in a SQL-like syntax, that replaces the
   * policy's current filter expression.</p>
   */
  inline const Aws::String& GetFilterExpression() const { return m_filterExpression; }
  inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
  template <typename FilterExpressionT = Aws::String>
  void SetFilterExpression(FilterExpressionT&& value) {
    m_filterExpressionHasBeenSet = true;
    m_filterExpression = std::forward<FilterExpressionT>(value);
  }
  template <typename FilterExpressionT = Aws::String>
  UpdateRLSPolicyRequest& WithFilterExpression(FilterExpressionT&& value) {
    SetFilterExpression(std::forward<FilterExpressionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_filterExpression;
  bool m_nameHasBeenSet = false;
  bool m_filterExpressionHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
