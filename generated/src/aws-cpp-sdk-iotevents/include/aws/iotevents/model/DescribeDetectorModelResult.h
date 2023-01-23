/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/DetectorModel.h>
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


    /**
     * <p>Information about the detector model.</p>
     */
    inline const DetectorModel& GetDetectorModel() const{ return m_detectorModel; }

    /**
     * <p>Information about the detector model.</p>
     */
    inline void SetDetectorModel(const DetectorModel& value) { m_detectorModel = value; }

    /**
     * <p>Information about the detector model.</p>
     */
    inline void SetDetectorModel(DetectorModel&& value) { m_detectorModel = std::move(value); }

    /**
     * <p>Information about the detector model.</p>
     */
    inline DescribeDetectorModelResult& WithDetectorModel(const DetectorModel& value) { SetDetectorModel(value); return *this;}

    /**
     * <p>Information about the detector model.</p>
     */
    inline DescribeDetectorModelResult& WithDetectorModel(DetectorModel&& value) { SetDetectorModel(std::move(value)); return *this;}

  private:

    DetectorModel m_detectorModel;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
