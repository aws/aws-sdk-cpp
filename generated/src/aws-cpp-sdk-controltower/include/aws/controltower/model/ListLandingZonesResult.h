/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/LandingZoneSummary.h>
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
namespace ControlTower
{
namespace Model
{
  class ListLandingZonesResult
  {
  public:
    AWS_CONTROLTOWER_API ListLandingZonesResult();
    AWS_CONTROLTOWER_API ListLandingZonesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API ListLandingZonesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline const Aws::Vector<LandingZoneSummary>& GetLandingZones() const{ return m_landingZones; }

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline void SetLandingZones(const Aws::Vector<LandingZoneSummary>& value) { m_landingZones = value; }

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline void SetLandingZones(Aws::Vector<LandingZoneSummary>&& value) { m_landingZones = std::move(value); }

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline ListLandingZonesResult& WithLandingZones(const Aws::Vector<LandingZoneSummary>& value) { SetLandingZones(value); return *this;}

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline ListLandingZonesResult& WithLandingZones(Aws::Vector<LandingZoneSummary>&& value) { SetLandingZones(std::move(value)); return *this;}

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline ListLandingZonesResult& AddLandingZones(const LandingZoneSummary& value) { m_landingZones.push_back(value); return *this; }

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline ListLandingZonesResult& AddLandingZones(LandingZoneSummary&& value) { m_landingZones.push_back(std::move(value)); return *this; }


    /**
     * <p>Retrieves the next page of results. If the string is empty, the response is
     * the end of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Retrieves the next page of results. If the string is empty, the response is
     * the end of the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Retrieves the next page of results. If the string is empty, the response is
     * the end of the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Retrieves the next page of results. If the string is empty, the response is
     * the end of the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Retrieves the next page of results. If the string is empty, the response is
     * the end of the results.</p>
     */
    inline ListLandingZonesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Retrieves the next page of results. If the string is empty, the response is
     * the end of the results.</p>
     */
    inline ListLandingZonesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Retrieves the next page of results. If the string is empty, the response is
     * the end of the results.</p>
     */
    inline ListLandingZonesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListLandingZonesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListLandingZonesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListLandingZonesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<LandingZoneSummary> m_landingZones;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
