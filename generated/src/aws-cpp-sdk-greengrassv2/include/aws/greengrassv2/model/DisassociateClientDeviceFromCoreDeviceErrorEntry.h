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
   * <p>Contains an error that occurs from a request to disassociate a client device
   * from a core device. The <a
   * href="https://docs.aws.amazon.com/greengrass/v2/APIReference/API_BatchDisassociateClientDeviceWithCoreDevice.html">BatchDisassociateClientDeviceWithCoreDevice</a>
   * operation returns a list of these errors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DisassociateClientDeviceFromCoreDeviceErrorEntry">AWS
   * API Reference</a></p>
   */
  class DisassociateClientDeviceFromCoreDeviceErrorEntry
  {
  public:
    AWS_GREENGRASSV2_API DisassociateClientDeviceFromCoreDeviceErrorEntry();
    AWS_GREENGRASSV2_API DisassociateClientDeviceFromCoreDeviceErrorEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API DisassociateClientDeviceFromCoreDeviceErrorEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the IoT thing whose disassociate request failed.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }
    inline DisassociateClientDeviceFromCoreDeviceErrorEntry& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}
    inline DisassociateClientDeviceFromCoreDeviceErrorEntry& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}
    inline DisassociateClientDeviceFromCoreDeviceErrorEntry& WithThingName(const char* value) { SetThingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code for the request.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline DisassociateClientDeviceFromCoreDeviceErrorEntry& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline DisassociateClientDeviceFromCoreDeviceErrorEntry& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline DisassociateClientDeviceFromCoreDeviceErrorEntry& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that provides additional information about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline DisassociateClientDeviceFromCoreDeviceErrorEntry& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DisassociateClientDeviceFromCoreDeviceErrorEntry& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DisassociateClientDeviceFromCoreDeviceErrorEntry& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
