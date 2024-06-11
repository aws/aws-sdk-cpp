﻿/**
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
    AWS_APPSTREAM_API CreateApplicationRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the application. This name is visible to users in the
     * application catalog.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateApplicationRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateApplicationRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location in S3 of the application icon.</p>
     */
    inline const S3Location& GetIconS3Location() const{ return m_iconS3Location; }
    inline bool IconS3LocationHasBeenSet() const { return m_iconS3LocationHasBeenSet; }
    inline void SetIconS3Location(const S3Location& value) { m_iconS3LocationHasBeenSet = true; m_iconS3Location = value; }
    inline void SetIconS3Location(S3Location&& value) { m_iconS3LocationHasBeenSet = true; m_iconS3Location = std::move(value); }
    inline CreateApplicationRequest& WithIconS3Location(const S3Location& value) { SetIconS3Location(value); return *this;}
    inline CreateApplicationRequest& WithIconS3Location(S3Location&& value) { SetIconS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch path of the application.</p>
     */
    inline const Aws::String& GetLaunchPath() const{ return m_launchPath; }
    inline bool LaunchPathHasBeenSet() const { return m_launchPathHasBeenSet; }
    inline void SetLaunchPath(const Aws::String& value) { m_launchPathHasBeenSet = true; m_launchPath = value; }
    inline void SetLaunchPath(Aws::String&& value) { m_launchPathHasBeenSet = true; m_launchPath = std::move(value); }
    inline void SetLaunchPath(const char* value) { m_launchPathHasBeenSet = true; m_launchPath.assign(value); }
    inline CreateApplicationRequest& WithLaunchPath(const Aws::String& value) { SetLaunchPath(value); return *this;}
    inline CreateApplicationRequest& WithLaunchPath(Aws::String&& value) { SetLaunchPath(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithLaunchPath(const char* value) { SetLaunchPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The working directory of the application.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::move(value); }
    inline void SetWorkingDirectory(const char* value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory.assign(value); }
    inline CreateApplicationRequest& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}
    inline CreateApplicationRequest& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch parameters of the application.</p>
     */
    inline const Aws::String& GetLaunchParameters() const{ return m_launchParameters; }
    inline bool LaunchParametersHasBeenSet() const { return m_launchParametersHasBeenSet; }
    inline void SetLaunchParameters(const Aws::String& value) { m_launchParametersHasBeenSet = true; m_launchParameters = value; }
    inline void SetLaunchParameters(Aws::String&& value) { m_launchParametersHasBeenSet = true; m_launchParameters = std::move(value); }
    inline void SetLaunchParameters(const char* value) { m_launchParametersHasBeenSet = true; m_launchParameters.assign(value); }
    inline CreateApplicationRequest& WithLaunchParameters(const Aws::String& value) { SetLaunchParameters(value); return *this;}
    inline CreateApplicationRequest& WithLaunchParameters(Aws::String&& value) { SetLaunchParameters(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithLaunchParameters(const char* value) { SetLaunchParameters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platforms the application supports. WINDOWS_SERVER_2019 and AMAZON_LINUX2
     * are supported for Elastic fleets.</p>
     */
    inline const Aws::Vector<PlatformType>& GetPlatforms() const{ return m_platforms; }
    inline bool PlatformsHasBeenSet() const { return m_platformsHasBeenSet; }
    inline void SetPlatforms(const Aws::Vector<PlatformType>& value) { m_platformsHasBeenSet = true; m_platforms = value; }
    inline void SetPlatforms(Aws::Vector<PlatformType>&& value) { m_platformsHasBeenSet = true; m_platforms = std::move(value); }
    inline CreateApplicationRequest& WithPlatforms(const Aws::Vector<PlatformType>& value) { SetPlatforms(value); return *this;}
    inline CreateApplicationRequest& WithPlatforms(Aws::Vector<PlatformType>&& value) { SetPlatforms(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddPlatforms(const PlatformType& value) { m_platformsHasBeenSet = true; m_platforms.push_back(value); return *this; }
    inline CreateApplicationRequest& AddPlatforms(PlatformType&& value) { m_platformsHasBeenSet = true; m_platforms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance families the application supports. Valid values are
     * GENERAL_PURPOSE and GRAPHICS_G4.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceFamilies() const{ return m_instanceFamilies; }
    inline bool InstanceFamiliesHasBeenSet() const { return m_instanceFamiliesHasBeenSet; }
    inline void SetInstanceFamilies(const Aws::Vector<Aws::String>& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies = value; }
    inline void SetInstanceFamilies(Aws::Vector<Aws::String>&& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies = std::move(value); }
    inline CreateApplicationRequest& WithInstanceFamilies(const Aws::Vector<Aws::String>& value) { SetInstanceFamilies(value); return *this;}
    inline CreateApplicationRequest& WithInstanceFamilies(Aws::Vector<Aws::String>&& value) { SetInstanceFamilies(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddInstanceFamilies(const Aws::String& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies.push_back(value); return *this; }
    inline CreateApplicationRequest& AddInstanceFamilies(Aws::String&& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies.push_back(std::move(value)); return *this; }
    inline CreateApplicationRequest& AddInstanceFamilies(const char* value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The app block ARN to which the application should be associated</p>
     */
    inline const Aws::String& GetAppBlockArn() const{ return m_appBlockArn; }
    inline bool AppBlockArnHasBeenSet() const { return m_appBlockArnHasBeenSet; }
    inline void SetAppBlockArn(const Aws::String& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = value; }
    inline void SetAppBlockArn(Aws::String&& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = std::move(value); }
    inline void SetAppBlockArn(const char* value) { m_appBlockArnHasBeenSet = true; m_appBlockArn.assign(value); }
    inline CreateApplicationRequest& WithAppBlockArn(const Aws::String& value) { SetAppBlockArn(value); return *this;}
    inline CreateApplicationRequest& WithAppBlockArn(Aws::String&& value) { SetAppBlockArn(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithAppBlockArn(const char* value) { SetAppBlockArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateApplicationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateApplicationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateApplicationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateApplicationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateApplicationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateApplicationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateApplicationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateApplicationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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
