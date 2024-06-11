﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/DetectorModel.h>
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
  class DescribeDetectorModelResult
  {
  public:
    AWS_IOTEVENTS_API DescribeDetectorModelResult();
    AWS_IOTEVENTS_API DescribeDetectorModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API DescribeDetectorModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the detector model.</p>
     */
    inline const DetectorModel& GetDetectorModel() const{ return m_detectorModel; }
    inline void SetDetectorModel(const DetectorModel& value) { m_detectorModel = value; }
    inline void SetDetectorModel(DetectorModel&& value) { m_detectorModel = std::move(value); }
    inline DescribeDetectorModelResult& WithDetectorModel(const DetectorModel& value) { SetDetectorModel(value); return *this;}
    inline DescribeDetectorModelResult& WithDetectorModel(DetectorModel&& value) { SetDetectorModel(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDetectorModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDetectorModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDetectorModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DetectorModel m_detectorModel;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
