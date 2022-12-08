/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeBrokerInstanceOptionsResult
  {
  public:
    AWS_MQ_API DescribeBrokerInstanceOptionsResult();
    AWS_MQ_API DescribeBrokerInstanceOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API DescribeBrokerInstanceOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of available broker instance options.</p>
     */
    inline const Aws::Vector<BrokerInstanceOption>& GetBrokerInstanceOptions() const{ return m_brokerInstanceOptions; }

    /**
     * <p>List of available broker instance options.</p>
     */
    inline void SetBrokerInstanceOptions(const Aws::Vector<BrokerInstanceOption>& value) { m_brokerInstanceOptions = value; }

    /**
     * <p>List of available broker instance options.</p>
     */
    inline void SetBrokerInstanceOptions(Aws::Vector<BrokerInstanceOption>&& value) { m_brokerInstanceOptions = std::move(value); }

    /**
     * <p>List of available broker instance options.</p>
     */
    inline DescribeBrokerInstanceOptionsResult& WithBrokerInstanceOptions(const Aws::Vector<BrokerInstanceOption>& value) { SetBrokerInstanceOptions(value); return *this;}

    /**
     * <p>List of available broker instance options.</p>
     */
    inline DescribeBrokerInstanceOptionsResult& WithBrokerInstanceOptions(Aws::Vector<BrokerInstanceOption>&& value) { SetBrokerInstanceOptions(std::move(value)); return *this;}

    /**
     * <p>List of available broker instance options.</p>
     */
    inline DescribeBrokerInstanceOptionsResult& AddBrokerInstanceOptions(const BrokerInstanceOption& value) { m_brokerInstanceOptions.push_back(value); return *this; }

    /**
     * <p>List of available broker instance options.</p>
     */
    inline DescribeBrokerInstanceOptionsResult& AddBrokerInstanceOptions(BrokerInstanceOption&& value) { m_brokerInstanceOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>Required. The maximum number of instance options that can be returned per
     * page (20 by default). This value must be an integer from 5 to 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Required. The maximum number of instance options that can be returned per
     * page (20 by default). This value must be an integer from 5 to 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResults = value; }

    /**
     * <p>Required. The maximum number of instance options that can be returned per
     * page (20 by default). This value must be an integer from 5 to 100.</p>
     */
    inline DescribeBrokerInstanceOptionsResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline DescribeBrokerInstanceOptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline DescribeBrokerInstanceOptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
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
