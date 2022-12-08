/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/ServiceUpdate.h>
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
namespace MemoryDB
{
namespace Model
{
  class DescribeServiceUpdatesResult
  {
  public:
    AWS_MEMORYDB_API DescribeServiceUpdatesResult();
    AWS_MEMORYDB_API DescribeServiceUpdatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DescribeServiceUpdatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeServiceUpdatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeServiceUpdatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeServiceUpdatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of service updates</p>
     */
    inline const Aws::Vector<ServiceUpdate>& GetServiceUpdates() const{ return m_serviceUpdates; }

    /**
     * <p>A list of service updates</p>
     */
    inline void SetServiceUpdates(const Aws::Vector<ServiceUpdate>& value) { m_serviceUpdates = value; }

    /**
     * <p>A list of service updates</p>
     */
    inline void SetServiceUpdates(Aws::Vector<ServiceUpdate>&& value) { m_serviceUpdates = std::move(value); }

    /**
     * <p>A list of service updates</p>
     */
    inline DescribeServiceUpdatesResult& WithServiceUpdates(const Aws::Vector<ServiceUpdate>& value) { SetServiceUpdates(value); return *this;}

    /**
     * <p>A list of service updates</p>
     */
    inline DescribeServiceUpdatesResult& WithServiceUpdates(Aws::Vector<ServiceUpdate>&& value) { SetServiceUpdates(std::move(value)); return *this;}

    /**
     * <p>A list of service updates</p>
     */
    inline DescribeServiceUpdatesResult& AddServiceUpdates(const ServiceUpdate& value) { m_serviceUpdates.push_back(value); return *this; }

    /**
     * <p>A list of service updates</p>
     */
    inline DescribeServiceUpdatesResult& AddServiceUpdates(ServiceUpdate&& value) { m_serviceUpdates.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ServiceUpdate> m_serviceUpdates;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
