/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackSummary.h>
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
   * <p>The output for <a>ListStacks</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStacksOutput">AWS
   * API Reference</a></p>
   */
  class ListStacksResult
  {
  public:
    AWS_CLOUDFORMATION_API ListStacksResult() = default;
    AWS_CLOUDFORMATION_API ListStacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListStacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>StackSummary</code> structures that contains information
     * about the specified stacks.</p>
     */
    inline const Aws::Vector<StackSummary>& GetStackSummaries() const { return m_stackSummaries; }
    template<typename StackSummariesT = Aws::Vector<StackSummary>>
    void SetStackSummaries(StackSummariesT&& value) { m_stackSummariesHasBeenSet = true; m_stackSummaries = std::forward<StackSummariesT>(value); }
    template<typename StackSummariesT = Aws::Vector<StackSummary>>
    ListStacksResult& WithStackSummaries(StackSummariesT&& value) { SetStackSummaries(std::forward<StackSummariesT>(value)); return *this;}
    template<typename StackSummariesT = StackSummary>
    ListStacksResult& AddStackSummaries(StackSummariesT&& value) { m_stackSummariesHasBeenSet = true; m_stackSummaries.emplace_back(std::forward<StackSummariesT>(value)); return *this; }
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
    ListStacksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListStacksResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackSummary> m_stackSummaries;
    bool m_stackSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
