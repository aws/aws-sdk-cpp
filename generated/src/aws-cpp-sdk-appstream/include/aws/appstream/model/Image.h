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
    AWS_APPSTREAM_API Image() = default;
    AWS_APPSTREAM_API Image(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Image& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Image& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the image.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Image& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the image from which this image was created.</p>
     */
    inline const Aws::String& GetBaseImageArn() const { return m_baseImageArn; }
    inline bool BaseImageArnHasBeenSet() const { return m_baseImageArnHasBeenSet; }
    template<typename BaseImageArnT = Aws::String>
    void SetBaseImageArn(BaseImageArnT&& value) { m_baseImageArnHasBeenSet = true; m_baseImageArn = std::forward<BaseImageArnT>(value); }
    template<typename BaseImageArnT = Aws::String>
    Image& WithBaseImageArn(BaseImageArnT&& value) { SetBaseImageArn(std::forward<BaseImageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Image& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image starts in the <code>PENDING</code> state. If image creation
     * succeeds, the state is <code>AVAILABLE</code>. If image creation fails, the
     * state is <code>FAILED</code>.</p>
     */
    inline ImageState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ImageState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Image& WithState(ImageState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the image is public or private.</p>
     */
    inline VisibilityType GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(VisibilityType value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline Image& WithVisibility(VisibilityType value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an image builder can be launched from this image.</p>
     */
    inline bool GetImageBuilderSupported() const { return m_imageBuilderSupported; }
    inline bool ImageBuilderSupportedHasBeenSet() const { return m_imageBuilderSupportedHasBeenSet; }
    inline void SetImageBuilderSupported(bool value) { m_imageBuilderSupportedHasBeenSet = true; m_imageBuilderSupported = value; }
    inline Image& WithImageBuilderSupported(bool value) { SetImageBuilderSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the image builder that was used to create the private image. If
     * the image is shared, copied, or updated by using Managed Image Updates, this
     * value is null.</p>
     */
    inline const Aws::String& GetImageBuilderName() const { return m_imageBuilderName; }
    inline bool ImageBuilderNameHasBeenSet() const { return m_imageBuilderNameHasBeenSet; }
    template<typename ImageBuilderNameT = Aws::String>
    void SetImageBuilderName(ImageBuilderNameT&& value) { m_imageBuilderNameHasBeenSet = true; m_imageBuilderName = std::forward<ImageBuilderNameT>(value); }
    template<typename ImageBuilderNameT = Aws::String>
    Image& WithImageBuilderName(ImageBuilderNameT&& value) { SetImageBuilderName(std::forward<ImageBuilderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform of the image.</p>
     */
    inline PlatformType GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(PlatformType value) { m_platformHasBeenSet = true; m_platform = value; }
    inline Image& WithPlatform(PlatformType value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to display.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Image& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline const ImageStateChangeReason& GetStateChangeReason() const { return m_stateChangeReason; }
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }
    template<typename StateChangeReasonT = ImageStateChangeReason>
    void SetStateChangeReason(StateChangeReasonT&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::forward<StateChangeReasonT>(value); }
    template<typename StateChangeReasonT = ImageStateChangeReason>
    Image& WithStateChangeReason(StateChangeReasonT&& value) { SetStateChangeReason(std::forward<StateChangeReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The applications associated with the image.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const { return m_applications; }
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
    template<typename ApplicationsT = Aws::Vector<Application>>
    void SetApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications = std::forward<ApplicationsT>(value); }
    template<typename ApplicationsT = Aws::Vector<Application>>
    Image& WithApplications(ApplicationsT&& value) { SetApplications(std::forward<ApplicationsT>(value)); return *this;}
    template<typename ApplicationsT = Application>
    Image& AddApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications.emplace_back(std::forward<ApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time the image was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Image& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The release date of the public base image. For private images, this date is
     * the release date of the base image from which the image was created.</p>
     */
    inline const Aws::Utils::DateTime& GetPublicBaseImageReleasedDate() const { return m_publicBaseImageReleasedDate; }
    inline bool PublicBaseImageReleasedDateHasBeenSet() const { return m_publicBaseImageReleasedDateHasBeenSet; }
    template<typename PublicBaseImageReleasedDateT = Aws::Utils::DateTime>
    void SetPublicBaseImageReleasedDate(PublicBaseImageReleasedDateT&& value) { m_publicBaseImageReleasedDateHasBeenSet = true; m_publicBaseImageReleasedDate = std::forward<PublicBaseImageReleasedDateT>(value); }
    template<typename PublicBaseImageReleasedDateT = Aws::Utils::DateTime>
    Image& WithPublicBaseImageReleasedDate(PublicBaseImageReleasedDateT&& value) { SetPublicBaseImageReleasedDate(std::forward<PublicBaseImageReleasedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the AppStream 2.0 agent to use for instances that are launched
     * from this image. </p>
     */
    inline const Aws::String& GetAppstreamAgentVersion() const { return m_appstreamAgentVersion; }
    inline bool AppstreamAgentVersionHasBeenSet() const { return m_appstreamAgentVersionHasBeenSet; }
    template<typename AppstreamAgentVersionT = Aws::String>
    void SetAppstreamAgentVersion(AppstreamAgentVersionT&& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = std::forward<AppstreamAgentVersionT>(value); }
    template<typename AppstreamAgentVersionT = Aws::String>
    Image& WithAppstreamAgentVersion(AppstreamAgentVersionT&& value) { SetAppstreamAgentVersion(std::forward<AppstreamAgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions to provide to the destination AWS account for the specified
     * image.</p>
     */
    inline const ImagePermissions& GetImagePermissions() const { return m_imagePermissions; }
    inline bool ImagePermissionsHasBeenSet() const { return m_imagePermissionsHasBeenSet; }
    template<typename ImagePermissionsT = ImagePermissions>
    void SetImagePermissions(ImagePermissionsT&& value) { m_imagePermissionsHasBeenSet = true; m_imagePermissions = std::forward<ImagePermissionsT>(value); }
    template<typename ImagePermissionsT = ImagePermissions>
    Image& WithImagePermissions(ImagePermissionsT&& value) { SetImagePermissions(std::forward<ImagePermissionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the errors that are returned when a new image can't be created.</p>
     */
    inline const Aws::Vector<ResourceError>& GetImageErrors() const { return m_imageErrors; }
    inline bool ImageErrorsHasBeenSet() const { return m_imageErrorsHasBeenSet; }
    template<typename ImageErrorsT = Aws::Vector<ResourceError>>
    void SetImageErrors(ImageErrorsT&& value) { m_imageErrorsHasBeenSet = true; m_imageErrors = std::forward<ImageErrorsT>(value); }
    template<typename ImageErrorsT = Aws::Vector<ResourceError>>
    Image& WithImageErrors(ImageErrorsT&& value) { SetImageErrors(std::forward<ImageErrorsT>(value)); return *this;}
    template<typename ImageErrorsT = ResourceError>
    Image& AddImageErrors(ImageErrorsT&& value) { m_imageErrorsHasBeenSet = true; m_imageErrors.emplace_back(std::forward<ImageErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the image is using the latest AppStream 2.0 agent version
     * or not.</p>
     */
    inline LatestAppstreamAgentVersion GetLatestAppstreamAgentVersion() const { return m_latestAppstreamAgentVersion; }
    inline bool LatestAppstreamAgentVersionHasBeenSet() const { return m_latestAppstreamAgentVersionHasBeenSet; }
    inline void SetLatestAppstreamAgentVersion(LatestAppstreamAgentVersion value) { m_latestAppstreamAgentVersionHasBeenSet = true; m_latestAppstreamAgentVersion = value; }
    inline Image& WithLatestAppstreamAgentVersion(LatestAppstreamAgentVersion value) { SetLatestAppstreamAgentVersion(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetSupportedInstanceFamilies() const { return m_supportedInstanceFamilies; }
    inline bool SupportedInstanceFamiliesHasBeenSet() const { return m_supportedInstanceFamiliesHasBeenSet; }
    template<typename SupportedInstanceFamiliesT = Aws::Vector<Aws::String>>
    void SetSupportedInstanceFamilies(SupportedInstanceFamiliesT&& value) { m_supportedInstanceFamiliesHasBeenSet = true; m_supportedInstanceFamilies = std::forward<SupportedInstanceFamiliesT>(value); }
    template<typename SupportedInstanceFamiliesT = Aws::Vector<Aws::String>>
    Image& WithSupportedInstanceFamilies(SupportedInstanceFamiliesT&& value) { SetSupportedInstanceFamilies(std::forward<SupportedInstanceFamiliesT>(value)); return *this;}
    template<typename SupportedInstanceFamiliesT = Aws::String>
    Image& AddSupportedInstanceFamilies(SupportedInstanceFamiliesT&& value) { m_supportedInstanceFamiliesHasBeenSet = true; m_supportedInstanceFamilies.emplace_back(std::forward<SupportedInstanceFamiliesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether dynamic app providers are enabled within an AppStream 2.0
     * image or not.</p>
     */
    inline DynamicAppProvidersEnabled GetDynamicAppProvidersEnabled() const { return m_dynamicAppProvidersEnabled; }
    inline bool DynamicAppProvidersEnabledHasBeenSet() const { return m_dynamicAppProvidersEnabledHasBeenSet; }
    inline void SetDynamicAppProvidersEnabled(DynamicAppProvidersEnabled value) { m_dynamicAppProvidersEnabledHasBeenSet = true; m_dynamicAppProvidersEnabled = value; }
    inline Image& WithDynamicAppProvidersEnabled(DynamicAppProvidersEnabled value) { SetDynamicAppProvidersEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the image is shared with another account ID.</p>
     */
    inline ImageSharedWithOthers GetImageSharedWithOthers() const { return m_imageSharedWithOthers; }
    inline bool ImageSharedWithOthersHasBeenSet() const { return m_imageSharedWithOthersHasBeenSet; }
    inline void SetImageSharedWithOthers(ImageSharedWithOthers value) { m_imageSharedWithOthersHasBeenSet = true; m_imageSharedWithOthers = value; }
    inline Image& WithImageSharedWithOthers(ImageSharedWithOthers value) { SetImageSharedWithOthers(value); return *this;}
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

    ImageState m_state{ImageState::NOT_SET};
    bool m_stateHasBeenSet = false;

    VisibilityType m_visibility{VisibilityType::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    bool m_imageBuilderSupported{false};
    bool m_imageBuilderSupportedHasBeenSet = false;

    Aws::String m_imageBuilderName;
    bool m_imageBuilderNameHasBeenSet = false;

    PlatformType m_platform{PlatformType::NOT_SET};
    bool m_platformHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ImageStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet = false;

    Aws::Vector<Application> m_applications;
    bool m_applicationsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_publicBaseImageReleasedDate{};
    bool m_publicBaseImageReleasedDateHasBeenSet = false;

    Aws::String m_appstreamAgentVersion;
    bool m_appstreamAgentVersionHasBeenSet = false;

    ImagePermissions m_imagePermissions;
    bool m_imagePermissionsHasBeenSet = false;

    Aws::Vector<ResourceError> m_imageErrors;
    bool m_imageErrorsHasBeenSet = false;

    LatestAppstreamAgentVersion m_latestAppstreamAgentVersion{LatestAppstreamAgentVersion::NOT_SET};
    bool m_latestAppstreamAgentVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedInstanceFamilies;
    bool m_supportedInstanceFamiliesHasBeenSet = false;

    DynamicAppProvidersEnabled m_dynamicAppProvidersEnabled{DynamicAppProvidersEnabled::NOT_SET};
    bool m_dynamicAppProvidersEnabledHasBeenSet = false;

    ImageSharedWithOthers m_imageSharedWithOthers{ImageSharedWithOthers::NOT_SET};
    bool m_imageSharedWithOthersHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
