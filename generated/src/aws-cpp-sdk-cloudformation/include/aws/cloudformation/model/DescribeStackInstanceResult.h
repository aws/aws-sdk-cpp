/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/StackInstance.h>
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
  class DescribeStackInstanceResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackInstanceResult() = default;
    AWS_CLOUDFORMATION_API DescribeStackInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStackInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The stack instance that matches the specified request parameters.</p>
     */
    inline const StackInstance& GetStackInstance() const { return m_stackInstance; }
    template<typename StackInstanceT = StackInstance>
    void SetStackInstance(StackInstanceT&& value) { m_stackInstanceHasBeenSet = true; m_stackInstance = std::forward<StackInstanceT>(value); }
    template<typename StackInstanceT = StackInstance>
    DescribeStackInstanceResult& WithStackInstance(StackInstanceT&& value) { SetStackInstance(std::forward<StackInstanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeStackInstanceResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    StackInstance m_stackInstance;
    bool m_stackInstanceHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
