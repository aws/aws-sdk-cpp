/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactFlowType.h>

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
 * <p> The contact flow type condition. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactFlowTypeCondition">AWS
 * API Reference</a></p>
 */
class ContactFlowTypeCondition {
 public:
  AWS_CONNECT_API ContactFlowTypeCondition() = default;
  AWS_CONNECT_API ContactFlowTypeCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactFlowTypeCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Contact flow type of the contact flow type condition. </p>
   */
  inline ContactFlowType GetContactFlowType() const { return m_contactFlowType; }
  inline bool ContactFlowTypeHasBeenSet() const { return m_contactFlowTypeHasBeenSet; }
  inline void SetContactFlowType(ContactFlowType value) {
    m_contactFlowTypeHasBeenSet = true;
    m_contactFlowType = value;
  }
  inline ContactFlowTypeCondition& WithContactFlowType(ContactFlowType value) {
    SetContactFlowType(value);
    return *this;
  }
  ///@}
 private:
  ContactFlowType m_contactFlowType{ContactFlowType::NOT_SET};
  bool m_contactFlowTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
