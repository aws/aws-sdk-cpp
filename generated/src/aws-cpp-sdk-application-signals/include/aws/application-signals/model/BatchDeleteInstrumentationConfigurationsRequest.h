/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/BatchDeleteDeletionTarget.h>

#include <utility>

namespace Aws {
namespace ApplicationSignals {
namespace Model {

/**
 */
class BatchDeleteInstrumentationConfigurationsRequest : public ApplicationSignalsRequest {
 public:
  AWS_APPLICATIONSIGNALS_API BatchDeleteInstrumentationConfigurationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteInstrumentationConfigurations"; }

  AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The deletion target - either bulk by scope or targeted by ARN list.</p>
   */
  inline const BatchDeleteDeletionTarget& GetDeletionTarget() const { return m_deletionTarget; }
  inline bool DeletionTargetHasBeenSet() const { return m_deletionTargetHasBeenSet; }
  template <typename DeletionTargetT = BatchDeleteDeletionTarget>
  void SetDeletionTarget(DeletionTargetT&& value) {
    m_deletionTargetHasBeenSet = true;
    m_deletionTarget = std::forward<DeletionTargetT>(value);
  }
  template <typename DeletionTargetT = BatchDeleteDeletionTarget>
  BatchDeleteInstrumentationConfigurationsRequest& WithDeletionTarget(DeletionTargetT&& value) {
    SetDeletionTarget(std::forward<DeletionTargetT>(value));
    return *this;
  }
  ///@}
 private:
  BatchDeleteDeletionTarget m_deletionTarget;
  bool m_deletionTargetHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
