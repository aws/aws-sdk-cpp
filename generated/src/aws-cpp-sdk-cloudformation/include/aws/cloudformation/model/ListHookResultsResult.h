/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/ListHookResultsTargetType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/HookResultSummary.h>
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
  class ListHookResultsResult
  {
  public:
    AWS_CLOUDFORMATION_API ListHookResultsResult();
    AWS_CLOUDFORMATION_API ListHookResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListHookResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The type of operation being targeted by the Hook.</p>
     */
    inline const ListHookResultsTargetType& GetTargetType() const{ return m_targetType; }
    inline void SetTargetType(const ListHookResultsTargetType& value) { m_targetType = value; }
    inline void SetTargetType(ListHookResultsTargetType&& value) { m_targetType = std::move(value); }
    inline ListHookResultsResult& WithTargetType(const ListHookResultsTargetType& value) { SetTargetType(value); return *this;}
    inline ListHookResultsResult& WithTargetType(ListHookResultsTargetType&& value) { SetTargetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical ID of the target the operation is acting on by the Hook. If the
     * target is a change set, it's the ARN of the change set.</p> <p>If the target is
     * a Cloud Control API operation, this will be the <code>HooksRequestToken</code>
     * returned by the Cloud Control API operation request. For more information on the
     * <code>HooksRequestToken</code>, see <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_ProgressEvent.html">ProgressEvent</a>.</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }
    inline void SetTargetId(const Aws::String& value) { m_targetId = value; }
    inline void SetTargetId(Aws::String&& value) { m_targetId = std::move(value); }
    inline void SetTargetId(const char* value) { m_targetId.assign(value); }
    inline ListHookResultsResult& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}
    inline ListHookResultsResult& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}
    inline ListHookResultsResult& WithTargetId(const char* value) { SetTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>HookResultSummary</code> structures that provides the status
     * and Hook status reason for each Hook invocation for the specified target.</p>
     */
    inline const Aws::Vector<HookResultSummary>& GetHookResults() const{ return m_hookResults; }
    inline void SetHookResults(const Aws::Vector<HookResultSummary>& value) { m_hookResults = value; }
    inline void SetHookResults(Aws::Vector<HookResultSummary>&& value) { m_hookResults = std::move(value); }
    inline ListHookResultsResult& WithHookResults(const Aws::Vector<HookResultSummary>& value) { SetHookResults(value); return *this;}
    inline ListHookResultsResult& WithHookResults(Aws::Vector<HookResultSummary>&& value) { SetHookResults(std::move(value)); return *this;}
    inline ListHookResultsResult& AddHookResults(const HookResultSummary& value) { m_hookResults.push_back(value); return *this; }
    inline ListHookResultsResult& AddHookResults(HookResultSummary&& value) { m_hookResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token, <code>null</code> or empty if no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListHookResultsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListHookResultsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListHookResultsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListHookResultsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListHookResultsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    ListHookResultsTargetType m_targetType;

    Aws::String m_targetId;

    Aws::Vector<HookResultSummary> m_hookResults;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
