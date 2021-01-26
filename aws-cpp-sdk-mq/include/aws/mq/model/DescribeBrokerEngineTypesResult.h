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
  class AWS_MQ_API DescribeBrokerEngineTypesResult
  {
  public:
    DescribeBrokerEngineTypesResult();
    DescribeBrokerEngineTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeBrokerEngineTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * List of available engine types and versions.
     */
    inline const Aws::Vector<BrokerEngineType>& GetBrokerEngineTypes() const{ return m_brokerEngineTypes; }

    /**
     * List of available engine types and versions.
     */
    inline void SetBrokerEngineTypes(const Aws::Vector<BrokerEngineType>& value) { m_brokerEngineTypes = value; }

    /**
     * List of available engine types and versions.
     */
    inline void SetBrokerEngineTypes(Aws::Vector<BrokerEngineType>&& value) { m_brokerEngineTypes = std::move(value); }

    /**
     * List of available engine types and versions.
     */
    inline DescribeBrokerEngineTypesResult& WithBrokerEngineTypes(const Aws::Vector<BrokerEngineType>& value) { SetBrokerEngineTypes(value); return *this;}

    /**
     * List of available engine types and versions.
     */
    inline DescribeBrokerEngineTypesResult& WithBrokerEngineTypes(Aws::Vector<BrokerEngineType>&& value) { SetBrokerEngineTypes(std::move(value)); return *this;}

    /**
     * List of available engine types and versions.
     */
    inline DescribeBrokerEngineTypesResult& AddBrokerEngineTypes(const BrokerEngineType& value) { m_brokerEngineTypes.push_back(value); return *this; }

    /**
     * List of available engine types and versions.
     */
    inline DescribeBrokerEngineTypesResult& AddBrokerEngineTypes(BrokerEngineType&& value) { m_brokerEngineTypes.push_back(std::move(value)); return *this; }


    /**
     * Required. The maximum number of engine types that can be returned per page (20
     * by default). This value must be an integer from 5 to 100.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * Required. The maximum number of engine types that can be returned per page (20
     * by default). This value must be an integer from 5 to 100.
     */
    inline void SetMaxResults(int value) { m_maxResults = value; }

    /**
     * Required. The maximum number of engine types that can be returned per page (20
     * by default). This value must be an integer from 5 to 100.
     */
    inline DescribeBrokerEngineTypesResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeBrokerEngineTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline DescribeBrokerEngineTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
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
