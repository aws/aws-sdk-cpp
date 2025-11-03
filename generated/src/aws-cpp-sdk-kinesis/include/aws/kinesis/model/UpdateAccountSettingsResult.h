/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/MinimumThroughputBillingCommitmentOutput.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {
class UpdateAccountSettingsResult {
 public:
  AWS_KINESIS_API UpdateAccountSettingsResult() = default;
  AWS_KINESIS_API UpdateAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KINESIS_API UpdateAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The updated configuration of the minimum throughput billing commitment for
   * your account.</p>
   */
  inline const MinimumThroughputBillingCommitmentOutput& GetMinimumThroughputBillingCommitment() const {
    return m_minimumThroughputBillingCommitment;
  }
  template <typename MinimumThroughputBillingCommitmentT = MinimumThroughputBillingCommitmentOutput>
  void SetMinimumThroughputBillingCommitment(MinimumThroughputBillingCommitmentT&& value) {
    m_minimumThroughputBillingCommitmentHasBeenSet = true;
    m_minimumThroughputBillingCommitment = std::forward<MinimumThroughputBillingCommitmentT>(value);
  }
  template <typename MinimumThroughputBillingCommitmentT = MinimumThroughputBillingCommitmentOutput>
  UpdateAccountSettingsResult& WithMinimumThroughputBillingCommitment(MinimumThroughputBillingCommitmentT&& value) {
    SetMinimumThroughputBillingCommitment(std::forward<MinimumThroughputBillingCommitmentT>(value));
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
  UpdateAccountSettingsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  MinimumThroughputBillingCommitmentOutput m_minimumThroughputBillingCommitment;
  bool m_minimumThroughputBillingCommitmentHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
