/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/DetectorModelVersionSummary.h>
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
  class AWS_IOTEVENTS_API ListDetectorModelVersionsResult
  {
  public:
    ListDetectorModelVersionsResult();
    ListDetectorModelVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDetectorModelVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information about the detector model versions.</p>
     */
    inline const Aws::Vector<DetectorModelVersionSummary>& GetDetectorModelVersionSummaries() const{ return m_detectorModelVersionSummaries; }

    /**
     * <p>Summary information about the detector model versions.</p>
     */
    inline void SetDetectorModelVersionSummaries(const Aws::Vector<DetectorModelVersionSummary>& value) { m_detectorModelVersionSummaries = value; }

    /**
     * <p>Summary information about the detector model versions.</p>
     */
    inline void SetDetectorModelVersionSummaries(Aws::Vector<DetectorModelVersionSummary>&& value) { m_detectorModelVersionSummaries = std::move(value); }

    /**
     * <p>Summary information about the detector model versions.</p>
     */
    inline ListDetectorModelVersionsResult& WithDetectorModelVersionSummaries(const Aws::Vector<DetectorModelVersionSummary>& value) { SetDetectorModelVersionSummaries(value); return *this;}

    /**
     * <p>Summary information about the detector model versions.</p>
     */
    inline ListDetectorModelVersionsResult& WithDetectorModelVersionSummaries(Aws::Vector<DetectorModelVersionSummary>&& value) { SetDetectorModelVersionSummaries(std::move(value)); return *this;}

    /**
     * <p>Summary information about the detector model versions.</p>
     */
    inline ListDetectorModelVersionsResult& AddDetectorModelVersionSummaries(const DetectorModelVersionSummary& value) { m_detectorModelVersionSummaries.push_back(value); return *this; }

    /**
     * <p>Summary information about the detector model versions.</p>
     */
    inline ListDetectorModelVersionsResult& AddDetectorModelVersionSummaries(DetectorModelVersionSummary&& value) { m_detectorModelVersionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to retrieve the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to retrieve the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to retrieve the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to retrieve the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to retrieve the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline ListDetectorModelVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to retrieve the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline ListDetectorModelVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to retrieve the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline ListDetectorModelVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DetectorModelVersionSummary> m_detectorModelVersionSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
