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
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class DeleteDetectorModelRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API DeleteDetectorModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDetectorModel"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the detector model to be deleted.</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }

    /**
     * <p>The name of the detector model to be deleted.</p>
     */
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }

    /**
     * <p>The name of the detector model to be deleted.</p>
     */
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }

    /**
     * <p>The name of the detector model to be deleted.</p>
     */
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }

    /**
     * <p>The name of the detector model to be deleted.</p>
     */
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }

    /**
     * <p>The name of the detector model to be deleted.</p>
     */
    inline DeleteDetectorModelRequest& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}

    /**
     * <p>The name of the detector model to be deleted.</p>
     */
    inline DeleteDetectorModelRequest& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector model to be deleted.</p>
     */
    inline DeleteDetectorModelRequest& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}

  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
