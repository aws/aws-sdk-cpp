/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock {
namespace Model {

/**
 * <p>Model-specific information for the enforced guardrail
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ModelEnforcement">AWS
 * API Reference</a></p>
 */
class ModelEnforcement {
 public:
  AWS_BEDROCK_API ModelEnforcement() = default;
  AWS_BEDROCK_API ModelEnforcement(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API ModelEnforcement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Models to enforce the guardrail on.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIncludedModels() const { return m_includedModels; }
  inline bool IncludedModelsHasBeenSet() const { return m_includedModelsHasBeenSet; }
  template <typename IncludedModelsT = Aws::Vector<Aws::String>>
  void SetIncludedModels(IncludedModelsT&& value) {
    m_includedModelsHasBeenSet = true;
    m_includedModels = std::forward<IncludedModelsT>(value);
  }
  template <typename IncludedModelsT = Aws::Vector<Aws::String>>
  ModelEnforcement& WithIncludedModels(IncludedModelsT&& value) {
    SetIncludedModels(std::forward<IncludedModelsT>(value));
    return *this;
  }
  template <typename IncludedModelsT = Aws::String>
  ModelEnforcement& AddIncludedModels(IncludedModelsT&& value) {
    m_includedModelsHasBeenSet = true;
    m_includedModels.emplace_back(std::forward<IncludedModelsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Models to exclude from enforcement of the guardrail.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExcludedModels() const { return m_excludedModels; }
  inline bool ExcludedModelsHasBeenSet() const { return m_excludedModelsHasBeenSet; }
  template <typename ExcludedModelsT = Aws::Vector<Aws::String>>
  void SetExcludedModels(ExcludedModelsT&& value) {
    m_excludedModelsHasBeenSet = true;
    m_excludedModels = std::forward<ExcludedModelsT>(value);
  }
  template <typename ExcludedModelsT = Aws::Vector<Aws::String>>
  ModelEnforcement& WithExcludedModels(ExcludedModelsT&& value) {
    SetExcludedModels(std::forward<ExcludedModelsT>(value));
    return *this;
  }
  template <typename ExcludedModelsT = Aws::String>
  ModelEnforcement& AddExcludedModels(ExcludedModelsT&& value) {
    m_excludedModelsHasBeenSet = true;
    m_excludedModels.emplace_back(std::forward<ExcludedModelsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_includedModels;

  Aws::Vector<Aws::String> m_excludedModels;
  bool m_includedModelsHasBeenSet = false;
  bool m_excludedModelsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
