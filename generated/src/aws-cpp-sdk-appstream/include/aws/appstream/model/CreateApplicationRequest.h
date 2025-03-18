/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/S3Location.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appstream/model/PlatformType.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class CreateApplicationRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API CreateApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the application. This name is visible to users when display name
     * is not specified.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateApplicationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the application. This name is visible to users in the
     * application catalog.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateApplicationRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
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
    CreateApplicationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location in S3 of the application icon.</p>
     */
    inline const S3Location& GetIconS3Location() const { return m_iconS3Location; }
    inline bool IconS3LocationHasBeenSet() const { return m_iconS3LocationHasBeenSet; }
    template<typename IconS3LocationT = S3Location>
    void SetIconS3Location(IconS3LocationT&& value) { m_iconS3LocationHasBeenSet = true; m_iconS3Location = std::forward<IconS3LocationT>(value); }
    template<typename IconS3LocationT = S3Location>
    CreateApplicationRequest& WithIconS3Location(IconS3LocationT&& value) { SetIconS3Location(std::forward<IconS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch path of the application.</p>
     */
    inline const Aws::String& GetLaunchPath() const { return m_launchPath; }
    inline bool LaunchPathHasBeenSet() const { return m_launchPathHasBeenSet; }
    template<typename LaunchPathT = Aws::String>
    void SetLaunchPath(LaunchPathT&& value) { m_launchPathHasBeenSet = true; m_launchPath = std::forward<LaunchPathT>(value); }
    template<typename LaunchPathT = Aws::String>
    CreateApplicationRequest& WithLaunchPath(LaunchPathT&& value) { SetLaunchPath(std::forward<LaunchPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The working directory of the application.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const { return m_workingDirectory; }
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }
    template<typename WorkingDirectoryT = Aws::String>
    void SetWorkingDirectory(WorkingDirectoryT&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::forward<WorkingDirectoryT>(value); }
    template<typename WorkingDirectoryT = Aws::String>
    CreateApplicationRequest& WithWorkingDirectory(WorkingDirectoryT&& value) { SetWorkingDirectory(std::forward<WorkingDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch parameters of the application.</p>
     */
    inline const Aws::String& GetLaunchParameters() const { return m_launchParameters; }
    inline bool LaunchParametersHasBeenSet() const { return m_launchParametersHasBeenSet; }
    template<typename LaunchParametersT = Aws::String>
    void SetLaunchParameters(LaunchParametersT&& value) { m_launchParametersHasBeenSet = true; m_launchParameters = std::forward<LaunchParametersT>(value); }
    template<typename LaunchParametersT = Aws::String>
    CreateApplicationRequest& WithLaunchParameters(LaunchParametersT&& value) { SetLaunchParameters(std::forward<LaunchParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platforms the application supports. WINDOWS_SERVER_2019 and AMAZON_LINUX2
     * are supported for Elastic fleets.</p>
     */
    inline const Aws::Vector<PlatformType>& GetPlatforms() const { return m_platforms; }
    inline bool PlatformsHasBeenSet() const { return m_platformsHasBeenSet; }
    template<typename PlatformsT = Aws::Vector<PlatformType>>
    void SetPlatforms(PlatformsT&& value) { m_platformsHasBeenSet = true; m_platforms = std::forward<PlatformsT>(value); }
    template<typename PlatformsT = Aws::Vector<PlatformType>>
    CreateApplicationRequest& WithPlatforms(PlatformsT&& value) { SetPlatforms(std::forward<PlatformsT>(value)); return *this;}
    inline CreateApplicationRequest& AddPlatforms(PlatformType value) { m_platformsHasBeenSet = true; m_platforms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance families the application supports. Valid values are
     * GENERAL_PURPOSE and GRAPHICS_G4.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceFamilies() const { return m_instanceFamilies; }
    inline bool InstanceFamiliesHasBeenSet() const { return m_instanceFamiliesHasBeenSet; }
    template<typename InstanceFamiliesT = Aws::Vector<Aws::String>>
    void SetInstanceFamilies(InstanceFamiliesT&& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies = std::forward<InstanceFamiliesT>(value); }
    template<typename InstanceFamiliesT = Aws::Vector<Aws::String>>
    CreateApplicationRequest& WithInstanceFamilies(InstanceFamiliesT&& value) { SetInstanceFamilies(std::forward<InstanceFamiliesT>(value)); return *this;}
    template<typename InstanceFamiliesT = Aws::String>
    CreateApplicationRequest& AddInstanceFamilies(InstanceFamiliesT&& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies.emplace_back(std::forward<InstanceFamiliesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The app block ARN to which the application should be associated</p>
     */
    inline const Aws::String& GetAppBlockArn() const { return m_appBlockArn; }
    inline bool AppBlockArnHasBeenSet() const { return m_appBlockArnHasBeenSet; }
    template<typename AppBlockArnT = Aws::String>
    void SetAppBlockArn(AppBlockArnT&& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = std::forward<AppBlockArnT>(value); }
    template<typename AppBlockArnT = Aws::String>
    CreateApplicationRequest& WithAppBlockArn(AppBlockArnT&& value) { SetAppBlockArn(std::forward<AppBlockArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateApplicationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateApplicationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    S3Location m_iconS3Location;
    bool m_iconS3LocationHasBeenSet = false;

    Aws::String m_launchPath;
    bool m_launchPathHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;

    Aws::String m_launchParameters;
    bool m_launchParametersHasBeenSet = false;

    Aws::Vector<PlatformType> m_platforms;
    bool m_platformsHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceFamilies;
    bool m_instanceFamiliesHasBeenSet = false;

    Aws::String m_appBlockArn;
    bool m_appBlockArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
