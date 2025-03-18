/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/IoTEventsDataRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents-data/model/DeleteDetectorRequest.h>
#include <utility>

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

  /**
   */
  class BatchDeleteDetectorRequest : public IoTEventsDataRequest
  {
  public:
    AWS_IOTEVENTSDATA_API BatchDeleteDetectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteDetector"; }

    AWS_IOTEVENTSDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The list of one or more detectors to be deleted.</p>
     */
    inline const Aws::Vector<DeleteDetectorRequest>& GetDetectors() const { return m_detectors; }
    inline bool DetectorsHasBeenSet() const { return m_detectorsHasBeenSet; }
    template<typename DetectorsT = Aws::Vector<DeleteDetectorRequest>>
    void SetDetectors(DetectorsT&& value) { m_detectorsHasBeenSet = true; m_detectors = std::forward<DetectorsT>(value); }
    template<typename DetectorsT = Aws::Vector<DeleteDetectorRequest>>
    BatchDeleteDetectorRequest& WithDetectors(DetectorsT&& value) { SetDetectors(std::forward<DetectorsT>(value)); return *this;}
    template<typename DetectorsT = DeleteDetectorRequest>
    BatchDeleteDetectorRequest& AddDetectors(DetectorsT&& value) { m_detectorsHasBeenSet = true; m_detectors.emplace_back(std::forward<DetectorsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DeleteDetectorRequest> m_detectors;
    bool m_detectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
