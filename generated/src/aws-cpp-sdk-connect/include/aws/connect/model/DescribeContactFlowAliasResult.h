/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactFlowAliasInfo.h>
#include <aws/core/http/HttpResponse.h>
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
class DescribeContactFlowAliasResult {
 public:
  AWS_CONNECT_API DescribeContactFlowAliasResult() = default;
  AWS_CONNECT_API DescribeContactFlowAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API DescribeContactFlowAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the flow alias.</p>
   */
  inline const ContactFlowAliasInfo& GetContactFlowAlias() const { return m_contactFlowAlias; }
  template <typename ContactFlowAliasT = ContactFlowAliasInfo>
  void SetContactFlowAlias(ContactFlowAliasT&& value) {
    m_contactFlowAliasHasBeenSet = true;
    m_contactFlowAlias = std::forward<ContactFlowAliasT>(value);
  }
  template <typename ContactFlowAliasT = ContactFlowAliasInfo>
  DescribeContactFlowAliasResult& WithContactFlowAlias(ContactFlowAliasT&& value) {
    SetContactFlowAlias(std::forward<ContactFlowAliasT>(value));
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
  DescribeContactFlowAliasResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ContactFlowAliasInfo m_contactFlowAlias;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_contactFlowAliasHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
