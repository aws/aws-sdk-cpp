﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/model/Detector.h>
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
namespace IoTEventsData
{
namespace Model
{
  class DescribeDetectorResult
  {
  public:
    AWS_IOTEVENTSDATA_API DescribeDetectorResult();
    AWS_IOTEVENTSDATA_API DescribeDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTSDATA_API DescribeDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the detector (instance).</p>
     */
    inline const Detector& GetDetector() const{ return m_detector; }
    inline void SetDetector(const Detector& value) { m_detector = value; }
    inline void SetDetector(Detector&& value) { m_detector = std::move(value); }
    inline DescribeDetectorResult& WithDetector(const Detector& value) { SetDetector(value); return *this;}
    inline DescribeDetectorResult& WithDetector(Detector&& value) { SetDetector(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDetectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDetectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDetectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Detector m_detector;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
