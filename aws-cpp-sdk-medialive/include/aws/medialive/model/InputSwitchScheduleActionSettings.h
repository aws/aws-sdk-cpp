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
   * Settings for the action to switch an input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputSwitchScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API InputSwitchScheduleActionSettings
  {
  public:
    InputSwitchScheduleActionSettings();
    InputSwitchScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    InputSwitchScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The name of the input attachment that should be switched to by this action.
     */
    inline const Aws::String& GetInputAttachmentNameReference() const{ return m_inputAttachmentNameReference; }

    /**
     * The name of the input attachment that should be switched to by this action.
     */
    inline bool InputAttachmentNameReferenceHasBeenSet() const { return m_inputAttachmentNameReferenceHasBeenSet; }

    /**
     * The name of the input attachment that should be switched to by this action.
     */
    inline void SetInputAttachmentNameReference(const Aws::String& value) { m_inputAttachmentNameReferenceHasBeenSet = true; m_inputAttachmentNameReference = value; }

    /**
     * The name of the input attachment that should be switched to by this action.
     */
    inline void SetInputAttachmentNameReference(Aws::String&& value) { m_inputAttachmentNameReferenceHasBeenSet = true; m_inputAttachmentNameReference = std::move(value); }

    /**
     * The name of the input attachment that should be switched to by this action.
     */
    inline void SetInputAttachmentNameReference(const char* value) { m_inputAttachmentNameReferenceHasBeenSet = true; m_inputAttachmentNameReference.assign(value); }

    /**
     * The name of the input attachment that should be switched to by this action.
     */
    inline InputSwitchScheduleActionSettings& WithInputAttachmentNameReference(const Aws::String& value) { SetInputAttachmentNameReference(value); return *this;}

    /**
     * The name of the input attachment that should be switched to by this action.
     */
    inline InputSwitchScheduleActionSettings& WithInputAttachmentNameReference(Aws::String&& value) { SetInputAttachmentNameReference(std::move(value)); return *this;}

    /**
     * The name of the input attachment that should be switched to by this action.
     */
    inline InputSwitchScheduleActionSettings& WithInputAttachmentNameReference(const char* value) { SetInputAttachmentNameReference(value); return *this;}

  private:

    Aws::String m_inputAttachmentNameReference;
    bool m_inputAttachmentNameReferenceHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
