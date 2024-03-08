/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/freetier/model/FreeTierUsage.h>
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
namespace FreeTier
{
namespace Model
{
  class GetFreeTierUsageResult
  {
  public:
    AWS_FREETIER_API GetFreeTierUsageResult();
    AWS_FREETIER_API GetFreeTierUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FREETIER_API GetFreeTierUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of Free Tier usage objects that meet your filter expression.</p>
     */
    inline const Aws::Vector<FreeTierUsage>& GetFreeTierUsages() const{ return m_freeTierUsages; }

    /**
     * <p>The list of Free Tier usage objects that meet your filter expression.</p>
     */
    inline void SetFreeTierUsages(const Aws::Vector<FreeTierUsage>& value) { m_freeTierUsages = value; }

    /**
     * <p>The list of Free Tier usage objects that meet your filter expression.</p>
     */
    inline void SetFreeTierUsages(Aws::Vector<FreeTierUsage>&& value) { m_freeTierUsages = std::move(value); }

    /**
     * <p>The list of Free Tier usage objects that meet your filter expression.</p>
     */
    inline GetFreeTierUsageResult& WithFreeTierUsages(const Aws::Vector<FreeTierUsage>& value) { SetFreeTierUsages(value); return *this;}

    /**
     * <p>The list of Free Tier usage objects that meet your filter expression.</p>
     */
    inline GetFreeTierUsageResult& WithFreeTierUsages(Aws::Vector<FreeTierUsage>&& value) { SetFreeTierUsages(std::move(value)); return *this;}

    /**
     * <p>The list of Free Tier usage objects that meet your filter expression.</p>
     */
    inline GetFreeTierUsageResult& AddFreeTierUsages(const FreeTierUsage& value) { m_freeTierUsages.push_back(value); return *this; }

    /**
     * <p>The list of Free Tier usage objects that meet your filter expression.</p>
     */
    inline GetFreeTierUsageResult& AddFreeTierUsages(FreeTierUsage&& value) { m_freeTierUsages.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline GetFreeTierUsageResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline GetFreeTierUsageResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline GetFreeTierUsageResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetFreeTierUsageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetFreeTierUsageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetFreeTierUsageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FreeTierUsage> m_freeTierUsages;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
