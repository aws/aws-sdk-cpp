/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class DescribeDaemonRequest : public ECSRequest {
 public:
  AWS_ECS_API DescribeDaemonRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeDaemon"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the daemon to describe.</p>
   */
  inline const Aws::String& GetDaemonArn() const { return m_daemonArn; }
  inline bool DaemonArnHasBeenSet() const { return m_daemonArnHasBeenSet; }
  template <typename DaemonArnT = Aws::String>
  void SetDaemonArn(DaemonArnT&& value) {
    m_daemonArnHasBeenSet = true;
    m_daemonArn = std::forward<DaemonArnT>(value);
  }
  template <typename DaemonArnT = Aws::String>
  DescribeDaemonRequest& WithDaemonArn(DaemonArnT&& value) {
    SetDaemonArn(std::forward<DaemonArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_daemonArn;
  bool m_daemonArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
