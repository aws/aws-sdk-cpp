﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the DescribeThing operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingRequest">AWS
   * API Reference</a></p>
   */
  class DescribeThingRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DescribeThingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeThing"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the thing.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }
    inline DescribeThingRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}
    inline DescribeThingRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}
    inline DescribeThingRequest& WithThingName(const char* value) { SetThingName(value); return *this;}
    ///@}
  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
