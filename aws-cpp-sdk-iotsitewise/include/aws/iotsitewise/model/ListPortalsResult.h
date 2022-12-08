/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PortalSummary.h>
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
  class ListPortalsResult
  {
  public:
    AWS_IOTSITEWISE_API ListPortalsResult();
    AWS_IOTSITEWISE_API ListPortalsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListPortalsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each portal.</p>
     */
    inline const Aws::Vector<PortalSummary>& GetPortalSummaries() const{ return m_portalSummaries; }

    /**
     * <p>A list that summarizes each portal.</p>
     */
    inline void SetPortalSummaries(const Aws::Vector<PortalSummary>& value) { m_portalSummaries = value; }

    /**
     * <p>A list that summarizes each portal.</p>
     */
    inline void SetPortalSummaries(Aws::Vector<PortalSummary>&& value) { m_portalSummaries = std::move(value); }

    /**
     * <p>A list that summarizes each portal.</p>
     */
    inline ListPortalsResult& WithPortalSummaries(const Aws::Vector<PortalSummary>& value) { SetPortalSummaries(value); return *this;}

    /**
     * <p>A list that summarizes each portal.</p>
     */
    inline ListPortalsResult& WithPortalSummaries(Aws::Vector<PortalSummary>&& value) { SetPortalSummaries(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each portal.</p>
     */
    inline ListPortalsResult& AddPortalSummaries(const PortalSummary& value) { m_portalSummaries.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each portal.</p>
     */
    inline ListPortalsResult& AddPortalSummaries(PortalSummary&& value) { m_portalSummaries.push_back(std::move(value)); return *this; }


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
    inline ListPortalsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListPortalsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListPortalsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PortalSummary> m_portalSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
