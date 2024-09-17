/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackInstanceResourceDriftsSummary.h>
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
  class ListStackInstanceResourceDriftsResult
  {
  public:
    AWS_CLOUDFORMATION_API ListStackInstanceResourceDriftsResult();
    AWS_CLOUDFORMATION_API ListStackInstanceResourceDriftsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListStackInstanceResourceDriftsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>StackInstanceResourceDriftsSummary</code> structures that
     * contain information about the specified stack instances.</p>
     */
    inline const Aws::Vector<StackInstanceResourceDriftsSummary>& GetSummaries() const{ return m_summaries; }
    inline void SetSummaries(const Aws::Vector<StackInstanceResourceDriftsSummary>& value) { m_summaries = value; }
    inline void SetSummaries(Aws::Vector<StackInstanceResourceDriftsSummary>&& value) { m_summaries = std::move(value); }
    inline ListStackInstanceResourceDriftsResult& WithSummaries(const Aws::Vector<StackInstanceResourceDriftsSummary>& value) { SetSummaries(value); return *this;}
    inline ListStackInstanceResourceDriftsResult& WithSummaries(Aws::Vector<StackInstanceResourceDriftsSummary>&& value) { SetSummaries(std::move(value)); return *this;}
    inline ListStackInstanceResourceDriftsResult& AddSummaries(const StackInstanceResourceDriftsSummary& value) { m_summaries.push_back(value); return *this; }
    inline ListStackInstanceResourceDriftsResult& AddSummaries(StackInstanceResourceDriftsSummary&& value) { m_summaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListStackInstanceResourceDriftsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStackInstanceResourceDriftsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStackInstanceResourceDriftsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListStackInstanceResourceDriftsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListStackInstanceResourceDriftsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackInstanceResourceDriftsSummary> m_summaries;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
