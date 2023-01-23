/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/DetectorModelSummary.h>
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
namespace IoTEvents
{
namespace Model
{
  class ListDetectorModelsResult
  {
  public:
    AWS_IOTEVENTS_API ListDetectorModelsResult();
    AWS_IOTEVENTS_API ListDetectorModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API ListDetectorModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information about the detector models.</p>
     */
    inline const Aws::Vector<DetectorModelSummary>& GetDetectorModelSummaries() const{ return m_detectorModelSummaries; }

    /**
     * <p>Summary information about the detector models.</p>
     */
    inline void SetDetectorModelSummaries(const Aws::Vector<DetectorModelSummary>& value) { m_detectorModelSummaries = value; }

    /**
     * <p>Summary information about the detector models.</p>
     */
    inline void SetDetectorModelSummaries(Aws::Vector<DetectorModelSummary>&& value) { m_detectorModelSummaries = std::move(value); }

    /**
     * <p>Summary information about the detector models.</p>
     */
    inline ListDetectorModelsResult& WithDetectorModelSummaries(const Aws::Vector<DetectorModelSummary>& value) { SetDetectorModelSummaries(value); return *this;}

    /**
     * <p>Summary information about the detector models.</p>
     */
    inline ListDetectorModelsResult& WithDetectorModelSummaries(Aws::Vector<DetectorModelSummary>&& value) { SetDetectorModelSummaries(std::move(value)); return *this;}

    /**
     * <p>Summary information about the detector models.</p>
     */
    inline ListDetectorModelsResult& AddDetectorModelSummaries(const DetectorModelSummary& value) { m_detectorModelSummaries.push_back(value); return *this; }

    /**
     * <p>Summary information about the detector models.</p>
     */
    inline ListDetectorModelsResult& AddDetectorModelSummaries(DetectorModelSummary&& value) { m_detectorModelSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline ListDetectorModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline ListDetectorModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline ListDetectorModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DetectorModelSummary> m_detectorModelSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
