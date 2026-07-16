/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConfigService {
namespace Model {

/**
 * <p>Specifies the scope of resources to record from a third-party cloud service
 * provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ScopeConfiguration">AWS
 * API Reference</a></p>
 */
class ScopeConfiguration {
 public:
  AWS_CONFIGSERVICE_API ScopeConfiguration() = default;
  AWS_CONFIGSERVICE_API ScopeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API ScopeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of scope for the third-party cloud resources. Valid values include
   * <code>tenant</code> and <code>subscription</code>.</p>
   */
  inline const Aws::String& GetScopeType() const { return m_scopeType; }
  inline bool ScopeTypeHasBeenSet() const { return m_scopeTypeHasBeenSet; }
  template <typename ScopeTypeT = Aws::String>
  void SetScopeType(ScopeTypeT&& value) {
    m_scopeTypeHasBeenSet = true;
    m_scopeType = std::forward<ScopeTypeT>(value);
  }
  template <typename ScopeTypeT = Aws::String>
  ScopeConfiguration& WithScopeType(ScopeTypeT&& value) {
    SetScopeType(std::forward<ScopeTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of specific scope values for the third-party cloud resources. For
   * example, a list of Azure subscriptions or management groups.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopeValues() const { return m_scopeValues; }
  inline bool ScopeValuesHasBeenSet() const { return m_scopeValuesHasBeenSet; }
  template <typename ScopeValuesT = Aws::Vector<Aws::String>>
  void SetScopeValues(ScopeValuesT&& value) {
    m_scopeValuesHasBeenSet = true;
    m_scopeValues = std::forward<ScopeValuesT>(value);
  }
  template <typename ScopeValuesT = Aws::Vector<Aws::String>>
  ScopeConfiguration& WithScopeValues(ScopeValuesT&& value) {
    SetScopeValues(std::forward<ScopeValuesT>(value));
    return *this;
  }
  template <typename ScopeValuesT = Aws::String>
  ScopeConfiguration& AddScopeValues(ScopeValuesT&& value) {
    m_scopeValuesHasBeenSet = true;
    m_scopeValues.emplace_back(std::forward<ScopeValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to record resources from all supported regions for the
   * third-party cloud service provider.</p>
   */
  inline bool GetAllRegions() const { return m_allRegions; }
  inline bool AllRegionsHasBeenSet() const { return m_allRegionsHasBeenSet; }
  inline void SetAllRegions(bool value) {
    m_allRegionsHasBeenSet = true;
    m_allRegions = value;
  }
  inline ScopeConfiguration& WithAllRegions(bool value) {
    SetAllRegions(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of regions from the third-party cloud service provider to include
   * when recording resources. Used when <code>allRegions</code> is set to
   * <code>false</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIncludedRegions() const { return m_includedRegions; }
  inline bool IncludedRegionsHasBeenSet() const { return m_includedRegionsHasBeenSet; }
  template <typename IncludedRegionsT = Aws::Vector<Aws::String>>
  void SetIncludedRegions(IncludedRegionsT&& value) {
    m_includedRegionsHasBeenSet = true;
    m_includedRegions = std::forward<IncludedRegionsT>(value);
  }
  template <typename IncludedRegionsT = Aws::Vector<Aws::String>>
  ScopeConfiguration& WithIncludedRegions(IncludedRegionsT&& value) {
    SetIncludedRegions(std::forward<IncludedRegionsT>(value));
    return *this;
  }
  template <typename IncludedRegionsT = Aws::String>
  ScopeConfiguration& AddIncludedRegions(IncludedRegionsT&& value) {
    m_includedRegionsHasBeenSet = true;
    m_includedRegions.emplace_back(std::forward<IncludedRegionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_scopeType;

  Aws::Vector<Aws::String> m_scopeValues;

  bool m_allRegions{false};

  Aws::Vector<Aws::String> m_includedRegions;
  bool m_scopeTypeHasBeenSet = false;
  bool m_scopeValuesHasBeenSet = false;
  bool m_allRegionsHasBeenSet = false;
  bool m_includedRegionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
