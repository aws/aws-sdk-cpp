/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {
class CreateContactFlowModuleAliasResult {
 public:
  AWS_CONNECT_API CreateContactFlowModuleAliasResult() = default;
  AWS_CONNECT_API CreateContactFlowModuleAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API CreateContactFlowModuleAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the flow module.</p>
   */
  inline const Aws::String& GetContactFlowModuleArn() const { return m_contactFlowModuleArn; }
  template <typename ContactFlowModuleArnT = Aws::String>
  void SetContactFlowModuleArn(ContactFlowModuleArnT&& value) {
    m_contactFlowModuleArnHasBeenSet = true;
    m_contactFlowModuleArn = std::forward<ContactFlowModuleArnT>(value);
  }
  template <typename ContactFlowModuleArnT = Aws::String>
  CreateContactFlowModuleAliasResult& WithContactFlowModuleArn(ContactFlowModuleArnT&& value) {
    SetContactFlowModuleArn(std::forward<ContactFlowModuleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the alias.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateContactFlowModuleAliasResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
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
  CreateContactFlowModuleAliasResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contactFlowModuleArn;

  Aws::String m_id;

  Aws::String m_requestId;
  bool m_contactFlowModuleArnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
