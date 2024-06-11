/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/DiskSnapshotState.h>
#include <aws/lightsail/model/Tag.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a block storage disk snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DiskSnapshot">AWS
   * API Reference</a></p>
   */
  class DiskSnapshot
  {
  public:
    AWS_LIGHTSAIL_API DiskSnapshot();
    AWS_LIGHTSAIL_API DiskSnapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API DiskSnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the disk snapshot (<code>my-disk-snapshot</code>).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DiskSnapshot& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DiskSnapshot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DiskSnapshot& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the disk snapshot.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DiskSnapshot& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DiskSnapshot& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DiskSnapshot& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::move(value); }
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }
    inline DiskSnapshot& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}
    inline DiskSnapshot& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}
    inline DiskSnapshot& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the disk snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline DiskSnapshot& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DiskSnapshot& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region and Availability Zone where the disk snapshot was created.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline DiskSnapshot& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}
    inline DiskSnapshot& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lightsail resource type (<code>DiskSnapshot</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline DiskSnapshot& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline DiskSnapshot& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline DiskSnapshot& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline DiskSnapshot& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline DiskSnapshot& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline DiskSnapshot& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size of the disk in GB.</p>
     */
    inline int GetSizeInGb() const{ return m_sizeInGb; }
    inline bool SizeInGbHasBeenSet() const { return m_sizeInGbHasBeenSet; }
    inline void SetSizeInGb(int value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }
    inline DiskSnapshot& WithSizeInGb(int value) { SetSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the disk snapshot operation.</p>
     */
    inline const DiskSnapshotState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const DiskSnapshotState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(DiskSnapshotState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline DiskSnapshot& WithState(const DiskSnapshotState& value) { SetState(value); return *this;}
    inline DiskSnapshot& WithState(DiskSnapshotState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the snapshot.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    inline void SetProgress(const Aws::String& value) { m_progressHasBeenSet = true; m_progress = value; }
    inline void SetProgress(Aws::String&& value) { m_progressHasBeenSet = true; m_progress = std::move(value); }
    inline void SetProgress(const char* value) { m_progressHasBeenSet = true; m_progress.assign(value); }
    inline DiskSnapshot& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}
    inline DiskSnapshot& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}
    inline DiskSnapshot& WithProgress(const char* value) { SetProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the source disk from which the disk snapshot was
     * created.</p>
     */
    inline const Aws::String& GetFromDiskName() const{ return m_fromDiskName; }
    inline bool FromDiskNameHasBeenSet() const { return m_fromDiskNameHasBeenSet; }
    inline void SetFromDiskName(const Aws::String& value) { m_fromDiskNameHasBeenSet = true; m_fromDiskName = value; }
    inline void SetFromDiskName(Aws::String&& value) { m_fromDiskNameHasBeenSet = true; m_fromDiskName = std::move(value); }
    inline void SetFromDiskName(const char* value) { m_fromDiskNameHasBeenSet = true; m_fromDiskName.assign(value); }
    inline DiskSnapshot& WithFromDiskName(const Aws::String& value) { SetFromDiskName(value); return *this;}
    inline DiskSnapshot& WithFromDiskName(Aws::String&& value) { SetFromDiskName(std::move(value)); return *this;}
    inline DiskSnapshot& WithFromDiskName(const char* value) { SetFromDiskName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source disk from which the disk
     * snapshot was created.</p>
     */
    inline const Aws::String& GetFromDiskArn() const{ return m_fromDiskArn; }
    inline bool FromDiskArnHasBeenSet() const { return m_fromDiskArnHasBeenSet; }
    inline void SetFromDiskArn(const Aws::String& value) { m_fromDiskArnHasBeenSet = true; m_fromDiskArn = value; }
    inline void SetFromDiskArn(Aws::String&& value) { m_fromDiskArnHasBeenSet = true; m_fromDiskArn = std::move(value); }
    inline void SetFromDiskArn(const char* value) { m_fromDiskArnHasBeenSet = true; m_fromDiskArn.assign(value); }
    inline DiskSnapshot& WithFromDiskArn(const Aws::String& value) { SetFromDiskArn(value); return *this;}
    inline DiskSnapshot& WithFromDiskArn(Aws::String&& value) { SetFromDiskArn(std::move(value)); return *this;}
    inline DiskSnapshot& WithFromDiskArn(const char* value) { SetFromDiskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the source instance from which the disk (system volume)
     * snapshot was created.</p>
     */
    inline const Aws::String& GetFromInstanceName() const{ return m_fromInstanceName; }
    inline bool FromInstanceNameHasBeenSet() const { return m_fromInstanceNameHasBeenSet; }
    inline void SetFromInstanceName(const Aws::String& value) { m_fromInstanceNameHasBeenSet = true; m_fromInstanceName = value; }
    inline void SetFromInstanceName(Aws::String&& value) { m_fromInstanceNameHasBeenSet = true; m_fromInstanceName = std::move(value); }
    inline void SetFromInstanceName(const char* value) { m_fromInstanceNameHasBeenSet = true; m_fromInstanceName.assign(value); }
    inline DiskSnapshot& WithFromInstanceName(const Aws::String& value) { SetFromInstanceName(value); return *this;}
    inline DiskSnapshot& WithFromInstanceName(Aws::String&& value) { SetFromInstanceName(std::move(value)); return *this;}
    inline DiskSnapshot& WithFromInstanceName(const char* value) { SetFromInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source instance from which the disk
     * (system volume) snapshot was created.</p>
     */
    inline const Aws::String& GetFromInstanceArn() const{ return m_fromInstanceArn; }
    inline bool FromInstanceArnHasBeenSet() const { return m_fromInstanceArnHasBeenSet; }
    inline void SetFromInstanceArn(const Aws::String& value) { m_fromInstanceArnHasBeenSet = true; m_fromInstanceArn = value; }
    inline void SetFromInstanceArn(Aws::String&& value) { m_fromInstanceArnHasBeenSet = true; m_fromInstanceArn = std::move(value); }
    inline void SetFromInstanceArn(const char* value) { m_fromInstanceArnHasBeenSet = true; m_fromInstanceArn.assign(value); }
    inline DiskSnapshot& WithFromInstanceArn(const Aws::String& value) { SetFromInstanceArn(value); return *this;}
    inline DiskSnapshot& WithFromInstanceArn(Aws::String&& value) { SetFromInstanceArn(std::move(value)); return *this;}
    inline DiskSnapshot& WithFromInstanceArn(const char* value) { SetFromInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the snapshot was created from an automatic
     * snapshot.</p>
     */
    inline bool GetIsFromAutoSnapshot() const{ return m_isFromAutoSnapshot; }
    inline bool IsFromAutoSnapshotHasBeenSet() const { return m_isFromAutoSnapshotHasBeenSet; }
    inline void SetIsFromAutoSnapshot(bool value) { m_isFromAutoSnapshotHasBeenSet = true; m_isFromAutoSnapshot = value; }
    inline DiskSnapshot& WithIsFromAutoSnapshot(bool value) { SetIsFromAutoSnapshot(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_sizeInGb;
    bool m_sizeInGbHasBeenSet = false;

    DiskSnapshotState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_progress;
    bool m_progressHasBeenSet = false;

    Aws::String m_fromDiskName;
    bool m_fromDiskNameHasBeenSet = false;

    Aws::String m_fromDiskArn;
    bool m_fromDiskArnHasBeenSet = false;

    Aws::String m_fromInstanceName;
    bool m_fromInstanceNameHasBeenSet = false;

    Aws::String m_fromInstanceArn;
    bool m_fromInstanceArnHasBeenSet = false;

    bool m_isFromAutoSnapshot;
    bool m_isFromAutoSnapshotHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
