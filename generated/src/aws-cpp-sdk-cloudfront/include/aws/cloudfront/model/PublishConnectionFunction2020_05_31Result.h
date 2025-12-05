/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ConnectionFunctionSummary.h>
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
class PublishConnectionFunction2020_05_31Result {
 public:
  AWS_CLOUDFRONT_API PublishConnectionFunction2020_05_31Result() = default;
  AWS_CLOUDFRONT_API PublishConnectionFunction2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_CLOUDFRONT_API PublishConnectionFunction2020_05_31Result& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The connection function summary.</p>
   */
  inline const ConnectionFunctionSummary& GetConnectionFunctionSummary() const { return m_connectionFunctionSummary; }
  template <typename ConnectionFunctionSummaryT = ConnectionFunctionSummary>
  void SetConnectionFunctionSummary(ConnectionFunctionSummaryT&& value) {
    m_connectionFunctionSummaryHasBeenSet = true;
    m_connectionFunctionSummary = std::forward<ConnectionFunctionSummaryT>(value);
  }
  template <typename ConnectionFunctionSummaryT = ConnectionFunctionSummary>
  PublishConnectionFunction2020_05_31Result& WithConnectionFunctionSummary(ConnectionFunctionSummaryT&& value) {
    SetConnectionFunctionSummary(std::forward<ConnectionFunctionSummaryT>(value));
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
  PublishConnectionFunction2020_05_31Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectionFunctionSummary m_connectionFunctionSummary;

  Aws::String m_requestId;
  bool m_connectionFunctionSummaryHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
