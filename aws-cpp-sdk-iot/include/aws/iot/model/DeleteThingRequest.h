/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the DeleteThing operation.</p>
   */
  class AWS_IOT_API DeleteThingRequest : public IoTRequest
  {
  public:
    DeleteThingRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The thing name.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The thing name.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The thing name.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The thing name.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The thing name.</p>
     */
    inline DeleteThingRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The thing name.</p>
     */
    inline DeleteThingRequest& WithThingName(Aws::String&& value) { SetThingName(value); return *this;}

    /**
     * <p>The thing name.</p>
     */
    inline DeleteThingRequest& WithThingName(const char* value) { SetThingName(value); return *this;}

  private:
    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
