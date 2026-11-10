/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>One requested scope: an explicit list of actions for one service. All actions
 * in an entry share one service prefix. The same service may appear in more than
 * one entry.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/DataAccessTarget">AWS
 * API Reference</a></p>
 */
class DataAccessTarget {
 public:
  AWS_CLOUDWATCHOMNI_API DataAccessTarget() = default;
  AWS_CLOUDWATCHOMNI_API DataAccessTarget(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API DataAccessTarget& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The actions of one service, each with its service prefix, for example
   * &quot;logs:StartQuery&quot;.</p>
   */
  inline const Aws::Vector<Aws::String>& GetActions() const { return m_actions; }
  inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
  template <typename ActionsT = Aws::Vector<Aws::String>>
  void SetActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions = std::forward<ActionsT>(value);
  }
  template <typename ActionsT = Aws::Vector<Aws::String>>
  DataAccessTarget& WithActions(ActionsT&& value) {
    SetActions(std::forward<ActionsT>(value));
    return *this;
  }
  template <typename ActionsT = Aws::String>
  DataAccessTarget& AddActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions.emplace_back(std::forward<ActionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_actions;
  bool m_actionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
