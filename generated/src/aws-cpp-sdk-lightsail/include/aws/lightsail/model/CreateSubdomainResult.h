/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/Operation.h>
#include <aws/lightsail/model/Subdomain.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Lightsail {
namespace Model {
class CreateSubdomainResult {
 public:
  AWS_LIGHTSAIL_API CreateSubdomainResult() = default;
  AWS_LIGHTSAIL_API CreateSubdomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LIGHTSAIL_API CreateSubdomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An object that describes the subdomain that was created.</p>
   */
  inline const Subdomain& GetSubdomain() const { return m_subdomain; }
  template <typename SubdomainT = Subdomain>
  void SetSubdomain(SubdomainT&& value) {
    m_subdomainHasBeenSet = true;
    m_subdomain = std::forward<SubdomainT>(value);
  }
  template <typename SubdomainT = Subdomain>
  CreateSubdomainResult& WithSubdomain(SubdomainT&& value) {
    SetSubdomain(std::forward<SubdomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that describes the result of the action, such as the status of the
   * request, the timestamp of the request, and the resources affected by the
   * request.</p>
   */
  inline const Operation& GetOperation() const { return m_operation; }
  template <typename OperationT = Operation>
  void SetOperation(OperationT&& value) {
    m_operationHasBeenSet = true;
    m_operation = std::forward<OperationT>(value);
  }
  template <typename OperationT = Operation>
  CreateSubdomainResult& WithOperation(OperationT&& value) {
    SetOperation(std::forward<OperationT>(value));
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
  CreateSubdomainResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Subdomain m_subdomain;

  Operation m_operation;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_subdomainHasBeenSet = false;
  bool m_operationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
