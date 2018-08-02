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
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/Consumer.h>
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
namespace Kinesis
{
namespace Model
{
  class AWS_KINESIS_API ListStreamConsumersResult
  {
  public:
    ListStreamConsumersResult();
    ListStreamConsumersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListStreamConsumersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of JSON objects. Each object represents one registered consumer.</p>
     */
    inline const Aws::Vector<Consumer>& GetConsumers() const{ return m_consumers; }

    /**
     * <p>An array of JSON objects. Each object represents one registered consumer.</p>
     */
    inline void SetConsumers(const Aws::Vector<Consumer>& value) { m_consumers = value; }

    /**
     * <p>An array of JSON objects. Each object represents one registered consumer.</p>
     */
    inline void SetConsumers(Aws::Vector<Consumer>&& value) { m_consumers = std::move(value); }

    /**
     * <p>An array of JSON objects. Each object represents one registered consumer.</p>
     */
    inline ListStreamConsumersResult& WithConsumers(const Aws::Vector<Consumer>& value) { SetConsumers(value); return *this;}

    /**
     * <p>An array of JSON objects. Each object represents one registered consumer.</p>
     */
    inline ListStreamConsumersResult& WithConsumers(Aws::Vector<Consumer>&& value) { SetConsumers(std::move(value)); return *this;}

    /**
     * <p>An array of JSON objects. Each object represents one registered consumer.</p>
     */
    inline ListStreamConsumersResult& AddConsumers(const Consumer& value) { m_consumers.push_back(value); return *this; }

    /**
     * <p>An array of JSON objects. Each object represents one registered consumer.</p>
     */
    inline ListStreamConsumersResult& AddConsumers(Consumer&& value) { m_consumers.push_back(std::move(value)); return *this; }


    /**
     * <p>When the number of consumers that are registered with the data stream is
     * greater than the default value for the <code>MaxResults</code> parameter, or if
     * you explicitly specify a value for <code>MaxResults</code> that is less than the
     * number of registered consumers, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListStreamConsumers</code> to list the next set of
     * registered consumers. For more information about the use of this pagination
     * token when calling the <code>ListStreamConsumers</code> operation, see
     * <a>ListStreamConsumersInput$NextToken</a>.</p> <important> <p>Tokens expire
     * after 300 seconds. When you obtain a value for <code>NextToken</code> in the
     * response to a call to <code>ListStreamConsumers</code>, you have 300 seconds to
     * use that value. If you specify an expired token in a call to
     * <code>ListStreamConsumers</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> </important>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the number of consumers that are registered with the data stream is
     * greater than the default value for the <code>MaxResults</code> parameter, or if
     * you explicitly specify a value for <code>MaxResults</code> that is less than the
     * number of registered consumers, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListStreamConsumers</code> to list the next set of
     * registered consumers. For more information about the use of this pagination
     * token when calling the <code>ListStreamConsumers</code> operation, see
     * <a>ListStreamConsumersInput$NextToken</a>.</p> <important> <p>Tokens expire
     * after 300 seconds. When you obtain a value for <code>NextToken</code> in the
     * response to a call to <code>ListStreamConsumers</code>, you have 300 seconds to
     * use that value. If you specify an expired token in a call to
     * <code>ListStreamConsumers</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> </important>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When the number of consumers that are registered with the data stream is
     * greater than the default value for the <code>MaxResults</code> parameter, or if
     * you explicitly specify a value for <code>MaxResults</code> that is less than the
     * number of registered consumers, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListStreamConsumers</code> to list the next set of
     * registered consumers. For more information about the use of this pagination
     * token when calling the <code>ListStreamConsumers</code> operation, see
     * <a>ListStreamConsumersInput$NextToken</a>.</p> <important> <p>Tokens expire
     * after 300 seconds. When you obtain a value for <code>NextToken</code> in the
     * response to a call to <code>ListStreamConsumers</code>, you have 300 seconds to
     * use that value. If you specify an expired token in a call to
     * <code>ListStreamConsumers</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> </important>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When the number of consumers that are registered with the data stream is
     * greater than the default value for the <code>MaxResults</code> parameter, or if
     * you explicitly specify a value for <code>MaxResults</code> that is less than the
     * number of registered consumers, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListStreamConsumers</code> to list the next set of
     * registered consumers. For more information about the use of this pagination
     * token when calling the <code>ListStreamConsumers</code> operation, see
     * <a>ListStreamConsumersInput$NextToken</a>.</p> <important> <p>Tokens expire
     * after 300 seconds. When you obtain a value for <code>NextToken</code> in the
     * response to a call to <code>ListStreamConsumers</code>, you have 300 seconds to
     * use that value. If you specify an expired token in a call to
     * <code>ListStreamConsumers</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> </important>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When the number of consumers that are registered with the data stream is
     * greater than the default value for the <code>MaxResults</code> parameter, or if
     * you explicitly specify a value for <code>MaxResults</code> that is less than the
     * number of registered consumers, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListStreamConsumers</code> to list the next set of
     * registered consumers. For more information about the use of this pagination
     * token when calling the <code>ListStreamConsumers</code> operation, see
     * <a>ListStreamConsumersInput$NextToken</a>.</p> <important> <p>Tokens expire
     * after 300 seconds. When you obtain a value for <code>NextToken</code> in the
     * response to a call to <code>ListStreamConsumers</code>, you have 300 seconds to
     * use that value. If you specify an expired token in a call to
     * <code>ListStreamConsumers</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> </important>
     */
    inline ListStreamConsumersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the number of consumers that are registered with the data stream is
     * greater than the default value for the <code>MaxResults</code> parameter, or if
     * you explicitly specify a value for <code>MaxResults</code> that is less than the
     * number of registered consumers, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListStreamConsumers</code> to list the next set of
     * registered consumers. For more information about the use of this pagination
     * token when calling the <code>ListStreamConsumers</code> operation, see
     * <a>ListStreamConsumersInput$NextToken</a>.</p> <important> <p>Tokens expire
     * after 300 seconds. When you obtain a value for <code>NextToken</code> in the
     * response to a call to <code>ListStreamConsumers</code>, you have 300 seconds to
     * use that value. If you specify an expired token in a call to
     * <code>ListStreamConsumers</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> </important>
     */
    inline ListStreamConsumersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the number of consumers that are registered with the data stream is
     * greater than the default value for the <code>MaxResults</code> parameter, or if
     * you explicitly specify a value for <code>MaxResults</code> that is less than the
     * number of registered consumers, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListStreamConsumers</code> to list the next set of
     * registered consumers. For more information about the use of this pagination
     * token when calling the <code>ListStreamConsumers</code> operation, see
     * <a>ListStreamConsumersInput$NextToken</a>.</p> <important> <p>Tokens expire
     * after 300 seconds. When you obtain a value for <code>NextToken</code> in the
     * response to a call to <code>ListStreamConsumers</code>, you have 300 seconds to
     * use that value. If you specify an expired token in a call to
     * <code>ListStreamConsumers</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> </important>
     */
    inline ListStreamConsumersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Consumer> m_consumers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
