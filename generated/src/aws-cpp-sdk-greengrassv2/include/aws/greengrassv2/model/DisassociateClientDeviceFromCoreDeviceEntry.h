/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains a request to disassociate a client device from a core device. The <a
   * href="https://docs.aws.amazon.com/greengrass/v2/APIReference/API_BatchDisassociateClientDeviceWithCoreDevice.html">BatchDisassociateClientDeviceWithCoreDevice</a>
   * operation consumes a list of these requests.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DisassociateClientDeviceFromCoreDeviceEntry">AWS
   * API Reference</a></p>
   */
  class DisassociateClientDeviceFromCoreDeviceEntry
  {
  public:
    AWS_GREENGRASSV2_API DisassociateClientDeviceFromCoreDeviceEntry();
    AWS_GREENGRASSV2_API DisassociateClientDeviceFromCoreDeviceEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API DisassociateClientDeviceFromCoreDeviceEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the IoT thing that represents the client device to
     * disassociate.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the IoT thing that represents the client device to
     * disassociate.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the IoT thing that represents the client device to
     * disassociate.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the IoT thing that represents the client device to
     * disassociate.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the IoT thing that represents the client device to
     * disassociate.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the IoT thing that represents the client device to
     * disassociate.</p>
     */
    inline DisassociateClientDeviceFromCoreDeviceEntry& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the IoT thing that represents the client device to
     * disassociate.</p>
     */
    inline DisassociateClientDeviceFromCoreDeviceEntry& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the IoT thing that represents the client device to
     * disassociate.</p>
     */
    inline DisassociateClientDeviceFromCoreDeviceEntry& WithThingName(const char* value) { SetThingName(value); return *this;}

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
