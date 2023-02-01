/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StartDetectorModelAnalysisResult
  {
  public:
    AWS_IOTEVENTS_API StartDetectorModelAnalysisResult();
    AWS_IOTEVENTS_API StartDetectorModelAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API StartDetectorModelAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID that you can use to retrieve the analysis result.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }

    /**
     * <p>The ID that you can use to retrieve the analysis result.</p>
     */
    inline void SetAnalysisId(const Aws::String& value) { m_analysisId = value; }

    /**
     * <p>The ID that you can use to retrieve the analysis result.</p>
     */
    inline void SetAnalysisId(Aws::String&& value) { m_analysisId = std::move(value); }

    /**
     * <p>The ID that you can use to retrieve the analysis result.</p>
     */
    inline void SetAnalysisId(const char* value) { m_analysisId.assign(value); }

    /**
     * <p>The ID that you can use to retrieve the analysis result.</p>
     */
    inline StartDetectorModelAnalysisResult& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}

    /**
     * <p>The ID that you can use to retrieve the analysis result.</p>
     */
    inline StartDetectorModelAnalysisResult& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID that you can use to retrieve the analysis result.</p>
     */
    inline StartDetectorModelAnalysisResult& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}

  private:

    Aws::String m_analysisId;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
