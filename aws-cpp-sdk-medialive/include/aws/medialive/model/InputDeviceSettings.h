/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings for an input device.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDeviceSettings">AWS
   * API Reference</a></p>
   */
  class InputDeviceSettings
  {
  public:
    AWS_MEDIALIVE_API InputDeviceSettings();
    AWS_MEDIALIVE_API InputDeviceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The unique ID for the device.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique ID for the device.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The unique ID for the device.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The unique ID for the device.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The unique ID for the device.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The unique ID for the device.
     */
    inline InputDeviceSettings& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique ID for the device.
     */
    inline InputDeviceSettings& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique ID for the device.
     */
    inline InputDeviceSettings& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
