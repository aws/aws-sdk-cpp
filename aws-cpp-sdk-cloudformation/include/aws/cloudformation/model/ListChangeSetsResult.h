﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/ChangeSetSummary.h>

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
   * <p>The output for the <a>ListChangeSets</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API ListChangeSetsResult
  {
  public:
    ListChangeSetsResult();
    ListChangeSetsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListChangeSetsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list of <code>ChangeSetSummary</code> structures that provides the ID and
     * status of each change set for the specified stack.</p>
     */
    inline const Aws::Vector<ChangeSetSummary>& GetSummaries() const{ return m_summaries; }

    /**
     * <p>A list of <code>ChangeSetSummary</code> structures that provides the ID and
     * status of each change set for the specified stack.</p>
     */
    inline void SetSummaries(const Aws::Vector<ChangeSetSummary>& value) { m_summaries = value; }

    /**
     * <p>A list of <code>ChangeSetSummary</code> structures that provides the ID and
     * status of each change set for the specified stack.</p>
     */
    inline void SetSummaries(Aws::Vector<ChangeSetSummary>&& value) { m_summaries = value; }

    /**
     * <p>A list of <code>ChangeSetSummary</code> structures that provides the ID and
     * status of each change set for the specified stack.</p>
     */
    inline ListChangeSetsResult& WithSummaries(const Aws::Vector<ChangeSetSummary>& value) { SetSummaries(value); return *this;}

    /**
     * <p>A list of <code>ChangeSetSummary</code> structures that provides the ID and
     * status of each change set for the specified stack.</p>
     */
    inline ListChangeSetsResult& WithSummaries(Aws::Vector<ChangeSetSummary>&& value) { SetSummaries(value); return *this;}

    /**
     * <p>A list of <code>ChangeSetSummary</code> structures that provides the ID and
     * status of each change set for the specified stack.</p>
     */
    inline ListChangeSetsResult& AddSummaries(const ChangeSetSummary& value) { m_summaries.push_back(value); return *this; }

    /**
     * <p>A list of <code>ChangeSetSummary</code> structures that provides the ID and
     * status of each change set for the specified stack.</p>
     */
    inline ListChangeSetsResult& AddSummaries(ChangeSetSummary&& value) { m_summaries.push_back(value); return *this; }

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of change
     * sets. If there is no additional page, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of change
     * sets. If there is no additional page, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of change
     * sets. If there is no additional page, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of change
     * sets. If there is no additional page, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of change
     * sets. If there is no additional page, this value is null.</p>
     */
    inline ListChangeSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of change
     * sets. If there is no additional page, this value is null.</p>
     */
    inline ListChangeSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of change
     * sets. If there is no additional page, this value is null.</p>
     */
    inline ListChangeSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ListChangeSetsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListChangeSetsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<ChangeSetSummary> m_summaries;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws