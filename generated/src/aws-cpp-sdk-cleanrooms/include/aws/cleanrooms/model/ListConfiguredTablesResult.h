/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/ConfiguredTableSummary.h>
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
namespace CleanRooms
{
namespace Model
{
  class ListConfiguredTablesResult
  {
  public:
    AWS_CLEANROOMS_API ListConfiguredTablesResult();
    AWS_CLEANROOMS_API ListConfiguredTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListConfiguredTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configured tables listed by the request.</p>
     */
    inline const Aws::Vector<ConfiguredTableSummary>& GetConfiguredTableSummaries() const{ return m_configuredTableSummaries; }

    /**
     * <p>The configured tables listed by the request.</p>
     */
    inline void SetConfiguredTableSummaries(const Aws::Vector<ConfiguredTableSummary>& value) { m_configuredTableSummaries = value; }

    /**
     * <p>The configured tables listed by the request.</p>
     */
    inline void SetConfiguredTableSummaries(Aws::Vector<ConfiguredTableSummary>&& value) { m_configuredTableSummaries = std::move(value); }

    /**
     * <p>The configured tables listed by the request.</p>
     */
    inline ListConfiguredTablesResult& WithConfiguredTableSummaries(const Aws::Vector<ConfiguredTableSummary>& value) { SetConfiguredTableSummaries(value); return *this;}

    /**
     * <p>The configured tables listed by the request.</p>
     */
    inline ListConfiguredTablesResult& WithConfiguredTableSummaries(Aws::Vector<ConfiguredTableSummary>&& value) { SetConfiguredTableSummaries(std::move(value)); return *this;}

    /**
     * <p>The configured tables listed by the request.</p>
     */
    inline ListConfiguredTablesResult& AddConfiguredTableSummaries(const ConfiguredTableSummary& value) { m_configuredTableSummaries.push_back(value); return *this; }

    /**
     * <p>The configured tables listed by the request.</p>
     */
    inline ListConfiguredTablesResult& AddConfiguredTableSummaries(ConfiguredTableSummary&& value) { m_configuredTableSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListConfiguredTablesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListConfiguredTablesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListConfiguredTablesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListConfiguredTablesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListConfiguredTablesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListConfiguredTablesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ConfiguredTableSummary> m_configuredTableSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
