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
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class AWS_IOTEVENTS_API DescribeDetectorModelRequest : public IoTEventsRequest
  {
  public:
    DescribeDetectorModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDetectorModel"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }

    /**
     * <p>The name of the detector model.</p>
     */
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }

    /**
     * <p>The name of the detector model.</p>
     */
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }

    /**
     * <p>The name of the detector model.</p>
     */
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }

    /**
     * <p>The name of the detector model.</p>
     */
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }

    /**
     * <p>The name of the detector model.</p>
     */
    inline DescribeDetectorModelRequest& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}

    /**
     * <p>The name of the detector model.</p>
     */
    inline DescribeDetectorModelRequest& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector model.</p>
     */
    inline DescribeDetectorModelRequest& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}


    /**
     * <p>The version of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelVersion() const{ return m_detectorModelVersion; }

    /**
     * <p>The version of the detector model.</p>
     */
    inline bool DetectorModelVersionHasBeenSet() const { return m_detectorModelVersionHasBeenSet; }

    /**
     * <p>The version of the detector model.</p>
     */
    inline void SetDetectorModelVersion(const Aws::String& value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion = value; }

    /**
     * <p>The version of the detector model.</p>
     */
    inline void SetDetectorModelVersion(Aws::String&& value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion = std::move(value); }

    /**
     * <p>The version of the detector model.</p>
     */
    inline void SetDetectorModelVersion(const char* value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion.assign(value); }

    /**
     * <p>The version of the detector model.</p>
     */
    inline DescribeDetectorModelRequest& WithDetectorModelVersion(const Aws::String& value) { SetDetectorModelVersion(value); return *this;}

    /**
     * <p>The version of the detector model.</p>
     */
    inline DescribeDetectorModelRequest& WithDetectorModelVersion(Aws::String&& value) { SetDetectorModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the detector model.</p>
     */
    inline DescribeDetectorModelRequest& WithDetectorModelVersion(const char* value) { SetDetectorModelVersion(value); return *this;}

  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet;

    Aws::String m_detectorModelVersion;
    bool m_detectorModelVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
