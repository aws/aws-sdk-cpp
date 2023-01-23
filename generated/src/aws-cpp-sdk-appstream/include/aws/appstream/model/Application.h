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
    AWS_APPSTREAM_API Application();
    AWS_APPSTREAM_API Application(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Application& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline Application& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline Application& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline Application& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The application name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The application name to display.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The application name to display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The application name to display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The application name to display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The application name to display.</p>
     */
    inline Application& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The application name to display.</p>
     */
    inline Application& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The application name to display.</p>
     */
    inline Application& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline const Aws::String& GetIconURL() const{ return m_iconURL; }

    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline bool IconURLHasBeenSet() const { return m_iconURLHasBeenSet; }

    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline void SetIconURL(const Aws::String& value) { m_iconURLHasBeenSet = true; m_iconURL = value; }

    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline void SetIconURL(Aws::String&& value) { m_iconURLHasBeenSet = true; m_iconURL = std::move(value); }

    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline void SetIconURL(const char* value) { m_iconURLHasBeenSet = true; m_iconURL.assign(value); }

    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline Application& WithIconURL(const Aws::String& value) { SetIconURL(value); return *this;}

    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline Application& WithIconURL(Aws::String&& value) { SetIconURL(std::move(value)); return *this;}

    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline Application& WithIconURL(const char* value) { SetIconURL(value); return *this;}


    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline const Aws::String& GetLaunchPath() const{ return m_launchPath; }

    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline bool LaunchPathHasBeenSet() const { return m_launchPathHasBeenSet; }

    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline void SetLaunchPath(const Aws::String& value) { m_launchPathHasBeenSet = true; m_launchPath = value; }

    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline void SetLaunchPath(Aws::String&& value) { m_launchPathHasBeenSet = true; m_launchPath = std::move(value); }

    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline void SetLaunchPath(const char* value) { m_launchPathHasBeenSet = true; m_launchPath.assign(value); }

    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline Application& WithLaunchPath(const Aws::String& value) { SetLaunchPath(value); return *this;}

    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline Application& WithLaunchPath(Aws::String&& value) { SetLaunchPath(std::move(value)); return *this;}

    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline Application& WithLaunchPath(const char* value) { SetLaunchPath(value); return *this;}


    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline const Aws::String& GetLaunchParameters() const{ return m_launchParameters; }

    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline bool LaunchParametersHasBeenSet() const { return m_launchParametersHasBeenSet; }

    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline void SetLaunchParameters(const Aws::String& value) { m_launchParametersHasBeenSet = true; m_launchParameters = value; }

    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline void SetLaunchParameters(Aws::String&& value) { m_launchParametersHasBeenSet = true; m_launchParameters = std::move(value); }

    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline void SetLaunchParameters(const char* value) { m_launchParametersHasBeenSet = true; m_launchParameters.assign(value); }

    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline Application& WithLaunchParameters(const Aws::String& value) { SetLaunchParameters(value); return *this;}

    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline Application& WithLaunchParameters(Aws::String&& value) { SetLaunchParameters(std::move(value)); return *this;}

    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline Application& WithLaunchParameters(const char* value) { SetLaunchParameters(value); return *this;}


    /**
     * <p>If there is a problem, the application can be disabled after image
     * creation.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>If there is a problem, the application can be disabled after image
     * creation.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>If there is a problem, the application can be disabled after image
     * creation.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>If there is a problem, the application can be disabled after image
     * creation.</p>
     */
    inline Application& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }


    /**
     * <p>The working directory for the application.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }

    /**
     * <p>The working directory for the application.</p>
     */
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }

    /**
     * <p>The working directory for the application.</p>
     */
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }

    /**
     * <p>The working directory for the application.</p>
     */
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::move(value); }

    /**
     * <p>The working directory for the application.</p>
     */
    inline void SetWorkingDirectory(const char* value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory.assign(value); }

    /**
     * <p>The working directory for the application.</p>
     */
    inline Application& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}

    /**
     * <p>The working directory for the application.</p>
     */
    inline Application& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}

    /**
     * <p>The working directory for the application.</p>
     */
    inline Application& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}


    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the application.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the application.</p>
     */
    inline Application& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the application.</p>
     */
    inline Application& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the application.</p>
     */
    inline Application& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the application.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the application.</p>
     */
    inline Application& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the application.</p>
     */
    inline Application& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the application.</p>
     */
    inline Application& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The app block ARN of the application.</p>
     */
    inline const Aws::String& GetAppBlockArn() const{ return m_appBlockArn; }

    /**
     * <p>The app block ARN of the application.</p>
     */
    inline bool AppBlockArnHasBeenSet() const { return m_appBlockArnHasBeenSet; }

    /**
     * <p>The app block ARN of the application.</p>
     */
    inline void SetAppBlockArn(const Aws::String& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = value; }

    /**
     * <p>The app block ARN of the application.</p>
     */
    inline void SetAppBlockArn(Aws::String&& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = std::move(value); }

    /**
     * <p>The app block ARN of the application.</p>
     */
    inline void SetAppBlockArn(const char* value) { m_appBlockArnHasBeenSet = true; m_appBlockArn.assign(value); }

    /**
     * <p>The app block ARN of the application.</p>
     */
    inline Application& WithAppBlockArn(const Aws::String& value) { SetAppBlockArn(value); return *this;}

    /**
     * <p>The app block ARN of the application.</p>
     */
    inline Application& WithAppBlockArn(Aws::String&& value) { SetAppBlockArn(std::move(value)); return *this;}

    /**
     * <p>The app block ARN of the application.</p>
     */
    inline Application& WithAppBlockArn(const char* value) { SetAppBlockArn(value); return *this;}


    /**
     * <p>The S3 location of the application icon.</p>
     */
    inline const S3Location& GetIconS3Location() const{ return m_iconS3Location; }

    /**
     * <p>The S3 location of the application icon.</p>
     */
    inline bool IconS3LocationHasBeenSet() const { return m_iconS3LocationHasBeenSet; }

    /**
     * <p>The S3 location of the application icon.</p>
     */
    inline void SetIconS3Location(const S3Location& value) { m_iconS3LocationHasBeenSet = true; m_iconS3Location = value; }

    /**
     * <p>The S3 location of the application icon.</p>
     */
    inline void SetIconS3Location(S3Location&& value) { m_iconS3LocationHasBeenSet = true; m_iconS3Location = std::move(value); }

    /**
     * <p>The S3 location of the application icon.</p>
     */
    inline Application& WithIconS3Location(const S3Location& value) { SetIconS3Location(value); return *this;}

    /**
     * <p>The S3 location of the application icon.</p>
     */
    inline Application& WithIconS3Location(S3Location&& value) { SetIconS3Location(std::move(value)); return *this;}


    /**
     * <p>The platforms on which the application can run.</p>
     */
    inline const Aws::Vector<PlatformType>& GetPlatforms() const{ return m_platforms; }

    /**
     * <p>The platforms on which the application can run.</p>
     */
    inline bool PlatformsHasBeenSet() const { return m_platformsHasBeenSet; }

    /**
     * <p>The platforms on which the application can run.</p>
     */
    inline void SetPlatforms(const Aws::Vector<PlatformType>& value) { m_platformsHasBeenSet = true; m_platforms = value; }

    /**
     * <p>The platforms on which the application can run.</p>
     */
    inline void SetPlatforms(Aws::Vector<PlatformType>&& value) { m_platformsHasBeenSet = true; m_platforms = std::move(value); }

    /**
     * <p>The platforms on which the application can run.</p>
     */
    inline Application& WithPlatforms(const Aws::Vector<PlatformType>& value) { SetPlatforms(value); return *this;}

    /**
     * <p>The platforms on which the application can run.</p>
     */
    inline Application& WithPlatforms(Aws::Vector<PlatformType>&& value) { SetPlatforms(std::move(value)); return *this;}

    /**
     * <p>The platforms on which the application can run.</p>
     */
    inline Application& AddPlatforms(const PlatformType& value) { m_platformsHasBeenSet = true; m_platforms.push_back(value); return *this; }

    /**
     * <p>The platforms on which the application can run.</p>
     */
    inline Application& AddPlatforms(PlatformType&& value) { m_platformsHasBeenSet = true; m_platforms.push_back(std::move(value)); return *this; }


    /**
     * <p>The instance families for the application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceFamilies() const{ return m_instanceFamilies; }

    /**
     * <p>The instance families for the application.</p>
     */
    inline bool InstanceFamiliesHasBeenSet() const { return m_instanceFamiliesHasBeenSet; }

    /**
     * <p>The instance families for the application.</p>
     */
    inline void SetInstanceFamilies(const Aws::Vector<Aws::String>& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies = value; }

    /**
     * <p>The instance families for the application.</p>
     */
    inline void SetInstanceFamilies(Aws::Vector<Aws::String>&& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies = std::move(value); }

    /**
     * <p>The instance families for the application.</p>
     */
    inline Application& WithInstanceFamilies(const Aws::Vector<Aws::String>& value) { SetInstanceFamilies(value); return *this;}

    /**
     * <p>The instance families for the application.</p>
     */
    inline Application& WithInstanceFamilies(Aws::Vector<Aws::String>&& value) { SetInstanceFamilies(std::move(value)); return *this;}

    /**
     * <p>The instance families for the application.</p>
     */
    inline Application& AddInstanceFamilies(const Aws::String& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies.push_back(value); return *this; }

    /**
     * <p>The instance families for the application.</p>
     */
    inline Application& AddInstanceFamilies(Aws::String&& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies.push_back(std::move(value)); return *this; }

    /**
     * <p>The instance families for the application.</p>
     */
    inline Application& AddInstanceFamilies(const char* value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies.push_back(value); return *this; }


    /**
     * <p>The time at which the application was created within the app block.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time at which the application was created within the app block.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time at which the application was created within the app block.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time at which the application was created within the app block.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time at which the application was created within the app block.</p>
     */
    inline Application& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time at which the application was created within the app block.</p>
     */
    inline Application& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}

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

    bool m_enabled;
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

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
