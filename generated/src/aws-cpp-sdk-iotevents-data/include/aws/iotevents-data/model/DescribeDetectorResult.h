/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/model/Detector.h>
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


    /**
     * <p>Information about the detector (instance).</p>
     */
    inline const Detector& GetDetector() const{ return m_detector; }

    /**
     * <p>Information about the detector (instance).</p>
     */
    inline void SetDetector(const Detector& value) { m_detector = value; }

    /**
     * <p>Information about the detector (instance).</p>
     */
    inline void SetDetector(Detector&& value) { m_detector = std::move(value); }

    /**
     * <p>Information about the detector (instance).</p>
     */
    inline DescribeDetectorResult& WithDetector(const Detector& value) { SetDetector(value); return *this;}

    /**
     * <p>Information about the detector (instance).</p>
     */
    inline DescribeDetectorResult& WithDetector(Detector&& value) { SetDetector(std::move(value)); return *this;}

  private:

    Detector m_detector;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
