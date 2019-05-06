/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API UpdateVolumeRequest : public OpsWorksRequest
  {
  public:
    UpdateVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVolume"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The volume ID.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The volume ID.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The volume ID.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The volume ID.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The volume ID.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The volume ID.</p>
     */
    inline UpdateVolumeRequest& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The volume ID.</p>
     */
    inline UpdateVolumeRequest& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The volume ID.</p>
     */
    inline UpdateVolumeRequest& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>The new name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The new name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The new name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The new name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The new name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The new name.</p>
     */
    inline UpdateVolumeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The new name.</p>
     */
    inline UpdateVolumeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The new name.</p>
     */
    inline UpdateVolumeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The new mount point.</p>
     */
    inline const Aws::String& GetMountPoint() const{ return m_mountPoint; }

    /**
     * <p>The new mount point.</p>
     */
    inline bool MountPointHasBeenSet() const { return m_mountPointHasBeenSet; }

    /**
     * <p>The new mount point.</p>
     */
    inline void SetMountPoint(const Aws::String& value) { m_mountPointHasBeenSet = true; m_mountPoint = value; }

    /**
     * <p>The new mount point.</p>
     */
    inline void SetMountPoint(Aws::String&& value) { m_mountPointHasBeenSet = true; m_mountPoint = std::move(value); }

    /**
     * <p>The new mount point.</p>
     */
    inline void SetMountPoint(const char* value) { m_mountPointHasBeenSet = true; m_mountPoint.assign(value); }

    /**
     * <p>The new mount point.</p>
     */
    inline UpdateVolumeRequest& WithMountPoint(const Aws::String& value) { SetMountPoint(value); return *this;}

    /**
     * <p>The new mount point.</p>
     */
    inline UpdateVolumeRequest& WithMountPoint(Aws::String&& value) { SetMountPoint(std::move(value)); return *this;}

    /**
     * <p>The new mount point.</p>
     */
    inline UpdateVolumeRequest& WithMountPoint(const char* value) { SetMountPoint(value); return *this;}

  private:

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_mountPoint;
    bool m_mountPointHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
