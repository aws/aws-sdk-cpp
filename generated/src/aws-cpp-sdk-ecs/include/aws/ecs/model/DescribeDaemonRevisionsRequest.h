/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class DescribeDaemonRevisionsRequest : public ECSRequest {
 public:
  AWS_ECS_API DescribeDaemonRevisionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeDaemonRevisions"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN of the daemon revisions to describe. You can specify up to 20
   * ARNs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDaemonRevisionArns() const { return m_daemonRevisionArns; }
  inline bool DaemonRevisionArnsHasBeenSet() const { return m_daemonRevisionArnsHasBeenSet; }
  template <typename DaemonRevisionArnsT = Aws::Vector<Aws::String>>
  void SetDaemonRevisionArns(DaemonRevisionArnsT&& value) {
    m_daemonRevisionArnsHasBeenSet = true;
    m_daemonRevisionArns = std::forward<DaemonRevisionArnsT>(value);
  }
  template <typename DaemonRevisionArnsT = Aws::Vector<Aws::String>>
  DescribeDaemonRevisionsRequest& WithDaemonRevisionArns(DaemonRevisionArnsT&& value) {
    SetDaemonRevisionArns(std::forward<DaemonRevisionArnsT>(value));
    return *this;
  }
  template <typename DaemonRevisionArnsT = Aws::String>
  DescribeDaemonRevisionsRequest& AddDaemonRevisionArns(DaemonRevisionArnsT&& value) {
    m_daemonRevisionArnsHasBeenSet = true;
    m_daemonRevisionArns.emplace_back(std::forward<DaemonRevisionArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_daemonRevisionArns;
  bool m_daemonRevisionArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
