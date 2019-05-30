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
#include <aws/iotevents-data/IoTEventsDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTEventsData
{
namespace Model
{

  /**
   */
  class AWS_IOTEVENTSDATA_API DescribeDetectorRequest : public IoTEventsDataRequest
  {
  public:
    DescribeDetectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDetector"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the detector model whose detectors (instances) you want
     * information about.</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }

    /**
     * <p>The name of the detector model whose detectors (instances) you want
     * information about.</p>
     */
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }

    /**
     * <p>The name of the detector model whose detectors (instances) you want
     * information about.</p>
     */
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }

    /**
     * <p>The name of the detector model whose detectors (instances) you want
     * information about.</p>
     */
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }

    /**
     * <p>The name of the detector model whose detectors (instances) you want
     * information about.</p>
     */
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }

    /**
     * <p>The name of the detector model whose detectors (instances) you want
     * information about.</p>
     */
    inline DescribeDetectorRequest& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}

    /**
     * <p>The name of the detector model whose detectors (instances) you want
     * information about.</p>
     */
    inline DescribeDetectorRequest& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector model whose detectors (instances) you want
     * information about.</p>
     */
    inline DescribeDetectorRequest& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}


    /**
     * <p>A filter used to limit results to detectors (instances) created because of
     * the given key ID.</p>
     */
    inline const Aws::String& GetKeyValue() const{ return m_keyValue; }

    /**
     * <p>A filter used to limit results to detectors (instances) created because of
     * the given key ID.</p>
     */
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }

    /**
     * <p>A filter used to limit results to detectors (instances) created because of
     * the given key ID.</p>
     */
    inline void SetKeyValue(const Aws::String& value) { m_keyValueHasBeenSet = true; m_keyValue = value; }

    /**
     * <p>A filter used to limit results to detectors (instances) created because of
     * the given key ID.</p>
     */
    inline void SetKeyValue(Aws::String&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::move(value); }

    /**
     * <p>A filter used to limit results to detectors (instances) created because of
     * the given key ID.</p>
     */
    inline void SetKeyValue(const char* value) { m_keyValueHasBeenSet = true; m_keyValue.assign(value); }

    /**
     * <p>A filter used to limit results to detectors (instances) created because of
     * the given key ID.</p>
     */
    inline DescribeDetectorRequest& WithKeyValue(const Aws::String& value) { SetKeyValue(value); return *this;}

    /**
     * <p>A filter used to limit results to detectors (instances) created because of
     * the given key ID.</p>
     */
    inline DescribeDetectorRequest& WithKeyValue(Aws::String&& value) { SetKeyValue(std::move(value)); return *this;}

    /**
     * <p>A filter used to limit results to detectors (instances) created because of
     * the given key ID.</p>
     */
    inline DescribeDetectorRequest& WithKeyValue(const char* value) { SetKeyValue(value); return *this;}

  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
