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
  class AWS_IOTEVENTS_API DescribeDetectorModelResult
  {
  public:
    DescribeDetectorModelResult();
    DescribeDetectorModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDetectorModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
