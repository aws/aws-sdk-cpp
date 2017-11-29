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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/BrokerSummary.h>
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
namespace MQ
{
namespace Model
{
  class AWS_MQ_API ListBrokersResult
  {
  public:
    ListBrokersResult();
    ListBrokersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListBrokersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A list of information about all brokers.
     */
    inline const Aws::Vector<BrokerSummary>& GetBrokerSummaries() const{ return m_brokerSummaries; }

    /**
     * A list of information about all brokers.
     */
    inline void SetBrokerSummaries(const Aws::Vector<BrokerSummary>& value) { m_brokerSummaries = value; }

    /**
     * A list of information about all brokers.
     */
    inline void SetBrokerSummaries(Aws::Vector<BrokerSummary>&& value) { m_brokerSummaries = std::move(value); }

    /**
     * A list of information about all brokers.
     */
    inline ListBrokersResult& WithBrokerSummaries(const Aws::Vector<BrokerSummary>& value) { SetBrokerSummaries(value); return *this;}

    /**
     * A list of information about all brokers.
     */
    inline ListBrokersResult& WithBrokerSummaries(Aws::Vector<BrokerSummary>&& value) { SetBrokerSummaries(std::move(value)); return *this;}

    /**
     * A list of information about all brokers.
     */
    inline ListBrokersResult& AddBrokerSummaries(const BrokerSummary& value) { m_brokerSummaries.push_back(value); return *this; }

    /**
     * A list of information about all brokers.
     */
    inline ListBrokersResult& AddBrokerSummaries(BrokerSummary&& value) { m_brokerSummaries.push_back(std::move(value)); return *this; }


    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline ListBrokersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline ListBrokersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline ListBrokersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BrokerSummary> m_brokerSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
