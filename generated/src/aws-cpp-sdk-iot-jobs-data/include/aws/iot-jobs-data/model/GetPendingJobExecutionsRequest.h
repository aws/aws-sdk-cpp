/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTJobsDataPlane
{
namespace Model
{

  /**
   */
  class GetPendingJobExecutionsRequest : public IoTJobsDataPlaneRequest
  {
  public:
    AWS_IOTJOBSDATAPLANE_API GetPendingJobExecutionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPendingJobExecutions"; }

    AWS_IOTJOBSDATAPLANE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the thing that is executing the job.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    GetPendingJobExecutionsRequest& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
