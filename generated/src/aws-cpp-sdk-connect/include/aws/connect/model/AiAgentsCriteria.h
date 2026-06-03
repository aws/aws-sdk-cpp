/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AiAgentSearchCriteria.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>AI Agent search criteria definitions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AiAgentsCriteria">AWS
 * API Reference</a></p>
 */
class AiAgentsCriteria {
 public:
  AWS_CONNECT_API AiAgentsCriteria() = default;
  AWS_CONNECT_API AiAgentsCriteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AiAgentsCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of criteria based on AI Agent metadata.</p>
   */
  inline const Aws::Vector<AiAgentSearchCriteria>& GetCriteria() const { return m_criteria; }
  inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }
  template <typename CriteriaT = Aws::Vector<AiAgentSearchCriteria>>
  void SetCriteria(CriteriaT&& value) {
    m_criteriaHasBeenSet = true;
    m_criteria = std::forward<CriteriaT>(value);
  }
  template <typename CriteriaT = Aws::Vector<AiAgentSearchCriteria>>
  AiAgentsCriteria& WithCriteria(CriteriaT&& value) {
    SetCriteria(std::forward<CriteriaT>(value));
    return *this;
  }
  template <typename CriteriaT = AiAgentSearchCriteria>
  AiAgentsCriteria& AddCriteria(CriteriaT&& value) {
    m_criteriaHasBeenSet = true;
    m_criteria.emplace_back(std::forward<CriteriaT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AiAgentSearchCriteria> m_criteria;
  bool m_criteriaHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
