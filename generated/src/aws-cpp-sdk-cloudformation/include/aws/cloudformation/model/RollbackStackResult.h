/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
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
namespace CloudFormation {
namespace Model {
class RollbackStackResult {
 public:
  AWS_CLOUDFORMATION_API RollbackStackResult() = default;
  AWS_CLOUDFORMATION_API RollbackStackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_CLOUDFORMATION_API RollbackStackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Unique identifier of the stack.</p>
   */
  inline const Aws::String& GetStackId() const { return m_stackId; }
  template <typename StackIdT = Aws::String>
  void SetStackId(StackIdT&& value) {
    m_stackIdHasBeenSet = true;
    m_stackId = std::forward<StackIdT>(value);
  }
  template <typename StackIdT = Aws::String>
  RollbackStackResult& WithStackId(StackIdT&& value) {
    SetStackId(std::forward<StackIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for this rollback operation that can be used to track the
   * operation's progress and events.</p>
   */
  inline const Aws::String& GetOperationId() const { return m_operationId; }
  template <typename OperationIdT = Aws::String>
  void SetOperationId(OperationIdT&& value) {
    m_operationIdHasBeenSet = true;
    m_operationId = std::forward<OperationIdT>(value);
  }
  template <typename OperationIdT = Aws::String>
  RollbackStackResult& WithOperationId(OperationIdT&& value) {
    SetOperationId(std::forward<OperationIdT>(value));
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
  RollbackStackResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stackId;
  bool m_stackIdHasBeenSet = false;

  Aws::String m_operationId;
  bool m_operationIdHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
