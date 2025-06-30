/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/StackResourceDetail.h>
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
  /**
   * <p>The output for a <a>DescribeStackResource</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResourceOutput">AWS
   * API Reference</a></p>
   */
  class DescribeStackResourceResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackResourceResult() = default;
    AWS_CLOUDFORMATION_API DescribeStackResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStackResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A <code>StackResourceDetail</code> structure that contains the description of
     * the specified resource in the specified stack.</p>
     */
    inline const StackResourceDetail& GetStackResourceDetail() const { return m_stackResourceDetail; }
    template<typename StackResourceDetailT = StackResourceDetail>
    void SetStackResourceDetail(StackResourceDetailT&& value) { m_stackResourceDetailHasBeenSet = true; m_stackResourceDetail = std::forward<StackResourceDetailT>(value); }
    template<typename StackResourceDetailT = StackResourceDetail>
    DescribeStackResourceResult& WithStackResourceDetail(StackResourceDetailT&& value) { SetStackResourceDetail(std::forward<StackResourceDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeStackResourceResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    StackResourceDetail m_stackResourceDetail;
    bool m_stackResourceDetailHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
