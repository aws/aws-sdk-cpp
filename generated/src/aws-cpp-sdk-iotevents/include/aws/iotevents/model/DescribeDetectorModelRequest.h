/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeDetectorModelRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API DescribeDetectorModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDetectorModel"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;

    AWS_IOTEVENTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }
    inline DescribeDetectorModelRequest& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}
    inline DescribeDetectorModelRequest& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}
    inline DescribeDetectorModelRequest& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelVersion() const{ return m_detectorModelVersion; }
    inline bool DetectorModelVersionHasBeenSet() const { return m_detectorModelVersionHasBeenSet; }
    inline void SetDetectorModelVersion(const Aws::String& value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion = value; }
    inline void SetDetectorModelVersion(Aws::String&& value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion = std::move(value); }
    inline void SetDetectorModelVersion(const char* value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion.assign(value); }
    inline DescribeDetectorModelRequest& WithDetectorModelVersion(const Aws::String& value) { SetDetectorModelVersion(value); return *this;}
    inline DescribeDetectorModelRequest& WithDetectorModelVersion(Aws::String&& value) { SetDetectorModelVersion(std::move(value)); return *this;}
    inline DescribeDetectorModelRequest& WithDetectorModelVersion(const char* value) { SetDetectorModelVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet = false;

    Aws::String m_detectorModelVersion;
    bool m_detectorModelVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
