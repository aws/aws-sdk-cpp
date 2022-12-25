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
   * Frame Capture Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FrameCaptureOutputSettings">AWS
   * API Reference</a></p>
   */
  class FrameCaptureOutputSettings
  {
  public:
    AWS_MEDIALIVE_API FrameCaptureOutputSettings();
    AWS_MEDIALIVE_API FrameCaptureOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API FrameCaptureOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Required if the output group contains more than one output. This modifier forms
     * part of the output file name.
     */
    inline const Aws::String& GetNameModifier() const{ return m_nameModifier; }

    /**
     * Required if the output group contains more than one output. This modifier forms
     * part of the output file name.
     */
    inline bool NameModifierHasBeenSet() const { return m_nameModifierHasBeenSet; }

    /**
     * Required if the output group contains more than one output. This modifier forms
     * part of the output file name.
     */
    inline void SetNameModifier(const Aws::String& value) { m_nameModifierHasBeenSet = true; m_nameModifier = value; }

    /**
     * Required if the output group contains more than one output. This modifier forms
     * part of the output file name.
     */
    inline void SetNameModifier(Aws::String&& value) { m_nameModifierHasBeenSet = true; m_nameModifier = std::move(value); }

    /**
     * Required if the output group contains more than one output. This modifier forms
     * part of the output file name.
     */
    inline void SetNameModifier(const char* value) { m_nameModifierHasBeenSet = true; m_nameModifier.assign(value); }

    /**
     * Required if the output group contains more than one output. This modifier forms
     * part of the output file name.
     */
    inline FrameCaptureOutputSettings& WithNameModifier(const Aws::String& value) { SetNameModifier(value); return *this;}

    /**
     * Required if the output group contains more than one output. This modifier forms
     * part of the output file name.
     */
    inline FrameCaptureOutputSettings& WithNameModifier(Aws::String&& value) { SetNameModifier(std::move(value)); return *this;}

    /**
     * Required if the output group contains more than one output. This modifier forms
     * part of the output file name.
     */
    inline FrameCaptureOutputSettings& WithNameModifier(const char* value) { SetNameModifier(value); return *this;}

  private:

    Aws::String m_nameModifier;
    bool m_nameModifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
