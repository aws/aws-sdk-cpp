/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackResourceSummary.h>
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
   * <p>The output for a <a>ListStackResources</a> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackResourcesOutput">AWS
   * API Reference</a></p>
   */
  class ListStackResourcesResult
  {
  public:
    AWS_CLOUDFORMATION_API ListStackResourcesResult() = default;
    AWS_CLOUDFORMATION_API ListStackResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListStackResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>StackResourceSummary</code> structures.</p>
     */
    inline const Aws::Vector<StackResourceSummary>& GetStackResourceSummaries() const { return m_stackResourceSummaries; }
    template<typename StackResourceSummariesT = Aws::Vector<StackResourceSummary>>
    void SetStackResourceSummaries(StackResourceSummariesT&& value) { m_stackResourceSummariesHasBeenSet = true; m_stackResourceSummaries = std::forward<StackResourceSummariesT>(value); }
    template<typename StackResourceSummariesT = Aws::Vector<StackResourceSummary>>
    ListStackResourcesResult& WithStackResourceSummaries(StackResourceSummariesT&& value) { SetStackResourceSummaries(std::forward<StackResourceSummariesT>(value)); return *this;}
    template<typename StackResourceSummariesT = StackResourceSummary>
    ListStackResourcesResult& AddStackResourceSummaries(StackResourceSummariesT&& value) { m_stackResourceSummariesHasBeenSet = true; m_stackResourceSummaries.emplace_back(std::forward<StackResourceSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of stack
     * resources. If no additional page exists, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStackResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListStackResourcesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackResourceSummary> m_stackResourceSummaries;
    bool m_stackResourceSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
