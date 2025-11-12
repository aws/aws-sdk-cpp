/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DatabaseMigrationService {
namespace Model {
class GetTargetSelectionRulesResult {
 public:
  AWS_DATABASEMIGRATIONSERVICE_API GetTargetSelectionRulesResult() = default;
  AWS_DATABASEMIGRATIONSERVICE_API GetTargetSelectionRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATABASEMIGRATIONSERVICE_API GetTargetSelectionRulesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The JSON string representing the counterpart selection rules in the
   * target.</p>
   */
  inline const Aws::String& GetTargetSelectionRules() const { return m_targetSelectionRules; }
  template <typename TargetSelectionRulesT = Aws::String>
  void SetTargetSelectionRules(TargetSelectionRulesT&& value) {
    m_targetSelectionRulesHasBeenSet = true;
    m_targetSelectionRules = std::forward<TargetSelectionRulesT>(value);
  }
  template <typename TargetSelectionRulesT = Aws::String>
  GetTargetSelectionRulesResult& WithTargetSelectionRules(TargetSelectionRulesT&& value) {
    SetTargetSelectionRules(std::forward<TargetSelectionRulesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetTargetSelectionRulesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetSelectionRules;
  bool m_targetSelectionRulesHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
