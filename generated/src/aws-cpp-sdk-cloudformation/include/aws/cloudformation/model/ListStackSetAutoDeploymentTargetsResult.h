/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackSetAutoDeploymentTargetSummary.h>
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
  class ListStackSetAutoDeploymentTargetsResult
  {
  public:
    AWS_CLOUDFORMATION_API ListStackSetAutoDeploymentTargetsResult();
    AWS_CLOUDFORMATION_API ListStackSetAutoDeploymentTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListStackSetAutoDeploymentTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An array of summaries of the deployment targets for the stack set.</p>
     */
    inline const Aws::Vector<StackSetAutoDeploymentTargetSummary>& GetSummaries() const{ return m_summaries; }
    inline void SetSummaries(const Aws::Vector<StackSetAutoDeploymentTargetSummary>& value) { m_summaries = value; }
    inline void SetSummaries(Aws::Vector<StackSetAutoDeploymentTargetSummary>&& value) { m_summaries = std::move(value); }
    inline ListStackSetAutoDeploymentTargetsResult& WithSummaries(const Aws::Vector<StackSetAutoDeploymentTargetSummary>& value) { SetSummaries(value); return *this;}
    inline ListStackSetAutoDeploymentTargetsResult& WithSummaries(Aws::Vector<StackSetAutoDeploymentTargetSummary>&& value) { SetSummaries(std::move(value)); return *this;}
    inline ListStackSetAutoDeploymentTargetsResult& AddSummaries(const StackSetAutoDeploymentTargetSummary& value) { m_summaries.push_back(value); return *this; }
    inline ListStackSetAutoDeploymentTargetsResult& AddSummaries(StackSetAutoDeploymentTargetSummary&& value) { m_summaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ListStackSetAutoDeploymentTargets.html">ListStackSetAutoDeploymentTargets</a>
     * again and use that value for the <code>NextToken</code> parameter. If the
     * request returns all results, <code>NextToken</code> is set to an empty
     * string.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListStackSetAutoDeploymentTargetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStackSetAutoDeploymentTargetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStackSetAutoDeploymentTargetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListStackSetAutoDeploymentTargetsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListStackSetAutoDeploymentTargetsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackSetAutoDeploymentTargetSummary> m_summaries;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
