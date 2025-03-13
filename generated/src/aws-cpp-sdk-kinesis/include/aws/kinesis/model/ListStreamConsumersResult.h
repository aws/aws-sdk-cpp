/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListStreamConsumersResult
  {
  public:
    AWS_KINESIS_API ListStreamConsumersResult() = default;
    AWS_KINESIS_API ListStreamConsumersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API ListStreamConsumersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of JSON objects. Each object represents one registered consumer.</p>
     */
    inline const Aws::Vector<Consumer>& GetConsumers() const { return m_consumers; }
    template<typename ConsumersT = Aws::Vector<Consumer>>
    void SetConsumers(ConsumersT&& value) { m_consumersHasBeenSet = true; m_consumers = std::forward<ConsumersT>(value); }
    template<typename ConsumersT = Aws::Vector<Consumer>>
    ListStreamConsumersResult& WithConsumers(ConsumersT&& value) { SetConsumers(std::forward<ConsumersT>(value)); return *this;}
    template<typename ConsumersT = Consumer>
    ListStreamConsumersResult& AddConsumers(ConsumersT&& value) { m_consumersHasBeenSet = true; m_consumers.emplace_back(std::forward<ConsumersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the number of consumers that are registered with the data stream is
     * greater than the default value for the <code>MaxResults</code> parameter, or if
     * you explicitly specify a value for <code>MaxResults</code> that is less than the
     * number of registered consumers, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListStreamConsumers</code> to list the next set of
     * registered consumers. For more information about the use of this pagination
     * token when calling the <code>ListStreamConsumers</code> operation, see
     * <a>ListStreamConsumersInput$NextToken</a>.</p>  <p>Tokens expire
     * after 300 seconds. When you obtain a value for <code>NextToken</code> in the
     * response to a call to <code>ListStreamConsumers</code>, you have 300 seconds to
     * use that value. If you specify an expired token in a call to
     * <code>ListStreamConsumers</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStreamConsumersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStreamConsumersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Consumer> m_consumers;
    bool m_consumersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
