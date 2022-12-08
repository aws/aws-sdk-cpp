/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/EngineVersionInfo.h>
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
  class DescribeEngineVersionsResult
  {
  public:
    AWS_MEMORYDB_API DescribeEngineVersionsResult();
    AWS_MEMORYDB_API DescribeEngineVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DescribeEngineVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeEngineVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeEngineVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeEngineVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of engine version details. Each element in the list contains detailed
     * information about one engine version.</p>
     */
    inline const Aws::Vector<EngineVersionInfo>& GetEngineVersions() const{ return m_engineVersions; }

    /**
     * <p>A list of engine version details. Each element in the list contains detailed
     * information about one engine version.</p>
     */
    inline void SetEngineVersions(const Aws::Vector<EngineVersionInfo>& value) { m_engineVersions = value; }

    /**
     * <p>A list of engine version details. Each element in the list contains detailed
     * information about one engine version.</p>
     */
    inline void SetEngineVersions(Aws::Vector<EngineVersionInfo>&& value) { m_engineVersions = std::move(value); }

    /**
     * <p>A list of engine version details. Each element in the list contains detailed
     * information about one engine version.</p>
     */
    inline DescribeEngineVersionsResult& WithEngineVersions(const Aws::Vector<EngineVersionInfo>& value) { SetEngineVersions(value); return *this;}

    /**
     * <p>A list of engine version details. Each element in the list contains detailed
     * information about one engine version.</p>
     */
    inline DescribeEngineVersionsResult& WithEngineVersions(Aws::Vector<EngineVersionInfo>&& value) { SetEngineVersions(std::move(value)); return *this;}

    /**
     * <p>A list of engine version details. Each element in the list contains detailed
     * information about one engine version.</p>
     */
    inline DescribeEngineVersionsResult& AddEngineVersions(const EngineVersionInfo& value) { m_engineVersions.push_back(value); return *this; }

    /**
     * <p>A list of engine version details. Each element in the list contains detailed
     * information about one engine version.</p>
     */
    inline DescribeEngineVersionsResult& AddEngineVersions(EngineVersionInfo&& value) { m_engineVersions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<EngineVersionInfo> m_engineVersions;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
