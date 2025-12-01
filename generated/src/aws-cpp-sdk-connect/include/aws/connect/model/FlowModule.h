/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/FlowModuleType.h>
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
 * <p> A list of Flow Modules an AI Agent can invoke as a tool </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/FlowModule">AWS
 * API Reference</a></p>
 */
class FlowModule {
 public:
  AWS_CONNECT_API FlowModule() = default;
  AWS_CONNECT_API FlowModule(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API FlowModule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Only Type we support is MCP. </p>
   */
  inline FlowModuleType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(FlowModuleType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline FlowModule& WithType(FlowModuleType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> If of Flow Modules invocable as tool </p>
   */
  inline const Aws::String& GetFlowModuleId() const { return m_flowModuleId; }
  inline bool FlowModuleIdHasBeenSet() const { return m_flowModuleIdHasBeenSet; }
  template <typename FlowModuleIdT = Aws::String>
  void SetFlowModuleId(FlowModuleIdT&& value) {
    m_flowModuleIdHasBeenSet = true;
    m_flowModuleId = std::forward<FlowModuleIdT>(value);
  }
  template <typename FlowModuleIdT = Aws::String>
  FlowModule& WithFlowModuleId(FlowModuleIdT&& value) {
    SetFlowModuleId(std::forward<FlowModuleIdT>(value));
    return *this;
  }
  ///@}
 private:
  FlowModuleType m_type{FlowModuleType::NOT_SET};
  bool m_typeHasBeenSet = false;

  Aws::String m_flowModuleId;
  bool m_flowModuleIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
