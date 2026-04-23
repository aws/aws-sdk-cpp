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
#include <aws/medialive/model/ArchiveContainerSettings.h>
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
   * Archive Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ArchiveOutputSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API ArchiveOutputSettings
  {
  public:
    ArchiveOutputSettings();
    ArchiveOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    ArchiveOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Settings specific to the container type of the file.
     */
    inline const ArchiveContainerSettings& GetContainerSettings() const{ return m_containerSettings; }

    /**
     * Settings specific to the container type of the file.
     */
    inline bool ContainerSettingsHasBeenSet() const { return m_containerSettingsHasBeenSet; }

    /**
     * Settings specific to the container type of the file.
     */
    inline void SetContainerSettings(const ArchiveContainerSettings& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = value; }

    /**
     * Settings specific to the container type of the file.
     */
    inline void SetContainerSettings(ArchiveContainerSettings&& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = std::move(value); }

    /**
     * Settings specific to the container type of the file.
     */
    inline ArchiveOutputSettings& WithContainerSettings(const ArchiveContainerSettings& value) { SetContainerSettings(value); return *this;}

    /**
     * Settings specific to the container type of the file.
     */
    inline ArchiveOutputSettings& WithContainerSettings(ArchiveContainerSettings&& value) { SetContainerSettings(std::move(value)); return *this;}


    /**
     * Output file extension. If excluded, this will be auto-selected from the
     * container type.
     */
    inline const Aws::String& GetExtension() const{ return m_extension; }

    /**
     * Output file extension. If excluded, this will be auto-selected from the
     * container type.
     */
    inline bool ExtensionHasBeenSet() const { return m_extensionHasBeenSet; }

    /**
     * Output file extension. If excluded, this will be auto-selected from the
     * container type.
     */
    inline void SetExtension(const Aws::String& value) { m_extensionHasBeenSet = true; m_extension = value; }

    /**
     * Output file extension. If excluded, this will be auto-selected from the
     * container type.
     */
    inline void SetExtension(Aws::String&& value) { m_extensionHasBeenSet = true; m_extension = std::move(value); }

    /**
     * Output file extension. If excluded, this will be auto-selected from the
     * container type.
     */
    inline void SetExtension(const char* value) { m_extensionHasBeenSet = true; m_extension.assign(value); }

    /**
     * Output file extension. If excluded, this will be auto-selected from the
     * container type.
     */
    inline ArchiveOutputSettings& WithExtension(const Aws::String& value) { SetExtension(value); return *this;}

    /**
     * Output file extension. If excluded, this will be auto-selected from the
     * container type.
     */
    inline ArchiveOutputSettings& WithExtension(Aws::String&& value) { SetExtension(std::move(value)); return *this;}

    /**
     * Output file extension. If excluded, this will be auto-selected from the
     * container type.
     */
    inline ArchiveOutputSettings& WithExtension(const char* value) { SetExtension(value); return *this;}


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
    inline ArchiveOutputSettings& WithNameModifier(const Aws::String& value) { SetNameModifier(value); return *this;}

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline ArchiveOutputSettings& WithNameModifier(Aws::String&& value) { SetNameModifier(std::move(value)); return *this;}

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline ArchiveOutputSettings& WithNameModifier(const char* value) { SetNameModifier(value); return *this;}

  private:

    ArchiveContainerSettings m_containerSettings;
    bool m_containerSettingsHasBeenSet;

    Aws::String m_extension;
    bool m_extensionHasBeenSet;

    Aws::String m_nameModifier;
    bool m_nameModifierHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
