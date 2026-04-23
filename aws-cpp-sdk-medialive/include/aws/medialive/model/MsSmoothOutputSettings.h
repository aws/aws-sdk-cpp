/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * Ms Smooth Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MsSmoothOutputSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API MsSmoothOutputSettings
  {
  public:
    MsSmoothOutputSettings();
    MsSmoothOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    MsSmoothOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline const Aws::String& GetNameModifier() const{ return m_nameModifier; }

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline bool NameModifierHasBeenSet() const { return m_nameModifierHasBeenSet; }

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline void SetNameModifier(const Aws::String& value) { m_nameModifierHasBeenSet = true; m_nameModifier = value; }

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline void SetNameModifier(Aws::String&& value) { m_nameModifierHasBeenSet = true; m_nameModifier = std::move(value); }

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline void SetNameModifier(const char* value) { m_nameModifierHasBeenSet = true; m_nameModifier.assign(value); }

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline MsSmoothOutputSettings& WithNameModifier(const Aws::String& value) { SetNameModifier(value); return *this;}

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline MsSmoothOutputSettings& WithNameModifier(Aws::String&& value) { SetNameModifier(std::move(value)); return *this;}

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline MsSmoothOutputSettings& WithNameModifier(const char* value) { SetNameModifier(value); return *this;}

  private:

    Aws::String m_nameModifier;
    bool m_nameModifierHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
