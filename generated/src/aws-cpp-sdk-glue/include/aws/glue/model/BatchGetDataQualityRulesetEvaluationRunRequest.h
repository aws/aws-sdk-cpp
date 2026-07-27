/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class BatchGetDataQualityRulesetEvaluationRunRequest : public GlueRequest {
 public:
  AWS_GLUE_API BatchGetDataQualityRulesetEvaluationRunRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetDataQualityRulesetEvaluationRun"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A list of unique run identifiers for the evaluation runs to retrieve.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRunIds() const { return m_runIds; }
  inline bool RunIdsHasBeenSet() const { return m_runIdsHasBeenSet; }
  template <typename RunIdsT = Aws::Vector<Aws::String>>
  void SetRunIds(RunIdsT&& value) {
    m_runIdsHasBeenSet = true;
    m_runIds = std::forward<RunIdsT>(value);
  }
  template <typename RunIdsT = Aws::Vector<Aws::String>>
  BatchGetDataQualityRulesetEvaluationRunRequest& WithRunIds(RunIdsT&& value) {
    SetRunIds(std::forward<RunIdsT>(value));
    return *this;
  }
  template <typename RunIdsT = Aws::String>
  BatchGetDataQualityRulesetEvaluationRunRequest& AddRunIds(RunIdsT&& value) {
    m_runIdsHasBeenSet = true;
    m_runIds.emplace_back(std::forward<RunIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_runIds;
  bool m_runIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
