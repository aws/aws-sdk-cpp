/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/model/FlowExecutionMessage.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTThingsGraph
{
namespace Model
{
  class AWS_IOTTHINGSGRAPH_API ListFlowExecutionMessagesResult
  {
  public:
    ListFlowExecutionMessagesResult();
    ListFlowExecutionMessagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListFlowExecutionMessagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects that contain information about events in the specified flow
     * execution.</p>
     */
    inline const Aws::Vector<FlowExecutionMessage>& GetMessages() const{ return m_messages; }

    /**
     * <p>A list of objects that contain information about events in the specified flow
     * execution.</p>
     */
    inline void SetMessages(const Aws::Vector<FlowExecutionMessage>& value) { m_messages = value; }

    /**
     * <p>A list of objects that contain information about events in the specified flow
     * execution.</p>
     */
    inline void SetMessages(Aws::Vector<FlowExecutionMessage>&& value) { m_messages = std::move(value); }

    /**
     * <p>A list of objects that contain information about events in the specified flow
     * execution.</p>
     */
    inline ListFlowExecutionMessagesResult& WithMessages(const Aws::Vector<FlowExecutionMessage>& value) { SetMessages(value); return *this;}

    /**
     * <p>A list of objects that contain information about events in the specified flow
     * execution.</p>
     */
    inline ListFlowExecutionMessagesResult& WithMessages(Aws::Vector<FlowExecutionMessage>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>A list of objects that contain information about events in the specified flow
     * execution.</p>
     */
    inline ListFlowExecutionMessagesResult& AddMessages(const FlowExecutionMessage& value) { m_messages.push_back(value); return *this; }

    /**
     * <p>A list of objects that contain information about events in the specified flow
     * execution.</p>
     */
    inline ListFlowExecutionMessagesResult& AddMessages(FlowExecutionMessage&& value) { m_messages.push_back(std::move(value)); return *this; }


    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results. </p>
     */
    inline ListFlowExecutionMessagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results. </p>
     */
    inline ListFlowExecutionMessagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results. </p>
     */
    inline ListFlowExecutionMessagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FlowExecutionMessage> m_messages;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
