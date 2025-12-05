/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactFlowModuleAliasInfo.h>
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
class DescribeContactFlowModuleAliasResult {
 public:
  AWS_CONNECT_API DescribeContactFlowModuleAliasResult() = default;
  AWS_CONNECT_API DescribeContactFlowModuleAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API DescribeContactFlowModuleAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the flow module alias.</p>
   */
  inline const ContactFlowModuleAliasInfo& GetContactFlowModuleAlias() const { return m_contactFlowModuleAlias; }
  template <typename ContactFlowModuleAliasT = ContactFlowModuleAliasInfo>
  void SetContactFlowModuleAlias(ContactFlowModuleAliasT&& value) {
    m_contactFlowModuleAliasHasBeenSet = true;
    m_contactFlowModuleAlias = std::forward<ContactFlowModuleAliasT>(value);
  }
  template <typename ContactFlowModuleAliasT = ContactFlowModuleAliasInfo>
  DescribeContactFlowModuleAliasResult& WithContactFlowModuleAlias(ContactFlowModuleAliasT&& value) {
    SetContactFlowModuleAlias(std::forward<ContactFlowModuleAliasT>(value));
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
  DescribeContactFlowModuleAliasResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  ContactFlowModuleAliasInfo m_contactFlowModuleAlias;

  Aws::String m_requestId;
  bool m_contactFlowModuleAliasHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
