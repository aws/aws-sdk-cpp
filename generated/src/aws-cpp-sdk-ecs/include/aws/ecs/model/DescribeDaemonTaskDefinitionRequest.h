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
class DescribeDaemonTaskDefinitionRequest : public ECSRequest {
 public:
  AWS_ECS_API DescribeDaemonTaskDefinitionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeDaemonTaskDefinition"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The <code>family</code> for the latest <code>ACTIVE</code> revision,
   * <code>family</code> and <code>revision</code> (<code>family:revision</code>) for
   * a specific revision in the family, or full Amazon Resource Name (ARN) of the
   * daemon task definition to describe.</p>
   */
  inline const Aws::String& GetDaemonTaskDefinition() const { return m_daemonTaskDefinition; }
  inline bool DaemonTaskDefinitionHasBeenSet() const { return m_daemonTaskDefinitionHasBeenSet; }
  template <typename DaemonTaskDefinitionT = Aws::String>
  void SetDaemonTaskDefinition(DaemonTaskDefinitionT&& value) {
    m_daemonTaskDefinitionHasBeenSet = true;
    m_daemonTaskDefinition = std::forward<DaemonTaskDefinitionT>(value);
  }
  template <typename DaemonTaskDefinitionT = Aws::String>
  DescribeDaemonTaskDefinitionRequest& WithDaemonTaskDefinition(DaemonTaskDefinitionT&& value) {
    SetDaemonTaskDefinition(std::forward<DaemonTaskDefinitionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_daemonTaskDefinition;
  bool m_daemonTaskDefinitionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
