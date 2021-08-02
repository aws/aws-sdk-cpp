﻿/**
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
   * <p>Contains an error that occurs from a request to associate a client device
   * with a core device. The <a
   * href="https://docs.aws.amazon.com/greengrass/v2/APIReference/API_BatchAssociateClientDeviceWithCoreDevice.html">BatchAssociateClientDeviceWithCoreDevice</a>
   * operation returns a list of these errors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/AssociateClientDeviceWithCoreDeviceErrorEntry">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASSV2_API AssociateClientDeviceWithCoreDeviceErrorEntry
  {
  public:
    AssociateClientDeviceWithCoreDeviceErrorEntry();
    AssociateClientDeviceWithCoreDeviceErrorEntry(Aws::Utils::Json::JsonView jsonValue);
    AssociateClientDeviceWithCoreDeviceErrorEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the IoT thing whose associate request failed.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the IoT thing whose associate request failed.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the IoT thing whose associate request failed.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the IoT thing whose associate request failed.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the IoT thing whose associate request failed.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the IoT thing whose associate request failed.</p>
     */
    inline AssociateClientDeviceWithCoreDeviceErrorEntry& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the IoT thing whose associate request failed.</p>
     */
    inline AssociateClientDeviceWithCoreDeviceErrorEntry& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the IoT thing whose associate request failed.</p>
     */
    inline AssociateClientDeviceWithCoreDeviceErrorEntry& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The error code for the request.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The error code for the request.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The error code for the request.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code for the request.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The error code for the request.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The error code for the request.</p>
     */
    inline AssociateClientDeviceWithCoreDeviceErrorEntry& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The error code for the request.</p>
     */
    inline AssociateClientDeviceWithCoreDeviceErrorEntry& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The error code for the request.</p>
     */
    inline AssociateClientDeviceWithCoreDeviceErrorEntry& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>A message that provides additional information about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message that provides additional information about the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message that provides additional information about the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message that provides additional information about the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message that provides additional information about the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message that provides additional information about the error.</p>
     */
    inline AssociateClientDeviceWithCoreDeviceErrorEntry& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that provides additional information about the error.</p>
     */
    inline AssociateClientDeviceWithCoreDeviceErrorEntry& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message that provides additional information about the error.</p>
     */
    inline AssociateClientDeviceWithCoreDeviceErrorEntry& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
