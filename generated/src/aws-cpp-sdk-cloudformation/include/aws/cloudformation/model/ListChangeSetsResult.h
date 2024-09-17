/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/ChangeSetSummary.h>
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
   * <p>The output for the <a>ListChangeSets</a> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListChangeSetsOutput">AWS
   * API Reference</a></p>
   */
  class ListChangeSetsResult
  {
  public:
    AWS_CLOUDFORMATION_API ListChangeSetsResult();
    AWS_CLOUDFORMATION_API ListChangeSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListChangeSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>ChangeSetSummary</code> structures that provides the ID and
     * status of each change set for the specified stack.</p>
     */
    inline const Aws::Vector<ChangeSetSummary>& GetSummaries() const{ return m_summaries; }
    inline void SetSummaries(const Aws::Vector<ChangeSetSummary>& value) { m_summaries = value; }
    inline void SetSummaries(Aws::Vector<ChangeSetSummary>&& value) { m_summaries = std::move(value); }
    inline ListChangeSetsResult& WithSummaries(const Aws::Vector<ChangeSetSummary>& value) { SetSummaries(value); return *this;}
    inline ListChangeSetsResult& WithSummaries(Aws::Vector<ChangeSetSummary>&& value) { SetSummaries(std::move(value)); return *this;}
    inline ListChangeSetsResult& AddSummaries(const ChangeSetSummary& value) { m_summaries.push_back(value); return *this; }
    inline ListChangeSetsResult& AddSummaries(ChangeSetSummary&& value) { m_summaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of change
     * sets. If there is no additional page, this value is <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListChangeSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListChangeSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListChangeSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListChangeSetsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListChangeSetsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ChangeSetSummary> m_summaries;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
