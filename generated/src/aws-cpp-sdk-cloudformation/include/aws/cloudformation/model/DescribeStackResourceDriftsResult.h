/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackResourceDrift.h>
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
  class DescribeStackResourceDriftsResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackResourceDriftsResult() = default;
    AWS_CLOUDFORMATION_API DescribeStackResourceDriftsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStackResourceDriftsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Drift information for the resources that have been checked for drift in the
     * specified stack. This includes actual and expected configuration values for
     * resources where CloudFormation detects drift.</p> <p>For a given stack, there
     * will be one <code>StackResourceDrift</code> for each stack resource that has
     * been checked for drift. Resources that haven't yet been checked for drift aren't
     * included. Resources that do not currently support drift detection aren't
     * checked, and so not included. For a list of resources that support drift
     * detection, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resource-import-supported-resources.html">Resource
     * type support for imports and drift detection</a>.</p>
     */
    inline const Aws::Vector<StackResourceDrift>& GetStackResourceDrifts() const { return m_stackResourceDrifts; }
    template<typename StackResourceDriftsT = Aws::Vector<StackResourceDrift>>
    void SetStackResourceDrifts(StackResourceDriftsT&& value) { m_stackResourceDriftsHasBeenSet = true; m_stackResourceDrifts = std::forward<StackResourceDriftsT>(value); }
    template<typename StackResourceDriftsT = Aws::Vector<StackResourceDrift>>
    DescribeStackResourceDriftsResult& WithStackResourceDrifts(StackResourceDriftsT&& value) { SetStackResourceDrifts(std::forward<StackResourceDriftsT>(value)); return *this;}
    template<typename StackResourceDriftsT = StackResourceDrift>
    DescribeStackResourceDriftsResult& AddStackResourceDrifts(StackResourceDriftsT&& value) { m_stackResourceDriftsHasBeenSet = true; m_stackResourceDrifts.emplace_back(std::forward<StackResourceDriftsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>DescribeStackResourceDrifts</code> again and assign that token to the
     * request object's <code>NextToken</code> parameter. If the request returns all
     * results, <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeStackResourceDriftsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeStackResourceDriftsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackResourceDrift> m_stackResourceDrifts;
    bool m_stackResourceDriftsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
