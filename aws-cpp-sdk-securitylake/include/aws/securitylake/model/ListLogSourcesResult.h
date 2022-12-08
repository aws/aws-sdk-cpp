/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SecurityLake
{
namespace Model
{
  class ListLogSourcesResult
  {
  public:
    AWS_SECURITYLAKE_API ListLogSourcesResult();
    AWS_SECURITYLAKE_API ListLogSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API ListLogSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline ListLogSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline ListLogSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. You can make the
     * call again using the returned token to retrieve the next page.</p>
     */
    inline ListLogSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Lists the log sources in the Regions for enabled Security Lake accounts.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>& GetRegionSourceTypesAccountsList() const{ return m_regionSourceTypesAccountsList; }

    /**
     * <p>Lists the log sources in the Regions for enabled Security Lake accounts.</p>
     */
    inline void SetRegionSourceTypesAccountsList(const Aws::Vector<Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>& value) { m_regionSourceTypesAccountsList = value; }

    /**
     * <p>Lists the log sources in the Regions for enabled Security Lake accounts.</p>
     */
    inline void SetRegionSourceTypesAccountsList(Aws::Vector<Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>&& value) { m_regionSourceTypesAccountsList = std::move(value); }

    /**
     * <p>Lists the log sources in the Regions for enabled Security Lake accounts.</p>
     */
    inline ListLogSourcesResult& WithRegionSourceTypesAccountsList(const Aws::Vector<Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>& value) { SetRegionSourceTypesAccountsList(value); return *this;}

    /**
     * <p>Lists the log sources in the Regions for enabled Security Lake accounts.</p>
     */
    inline ListLogSourcesResult& WithRegionSourceTypesAccountsList(Aws::Vector<Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>&& value) { SetRegionSourceTypesAccountsList(std::move(value)); return *this;}

    /**
     * <p>Lists the log sources in the Regions for enabled Security Lake accounts.</p>
     */
    inline ListLogSourcesResult& AddRegionSourceTypesAccountsList(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { m_regionSourceTypesAccountsList.push_back(value); return *this; }

    /**
     * <p>Lists the log sources in the Regions for enabled Security Lake accounts.</p>
     */
    inline ListLogSourcesResult& AddRegionSourceTypesAccountsList(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { m_regionSourceTypesAccountsList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>> m_regionSourceTypesAccountsList;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
