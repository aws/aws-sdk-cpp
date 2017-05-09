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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/ImageState.h>
#include <aws/appstream/model/VisibilityType.h>
#include <aws/appstream/model/PlatformType.h>
#include <aws/appstream/model/ImageStateChangeReason.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appstream/model/Application.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  /**
   * <p>New streaming instances are booted from images. The image stores the
   * application catalog and is connected to fleets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/Image">AWS API
   * Reference</a></p>
   */
  class AWS_APPSTREAM_API Image
  {
  public:
    Image();
    Image(const Aws::Utils::Json::JsonValue& jsonValue);
    Image& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique identifier for the image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique identifier for the image.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique identifier for the image.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique identifier for the image.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique identifier for the image.</p>
     */
    inline Image& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique identifier for the image.</p>
     */
    inline Image& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the image.</p>
     */
    inline Image& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The ARN for the image.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN for the image.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN for the image.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN for the image.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN for the image.</p>
     */
    inline Image& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN for the image.</p>
     */
    inline Image& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the image.</p>
     */
    inline Image& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The source image ARN from which this image was created.</p>
     */
    inline const Aws::String& GetBaseImageArn() const{ return m_baseImageArn; }

    /**
     * <p>The source image ARN from which this image was created.</p>
     */
    inline void SetBaseImageArn(const Aws::String& value) { m_baseImageArnHasBeenSet = true; m_baseImageArn = value; }

    /**
     * <p>The source image ARN from which this image was created.</p>
     */
    inline void SetBaseImageArn(Aws::String&& value) { m_baseImageArnHasBeenSet = true; m_baseImageArn = std::move(value); }

    /**
     * <p>The source image ARN from which this image was created.</p>
     */
    inline void SetBaseImageArn(const char* value) { m_baseImageArnHasBeenSet = true; m_baseImageArn.assign(value); }

    /**
     * <p>The source image ARN from which this image was created.</p>
     */
    inline Image& WithBaseImageArn(const Aws::String& value) { SetBaseImageArn(value); return *this;}

    /**
     * <p>The source image ARN from which this image was created.</p>
     */
    inline Image& WithBaseImageArn(Aws::String&& value) { SetBaseImageArn(std::move(value)); return *this;}

    /**
     * <p>The source image ARN from which this image was created.</p>
     */
    inline Image& WithBaseImageArn(const char* value) { SetBaseImageArn(value); return *this;}

    /**
     * <p>The display name for the image.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name for the image.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name for the image.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name for the image.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name for the image.</p>
     */
    inline Image& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name for the image.</p>
     */
    inline Image& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name for the image.</p>
     */
    inline Image& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

    /**
     * <p>The image starts in the <b>PENDING</b> state, and then moves to
     * <b>AVAILABLE</b> if image creation succeeds and <b>FAILED</b> if image creation
     * has failed.</p>
     */
    inline const ImageState& GetState() const{ return m_state; }

    /**
     * <p>The image starts in the <b>PENDING</b> state, and then moves to
     * <b>AVAILABLE</b> if image creation succeeds and <b>FAILED</b> if image creation
     * has failed.</p>
     */
    inline void SetState(const ImageState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The image starts in the <b>PENDING</b> state, and then moves to
     * <b>AVAILABLE</b> if image creation succeeds and <b>FAILED</b> if image creation
     * has failed.</p>
     */
    inline void SetState(ImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The image starts in the <b>PENDING</b> state, and then moves to
     * <b>AVAILABLE</b> if image creation succeeds and <b>FAILED</b> if image creation
     * has failed.</p>
     */
    inline Image& WithState(const ImageState& value) { SetState(value); return *this;}

    /**
     * <p>The image starts in the <b>PENDING</b> state, and then moves to
     * <b>AVAILABLE</b> if image creation succeeds and <b>FAILED</b> if image creation
     * has failed.</p>
     */
    inline Image& WithState(ImageState&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The visibility of an image to the user; images can be public or private.</p>
     */
    inline const VisibilityType& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The visibility of an image to the user; images can be public or private.</p>
     */
    inline void SetVisibility(const VisibilityType& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The visibility of an image to the user; images can be public or private.</p>
     */
    inline void SetVisibility(VisibilityType&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The visibility of an image to the user; images can be public or private.</p>
     */
    inline Image& WithVisibility(const VisibilityType& value) { SetVisibility(value); return *this;}

    /**
     * <p>The visibility of an image to the user; images can be public or private.</p>
     */
    inline Image& WithVisibility(VisibilityType&& value) { SetVisibility(std::move(value)); return *this;}

    /**
     * <p>Indicates whether an image builder can be launched from this image.</p>
     */
    inline bool GetImageBuilderSupported() const{ return m_imageBuilderSupported; }

    /**
     * <p>Indicates whether an image builder can be launched from this image.</p>
     */
    inline void SetImageBuilderSupported(bool value) { m_imageBuilderSupportedHasBeenSet = true; m_imageBuilderSupported = value; }

    /**
     * <p>Indicates whether an image builder can be launched from this image.</p>
     */
    inline Image& WithImageBuilderSupported(bool value) { SetImageBuilderSupported(value); return *this;}

    /**
     * <p>The operating system platform of the image.</p>
     */
    inline const PlatformType& GetPlatform() const{ return m_platform; }

    /**
     * <p>The operating system platform of the image.</p>
     */
    inline void SetPlatform(const PlatformType& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The operating system platform of the image.</p>
     */
    inline void SetPlatform(PlatformType&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The operating system platform of the image.</p>
     */
    inline Image& WithPlatform(const PlatformType& value) { SetPlatform(value); return *this;}

    /**
     * <p>The operating system platform of the image.</p>
     */
    inline Image& WithPlatform(PlatformType&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>A meaningful description for the image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A meaningful description for the image.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A meaningful description for the image.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A meaningful description for the image.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A meaningful description for the image.</p>
     */
    inline Image& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A meaningful description for the image.</p>
     */
    inline Image& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A meaningful description for the image.</p>
     */
    inline Image& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline const ImageStateChangeReason& GetStateChangeReason() const{ return m_stateChangeReason; }

    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline void SetStateChangeReason(const ImageStateChangeReason& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }

    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline void SetStateChangeReason(ImageStateChangeReason&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::move(value); }

    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline Image& WithStateChangeReason(const ImageStateChangeReason& value) { SetStateChangeReason(value); return *this;}

    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline Image& WithStateChangeReason(ImageStateChangeReason&& value) { SetStateChangeReason(std::move(value)); return *this;}

    /**
     * <p>The applications associated with an image.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const{ return m_applications; }

    /**
     * <p>The applications associated with an image.</p>
     */
    inline void SetApplications(const Aws::Vector<Application>& value) { m_applicationsHasBeenSet = true; m_applications = value; }

    /**
     * <p>The applications associated with an image.</p>
     */
    inline void SetApplications(Aws::Vector<Application>&& value) { m_applicationsHasBeenSet = true; m_applications = std::move(value); }

    /**
     * <p>The applications associated with an image.</p>
     */
    inline Image& WithApplications(const Aws::Vector<Application>& value) { SetApplications(value); return *this;}

    /**
     * <p>The applications associated with an image.</p>
     */
    inline Image& WithApplications(Aws::Vector<Application>&& value) { SetApplications(std::move(value)); return *this;}

    /**
     * <p>The applications associated with an image.</p>
     */
    inline Image& AddApplications(const Application& value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }

    /**
     * <p>The applications associated with an image.</p>
     */
    inline Image& AddApplications(Application&& value) { m_applicationsHasBeenSet = true; m_applications.push_back(std::move(value)); return *this; }

    /**
     * <p>The timestamp when the image was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The timestamp when the image was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The timestamp when the image was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The timestamp when the image was created.</p>
     */
    inline Image& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The timestamp when the image was created.</p>
     */
    inline Image& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_baseImageArn;
    bool m_baseImageArnHasBeenSet;
    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;
    ImageState m_state;
    bool m_stateHasBeenSet;
    VisibilityType m_visibility;
    bool m_visibilityHasBeenSet;
    bool m_imageBuilderSupported;
    bool m_imageBuilderSupportedHasBeenSet;
    PlatformType m_platform;
    bool m_platformHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    ImageStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet;
    Aws::Vector<Application> m_applications;
    bool m_applicationsHasBeenSet;
    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
