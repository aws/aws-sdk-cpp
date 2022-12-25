/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ImageType.h>
#include <aws/imagebuilder/model/Platform.h>
#include <aws/imagebuilder/model/ImageState.h>
#include <aws/imagebuilder/model/OutputResources.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/BuildType.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>An image summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImageSummary">AWS
   * API Reference</a></p>
   */
  class ImageSummary
  {
  public:
    AWS_IMAGEBUILDER_API ImageSummary();
    AWS_IMAGEBUILDER_API ImageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ImageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline ImageSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline ImageSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline ImageSummary& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline ImageSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline ImageSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline ImageSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies whether this is an AMI or container image.</p>
     */
    inline const ImageType& GetType() const{ return m_type; }

    /**
     * <p>Specifies whether this is an AMI or container image.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies whether this is an AMI or container image.</p>
     */
    inline void SetType(const ImageType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies whether this is an AMI or container image.</p>
     */
    inline void SetType(ImageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies whether this is an AMI or container image.</p>
     */
    inline ImageSummary& WithType(const ImageType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies whether this is an AMI or container image.</p>
     */
    inline ImageSummary& WithType(ImageType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The version of the image.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the image.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the image.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the image.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the image.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the image.</p>
     */
    inline ImageSummary& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the image.</p>
     */
    inline ImageSummary& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the image.</p>
     */
    inline ImageSummary& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The platform of the image.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform of the image.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform of the image.</p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform of the image.</p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform of the image.</p>
     */
    inline ImageSummary& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform of the image.</p>
     */
    inline ImageSummary& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline const Aws::String& GetOsVersion() const{ return m_osVersion; }

    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }

    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline void SetOsVersion(const Aws::String& value) { m_osVersionHasBeenSet = true; m_osVersion = value; }

    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline void SetOsVersion(Aws::String&& value) { m_osVersionHasBeenSet = true; m_osVersion = std::move(value); }

    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline void SetOsVersion(const char* value) { m_osVersionHasBeenSet = true; m_osVersion.assign(value); }

    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline ImageSummary& WithOsVersion(const Aws::String& value) { SetOsVersion(value); return *this;}

    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline ImageSummary& WithOsVersion(Aws::String&& value) { SetOsVersion(std::move(value)); return *this;}

    /**
     * <p>The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline ImageSummary& WithOsVersion(const char* value) { SetOsVersion(value); return *this;}


    /**
     * <p>The state of the image.</p>
     */
    inline const ImageState& GetState() const{ return m_state; }

    /**
     * <p>The state of the image.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the image.</p>
     */
    inline void SetState(const ImageState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the image.</p>
     */
    inline void SetState(ImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the image.</p>
     */
    inline ImageSummary& WithState(const ImageState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the image.</p>
     */
    inline ImageSummary& WithState(ImageState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The owner of the image.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the image.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the image.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the image.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the image.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the image.</p>
     */
    inline ImageSummary& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the image.</p>
     */
    inline ImageSummary& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the image.</p>
     */
    inline ImageSummary& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The date on which this image was created.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date on which this image was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date on which this image was created.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date on which this image was created.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date on which this image was created.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The date on which this image was created.</p>
     */
    inline ImageSummary& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date on which this image was created.</p>
     */
    inline ImageSummary& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The date on which this image was created.</p>
     */
    inline ImageSummary& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}


    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline const OutputResources& GetOutputResources() const{ return m_outputResources; }

    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline bool OutputResourcesHasBeenSet() const { return m_outputResourcesHasBeenSet; }

    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline void SetOutputResources(const OutputResources& value) { m_outputResourcesHasBeenSet = true; m_outputResources = value; }

    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline void SetOutputResources(OutputResources&& value) { m_outputResourcesHasBeenSet = true; m_outputResources = std::move(value); }

    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline ImageSummary& WithOutputResources(const OutputResources& value) { SetOutputResources(value); return *this;}

    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline ImageSummary& WithOutputResources(OutputResources&& value) { SetOutputResources(std::move(value)); return *this;}


    /**
     * <p>The tags of the image.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the image.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of the image.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the image.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of the image.</p>
     */
    inline ImageSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the image.</p>
     */
    inline ImageSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the image.</p>
     */
    inline ImageSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline ImageSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline ImageSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline ImageSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline ImageSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline ImageSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline ImageSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Indicates the type of build that created this image. The build can be
     * initiated in the following ways:</p> <ul> <li> <p> <b>USER_INITIATED</b> – A
     * manual pipeline build request.</p> </li> <li> <p> <b>SCHEDULED</b> – A pipeline
     * build initiated by a cron expression in the Image Builder pipeline, or from
     * EventBridge.</p> </li> <li> <p> <b>IMPORT</b> – A VM import created the image to
     * use as the base image for the recipe.</p> </li> </ul>
     */
    inline const BuildType& GetBuildType() const{ return m_buildType; }

    /**
     * <p>Indicates the type of build that created this image. The build can be
     * initiated in the following ways:</p> <ul> <li> <p> <b>USER_INITIATED</b> – A
     * manual pipeline build request.</p> </li> <li> <p> <b>SCHEDULED</b> – A pipeline
     * build initiated by a cron expression in the Image Builder pipeline, or from
     * EventBridge.</p> </li> <li> <p> <b>IMPORT</b> – A VM import created the image to
     * use as the base image for the recipe.</p> </li> </ul>
     */
    inline bool BuildTypeHasBeenSet() const { return m_buildTypeHasBeenSet; }

    /**
     * <p>Indicates the type of build that created this image. The build can be
     * initiated in the following ways:</p> <ul> <li> <p> <b>USER_INITIATED</b> – A
     * manual pipeline build request.</p> </li> <li> <p> <b>SCHEDULED</b> – A pipeline
     * build initiated by a cron expression in the Image Builder pipeline, or from
     * EventBridge.</p> </li> <li> <p> <b>IMPORT</b> – A VM import created the image to
     * use as the base image for the recipe.</p> </li> </ul>
     */
    inline void SetBuildType(const BuildType& value) { m_buildTypeHasBeenSet = true; m_buildType = value; }

    /**
     * <p>Indicates the type of build that created this image. The build can be
     * initiated in the following ways:</p> <ul> <li> <p> <b>USER_INITIATED</b> – A
     * manual pipeline build request.</p> </li> <li> <p> <b>SCHEDULED</b> – A pipeline
     * build initiated by a cron expression in the Image Builder pipeline, or from
     * EventBridge.</p> </li> <li> <p> <b>IMPORT</b> – A VM import created the image to
     * use as the base image for the recipe.</p> </li> </ul>
     */
    inline void SetBuildType(BuildType&& value) { m_buildTypeHasBeenSet = true; m_buildType = std::move(value); }

    /**
     * <p>Indicates the type of build that created this image. The build can be
     * initiated in the following ways:</p> <ul> <li> <p> <b>USER_INITIATED</b> – A
     * manual pipeline build request.</p> </li> <li> <p> <b>SCHEDULED</b> – A pipeline
     * build initiated by a cron expression in the Image Builder pipeline, or from
     * EventBridge.</p> </li> <li> <p> <b>IMPORT</b> – A VM import created the image to
     * use as the base image for the recipe.</p> </li> </ul>
     */
    inline ImageSummary& WithBuildType(const BuildType& value) { SetBuildType(value); return *this;}

    /**
     * <p>Indicates the type of build that created this image. The build can be
     * initiated in the following ways:</p> <ul> <li> <p> <b>USER_INITIATED</b> – A
     * manual pipeline build request.</p> </li> <li> <p> <b>SCHEDULED</b> – A pipeline
     * build initiated by a cron expression in the Image Builder pipeline, or from
     * EventBridge.</p> </li> <li> <p> <b>IMPORT</b> – A VM import created the image to
     * use as the base image for the recipe.</p> </li> </ul>
     */
    inline ImageSummary& WithBuildType(BuildType&& value) { SetBuildType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ImageType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_osVersion;
    bool m_osVersionHasBeenSet = false;

    ImageState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    OutputResources m_outputResources;
    bool m_outputResourcesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    BuildType m_buildType;
    bool m_buildTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
