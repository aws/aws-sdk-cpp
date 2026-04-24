/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/BatchGetJobIdentifier.h>

#include <utility>

namespace Aws {
namespace deadline {
namespace Model {

/**
 */
class BatchGetJobRequest : public DeadlineRequest {
 public:
  AWS_DEADLINE_API BatchGetJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetJob"; }

  AWS_DEADLINE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The list of job identifiers to retrieve. You can specify up to 100
   * identifiers per request.</p>
   */
  inline const Aws::Vector<BatchGetJobIdentifier>& GetIdentifiers() const { return m_identifiers; }
  inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }
  template <typename IdentifiersT = Aws::Vector<BatchGetJobIdentifier>>
  void SetIdentifiers(IdentifiersT&& value) {
    m_identifiersHasBeenSet = true;
    m_identifiers = std::forward<IdentifiersT>(value);
  }
  template <typename IdentifiersT = Aws::Vector<BatchGetJobIdentifier>>
  BatchGetJobRequest& WithIdentifiers(IdentifiersT&& value) {
    SetIdentifiers(std::forward<IdentifiersT>(value));
    return *this;
  }
  template <typename IdentifiersT = BatchGetJobIdentifier>
  BatchGetJobRequest& AddIdentifiers(IdentifiersT&& value) {
    m_identifiersHasBeenSet = true;
    m_identifiers.emplace_back(std::forward<IdentifiersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BatchGetJobIdentifier> m_identifiers;
  bool m_identifiersHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
