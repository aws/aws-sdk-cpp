/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/StackSetOperation.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  class DescribeStackSetOperationResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackSetOperationResult() = default;
    AWS_CLOUDFORMATION_API DescribeStackSetOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStackSetOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The specified StackSet operation.</p>
     */
    inline const StackSetOperation& GetStackSetOperation() const { return m_stackSetOperation; }
    template<typename StackSetOperationT = StackSetOperation>
    void SetStackSetOperation(StackSetOperationT&& value) { m_stackSetOperationHasBeenSet = true; m_stackSetOperation = std::forward<StackSetOperationT>(value); }
    template<typename StackSetOperationT = StackSetOperation>
    DescribeStackSetOperationResult& WithStackSetOperation(StackSetOperationT&& value) { SetStackSetOperation(std::forward<StackSetOperationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeStackSetOperationResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    StackSetOperation m_stackSetOperation;
    bool m_stackSetOperationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
