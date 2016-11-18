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
#include <aws/cloudformation/model/StackEvent.h>

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
   * <p>The output for a <a>DescribeStackEvents</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API DescribeStackEventsResult
  {
  public:
    DescribeStackEventsResult();
    DescribeStackEventsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeStackEventsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list of <code>StackEvents</code> structures.</p>
     */
    inline const Aws::Vector<StackEvent>& GetStackEvents() const{ return m_stackEvents; }

    /**
     * <p>A list of <code>StackEvents</code> structures.</p>
     */
    inline void SetStackEvents(const Aws::Vector<StackEvent>& value) { m_stackEvents = value; }

    /**
     * <p>A list of <code>StackEvents</code> structures.</p>
     */
    inline void SetStackEvents(Aws::Vector<StackEvent>&& value) { m_stackEvents = value; }

    /**
     * <p>A list of <code>StackEvents</code> structures.</p>
     */
    inline DescribeStackEventsResult& WithStackEvents(const Aws::Vector<StackEvent>& value) { SetStackEvents(value); return *this;}

    /**
     * <p>A list of <code>StackEvents</code> structures.</p>
     */
    inline DescribeStackEventsResult& WithStackEvents(Aws::Vector<StackEvent>&& value) { SetStackEvents(value); return *this;}

    /**
     * <p>A list of <code>StackEvents</code> structures.</p>
     */
    inline DescribeStackEventsResult& AddStackEvents(const StackEvent& value) { m_stackEvents.push_back(value); return *this; }

    /**
     * <p>A list of <code>StackEvents</code> structures.</p>
     */
    inline DescribeStackEventsResult& AddStackEvents(StackEvent&& value) { m_stackEvents.push_back(value); return *this; }

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * events. If no additional page exists, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * events. If no additional page exists, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * events. If no additional page exists, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * events. If no additional page exists, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * events. If no additional page exists, this value is null.</p>
     */
    inline DescribeStackEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * events. If no additional page exists, this value is null.</p>
     */
    inline DescribeStackEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * events. If no additional page exists, this value is null.</p>
     */
    inline DescribeStackEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeStackEventsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeStackEventsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<StackEvent> m_stackEvents;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws