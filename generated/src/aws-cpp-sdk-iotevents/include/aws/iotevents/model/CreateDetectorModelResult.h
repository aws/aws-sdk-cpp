/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/DetectorModelConfiguration.h>
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
  class CreateDetectorModelResult
  {
  public:
    AWS_IOTEVENTS_API CreateDetectorModelResult();
    AWS_IOTEVENTS_API CreateDetectorModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API CreateDetectorModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about how the detector model is configured.</p>
     */
    inline const DetectorModelConfiguration& GetDetectorModelConfiguration() const{ return m_detectorModelConfiguration; }

    /**
     * <p>Information about how the detector model is configured.</p>
     */
    inline void SetDetectorModelConfiguration(const DetectorModelConfiguration& value) { m_detectorModelConfiguration = value; }

    /**
     * <p>Information about how the detector model is configured.</p>
     */
    inline void SetDetectorModelConfiguration(DetectorModelConfiguration&& value) { m_detectorModelConfiguration = std::move(value); }

    /**
     * <p>Information about how the detector model is configured.</p>
     */
    inline CreateDetectorModelResult& WithDetectorModelConfiguration(const DetectorModelConfiguration& value) { SetDetectorModelConfiguration(value); return *this;}

    /**
     * <p>Information about how the detector model is configured.</p>
     */
    inline CreateDetectorModelResult& WithDetectorModelConfiguration(DetectorModelConfiguration&& value) { SetDetectorModelConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateDetectorModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateDetectorModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateDetectorModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DetectorModelConfiguration m_detectorModelConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
