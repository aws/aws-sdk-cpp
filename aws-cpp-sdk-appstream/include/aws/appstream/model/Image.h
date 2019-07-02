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
#include <aws/appstream/model/ImagePermissions.h>
#include <aws/appstream/model/Application.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes an image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/Image">AWS API
   * Reference</a></p>
   */
  class AWS_APPSTREAM_API Image
  {
  public:
    Image();
    Image(Aws::Utils::Json::JsonView jsonValue);
    Image& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline Image& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline Image& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline Image& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the image.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the image.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the image.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the image.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the image.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the image.</p>
     */
    inline Image& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the image.</p>
     */
    inline Image& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the image.</p>
     */
    inline Image& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ARN of the image from which this image was created.</p>
     */
    inline const Aws::String& GetBaseImageArn() const{ return m_baseImageArn; }

    /**
     * <p>The ARN of the image from which this image was created.</p>
     */
    inline bool BaseImageArnHasBeenSet() const { return m_baseImageArnHasBeenSet; }

    /**
     * <p>The ARN of the image from which this image was created.</p>
     */
    inline void SetBaseImageArn(const Aws::String& value) { m_baseImageArnHasBeenSet = true; m_baseImageArn = value; }

    /**
     * <p>The ARN of the image from which this image was created.</p>
     */
    inline void SetBaseImageArn(Aws::String&& value) { m_baseImageArnHasBeenSet = true; m_baseImageArn = std::move(value); }

    /**
     * <p>The ARN of the image from which this image was created.</p>
     */
    inline void SetBaseImageArn(const char* value) { m_baseImageArnHasBeenSet = true; m_baseImageArn.assign(value); }

    /**
     * <p>The ARN of the image from which this image was created.</p>
     */
    inline Image& WithBaseImageArn(const Aws::String& value) { SetBaseImageArn(value); return *this;}

    /**
     * <p>The ARN of the image from which this image was created.</p>
     */
    inline Image& WithBaseImageArn(Aws::String&& value) { SetBaseImageArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the image from which this image was created.</p>
     */
    inline Image& WithBaseImageArn(const char* value) { SetBaseImageArn(value); return *this;}


    /**
     * <p>The image name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The image name to display.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The image name to display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The image name to display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The image name to display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The image name to display.</p>
     */
    inline Image& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The image name to display.</p>
     */
    inline Image& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The image name to display.</p>
     */
    inline Image& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The image starts in the <code>PENDING</code> state. If image creation
     * succeeds, the state is <code>AVAILABLE</code>. If image creation fails, the
     * state is <code>FAILED</code>.</p>
     */
    inline const ImageState& GetState() const{ return m_state; }

    /**
     * <p>The image starts in the <code>PENDING</code> state. If image creation
     * succeeds, the state is <code>AVAILABLE</code>. If image creation fails, the
     * state is <code>FAILED</code>.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The image starts in the <code>PENDING</code> state. If image creation
     * succeeds, the state is <code>AVAILABLE</code>. If image creation fails, the
     * state is <code>FAILED</code>.</p>
     */
    inline void SetState(const ImageState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The image starts in the <code>PENDING</code> state. If image creation
     * succeeds, the state is <code>AVAILABLE</code>. If image creation fails, the
     * state is <code>FAILED</code>.</p>
     */
    inline void SetState(ImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The image starts in the <code>PENDING</code> state. If image creation
     * succeeds, the state is <code>AVAILABLE</code>. If image creation fails, the
     * state is <code>FAILED</code>.</p>
     */
    inline Image& WithState(const ImageState& value) { SetState(value); return *this;}

    /**
     * <p>The image starts in the <code>PENDING</code> state. If image creation
     * succeeds, the state is <code>AVAILABLE</code>. If image creation fails, the
     * state is <code>FAILED</code>.</p>
     */
    inline Image& WithState(ImageState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the image is public or private.</p>
     */
    inline const VisibilityType& GetVisibility() const{ return m_visibility; }

    /**
     * <p>Indicates whether the image is public or private.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>Indicates whether the image is public or private.</p>
     */
    inline void SetVisibility(const VisibilityType& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>Indicates whether the image is public or private.</p>
     */
    inline void SetVisibility(VisibilityType&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>Indicates whether the image is public or private.</p>
     */
    inline Image& WithVisibility(const VisibilityType& value) { SetVisibility(value); return *this;}

    /**
     * <p>Indicates whether the image is public or private.</p>
     */
    inline Image& WithVisibility(VisibilityType&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>Indicates whether an image builder can be launched from this image.</p>
     */
    inline bool GetImageBuilderSupported() const{ return m_imageBuilderSupported; }

    /**
     * <p>Indicates whether an image builder can be launched from this image.</p>
     */
    inline bool ImageBuilderSupportedHasBeenSet() const { return m_imageBuilderSupportedHasBeenSet; }

    /**
     * <p>Indicates whether an image builder can be launched from this image.</p>
     */
    inline void SetImageBuilderSupported(bool value) { m_imageBuilderSupportedHasBeenSet = true; m_imageBuilderSupported = value; }

    /**
     * <p>Indicates whether an image builder can be launched from this image.</p>
     */
    inline Image& WithImageBuilderSupported(bool value) { SetImageBuilderSupported(value); return *this;}


    /**
     * <p>The name of the image builder that was used to create the private image. If
     * the image is shared, this value is null.</p>
     */
    inline const Aws::String& GetImageBuilderName() const{ return m_imageBuilderName; }

    /**
     * <p>The name of the image builder that was used to create the private image. If
     * the image is shared, this value is null.</p>
     */
    inline bool ImageBuilderNameHasBeenSet() const { return m_imageBuilderNameHasBeenSet; }

    /**
     * <p>The name of the image builder that was used to create the private image. If
     * the image is shared, this value is null.</p>
     */
    inline void SetImageBuilderName(const Aws::String& value) { m_imageBuilderNameHasBeenSet = true; m_imageBuilderName = value; }

    /**
     * <p>The name of the image builder that was used to create the private image. If
     * the image is shared, this value is null.</p>
     */
    inline void SetImageBuilderName(Aws::String&& value) { m_imageBuilderNameHasBeenSet = true; m_imageBuilderName = std::move(value); }

    /**
     * <p>The name of the image builder that was used to create the private image. If
     * the image is shared, this value is null.</p>
     */
    inline void SetImageBuilderName(const char* value) { m_imageBuilderNameHasBeenSet = true; m_imageBuilderName.assign(value); }

    /**
     * <p>The name of the image builder that was used to create the private image. If
     * the image is shared, this value is null.</p>
     */
    inline Image& WithImageBuilderName(const Aws::String& value) { SetImageBuilderName(value); return *this;}

    /**
     * <p>The name of the image builder that was used to create the private image. If
     * the image is shared, this value is null.</p>
     */
    inline Image& WithImageBuilderName(Aws::String&& value) { SetImageBuilderName(std::move(value)); return *this;}

    /**
     * <p>The name of the image builder that was used to create the private image. If
     * the image is shared, this value is null.</p>
     */
    inline Image& WithImageBuilderName(const char* value) { SetImageBuilderName(value); return *this;}


    /**
     * <p>The operating system platform of the image.</p>
     */
    inline const PlatformType& GetPlatform() const{ return m_platform; }

    /**
     * <p>The operating system platform of the image.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

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
     * <p>The description to display.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description to display.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description to display.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description to display.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description to display.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description to display.</p>
     */
    inline Image& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description to display.</p>
     */
    inline Image& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description to display.</p>
     */
    inline Image& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline const ImageStateChangeReason& GetStateChangeReason() const{ return m_stateChangeReason; }

    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }

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
     * <p>The applications associated with the image.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const{ return m_applications; }

    /**
     * <p>The applications associated with the image.</p>
     */
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }

    /**
     * <p>The applications associated with the image.</p>
     */
    inline void SetApplications(const Aws::Vector<Application>& value) { m_applicationsHasBeenSet = true; m_applications = value; }

    /**
     * <p>The applications associated with the image.</p>
     */
    inline void SetApplications(Aws::Vector<Application>&& value) { m_applicationsHasBeenSet = true; m_applications = std::move(value); }

    /**
     * <p>The applications associated with the image.</p>
     */
    inline Image& WithApplications(const Aws::Vector<Application>& value) { SetApplications(value); return *this;}

    /**
     * <p>The applications associated with the image.</p>
     */
    inline Image& WithApplications(Aws::Vector<Application>&& value) { SetApplications(std::move(value)); return *this;}

    /**
     * <p>The applications associated with the image.</p>
     */
    inline Image& AddApplications(const Application& value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }

    /**
     * <p>The applications associated with the image.</p>
     */
    inline Image& AddApplications(Application&& value) { m_applicationsHasBeenSet = true; m_applications.push_back(std::move(value)); return *this; }


    /**
     * <p>The time the image was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time the image was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time the image was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time the image was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time the image was created.</p>
     */
    inline Image& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time the image was created.</p>
     */
    inline Image& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The release date of the public base image. For private images, this date is
     * the release date of the base image from which the image was created.</p>
     */
    inline const Aws::Utils::DateTime& GetPublicBaseImageReleasedDate() const{ return m_publicBaseImageReleasedDate; }

    /**
     * <p>The release date of the public base image. For private images, this date is
     * the release date of the base image from which the image was created.</p>
     */
    inline bool PublicBaseImageReleasedDateHasBeenSet() const { return m_publicBaseImageReleasedDateHasBeenSet; }

    /**
     * <p>The release date of the public base image. For private images, this date is
     * the release date of the base image from which the image was created.</p>
     */
    inline void SetPublicBaseImageReleasedDate(const Aws::Utils::DateTime& value) { m_publicBaseImageReleasedDateHasBeenSet = true; m_publicBaseImageReleasedDate = value; }

    /**
     * <p>The release date of the public base image. For private images, this date is
     * the release date of the base image from which the image was created.</p>
     */
    inline void SetPublicBaseImageReleasedDate(Aws::Utils::DateTime&& value) { m_publicBaseImageReleasedDateHasBeenSet = true; m_publicBaseImageReleasedDate = std::move(value); }

    /**
     * <p>The release date of the public base image. For private images, this date is
     * the release date of the base image from which the image was created.</p>
     */
    inline Image& WithPublicBaseImageReleasedDate(const Aws::Utils::DateTime& value) { SetPublicBaseImageReleasedDate(value); return *this;}

    /**
     * <p>The release date of the public base image. For private images, this date is
     * the release date of the base image from which the image was created.</p>
     */
    inline Image& WithPublicBaseImageReleasedDate(Aws::Utils::DateTime&& value) { SetPublicBaseImageReleasedDate(std::move(value)); return *this;}


    /**
     * <p>The version of the AppStream 2.0 agent to use for instances that are launched
     * from this image. </p>
     */
    inline const Aws::String& GetAppstreamAgentVersion() const{ return m_appstreamAgentVersion; }

    /**
     * <p>The version of the AppStream 2.0 agent to use for instances that are launched
     * from this image. </p>
     */
    inline bool AppstreamAgentVersionHasBeenSet() const { return m_appstreamAgentVersionHasBeenSet; }

    /**
     * <p>The version of the AppStream 2.0 agent to use for instances that are launched
     * from this image. </p>
     */
    inline void SetAppstreamAgentVersion(const Aws::String& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = value; }

    /**
     * <p>The version of the AppStream 2.0 agent to use for instances that are launched
     * from this image. </p>
     */
    inline void SetAppstreamAgentVersion(Aws::String&& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = std::move(value); }

    /**
     * <p>The version of the AppStream 2.0 agent to use for instances that are launched
     * from this image. </p>
     */
    inline void SetAppstreamAgentVersion(const char* value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion.assign(value); }

    /**
     * <p>The version of the AppStream 2.0 agent to use for instances that are launched
     * from this image. </p>
     */
    inline Image& WithAppstreamAgentVersion(const Aws::String& value) { SetAppstreamAgentVersion(value); return *this;}

    /**
     * <p>The version of the AppStream 2.0 agent to use for instances that are launched
     * from this image. </p>
     */
    inline Image& WithAppstreamAgentVersion(Aws::String&& value) { SetAppstreamAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the AppStream 2.0 agent to use for instances that are launched
     * from this image. </p>
     */
    inline Image& WithAppstreamAgentVersion(const char* value) { SetAppstreamAgentVersion(value); return *this;}


    /**
     * <p>The permissions to provide to the destination AWS account for the specified
     * image.</p>
     */
    inline const ImagePermissions& GetImagePermissions() const{ return m_imagePermissions; }

    /**
     * <p>The permissions to provide to the destination AWS account for the specified
     * image.</p>
     */
    inline bool ImagePermissionsHasBeenSet() const { return m_imagePermissionsHasBeenSet; }

    /**
     * <p>The permissions to provide to the destination AWS account for the specified
     * image.</p>
     */
    inline void SetImagePermissions(const ImagePermissions& value) { m_imagePermissionsHasBeenSet = true; m_imagePermissions = value; }

    /**
     * <p>The permissions to provide to the destination AWS account for the specified
     * image.</p>
     */
    inline void SetImagePermissions(ImagePermissions&& value) { m_imagePermissionsHasBeenSet = true; m_imagePermissions = std::move(value); }

    /**
     * <p>The permissions to provide to the destination AWS account for the specified
     * image.</p>
     */
    inline Image& WithImagePermissions(const ImagePermissions& value) { SetImagePermissions(value); return *this;}

    /**
     * <p>The permissions to provide to the destination AWS account for the specified
     * image.</p>
     */
    inline Image& WithImagePermissions(ImagePermissions&& value) { SetImagePermissions(std::move(value)); return *this;}

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

    Aws::String m_imageBuilderName;
    bool m_imageBuilderNameHasBeenSet;

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

    Aws::Utils::DateTime m_publicBaseImageReleasedDate;
    bool m_publicBaseImageReleasedDateHasBeenSet;

    Aws::String m_appstreamAgentVersion;
    bool m_appstreamAgentVersionHasBeenSet;

    ImagePermissions m_imagePermissions;
    bool m_imagePermissionsHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
