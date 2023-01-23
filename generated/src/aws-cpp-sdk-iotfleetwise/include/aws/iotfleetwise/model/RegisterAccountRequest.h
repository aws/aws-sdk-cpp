/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/iotfleetwise/model/TimestreamResources.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class RegisterAccountRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API RegisterAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterAccount"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const TimestreamResources& GetTimestreamResources() const{ return m_timestreamResources; }

    
    inline bool TimestreamResourcesHasBeenSet() const { return m_timestreamResourcesHasBeenSet; }

    
    inline void SetTimestreamResources(const TimestreamResources& value) { m_timestreamResourcesHasBeenSet = true; m_timestreamResources = value; }

    
    inline void SetTimestreamResources(TimestreamResources&& value) { m_timestreamResourcesHasBeenSet = true; m_timestreamResources = std::move(value); }

    
    inline RegisterAccountRequest& WithTimestreamResources(const TimestreamResources& value) { SetTimestreamResources(value); return *this;}

    
    inline RegisterAccountRequest& WithTimestreamResources(TimestreamResources&& value) { SetTimestreamResources(std::move(value)); return *this;}

  private:

    TimestreamResources m_timestreamResources;
    bool m_timestreamResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
