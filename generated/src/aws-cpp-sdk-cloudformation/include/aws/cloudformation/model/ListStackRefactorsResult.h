/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackRefactorSummary.h>
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
  class ListStackRefactorsResult
  {
  public:
    AWS_CLOUDFORMATION_API ListStackRefactorsResult();
    AWS_CLOUDFORMATION_API ListStackRefactorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListStackRefactorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Provides a summary of a stack refactor, including the following:</p> <ul>
     * <li> <p> <code>StackRefactorId</code> </p> </li> <li> <p> <code>Status</code>
     * </p> </li> <li> <p> <code>StatusReason</code> </p> </li> <li> <p>
     * <code>ExecutionStatus</code> </p> </li> <li> <p>
     * <code>ExecutionStatusReason</code> </p> </li> <li> <p> <code>Description</code>
     * </p> </li> </ul>
     */
    inline const Aws::Vector<StackRefactorSummary>& GetStackRefactorSummaries() const{ return m_stackRefactorSummaries; }
    inline void SetStackRefactorSummaries(const Aws::Vector<StackRefactorSummary>& value) { m_stackRefactorSummaries = value; }
    inline void SetStackRefactorSummaries(Aws::Vector<StackRefactorSummary>&& value) { m_stackRefactorSummaries = std::move(value); }
    inline ListStackRefactorsResult& WithStackRefactorSummaries(const Aws::Vector<StackRefactorSummary>& value) { SetStackRefactorSummaries(value); return *this;}
    inline ListStackRefactorsResult& WithStackRefactorSummaries(Aws::Vector<StackRefactorSummary>&& value) { SetStackRefactorSummaries(std::move(value)); return *this;}
    inline ListStackRefactorsResult& AddStackRefactorSummaries(const StackRefactorSummary& value) { m_stackRefactorSummaries.push_back(value); return *this; }
    inline ListStackRefactorsResult& AddStackRefactorSummaries(StackRefactorSummary&& value) { m_stackRefactorSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call this action again and assign that token to the request object's
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListStackRefactorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStackRefactorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStackRefactorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListStackRefactorsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListStackRefactorsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackRefactorSummary> m_stackRefactorSummaries;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
