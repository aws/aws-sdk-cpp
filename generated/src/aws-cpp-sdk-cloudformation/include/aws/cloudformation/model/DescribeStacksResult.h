/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/Stack.h>
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
   * <p>The output for a <a>DescribeStacks</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStacksOutput">AWS
   * API Reference</a></p>
   */
  class DescribeStacksResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStacksResult() = default;
    AWS_CLOUDFORMATION_API DescribeStacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of stack structures.</p>
     */
    inline const Aws::Vector<Stack>& GetStacks() const { return m_stacks; }
    template<typename StacksT = Aws::Vector<Stack>>
    void SetStacks(StacksT&& value) { m_stacksHasBeenSet = true; m_stacks = std::forward<StacksT>(value); }
    template<typename StacksT = Aws::Vector<Stack>>
    DescribeStacksResult& WithStacks(StacksT&& value) { SetStacks(std::forward<StacksT>(value)); return *this;}
    template<typename StacksT = Stack>
    DescribeStacksResult& AddStacks(StacksT&& value) { m_stacksHasBeenSet = true; m_stacks.emplace_back(std::forward<StacksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * stacks. If no additional page exists, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeStacksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeStacksResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Stack> m_stacks;
    bool m_stacksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
