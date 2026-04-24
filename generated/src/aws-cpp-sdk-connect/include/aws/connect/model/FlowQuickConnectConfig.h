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
 * <p> Configuration for quick connect. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/FlowQuickConnectConfig">AWS
 * API Reference</a></p>
 */
class FlowQuickConnectConfig {
 public:
  AWS_CONNECT_API FlowQuickConnectConfig() = default;
  AWS_CONNECT_API FlowQuickConnectConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API FlowQuickConnectConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The contact flow ID for the quick connect configuration. </p>
   */
  inline const Aws::String& GetContactFlowId() const { return m_contactFlowId; }
  inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }
  template <typename ContactFlowIdT = Aws::String>
  void SetContactFlowId(ContactFlowIdT&& value) {
    m_contactFlowIdHasBeenSet = true;
    m_contactFlowId = std::forward<ContactFlowIdT>(value);
  }
  template <typename ContactFlowIdT = Aws::String>
  FlowQuickConnectConfig& WithContactFlowId(ContactFlowIdT&& value) {
    SetContactFlowId(std::forward<ContactFlowIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contactFlowId;
  bool m_contactFlowIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
