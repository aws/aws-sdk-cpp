/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
class CreateContactFlowAliasResult {
 public:
  AWS_CONNECT_API CreateContactFlowAliasResult() = default;
  AWS_CONNECT_API CreateContactFlowAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API CreateContactFlowAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the flow.</p>
   */
  inline const Aws::String& GetContactFlowArn() const { return m_contactFlowArn; }
  template <typename ContactFlowArnT = Aws::String>
  void SetContactFlowArn(ContactFlowArnT&& value) {
    m_contactFlowArnHasBeenSet = true;
    m_contactFlowArn = std::forward<ContactFlowArnT>(value);
  }
  template <typename ContactFlowArnT = Aws::String>
  CreateContactFlowAliasResult& WithContactFlowArn(ContactFlowArnT&& value) {
    SetContactFlowArn(std::forward<ContactFlowArnT>(value));
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
  CreateContactFlowAliasResult& WithId(IdT&& value) {
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
  CreateContactFlowAliasResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_contactFlowArn;

  Aws::String m_id;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_contactFlowArnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
