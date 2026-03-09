/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ClientSecretDescriptorType.h>
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
namespace CognitoIdentityProvider {
namespace Model {
/**
 * <p>The response from creating a new client secret.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AddUserPoolClientSecretResponse">AWS
 * API Reference</a></p>
 */
class AddUserPoolClientSecretResult {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API AddUserPoolClientSecretResult() = default;
  AWS_COGNITOIDENTITYPROVIDER_API AddUserPoolClientSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COGNITOIDENTITYPROVIDER_API AddUserPoolClientSecretResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The details of the newly created client secret, including its unique
   * identifier and creation timestamp. The ClientSecretValue is only returned when
   * Amazon Cognito generates the secret. For custom secrets that you provide, the
   * ClientSecretValue is not included in the response.</p>
   */
  inline const ClientSecretDescriptorType& GetClientSecretDescriptor() const { return m_clientSecretDescriptor; }
  template <typename ClientSecretDescriptorT = ClientSecretDescriptorType>
  void SetClientSecretDescriptor(ClientSecretDescriptorT&& value) {
    m_clientSecretDescriptorHasBeenSet = true;
    m_clientSecretDescriptor = std::forward<ClientSecretDescriptorT>(value);
  }
  template <typename ClientSecretDescriptorT = ClientSecretDescriptorType>
  AddUserPoolClientSecretResult& WithClientSecretDescriptor(ClientSecretDescriptorT&& value) {
    SetClientSecretDescriptor(std::forward<ClientSecretDescriptorT>(value));
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
  AddUserPoolClientSecretResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ClientSecretDescriptorType m_clientSecretDescriptor;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_clientSecretDescriptorHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
