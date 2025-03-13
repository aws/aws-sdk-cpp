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
    AWS_GREENGRASSV2_API DisassociateClientDeviceFromCoreDeviceErrorEntry() = default;
    AWS_GREENGRASSV2_API DisassociateClientDeviceFromCoreDeviceErrorEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API DisassociateClientDeviceFromCoreDeviceErrorEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the IoT thing whose disassociate request failed.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    DisassociateClientDeviceFromCoreDeviceErrorEntry& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code for the request.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    DisassociateClientDeviceFromCoreDeviceErrorEntry& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that provides additional information about the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DisassociateClientDeviceFromCoreDeviceErrorEntry& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
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
