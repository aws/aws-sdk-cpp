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
#include <aws/medialive/model/InputSettings.h>
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
   * Placeholder documentation for InputAttachment<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputAttachment">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API InputAttachment
  {
  public:
    InputAttachment();
    InputAttachment(Aws::Utils::Json::JsonView jsonValue);
    InputAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline const Aws::String& GetInputAttachmentName() const{ return m_inputAttachmentName; }

    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline bool InputAttachmentNameHasBeenSet() const { return m_inputAttachmentNameHasBeenSet; }

    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline void SetInputAttachmentName(const Aws::String& value) { m_inputAttachmentNameHasBeenSet = true; m_inputAttachmentName = value; }

    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline void SetInputAttachmentName(Aws::String&& value) { m_inputAttachmentNameHasBeenSet = true; m_inputAttachmentName = std::move(value); }

    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline void SetInputAttachmentName(const char* value) { m_inputAttachmentNameHasBeenSet = true; m_inputAttachmentName.assign(value); }

    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline InputAttachment& WithInputAttachmentName(const Aws::String& value) { SetInputAttachmentName(value); return *this;}

    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline InputAttachment& WithInputAttachmentName(Aws::String&& value) { SetInputAttachmentName(std::move(value)); return *this;}

    /**
     * User-specified name for the attachment. This is required if the user wants to
     * use this input in an input switch action.
     */
    inline InputAttachment& WithInputAttachmentName(const char* value) { SetInputAttachmentName(value); return *this;}


    /**
     * The ID of the input
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }

    /**
     * The ID of the input
     */
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }

    /**
     * The ID of the input
     */
    inline void SetInputId(const Aws::String& value) { m_inputIdHasBeenSet = true; m_inputId = value; }

    /**
     * The ID of the input
     */
    inline void SetInputId(Aws::String&& value) { m_inputIdHasBeenSet = true; m_inputId = std::move(value); }

    /**
     * The ID of the input
     */
    inline void SetInputId(const char* value) { m_inputIdHasBeenSet = true; m_inputId.assign(value); }

    /**
     * The ID of the input
     */
    inline InputAttachment& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}

    /**
     * The ID of the input
     */
    inline InputAttachment& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}

    /**
     * The ID of the input
     */
    inline InputAttachment& WithInputId(const char* value) { SetInputId(value); return *this;}


    /**
     * Settings of an input (caption selector, etc.)
     */
    inline const InputSettings& GetInputSettings() const{ return m_inputSettings; }

    /**
     * Settings of an input (caption selector, etc.)
     */
    inline bool InputSettingsHasBeenSet() const { return m_inputSettingsHasBeenSet; }

    /**
     * Settings of an input (caption selector, etc.)
     */
    inline void SetInputSettings(const InputSettings& value) { m_inputSettingsHasBeenSet = true; m_inputSettings = value; }

    /**
     * Settings of an input (caption selector, etc.)
     */
    inline void SetInputSettings(InputSettings&& value) { m_inputSettingsHasBeenSet = true; m_inputSettings = std::move(value); }

    /**
     * Settings of an input (caption selector, etc.)
     */
    inline InputAttachment& WithInputSettings(const InputSettings& value) { SetInputSettings(value); return *this;}

    /**
     * Settings of an input (caption selector, etc.)
     */
    inline InputAttachment& WithInputSettings(InputSettings&& value) { SetInputSettings(std::move(value)); return *this;}

  private:

    Aws::String m_inputAttachmentName;
    bool m_inputAttachmentNameHasBeenSet;

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet;

    InputSettings m_inputSettings;
    bool m_inputSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
