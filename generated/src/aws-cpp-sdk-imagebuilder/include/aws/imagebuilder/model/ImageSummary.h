﻿/**
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
#include <aws/imagebuilder/model/ImageSource.h>
#include <aws/core/utils/DateTime.h>
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ImageSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ImageSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ImageSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ImageSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ImageSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ImageSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this image produces an AMI or a container image.</p>
     */
    inline const ImageType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ImageType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ImageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ImageSummary& WithType(const ImageType& value) { SetType(value); return *this;}
    inline ImageSummary& WithType(ImageType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the image.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline ImageSummary& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline ImageSummary& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline ImageSummary& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image operating system platform, such as Linux or Windows.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline ImageSummary& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}
    inline ImageSummary& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system version of the instances that launch from this image.
     * For example, Amazon Linux 2, Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline const Aws::String& GetOsVersion() const{ return m_osVersion; }
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }
    inline void SetOsVersion(const Aws::String& value) { m_osVersionHasBeenSet = true; m_osVersion = value; }
    inline void SetOsVersion(Aws::String&& value) { m_osVersionHasBeenSet = true; m_osVersion = std::move(value); }
    inline void SetOsVersion(const char* value) { m_osVersionHasBeenSet = true; m_osVersion.assign(value); }
    inline ImageSummary& WithOsVersion(const Aws::String& value) { SetOsVersion(value); return *this;}
    inline ImageSummary& WithOsVersion(Aws::String&& value) { SetOsVersion(std::move(value)); return *this;}
    inline ImageSummary& WithOsVersion(const char* value) { SetOsVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the image.</p>
     */
    inline const ImageState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ImageState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ImageSummary& WithState(const ImageState& value) { SetState(value); return *this;}
    inline ImageSummary& WithState(ImageState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the image.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline ImageSummary& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline ImageSummary& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline ImageSummary& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which Image Builder created this image.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }
    inline ImageSummary& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}
    inline ImageSummary& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}
    inline ImageSummary& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output resources that Image Builder produced when it created this
     * image.</p>
     */
    inline const OutputResources& GetOutputResources() const{ return m_outputResources; }
    inline bool OutputResourcesHasBeenSet() const { return m_outputResourcesHasBeenSet; }
    inline void SetOutputResources(const OutputResources& value) { m_outputResourcesHasBeenSet = true; m_outputResources = value; }
    inline void SetOutputResources(OutputResources&& value) { m_outputResourcesHasBeenSet = true; m_outputResources = std::move(value); }
    inline ImageSummary& WithOutputResources(const OutputResources& value) { SetOutputResources(value); return *this;}
    inline ImageSummary& WithOutputResources(OutputResources&& value) { SetOutputResources(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that apply to this image.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ImageSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ImageSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ImageSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ImageSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ImageSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ImageSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ImageSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ImageSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ImageSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the type of build that created this image. The build can be
     * initiated in the following ways:</p> <ul> <li> <p> <b>USER_INITIATED</b> – A
     * manual pipeline build request.</p> </li> <li> <p> <b>SCHEDULED</b> – A pipeline
     * build initiated by a cron expression in the Image Builder pipeline, or from
     * EventBridge.</p> </li> <li> <p> <b>IMPORT</b> – A VM import created the image to
     * use as the base image for the recipe.</p> </li> <li> <p> <b>IMPORT_ISO</b> – An
     * ISO disk import created the image.</p> </li> </ul>
     */
    inline const BuildType& GetBuildType() const{ return m_buildType; }
    inline bool BuildTypeHasBeenSet() const { return m_buildTypeHasBeenSet; }
    inline void SetBuildType(const BuildType& value) { m_buildTypeHasBeenSet = true; m_buildType = value; }
    inline void SetBuildType(BuildType&& value) { m_buildTypeHasBeenSet = true; m_buildType = std::move(value); }
    inline ImageSummary& WithBuildType(const BuildType& value) { SetBuildType(value); return *this;}
    inline ImageSummary& WithBuildType(BuildType&& value) { SetBuildType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin of the base image that Image Builder used to build this image.</p>
     */
    inline const ImageSource& GetImageSource() const{ return m_imageSource; }
    inline bool ImageSourceHasBeenSet() const { return m_imageSourceHasBeenSet; }
    inline void SetImageSource(const ImageSource& value) { m_imageSourceHasBeenSet = true; m_imageSource = value; }
    inline void SetImageSource(ImageSource&& value) { m_imageSourceHasBeenSet = true; m_imageSource = std::move(value); }
    inline ImageSummary& WithImageSource(const ImageSource& value) { SetImageSource(value); return *this;}
    inline ImageSummary& WithImageSource(ImageSource&& value) { SetImageSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when deprecation occurs for an image resource. This can be a past or
     * future date.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationTime() const{ return m_deprecationTime; }
    inline bool DeprecationTimeHasBeenSet() const { return m_deprecationTimeHasBeenSet; }
    inline void SetDeprecationTime(const Aws::Utils::DateTime& value) { m_deprecationTimeHasBeenSet = true; m_deprecationTime = value; }
    inline void SetDeprecationTime(Aws::Utils::DateTime&& value) { m_deprecationTimeHasBeenSet = true; m_deprecationTime = std::move(value); }
    inline ImageSummary& WithDeprecationTime(const Aws::Utils::DateTime& value) { SetDeprecationTime(value); return *this;}
    inline ImageSummary& WithDeprecationTime(Aws::Utils::DateTime&& value) { SetDeprecationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the last runtime instance of the lifecycle policy to take action
     * on the image.</p>
     */
    inline const Aws::String& GetLifecycleExecutionId() const{ return m_lifecycleExecutionId; }
    inline bool LifecycleExecutionIdHasBeenSet() const { return m_lifecycleExecutionIdHasBeenSet; }
    inline void SetLifecycleExecutionId(const Aws::String& value) { m_lifecycleExecutionIdHasBeenSet = true; m_lifecycleExecutionId = value; }
    inline void SetLifecycleExecutionId(Aws::String&& value) { m_lifecycleExecutionIdHasBeenSet = true; m_lifecycleExecutionId = std::move(value); }
    inline void SetLifecycleExecutionId(const char* value) { m_lifecycleExecutionIdHasBeenSet = true; m_lifecycleExecutionId.assign(value); }
    inline ImageSummary& WithLifecycleExecutionId(const Aws::String& value) { SetLifecycleExecutionId(value); return *this;}
    inline ImageSummary& WithLifecycleExecutionId(Aws::String&& value) { SetLifecycleExecutionId(std::move(value)); return *this;}
    inline ImageSummary& WithLifecycleExecutionId(const char* value) { SetLifecycleExecutionId(value); return *this;}
    ///@}
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

    ImageSource m_imageSource;
    bool m_imageSourceHasBeenSet = false;

    Aws::Utils::DateTime m_deprecationTime;
    bool m_deprecationTimeHasBeenSet = false;

    Aws::String m_lifecycleExecutionId;
    bool m_lifecycleExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
