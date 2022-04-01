﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/IoTEventsDataRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents-data/model/UpdateDetectorRequest.h>
#include <utility>

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

  /**
   */
  class AWS_IOTEVENTSDATA_API BatchUpdateDetectorRequest : public IoTEventsDataRequest
  {
  public:
    BatchUpdateDetectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateDetector"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The list of detectors (instances) to update, along with the values to
     * update.</p>
     */
    inline const Aws::Vector<UpdateDetectorRequest>& GetDetectors() const{ return m_detectors; }

    /**
     * <p>The list of detectors (instances) to update, along with the values to
     * update.</p>
     */
    inline bool DetectorsHasBeenSet() const { return m_detectorsHasBeenSet; }

    /**
     * <p>The list of detectors (instances) to update, along with the values to
     * update.</p>
     */
    inline void SetDetectors(const Aws::Vector<UpdateDetectorRequest>& value) { m_detectorsHasBeenSet = true; m_detectors = value; }

    /**
     * <p>The list of detectors (instances) to update, along with the values to
     * update.</p>
     */
    inline void SetDetectors(Aws::Vector<UpdateDetectorRequest>&& value) { m_detectorsHasBeenSet = true; m_detectors = std::move(value); }

    /**
     * <p>The list of detectors (instances) to update, along with the values to
     * update.</p>
     */
    inline BatchUpdateDetectorRequest& WithDetectors(const Aws::Vector<UpdateDetectorRequest>& value) { SetDetectors(value); return *this;}

    /**
     * <p>The list of detectors (instances) to update, along with the values to
     * update.</p>
     */
    inline BatchUpdateDetectorRequest& WithDetectors(Aws::Vector<UpdateDetectorRequest>&& value) { SetDetectors(std::move(value)); return *this;}

    /**
     * <p>The list of detectors (instances) to update, along with the values to
     * update.</p>
     */
    inline BatchUpdateDetectorRequest& AddDetectors(const UpdateDetectorRequest& value) { m_detectorsHasBeenSet = true; m_detectors.push_back(value); return *this; }

    /**
     * <p>The list of detectors (instances) to update, along with the values to
     * update.</p>
     */
    inline BatchUpdateDetectorRequest& AddDetectors(UpdateDetectorRequest&& value) { m_detectorsHasBeenSet = true; m_detectors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UpdateDetectorRequest> m_detectors;
    bool m_detectorsHasBeenSet;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
