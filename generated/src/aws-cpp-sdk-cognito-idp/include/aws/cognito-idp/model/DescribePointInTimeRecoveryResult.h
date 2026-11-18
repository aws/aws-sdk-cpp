/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/RestorationType.h>
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
class DescribePointInTimeRecoveryResult {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API DescribePointInTimeRecoveryResult() = default;
  AWS_COGNITOIDENTITYPROVIDER_API DescribePointInTimeRecoveryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COGNITOIDENTITYPROVIDER_API DescribePointInTimeRecoveryResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The details of the requested recovery, including its status, the point in
   * time that it restores the user pool to, and the recovery preview.</p>
   */
  inline const RestorationType& GetRestoration() const { return m_restoration; }
  template <typename RestorationT = RestorationType>
  void SetRestoration(RestorationT&& value) {
    m_restorationHasBeenSet = true;
    m_restoration = std::forward<RestorationT>(value);
  }
  template <typename RestorationT = RestorationType>
  DescribePointInTimeRecoveryResult& WithRestoration(RestorationT&& value) {
    SetRestoration(std::forward<RestorationT>(value));
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
  DescribePointInTimeRecoveryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RestorationType m_restoration;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_restorationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
