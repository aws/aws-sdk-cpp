/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/VolumeLifecycle.h>
#include <aws/fsx/model/OntapVolumeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/VolumeType.h>
#include <aws/fsx/model/LifecycleTransitionReason.h>
#include <aws/fsx/model/Tag.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>Describes an Amazon FSx for NetApp ONTAP volume.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/Volume">AWS API
   * Reference</a></p>
   */
  class AWS_FSX_API Volume
  {
  public:
    Volume();
    Volume(Aws::Utils::Json::JsonView jsonValue);
    Volume& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    
    inline Volume& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    
    inline Volume& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    
    inline Volume& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    
    inline Volume& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    
    inline Volume& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The lifecycle status of the volume.</p> <ul> <li> <p> <code>CREATED</code> -
     * The volume is fully available for use.</p> </li> <li> <p> <code>CREATING</code>
     * - Amazon FSx is creating the new volume.</p> </li> <li> <p>
     * <code>DELETING</code> - Amazon FSx is deleting an existing volume.</p> </li>
     * <li> <p> <code>FAILED</code> - Amazon FSx was unable to create the volume.</p>
     * </li> <li> <p> <code>MISCONFIGURED</code> - The volume is in a failed but
     * recoverable state.</p> </li> <li> <p> <code>PENDING</code> - Amazon FSx has not
     * started creating the volume.</p> </li> </ul>
     */
    inline const VolumeLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle status of the volume.</p> <ul> <li> <p> <code>CREATED</code> -
     * The volume is fully available for use.</p> </li> <li> <p> <code>CREATING</code>
     * - Amazon FSx is creating the new volume.</p> </li> <li> <p>
     * <code>DELETING</code> - Amazon FSx is deleting an existing volume.</p> </li>
     * <li> <p> <code>FAILED</code> - Amazon FSx was unable to create the volume.</p>
     * </li> <li> <p> <code>MISCONFIGURED</code> - The volume is in a failed but
     * recoverable state.</p> </li> <li> <p> <code>PENDING</code> - Amazon FSx has not
     * started creating the volume.</p> </li> </ul>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>The lifecycle status of the volume.</p> <ul> <li> <p> <code>CREATED</code> -
     * The volume is fully available for use.</p> </li> <li> <p> <code>CREATING</code>
     * - Amazon FSx is creating the new volume.</p> </li> <li> <p>
     * <code>DELETING</code> - Amazon FSx is deleting an existing volume.</p> </li>
     * <li> <p> <code>FAILED</code> - Amazon FSx was unable to create the volume.</p>
     * </li> <li> <p> <code>MISCONFIGURED</code> - The volume is in a failed but
     * recoverable state.</p> </li> <li> <p> <code>PENDING</code> - Amazon FSx has not
     * started creating the volume.</p> </li> </ul>
     */
    inline void SetLifecycle(const VolumeLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>The lifecycle status of the volume.</p> <ul> <li> <p> <code>CREATED</code> -
     * The volume is fully available for use.</p> </li> <li> <p> <code>CREATING</code>
     * - Amazon FSx is creating the new volume.</p> </li> <li> <p>
     * <code>DELETING</code> - Amazon FSx is deleting an existing volume.</p> </li>
     * <li> <p> <code>FAILED</code> - Amazon FSx was unable to create the volume.</p>
     * </li> <li> <p> <code>MISCONFIGURED</code> - The volume is in a failed but
     * recoverable state.</p> </li> <li> <p> <code>PENDING</code> - Amazon FSx has not
     * started creating the volume.</p> </li> </ul>
     */
    inline void SetLifecycle(VolumeLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle status of the volume.</p> <ul> <li> <p> <code>CREATED</code> -
     * The volume is fully available for use.</p> </li> <li> <p> <code>CREATING</code>
     * - Amazon FSx is creating the new volume.</p> </li> <li> <p>
     * <code>DELETING</code> - Amazon FSx is deleting an existing volume.</p> </li>
     * <li> <p> <code>FAILED</code> - Amazon FSx was unable to create the volume.</p>
     * </li> <li> <p> <code>MISCONFIGURED</code> - The volume is in a failed but
     * recoverable state.</p> </li> <li> <p> <code>PENDING</code> - Amazon FSx has not
     * started creating the volume.</p> </li> </ul>
     */
    inline Volume& WithLifecycle(const VolumeLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle status of the volume.</p> <ul> <li> <p> <code>CREATED</code> -
     * The volume is fully available for use.</p> </li> <li> <p> <code>CREATING</code>
     * - Amazon FSx is creating the new volume.</p> </li> <li> <p>
     * <code>DELETING</code> - Amazon FSx is deleting an existing volume.</p> </li>
     * <li> <p> <code>FAILED</code> - Amazon FSx was unable to create the volume.</p>
     * </li> <li> <p> <code>MISCONFIGURED</code> - The volume is in a failed but
     * recoverable state.</p> </li> <li> <p> <code>PENDING</code> - Amazon FSx has not
     * started creating the volume.</p> </li> </ul>
     */
    inline Volume& WithLifecycle(VolumeLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>The name of the volume.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the volume.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the volume.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the volume.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the volume.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the volume.</p>
     */
    inline Volume& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the volume.</p>
     */
    inline Volume& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the volume.</p>
     */
    inline Volume& WithName(const char* value) { SetName(value); return *this;}


    
    inline const OntapVolumeConfiguration& GetOntapConfiguration() const{ return m_ontapConfiguration; }

    
    inline bool OntapConfigurationHasBeenSet() const { return m_ontapConfigurationHasBeenSet; }

    
    inline void SetOntapConfiguration(const OntapVolumeConfiguration& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = value; }

    
    inline void SetOntapConfiguration(OntapVolumeConfiguration&& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = std::move(value); }

    
    inline Volume& WithOntapConfiguration(const OntapVolumeConfiguration& value) { SetOntapConfiguration(value); return *this;}

    
    inline Volume& WithOntapConfiguration(OntapVolumeConfiguration&& value) { SetOntapConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    
    inline Volume& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    
    inline Volume& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    
    inline Volume& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline Volume& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline Volume& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline Volume& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline Volume& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The system-generated, unique ID of the volume.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The system-generated, unique ID of the volume.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The system-generated, unique ID of the volume.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The system-generated, unique ID of the volume.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The system-generated, unique ID of the volume.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The system-generated, unique ID of the volume.</p>
     */
    inline Volume& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The system-generated, unique ID of the volume.</p>
     */
    inline Volume& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The system-generated, unique ID of the volume.</p>
     */
    inline Volume& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>The type of volume; <code>ONTAP</code> is the only valid volume type.</p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The type of volume; <code>ONTAP</code> is the only valid volume type.</p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The type of volume; <code>ONTAP</code> is the only valid volume type.</p>
     */
    inline void SetVolumeType(const VolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The type of volume; <code>ONTAP</code> is the only valid volume type.</p>
     */
    inline void SetVolumeType(VolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The type of volume; <code>ONTAP</code> is the only valid volume type.</p>
     */
    inline Volume& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The type of volume; <code>ONTAP</code> is the only valid volume type.</p>
     */
    inline Volume& WithVolumeType(VolumeType&& value) { SetVolumeType(std::move(value)); return *this;}


    /**
     * <p>Describes why the volume lifecycle state changed.</p>
     */
    inline const LifecycleTransitionReason& GetLifecycleTransitionReason() const{ return m_lifecycleTransitionReason; }

    /**
     * <p>Describes why the volume lifecycle state changed.</p>
     */
    inline bool LifecycleTransitionReasonHasBeenSet() const { return m_lifecycleTransitionReasonHasBeenSet; }

    /**
     * <p>Describes why the volume lifecycle state changed.</p>
     */
    inline void SetLifecycleTransitionReason(const LifecycleTransitionReason& value) { m_lifecycleTransitionReasonHasBeenSet = true; m_lifecycleTransitionReason = value; }

    /**
     * <p>Describes why the volume lifecycle state changed.</p>
     */
    inline void SetLifecycleTransitionReason(LifecycleTransitionReason&& value) { m_lifecycleTransitionReasonHasBeenSet = true; m_lifecycleTransitionReason = std::move(value); }

    /**
     * <p>Describes why the volume lifecycle state changed.</p>
     */
    inline Volume& WithLifecycleTransitionReason(const LifecycleTransitionReason& value) { SetLifecycleTransitionReason(value); return *this;}

    /**
     * <p>Describes why the volume lifecycle state changed.</p>
     */
    inline Volume& WithLifecycleTransitionReason(LifecycleTransitionReason&& value) { SetLifecycleTransitionReason(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;

    VolumeLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    OntapVolumeConfiguration m_ontapConfiguration;
    bool m_ontapConfigurationHasBeenSet;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet;

    VolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet;

    LifecycleTransitionReason m_lifecycleTransitionReason;
    bool m_lifecycleTransitionReasonHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
