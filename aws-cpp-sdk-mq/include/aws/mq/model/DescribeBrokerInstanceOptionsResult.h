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
#include <aws/mq/model/BrokerInstanceOption.h>
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
  class AWS_MQ_API DescribeBrokerInstanceOptionsResult
  {
  public:
    DescribeBrokerInstanceOptionsResult();
    DescribeBrokerInstanceOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeBrokerInstanceOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * List of available broker instance options.
     */
    inline const Aws::Vector<BrokerInstanceOption>& GetBrokerInstanceOptions() const{ return m_brokerInstanceOptions; }

    /**
     * List of available broker instance options.
     */
    inline void SetBrokerInstanceOptions(const Aws::Vector<BrokerInstanceOption>& value) { m_brokerInstanceOptions = value; }

    /**
     * List of available broker instance options.
     */
    inline void SetBrokerInstanceOptions(Aws::Vector<BrokerInstanceOption>&& value) { m_brokerInstanceOptions = std::move(value); }

    /**
     * List of available broker instance options.
     */
    inline DescribeBrokerInstanceOptionsResult& WithBrokerInstanceOptions(const Aws::Vector<BrokerInstanceOption>& value) { SetBrokerInstanceOptions(value); return *this;}

    /**
     * List of available broker instance options.
     */
    inline DescribeBrokerInstanceOptionsResult& WithBrokerInstanceOptions(Aws::Vector<BrokerInstanceOption>&& value) { SetBrokerInstanceOptions(std::move(value)); return *this;}

    /**
     * List of available broker instance options.
     */
    inline DescribeBrokerInstanceOptionsResult& AddBrokerInstanceOptions(const BrokerInstanceOption& value) { m_brokerInstanceOptions.push_back(value); return *this; }

    /**
     * List of available broker instance options.
     */
    inline DescribeBrokerInstanceOptionsResult& AddBrokerInstanceOptions(BrokerInstanceOption&& value) { m_brokerInstanceOptions.push_back(std::move(value)); return *this; }


    /**
     * Required. The maximum number of instance options that can be returned per page
     * (20 by default). This value must be an integer from 5 to 100.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * Required. The maximum number of instance options that can be returned per page
     * (20 by default). This value must be an integer from 5 to 100.
     */
    inline void SetMaxResults(int value) { m_maxResults = value; }

    /**
     * Required. The maximum number of instance options that can be returned per page
     * (20 by default). This value must be an integer from 5 to 100.
     */
    inline DescribeBrokerInstanceOptionsResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeBrokerInstanceOptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline DescribeBrokerInstanceOptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline DescribeBrokerInstanceOptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BrokerInstanceOption> m_brokerInstanceOptions;

    int m_maxResults;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
