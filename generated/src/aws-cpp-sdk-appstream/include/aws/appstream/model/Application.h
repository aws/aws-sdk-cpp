/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appstream/model/S3Location.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appstream/model/PlatformType.h>
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
   * <p>Describes an application in the application catalog.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/Application">AWS
   * API Reference</a></p>
   */
  class Application
  {
  public:
    AWS_APPSTREAM_API Application() = default;
    AWS_APPSTREAM_API Application(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Application& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Application& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Application& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline const Aws::String& GetIconURL() const { return m_iconURL; }
    inline bool IconURLHasBeenSet() const { return m_iconURLHasBeenSet; }
    template<typename IconURLT = Aws::String>
    void SetIconURL(IconURLT&& value) { m_iconURLHasBeenSet = true; m_iconURL = std::forward<IconURLT>(value); }
    template<typename IconURLT = Aws::String>
    Application& WithIconURL(IconURLT&& value) { SetIconURL(std::forward<IconURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline const Aws::String& GetLaunchPath() const { return m_launchPath; }
    inline bool LaunchPathHasBeenSet() const { return m_launchPathHasBeenSet; }
    template<typename LaunchPathT = Aws::String>
    void SetLaunchPath(LaunchPathT&& value) { m_launchPathHasBeenSet = true; m_launchPath = std::forward<LaunchPathT>(value); }
    template<typename LaunchPathT = Aws::String>
    Application& WithLaunchPath(LaunchPathT&& value) { SetLaunchPath(std::forward<LaunchPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline const Aws::String& GetLaunchParameters() const { return m_launchParameters; }
    inline bool LaunchParametersHasBeenSet() const { return m_launchParametersHasBeenSet; }
    template<typename LaunchParametersT = Aws::String>
    void SetLaunchParameters(LaunchParametersT&& value) { m_launchParametersHasBeenSet = true; m_launchParameters = std::forward<LaunchParametersT>(value); }
    template<typename LaunchParametersT = Aws::String>
    Application& WithLaunchParameters(LaunchParametersT&& value) { SetLaunchParameters(std::forward<LaunchParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If there is a problem, the application can be disabled after image
     * creation.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline Application& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    Application& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
    Application& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
      m_metadataHasBeenSet = true; m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The working directory for the application.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const { return m_workingDirectory; }
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }
    template<typename WorkingDirectoryT = Aws::String>
    void SetWorkingDirectory(WorkingDirectoryT&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::forward<WorkingDirectoryT>(value); }
    template<typename WorkingDirectoryT = Aws::String>
    Application& WithWorkingDirectory(WorkingDirectoryT&& value) { SetWorkingDirectory(std::forward<WorkingDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Application& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the application.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Application& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app block ARN of the application.</p>
     */
    inline const Aws::String& GetAppBlockArn() const { return m_appBlockArn; }
    inline bool AppBlockArnHasBeenSet() const { return m_appBlockArnHasBeenSet; }
    template<typename AppBlockArnT = Aws::String>
    void SetAppBlockArn(AppBlockArnT&& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = std::forward<AppBlockArnT>(value); }
    template<typename AppBlockArnT = Aws::String>
    Application& WithAppBlockArn(AppBlockArnT&& value) { SetAppBlockArn(std::forward<AppBlockArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location of the application icon.</p>
     */
    inline const S3Location& GetIconS3Location() const { return m_iconS3Location; }
    inline bool IconS3LocationHasBeenSet() const { return m_iconS3LocationHasBeenSet; }
    template<typename IconS3LocationT = S3Location>
    void SetIconS3Location(IconS3LocationT&& value) { m_iconS3LocationHasBeenSet = true; m_iconS3Location = std::forward<IconS3LocationT>(value); }
    template<typename IconS3LocationT = S3Location>
    Application& WithIconS3Location(IconS3LocationT&& value) { SetIconS3Location(std::forward<IconS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platforms on which the application can run.</p>
     */
    inline const Aws::Vector<PlatformType>& GetPlatforms() const { return m_platforms; }
    inline bool PlatformsHasBeenSet() const { return m_platformsHasBeenSet; }
    template<typename PlatformsT = Aws::Vector<PlatformType>>
    void SetPlatforms(PlatformsT&& value) { m_platformsHasBeenSet = true; m_platforms = std::forward<PlatformsT>(value); }
    template<typename PlatformsT = Aws::Vector<PlatformType>>
    Application& WithPlatforms(PlatformsT&& value) { SetPlatforms(std::forward<PlatformsT>(value)); return *this;}
    inline Application& AddPlatforms(PlatformType value) { m_platformsHasBeenSet = true; m_platforms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance families for the application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceFamilies() const { return m_instanceFamilies; }
    inline bool InstanceFamiliesHasBeenSet() const { return m_instanceFamiliesHasBeenSet; }
    template<typename InstanceFamiliesT = Aws::Vector<Aws::String>>
    void SetInstanceFamilies(InstanceFamiliesT&& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies = std::forward<InstanceFamiliesT>(value); }
    template<typename InstanceFamiliesT = Aws::Vector<Aws::String>>
    Application& WithInstanceFamilies(InstanceFamiliesT&& value) { SetInstanceFamilies(std::forward<InstanceFamiliesT>(value)); return *this;}
    template<typename InstanceFamiliesT = Aws::String>
    Application& AddInstanceFamilies(InstanceFamiliesT&& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies.emplace_back(std::forward<InstanceFamiliesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the application was created within the app block.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Application& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_iconURL;
    bool m_iconURLHasBeenSet = false;

    Aws::String m_launchPath;
    bool m_launchPathHasBeenSet = false;

    Aws::String m_launchParameters;
    bool m_launchParametersHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_appBlockArn;
    bool m_appBlockArnHasBeenSet = false;

    S3Location m_iconS3Location;
    bool m_iconS3LocationHasBeenSet = false;

    Aws::Vector<PlatformType> m_platforms;
    bool m_platformsHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceFamilies;
    bool m_instanceFamiliesHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
