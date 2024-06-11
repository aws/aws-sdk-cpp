/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackEvent.h>
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
   * <p>The output for a <a>DescribeStackEvents</a> action.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackEventsOutput">AWS
   * API Reference</a></p>
   */
  class DescribeStackEventsResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackEventsResult();
    AWS_CLOUDFORMATION_API DescribeStackEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStackEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>StackEvents</code> structures.</p>
     */
    inline const Aws::Vector<StackEvent>& GetStackEvents() const{ return m_stackEvents; }
    inline void SetStackEvents(const Aws::Vector<StackEvent>& value) { m_stackEvents = value; }
    inline void SetStackEvents(Aws::Vector<StackEvent>&& value) { m_stackEvents = std::move(value); }
    inline DescribeStackEventsResult& WithStackEvents(const Aws::Vector<StackEvent>& value) { SetStackEvents(value); return *this;}
    inline DescribeStackEventsResult& WithStackEvents(Aws::Vector<StackEvent>&& value) { SetStackEvents(std::move(value)); return *this;}
    inline DescribeStackEventsResult& AddStackEvents(const StackEvent& value) { m_stackEvents.push_back(value); return *this; }
    inline DescribeStackEventsResult& AddStackEvents(StackEvent&& value) { m_stackEvents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * events. If no additional page exists, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeStackEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeStackEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeStackEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeStackEventsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeStackEventsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackEvent> m_stackEvents;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
