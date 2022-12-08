/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/BrokerEngineType.h>
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
  class DescribeBrokerEngineTypesResult
  {
  public:
    AWS_MQ_API DescribeBrokerEngineTypesResult();
    AWS_MQ_API DescribeBrokerEngineTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API DescribeBrokerEngineTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of available engine types and versions.</p>
     */
    inline const Aws::Vector<BrokerEngineType>& GetBrokerEngineTypes() const{ return m_brokerEngineTypes; }

    /**
     * <p>List of available engine types and versions.</p>
     */
    inline void SetBrokerEngineTypes(const Aws::Vector<BrokerEngineType>& value) { m_brokerEngineTypes = value; }

    /**
     * <p>List of available engine types and versions.</p>
     */
    inline void SetBrokerEngineTypes(Aws::Vector<BrokerEngineType>&& value) { m_brokerEngineTypes = std::move(value); }

    /**
     * <p>List of available engine types and versions.</p>
     */
    inline DescribeBrokerEngineTypesResult& WithBrokerEngineTypes(const Aws::Vector<BrokerEngineType>& value) { SetBrokerEngineTypes(value); return *this;}

    /**
     * <p>List of available engine types and versions.</p>
     */
    inline DescribeBrokerEngineTypesResult& WithBrokerEngineTypes(Aws::Vector<BrokerEngineType>&& value) { SetBrokerEngineTypes(std::move(value)); return *this;}

    /**
     * <p>List of available engine types and versions.</p>
     */
    inline DescribeBrokerEngineTypesResult& AddBrokerEngineTypes(const BrokerEngineType& value) { m_brokerEngineTypes.push_back(value); return *this; }

    /**
     * <p>List of available engine types and versions.</p>
     */
    inline DescribeBrokerEngineTypesResult& AddBrokerEngineTypes(BrokerEngineType&& value) { m_brokerEngineTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Required. The maximum number of engine types that can be returned per page
     * (20 by default). This value must be an integer from 5 to 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Required. The maximum number of engine types that can be returned per page
     * (20 by default). This value must be an integer from 5 to 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResults = value; }

    /**
     * <p>Required. The maximum number of engine types that can be returned per page
     * (20 by default). This value must be an integer from 5 to 100.</p>
     */
    inline DescribeBrokerEngineTypesResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeBrokerEngineTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline DescribeBrokerEngineTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline DescribeBrokerEngineTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BrokerEngineType> m_brokerEngineTypes;

    int m_maxResults;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
