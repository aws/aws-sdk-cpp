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
#include <aws/cloudformation/model/StackResourceSummary.h>

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
   * <p>The output for a <a>ListStackResources</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API ListStackResourcesResult
  {
  public:
    ListStackResourcesResult();
    ListStackResourcesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListStackResourcesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list of <code>StackResourceSummary</code> structures.</p>
     */
    inline const Aws::Vector<StackResourceSummary>& GetStackResourceSummaries() const{ return m_stackResourceSummaries; }

    /**
     * <p>A list of <code>StackResourceSummary</code> structures.</p>
     */
    inline void SetStackResourceSummaries(const Aws::Vector<StackResourceSummary>& value) { m_stackResourceSummaries = value; }

    /**
     * <p>A list of <code>StackResourceSummary</code> structures.</p>
     */
    inline void SetStackResourceSummaries(Aws::Vector<StackResourceSummary>&& value) { m_stackResourceSummaries = value; }

    /**
     * <p>A list of <code>StackResourceSummary</code> structures.</p>
     */
    inline ListStackResourcesResult& WithStackResourceSummaries(const Aws::Vector<StackResourceSummary>& value) { SetStackResourceSummaries(value); return *this;}

    /**
     * <p>A list of <code>StackResourceSummary</code> structures.</p>
     */
    inline ListStackResourcesResult& WithStackResourceSummaries(Aws::Vector<StackResourceSummary>&& value) { SetStackResourceSummaries(value); return *this;}

    /**
     * <p>A list of <code>StackResourceSummary</code> structures.</p>
     */
    inline ListStackResourcesResult& AddStackResourceSummaries(const StackResourceSummary& value) { m_stackResourceSummaries.push_back(value); return *this; }

    /**
     * <p>A list of <code>StackResourceSummary</code> structures.</p>
     */
    inline ListStackResourcesResult& AddStackResourceSummaries(StackResourceSummary&& value) { m_stackResourceSummaries.push_back(value); return *this; }

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of stack
     * resources. If no additional page exists, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of stack
     * resources. If no additional page exists, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of stack
     * resources. If no additional page exists, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of stack
     * resources. If no additional page exists, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of stack
     * resources. If no additional page exists, this value is null.</p>
     */
    inline ListStackResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of stack
     * resources. If no additional page exists, this value is null.</p>
     */
    inline ListStackResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of stack
     * resources. If no additional page exists, this value is null.</p>
     */
    inline ListStackResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ListStackResourcesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListStackResourcesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<StackResourceSummary> m_stackResourceSummaries;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws