/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ScopeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>The scope of Google Cloud Platform (GCP) resources to scan for a single
 * scanning type. Provide this as part of a <code>GcpScopeConfigurationInput</code>
 * when you create or update a connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GcpCapabilityScopeInput">AWS
 * API Reference</a></p>
 */
class GcpCapabilityScopeInput {
 public:
  AWS_INSPECTOR2_API GcpCapabilityScopeInput() = default;
  AWS_INSPECTOR2_API GcpCapabilityScopeInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API GcpCapabilityScopeInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of scope: <code>ORGANIZATION</code>, which scans all projects in the
   * GCP organization, or <code>PROJECT</code>, which scans only the specified GCP
   * projects.</p>
   */
  inline ScopeType GetScopeType() const { return m_scopeType; }
  inline bool ScopeTypeHasBeenSet() const { return m_scopeTypeHasBeenSet; }
  inline void SetScopeType(ScopeType value) {
    m_scopeTypeHasBeenSet = true;
    m_scopeType = value;
  }
  inline GcpCapabilityScopeInput& WithScopeType(ScopeType value) {
    SetScopeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The GCP project IDs to scan. Required when <code>scopeType</code> is
   * <code>PROJECT</code>. Don't specify scope values when <code>scopeType</code> is
   * <code>ORGANIZATION</code>. Amazon Inspector scans the organization of the Amazon
   * Web Services Config connector.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopeValues() const { return m_scopeValues; }
  inline bool ScopeValuesHasBeenSet() const { return m_scopeValuesHasBeenSet; }
  template <typename ScopeValuesT = Aws::Vector<Aws::String>>
  void SetScopeValues(ScopeValuesT&& value) {
    m_scopeValuesHasBeenSet = true;
    m_scopeValues = std::forward<ScopeValuesT>(value);
  }
  template <typename ScopeValuesT = Aws::Vector<Aws::String>>
  GcpCapabilityScopeInput& WithScopeValues(ScopeValuesT&& value) {
    SetScopeValues(std::forward<ScopeValuesT>(value));
    return *this;
  }
  template <typename ScopeValuesT = Aws::String>
  GcpCapabilityScopeInput& AddScopeValues(ScopeValuesT&& value) {
    m_scopeValuesHasBeenSet = true;
    m_scopeValues.emplace_back(std::forward<ScopeValuesT>(value));
    return *this;
  }
  ///@}
 private:
  ScopeType m_scopeType{ScopeType::NOT_SET};

  Aws::Vector<Aws::String> m_scopeValues;
  bool m_scopeTypeHasBeenSet = false;
  bool m_scopeValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
