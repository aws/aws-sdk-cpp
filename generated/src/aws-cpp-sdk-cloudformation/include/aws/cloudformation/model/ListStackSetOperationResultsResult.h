/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackSetOperationResultSummary.h>
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
  class ListStackSetOperationResultsResult
  {
  public:
    AWS_CLOUDFORMATION_API ListStackSetOperationResultsResult();
    AWS_CLOUDFORMATION_API ListStackSetOperationResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListStackSetOperationResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of <code>StackSetOperationResultSummary</code> structures that contain
     * information about the specified operation results, for accounts and Amazon Web
     * Services Regions that are included in the operation.</p>
     */
    inline const Aws::Vector<StackSetOperationResultSummary>& GetSummaries() const{ return m_summaries; }

    /**
     * <p>A list of <code>StackSetOperationResultSummary</code> structures that contain
     * information about the specified operation results, for accounts and Amazon Web
     * Services Regions that are included in the operation.</p>
     */
    inline void SetSummaries(const Aws::Vector<StackSetOperationResultSummary>& value) { m_summaries = value; }

    /**
     * <p>A list of <code>StackSetOperationResultSummary</code> structures that contain
     * information about the specified operation results, for accounts and Amazon Web
     * Services Regions that are included in the operation.</p>
     */
    inline void SetSummaries(Aws::Vector<StackSetOperationResultSummary>&& value) { m_summaries = std::move(value); }

    /**
     * <p>A list of <code>StackSetOperationResultSummary</code> structures that contain
     * information about the specified operation results, for accounts and Amazon Web
     * Services Regions that are included in the operation.</p>
     */
    inline ListStackSetOperationResultsResult& WithSummaries(const Aws::Vector<StackSetOperationResultSummary>& value) { SetSummaries(value); return *this;}

    /**
     * <p>A list of <code>StackSetOperationResultSummary</code> structures that contain
     * information about the specified operation results, for accounts and Amazon Web
     * Services Regions that are included in the operation.</p>
     */
    inline ListStackSetOperationResultsResult& WithSummaries(Aws::Vector<StackSetOperationResultSummary>&& value) { SetSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of <code>StackSetOperationResultSummary</code> structures that contain
     * information about the specified operation results, for accounts and Amazon Web
     * Services Regions that are included in the operation.</p>
     */
    inline ListStackSetOperationResultsResult& AddSummaries(const StackSetOperationResultSummary& value) { m_summaries.push_back(value); return *this; }

    /**
     * <p>A list of <code>StackSetOperationResultSummary</code> structures that contain
     * information about the specified operation results, for accounts and Amazon Web
     * Services Regions that are included in the operation.</p>
     */
    inline ListStackSetOperationResultsResult& AddSummaries(StackSetOperationResultSummary&& value) { m_summaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the request doesn't return all results, <code>NextToken</code> is set to a
     * token. To retrieve the next set of results, call
     * <code>ListOperationResults</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If there are no remaining results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the request doesn't return all results, <code>NextToken</code> is set to a
     * token. To retrieve the next set of results, call
     * <code>ListOperationResults</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If there are no remaining results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the request doesn't return all results, <code>NextToken</code> is set to a
     * token. To retrieve the next set of results, call
     * <code>ListOperationResults</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If there are no remaining results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the request doesn't return all results, <code>NextToken</code> is set to a
     * token. To retrieve the next set of results, call
     * <code>ListOperationResults</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If there are no remaining results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the request doesn't return all results, <code>NextToken</code> is set to a
     * token. To retrieve the next set of results, call
     * <code>ListOperationResults</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If there are no remaining results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline ListStackSetOperationResultsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the request doesn't return all results, <code>NextToken</code> is set to a
     * token. To retrieve the next set of results, call
     * <code>ListOperationResults</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If there are no remaining results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline ListStackSetOperationResultsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the request doesn't return all results, <code>NextToken</code> is set to a
     * token. To retrieve the next set of results, call
     * <code>ListOperationResults</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If there are no remaining results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline ListStackSetOperationResultsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListStackSetOperationResultsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListStackSetOperationResultsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<StackSetOperationResultSummary> m_summaries;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
