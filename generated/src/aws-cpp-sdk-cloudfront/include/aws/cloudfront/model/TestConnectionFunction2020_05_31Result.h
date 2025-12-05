/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ConnectionFunctionTestResult.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace CloudFront {
namespace Model {
class TestConnectionFunction2020_05_31Result {
 public:
  AWS_CLOUDFRONT_API TestConnectionFunction2020_05_31Result() = default;
  AWS_CLOUDFRONT_API TestConnectionFunction2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_CLOUDFRONT_API TestConnectionFunction2020_05_31Result& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The connection function test result.</p>
   */
  inline const ConnectionFunctionTestResult& GetConnectionFunctionTestResult() const { return m_connectionFunctionTestResult; }
  template <typename ConnectionFunctionTestResultT = ConnectionFunctionTestResult>
  void SetConnectionFunctionTestResult(ConnectionFunctionTestResultT&& value) {
    m_connectionFunctionTestResultHasBeenSet = true;
    m_connectionFunctionTestResult = std::forward<ConnectionFunctionTestResultT>(value);
  }
  template <typename ConnectionFunctionTestResultT = ConnectionFunctionTestResult>
  TestConnectionFunction2020_05_31Result& WithConnectionFunctionTestResult(ConnectionFunctionTestResultT&& value) {
    SetConnectionFunctionTestResult(std::forward<ConnectionFunctionTestResultT>(value));
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
  TestConnectionFunction2020_05_31Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectionFunctionTestResult m_connectionFunctionTestResult;

  Aws::String m_requestId;
  bool m_connectionFunctionTestResultHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
