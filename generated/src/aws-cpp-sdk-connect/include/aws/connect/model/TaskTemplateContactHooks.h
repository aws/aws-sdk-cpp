/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The event hooks that are set on tasks created by using this
 * template.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TaskTemplateContactHooks">AWS
 * API Reference</a></p>
 */
class TaskTemplateContactHooks {
 public:
  AWS_CONNECT_API TaskTemplateContactHooks() = default;
  AWS_CONNECT_API TaskTemplateContactHooks(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API TaskTemplateContactHooks& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the flow module that runs when an agent attempts to
   * disconnect from a task created by referencing this template. If no agent ever
   * connects to the task, the flow module runs when the task is terminated.</p>
   */
  inline const Aws::String& GetWrapUpFlowId() const { return m_wrapUpFlowId; }
  inline bool WrapUpFlowIdHasBeenSet() const { return m_wrapUpFlowIdHasBeenSet; }
  template <typename WrapUpFlowIdT = Aws::String>
  void SetWrapUpFlowId(WrapUpFlowIdT&& value) {
    m_wrapUpFlowIdHasBeenSet = true;
    m_wrapUpFlowId = std::forward<WrapUpFlowIdT>(value);
  }
  template <typename WrapUpFlowIdT = Aws::String>
  TaskTemplateContactHooks& WithWrapUpFlowId(WrapUpFlowIdT&& value) {
    SetWrapUpFlowId(std::forward<WrapUpFlowIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_wrapUpFlowId;
  bool m_wrapUpFlowIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
