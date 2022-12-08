/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AccessPolicySummary.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ListAccessPoliciesResult
  {
  public:
    AWS_IOTSITEWISE_API ListAccessPoliciesResult();
    AWS_IOTSITEWISE_API ListAccessPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListAccessPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each access policy.</p>
     */
    inline const Aws::Vector<AccessPolicySummary>& GetAccessPolicySummaries() const{ return m_accessPolicySummaries; }

    /**
     * <p>A list that summarizes each access policy.</p>
     */
    inline void SetAccessPolicySummaries(const Aws::Vector<AccessPolicySummary>& value) { m_accessPolicySummaries = value; }

    /**
     * <p>A list that summarizes each access policy.</p>
     */
    inline void SetAccessPolicySummaries(Aws::Vector<AccessPolicySummary>&& value) { m_accessPolicySummaries = std::move(value); }

    /**
     * <p>A list that summarizes each access policy.</p>
     */
    inline ListAccessPoliciesResult& WithAccessPolicySummaries(const Aws::Vector<AccessPolicySummary>& value) { SetAccessPolicySummaries(value); return *this;}

    /**
     * <p>A list that summarizes each access policy.</p>
     */
    inline ListAccessPoliciesResult& WithAccessPolicySummaries(Aws::Vector<AccessPolicySummary>&& value) { SetAccessPolicySummaries(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each access policy.</p>
     */
    inline ListAccessPoliciesResult& AddAccessPolicySummaries(const AccessPolicySummary& value) { m_accessPolicySummaries.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each access policy.</p>
     */
    inline ListAccessPoliciesResult& AddAccessPolicySummaries(AccessPolicySummary&& value) { m_accessPolicySummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAccessPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAccessPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAccessPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AccessPolicySummary> m_accessPolicySummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
