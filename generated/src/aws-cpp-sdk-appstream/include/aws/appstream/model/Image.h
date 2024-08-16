/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/appstream/model/LatestAppstreamAgentVersion.h>
#include <aws/appstream/model/DynamicAppProvidersEnabled.h>
#include <aws/appstream/model/ImageSharedWithOthers.h>
#include <aws/appstream/model/Application.h>
#include <aws/appstream/model/ResourceError.h>
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
  class Image
  {
  public:
    AWS_APPSTREAM_API Image();
    AWS_APPSTREAM_API Image(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Image& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Image& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Image& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Image& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the image.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Image& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Image& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Image& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the image from which this image was created.</p>
     */
    inline const Aws::String& GetBaseImageArn() const{ return m_baseImageArn; }
    inline bool BaseImageArnHasBeenSet() const { return m_baseImageArnHasBeenSet; }
    inline void SetBaseImageArn(const Aws::String& value) { m_baseImageArnHasBeenSet = true; m_baseImageArn = value; }
    inline void SetBaseImageArn(Aws::String&& value) { m_baseImageArnHasBeenSet = true; m_baseImageArn = std::move(value); }
    inline void SetBaseImageArn(const char* value) { m_baseImageArnHasBeenSet = true; m_baseImageArn.assign(value); }
    inline Image& WithBaseImageArn(const Aws::String& value) { SetBaseImageArn(value); return *this;}
    inline Image& WithBaseImageArn(Aws::String&& value) { SetBaseImageArn(std::move(value)); return *this;}
    inline Image& WithBaseImageArn(const char* value) { SetBaseImageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline Image& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline Image& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline Image& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image starts in the <code>PENDING</code> state. If image creation
     * succeeds, the state is <code>AVAILABLE</code>. If image creation fails, the
     * state is <code>FAILED</code>.</p>
     */
    inline const ImageState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ImageState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Image& WithState(const ImageState& value) { SetState(value); return *this;}
    inline Image& WithState(ImageState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the image is public or private.</p>
     */
    inline const VisibilityType& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const VisibilityType& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(VisibilityType&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline Image& WithVisibility(const VisibilityType& value) { SetVisibility(value); return *this;}
    inline Image& WithVisibility(VisibilityType&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an image builder can be launched from this image.</p>
     */
    inline bool GetImageBuilderSupported() const{ return m_imageBuilderSupported; }
    inline bool ImageBuilderSupportedHasBeenSet() const { return m_imageBuilderSupportedHasBeenSet; }
    inline void SetImageBuilderSupported(bool value) { m_imageBuilderSupportedHasBeenSet = true; m_imageBuilderSupported = value; }
    inline Image& WithImageBuilderSupported(bool value) { SetImageBuilderSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the image builder that was used to create the private image. If
     * the image is shared, this value is null.</p>
     */
    inline const Aws::String& GetImageBuilderName() const{ return m_imageBuilderName; }
    inline bool ImageBuilderNameHasBeenSet() const { return m_imageBuilderNameHasBeenSet; }
    inline void SetImageBuilderName(const Aws::String& value) { m_imageBuilderNameHasBeenSet = true; m_imageBuilderName = value; }
    inline void SetImageBuilderName(Aws::String&& value) { m_imageBuilderNameHasBeenSet = true; m_imageBuilderName = std::move(value); }
    inline void SetImageBuilderName(const char* value) { m_imageBuilderNameHasBeenSet = true; m_imageBuilderName.assign(value); }
    inline Image& WithImageBuilderName(const Aws::String& value) { SetImageBuilderName(value); return *this;}
    inline Image& WithImageBuilderName(Aws::String&& value) { SetImageBuilderName(std::move(value)); return *this;}
    inline Image& WithImageBuilderName(const char* value) { SetImageBuilderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform of the image.</p>
     */
    inline const PlatformType& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const PlatformType& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(PlatformType&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline Image& WithPlatform(const PlatformType& value) { SetPlatform(value); return *this;}
    inline Image& WithPlatform(PlatformType&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to display.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Image& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Image& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Image& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline const ImageStateChangeReason& GetStateChangeReason() const{ return m_stateChangeReason; }
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }
    inline void SetStateChangeReason(const ImageStateChangeReason& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }
    inline void SetStateChangeReason(ImageStateChangeReason&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::move(value); }
    inline Image& WithStateChangeReason(const ImageStateChangeReason& value) { SetStateChangeReason(value); return *this;}
    inline Image& WithStateChangeReason(ImageStateChangeReason&& value) { SetStateChangeReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The applications associated with the image.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const{ return m_applications; }
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
    inline void SetApplications(const Aws::Vector<Application>& value) { m_applicationsHasBeenSet = true; m_applications = value; }
    inline void SetApplications(Aws::Vector<Application>&& value) { m_applicationsHasBeenSet = true; m_applications = std::move(value); }
    inline Image& WithApplications(const Aws::Vector<Application>& value) { SetApplications(value); return *this;}
    inline Image& WithApplications(Aws::Vector<Application>&& value) { SetApplications(std::move(value)); return *this;}
    inline Image& AddApplications(const Application& value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }
    inline Image& AddApplications(Application&& value) { m_applicationsHasBeenSet = true; m_applications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time the image was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline Image& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline Image& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The release date of the public base image. For private images, this date is
     * the release date of the base image from which the image was created.</p>
     */
    inline const Aws::Utils::DateTime& GetPublicBaseImageReleasedDate() const{ return m_publicBaseImageReleasedDate; }
    inline bool PublicBaseImageReleasedDateHasBeenSet() const { return m_publicBaseImageReleasedDateHasBeenSet; }
    inline void SetPublicBaseImageReleasedDate(const Aws::Utils::DateTime& value) { m_publicBaseImageReleasedDateHasBeenSet = true; m_publicBaseImageReleasedDate = value; }
    inline void SetPublicBaseImageReleasedDate(Aws::Utils::DateTime&& value) { m_publicBaseImageReleasedDateHasBeenSet = true; m_publicBaseImageReleasedDate = std::move(value); }
    inline Image& WithPublicBaseImageReleasedDate(const Aws::Utils::DateTime& value) { SetPublicBaseImageReleasedDate(value); return *this;}
    inline Image& WithPublicBaseImageReleasedDate(Aws::Utils::DateTime&& value) { SetPublicBaseImageReleasedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the AppStream 2.0 agent to use for instances that are launched
     * from this image. </p>
     */
    inline const Aws::String& GetAppstreamAgentVersion() const{ return m_appstreamAgentVersion; }
    inline bool AppstreamAgentVersionHasBeenSet() const { return m_appstreamAgentVersionHasBeenSet; }
    inline void SetAppstreamAgentVersion(const Aws::String& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = value; }
    inline void SetAppstreamAgentVersion(Aws::String&& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = std::move(value); }
    inline void SetAppstreamAgentVersion(const char* value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion.assign(value); }
    inline Image& WithAppstreamAgentVersion(const Aws::String& value) { SetAppstreamAgentVersion(value); return *this;}
    inline Image& WithAppstreamAgentVersion(Aws::String&& value) { SetAppstreamAgentVersion(std::move(value)); return *this;}
    inline Image& WithAppstreamAgentVersion(const char* value) { SetAppstreamAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions to provide to the destination AWS account for the specified
     * image.</p>
     */
    inline const ImagePermissions& GetImagePermissions() const{ return m_imagePermissions; }
    inline bool ImagePermissionsHasBeenSet() const { return m_imagePermissionsHasBeenSet; }
    inline void SetImagePermissions(const ImagePermissions& value) { m_imagePermissionsHasBeenSet = true; m_imagePermissions = value; }
    inline void SetImagePermissions(ImagePermissions&& value) { m_imagePermissionsHasBeenSet = true; m_imagePermissions = std::move(value); }
    inline Image& WithImagePermissions(const ImagePermissions& value) { SetImagePermissions(value); return *this;}
    inline Image& WithImagePermissions(ImagePermissions&& value) { SetImagePermissions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the errors that are returned when a new image can't be created.</p>
     */
    inline const Aws::Vector<ResourceError>& GetImageErrors() const{ return m_imageErrors; }
    inline bool ImageErrorsHasBeenSet() const { return m_imageErrorsHasBeenSet; }
    inline void SetImageErrors(const Aws::Vector<ResourceError>& value) { m_imageErrorsHasBeenSet = true; m_imageErrors = value; }
    inline void SetImageErrors(Aws::Vector<ResourceError>&& value) { m_imageErrorsHasBeenSet = true; m_imageErrors = std::move(value); }
    inline Image& WithImageErrors(const Aws::Vector<ResourceError>& value) { SetImageErrors(value); return *this;}
    inline Image& WithImageErrors(Aws::Vector<ResourceError>&& value) { SetImageErrors(std::move(value)); return *this;}
    inline Image& AddImageErrors(const ResourceError& value) { m_imageErrorsHasBeenSet = true; m_imageErrors.push_back(value); return *this; }
    inline Image& AddImageErrors(ResourceError&& value) { m_imageErrorsHasBeenSet = true; m_imageErrors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the image is using the latest AppStream 2.0 agent version
     * or not.</p>
     */
    inline const LatestAppstreamAgentVersion& GetLatestAppstreamAgentVersion() const{ return m_latestAppstreamAgentVersion; }
    inline bool LatestAppstreamAgentVersionHasBeenSet() const { return m_latestAppstreamAgentVersionHasBeenSet; }
    inline void SetLatestAppstreamAgentVersion(const LatestAppstreamAgentVersion& value) { m_latestAppstreamAgentVersionHasBeenSet = true; m_latestAppstreamAgentVersion = value; }
    inline void SetLatestAppstreamAgentVersion(LatestAppstreamAgentVersion&& value) { m_latestAppstreamAgentVersionHasBeenSet = true; m_latestAppstreamAgentVersion = std::move(value); }
    inline Image& WithLatestAppstreamAgentVersion(const LatestAppstreamAgentVersion& value) { SetLatestAppstreamAgentVersion(value); return *this;}
    inline Image& WithLatestAppstreamAgentVersion(LatestAppstreamAgentVersion&& value) { SetLatestAppstreamAgentVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported instances families that determine which image a customer can
     * use when the customer launches a fleet or image builder. The following instances
     * families are supported:</p> <ul> <li> <p>General Purpose</p> </li> <li>
     * <p>Compute Optimized</p> </li> <li> <p>Memory Optimized</p> </li> <li>
     * <p>Graphics</p> </li> <li> <p>Graphics Design</p> </li> <li> <p>Graphics Pro</p>
     * </li> <li> <p>Graphics G4</p> </li> <li> <p>Graphics G5</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedInstanceFamilies() const{ return m_supportedInstanceFamilies; }
    inline bool SupportedInstanceFamiliesHasBeenSet() const { return m_supportedInstanceFamiliesHasBeenSet; }
    inline void SetSupportedInstanceFamilies(const Aws::Vector<Aws::String>& value) { m_supportedInstanceFamiliesHasBeenSet = true; m_supportedInstanceFamilies = value; }
    inline void SetSupportedInstanceFamilies(Aws::Vector<Aws::String>&& value) { m_supportedInstanceFamiliesHasBeenSet = true; m_supportedInstanceFamilies = std::move(value); }
    inline Image& WithSupportedInstanceFamilies(const Aws::Vector<Aws::String>& value) { SetSupportedInstanceFamilies(value); return *this;}
    inline Image& WithSupportedInstanceFamilies(Aws::Vector<Aws::String>&& value) { SetSupportedInstanceFamilies(std::move(value)); return *this;}
    inline Image& AddSupportedInstanceFamilies(const Aws::String& value) { m_supportedInstanceFamiliesHasBeenSet = true; m_supportedInstanceFamilies.push_back(value); return *this; }
    inline Image& AddSupportedInstanceFamilies(Aws::String&& value) { m_supportedInstanceFamiliesHasBeenSet = true; m_supportedInstanceFamilies.push_back(std::move(value)); return *this; }
    inline Image& AddSupportedInstanceFamilies(const char* value) { m_supportedInstanceFamiliesHasBeenSet = true; m_supportedInstanceFamilies.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether dynamic app providers are enabled within an AppStream 2.0
     * image or not.</p>
     */
    inline const DynamicAppProvidersEnabled& GetDynamicAppProvidersEnabled() const{ return m_dynamicAppProvidersEnabled; }
    inline bool DynamicAppProvidersEnabledHasBeenSet() const { return m_dynamicAppProvidersEnabledHasBeenSet; }
    inline void SetDynamicAppProvidersEnabled(const DynamicAppProvidersEnabled& value) { m_dynamicAppProvidersEnabledHasBeenSet = true; m_dynamicAppProvidersEnabled = value; }
    inline void SetDynamicAppProvidersEnabled(DynamicAppProvidersEnabled&& value) { m_dynamicAppProvidersEnabledHasBeenSet = true; m_dynamicAppProvidersEnabled = std::move(value); }
    inline Image& WithDynamicAppProvidersEnabled(const DynamicAppProvidersEnabled& value) { SetDynamicAppProvidersEnabled(value); return *this;}
    inline Image& WithDynamicAppProvidersEnabled(DynamicAppProvidersEnabled&& value) { SetDynamicAppProvidersEnabled(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the image is shared with another account ID.</p>
     */
    inline const ImageSharedWithOthers& GetImageSharedWithOthers() const{ return m_imageSharedWithOthers; }
    inline bool ImageSharedWithOthersHasBeenSet() const { return m_imageSharedWithOthersHasBeenSet; }
    inline void SetImageSharedWithOthers(const ImageSharedWithOthers& value) { m_imageSharedWithOthersHasBeenSet = true; m_imageSharedWithOthers = value; }
    inline void SetImageSharedWithOthers(ImageSharedWithOthers&& value) { m_imageSharedWithOthersHasBeenSet = true; m_imageSharedWithOthers = std::move(value); }
    inline Image& WithImageSharedWithOthers(const ImageSharedWithOthers& value) { SetImageSharedWithOthers(value); return *this;}
    inline Image& WithImageSharedWithOthers(ImageSharedWithOthers&& value) { SetImageSharedWithOthers(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_baseImageArn;
    bool m_baseImageArnHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    ImageState m_state;
    bool m_stateHasBeenSet = false;

    VisibilityType m_visibility;
    bool m_visibilityHasBeenSet = false;

    bool m_imageBuilderSupported;
    bool m_imageBuilderSupportedHasBeenSet = false;

    Aws::String m_imageBuilderName;
    bool m_imageBuilderNameHasBeenSet = false;

    PlatformType m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ImageStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet = false;

    Aws::Vector<Application> m_applications;
    bool m_applicationsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_publicBaseImageReleasedDate;
    bool m_publicBaseImageReleasedDateHasBeenSet = false;

    Aws::String m_appstreamAgentVersion;
    bool m_appstreamAgentVersionHasBeenSet = false;

    ImagePermissions m_imagePermissions;
    bool m_imagePermissionsHasBeenSet = false;

    Aws::Vector<ResourceError> m_imageErrors;
    bool m_imageErrorsHasBeenSet = false;

    LatestAppstreamAgentVersion m_latestAppstreamAgentVersion;
    bool m_latestAppstreamAgentVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedInstanceFamilies;
    bool m_supportedInstanceFamiliesHasBeenSet = false;

    DynamicAppProvidersEnabled m_dynamicAppProvidersEnabled;
    bool m_dynamicAppProvidersEnabledHasBeenSet = false;

    ImageSharedWithOthers m_imageSharedWithOthers;
    bool m_imageSharedWithOthersHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
