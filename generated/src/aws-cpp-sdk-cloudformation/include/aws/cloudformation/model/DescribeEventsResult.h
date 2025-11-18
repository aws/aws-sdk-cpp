/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/OperationEvent.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
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
namespace CloudFormation {
namespace Model {
class DescribeEventsResult {
 public:
  AWS_CLOUDFORMATION_API DescribeEventsResult() = default;
  AWS_CLOUDFORMATION_API DescribeEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_CLOUDFORMATION_API DescribeEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>A list of operation events that match the specified criteria.</p>
   */
  inline const Aws::Vector<OperationEvent>& GetOperationEvents() const { return m_operationEvents; }
  template <typename OperationEventsT = Aws::Vector<OperationEvent>>
  void SetOperationEvents(OperationEventsT&& value) {
    m_operationEventsHasBeenSet = true;
    m_operationEvents = std::forward<OperationEventsT>(value);
  }
  template <typename OperationEventsT = Aws::Vector<OperationEvent>>
  DescribeEventsResult& WithOperationEvents(OperationEventsT&& value) {
    SetOperationEvents(std::forward<OperationEventsT>(value));
    return *this;
  }
  template <typename OperationEventsT = OperationEvent>
  DescribeEventsResult& AddOperationEvents(OperationEventsT&& value) {
    m_operationEventsHasBeenSet = true;
    m_operationEvents.emplace_back(std::forward<OperationEventsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the request doesn't return all the remaining results,
   * <code>NextToken</code> is set to a token. To retrieve the next set of results,
   * call <code>DescribeEvents</code> again and assign that token to the request
   * object's <code>NextToken</code> parameter. If the request returns all results,
   * <code>NextToken</code> is set to <code>null</code>.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeEventsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  DescribeEventsResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<OperationEvent> m_operationEvents;
  bool m_operationEventsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
