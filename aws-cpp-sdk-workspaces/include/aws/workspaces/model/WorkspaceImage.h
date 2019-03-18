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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/OperatingSystem.h>
#include <aws/workspaces/model/WorkspaceImageState.h>
#include <aws/workspaces/model/WorkspaceImageRequiredTenancy.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a WorkSpace image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceImage">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API WorkspaceImage
  {
  public:
    WorkspaceImage();
    WorkspaceImage(Aws::Utils::Json::JsonView jsonValue);
    WorkspaceImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the image.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The identifier of the image.</p>
     */
    inline WorkspaceImage& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The identifier of the image.</p>
     */
    inline WorkspaceImage& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the image.</p>
     */
    inline WorkspaceImage& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the image.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline WorkspaceImage& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline WorkspaceImage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline WorkspaceImage& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the image.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the image.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the image.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the image.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the image.</p>
     */
    inline WorkspaceImage& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the image.</p>
     */
    inline WorkspaceImage& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the image.</p>
     */
    inline WorkspaceImage& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The operating system that the image is running. </p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>The operating system that the image is running. </p>
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p>The operating system that the image is running. </p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>The operating system that the image is running. </p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>The operating system that the image is running. </p>
     */
    inline WorkspaceImage& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>The operating system that the image is running. </p>
     */
    inline WorkspaceImage& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}


    /**
     * <p>The status of the image.</p>
     */
    inline const WorkspaceImageState& GetState() const{ return m_state; }

    /**
     * <p>The status of the image.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The status of the image.</p>
     */
    inline void SetState(const WorkspaceImageState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The status of the image.</p>
     */
    inline void SetState(WorkspaceImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The status of the image.</p>
     */
    inline WorkspaceImage& WithState(const WorkspaceImageState& value) { SetState(value); return *this;}

    /**
     * <p>The status of the image.</p>
     */
    inline WorkspaceImage& WithState(WorkspaceImageState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the image is running on dedicated hardware. When bring your
     * own license (BYOL) is enabled, this value is set to DEDICATED. </p>
     */
    inline const WorkspaceImageRequiredTenancy& GetRequiredTenancy() const{ return m_requiredTenancy; }

    /**
     * <p>Specifies whether the image is running on dedicated hardware. When bring your
     * own license (BYOL) is enabled, this value is set to DEDICATED. </p>
     */
    inline bool RequiredTenancyHasBeenSet() const { return m_requiredTenancyHasBeenSet; }

    /**
     * <p>Specifies whether the image is running on dedicated hardware. When bring your
     * own license (BYOL) is enabled, this value is set to DEDICATED. </p>
     */
    inline void SetRequiredTenancy(const WorkspaceImageRequiredTenancy& value) { m_requiredTenancyHasBeenSet = true; m_requiredTenancy = value; }

    /**
     * <p>Specifies whether the image is running on dedicated hardware. When bring your
     * own license (BYOL) is enabled, this value is set to DEDICATED. </p>
     */
    inline void SetRequiredTenancy(WorkspaceImageRequiredTenancy&& value) { m_requiredTenancyHasBeenSet = true; m_requiredTenancy = std::move(value); }

    /**
     * <p>Specifies whether the image is running on dedicated hardware. When bring your
     * own license (BYOL) is enabled, this value is set to DEDICATED. </p>
     */
    inline WorkspaceImage& WithRequiredTenancy(const WorkspaceImageRequiredTenancy& value) { SetRequiredTenancy(value); return *this;}

    /**
     * <p>Specifies whether the image is running on dedicated hardware. When bring your
     * own license (BYOL) is enabled, this value is set to DEDICATED. </p>
     */
    inline WorkspaceImage& WithRequiredTenancy(WorkspaceImageRequiredTenancy&& value) { SetRequiredTenancy(std::move(value)); return *this;}


    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline WorkspaceImage& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline WorkspaceImage& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline WorkspaceImage& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline WorkspaceImage& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline WorkspaceImage& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline WorkspaceImage& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet;

    WorkspaceImageState m_state;
    bool m_stateHasBeenSet;

    WorkspaceImageRequiredTenancy m_requiredTenancy;
    bool m_requiredTenancyHasBeenSet;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
