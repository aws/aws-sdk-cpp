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
  class AWS_IOTEVENTSDATA_API DescribeDetectorResult
  {
  public:
    DescribeDetectorResult();
    DescribeDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
