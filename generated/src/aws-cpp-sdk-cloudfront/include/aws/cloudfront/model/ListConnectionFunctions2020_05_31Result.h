/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ConnectionFunctionSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
class ListConnectionFunctions2020_05_31Result {
 public:
  AWS_CLOUDFRONT_API ListConnectionFunctions2020_05_31Result() = default;
  AWS_CLOUDFRONT_API ListConnectionFunctions2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_CLOUDFRONT_API ListConnectionFunctions2020_05_31Result& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Indicates the next page of connection functions. To get the next page of the
   * list, use this value in the <code>Marker</code> field of your request.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  ListConnectionFunctions2020_05_31Result& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of connection functions.</p>
   */
  inline const Aws::Vector<ConnectionFunctionSummary>& GetConnectionFunctions() const { return m_connectionFunctions; }
  template <typename ConnectionFunctionsT = Aws::Vector<ConnectionFunctionSummary>>
  void SetConnectionFunctions(ConnectionFunctionsT&& value) {
    m_connectionFunctionsHasBeenSet = true;
    m_connectionFunctions = std::forward<ConnectionFunctionsT>(value);
  }
  template <typename ConnectionFunctionsT = Aws::Vector<ConnectionFunctionSummary>>
  ListConnectionFunctions2020_05_31Result& WithConnectionFunctions(ConnectionFunctionsT&& value) {
    SetConnectionFunctions(std::forward<ConnectionFunctionsT>(value));
    return *this;
  }
  template <typename ConnectionFunctionsT = ConnectionFunctionSummary>
  ListConnectionFunctions2020_05_31Result& AddConnectionFunctions(ConnectionFunctionsT&& value) {
    m_connectionFunctionsHasBeenSet = true;
    m_connectionFunctions.emplace_back(std::forward<ConnectionFunctionsT>(value));
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
  ListConnectionFunctions2020_05_31Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextMarker;
  bool m_nextMarkerHasBeenSet = false;

  Aws::Vector<ConnectionFunctionSummary> m_connectionFunctions;
  bool m_connectionFunctionsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
