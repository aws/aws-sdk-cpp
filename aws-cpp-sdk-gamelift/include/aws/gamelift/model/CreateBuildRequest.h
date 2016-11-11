/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/S3Location.h>
#include <aws/gamelift/model/OperatingSystem.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p>
   */
  class AWS_GAMELIFT_API CreateBuildRequest : public GameLiftRequest
  {
  public:
    CreateBuildRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Descriptive label associated with a build. Build names do not need to be
     * unique. A build name can be changed later using <code> <a>UpdateBuild</a>
     * </code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label associated with a build. Build names do not need to be
     * unique. A build name can be changed later using <code> <a>UpdateBuild</a>
     * </code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with a build. Build names do not need to be
     * unique. A build name can be changed later using <code> <a>UpdateBuild</a>
     * </code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with a build. Build names do not need to be
     * unique. A build name can be changed later using <code> <a>UpdateBuild</a>
     * </code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label associated with a build. Build names do not need to be
     * unique. A build name can be changed later using <code> <a>UpdateBuild</a>
     * </code>.</p>
     */
    inline CreateBuildRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with a build. Build names do not need to be
     * unique. A build name can be changed later using <code> <a>UpdateBuild</a>
     * </code>.</p>
     */
    inline CreateBuildRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with a build. Build names do not need to be
     * unique. A build name can be changed later using <code> <a>UpdateBuild</a>
     * </code>.</p>
     */
    inline CreateBuildRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Version associated with this build. Version strings do not need to be unique
     * to a build. A build version can be changed later using <code> <a>UpdateBuild</a>
     * </code>.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Version associated with this build. Version strings do not need to be unique
     * to a build. A build version can be changed later using <code> <a>UpdateBuild</a>
     * </code>.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version associated with this build. Version strings do not need to be unique
     * to a build. A build version can be changed later using <code> <a>UpdateBuild</a>
     * </code>.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version associated with this build. Version strings do not need to be unique
     * to a build. A build version can be changed later using <code> <a>UpdateBuild</a>
     * </code>.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Version associated with this build. Version strings do not need to be unique
     * to a build. A build version can be changed later using <code> <a>UpdateBuild</a>
     * </code>.</p>
     */
    inline CreateBuildRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Version associated with this build. Version strings do not need to be unique
     * to a build. A build version can be changed later using <code> <a>UpdateBuild</a>
     * </code>.</p>
     */
    inline CreateBuildRequest& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>Version associated with this build. Version strings do not need to be unique
     * to a build. A build version can be changed later using <code> <a>UpdateBuild</a>
     * </code>.</p>
     */
    inline CreateBuildRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

    
    inline const S3Location& GetStorageLocation() const{ return m_storageLocation; }

    
    inline void SetStorageLocation(const S3Location& value) { m_storageLocationHasBeenSet = true; m_storageLocation = value; }

    
    inline void SetStorageLocation(S3Location&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = value; }

    
    inline CreateBuildRequest& WithStorageLocation(const S3Location& value) { SetStorageLocation(value); return *this;}

    
    inline CreateBuildRequest& WithStorageLocation(S3Location&& value) { SetStorageLocation(value); return *this;}

    /**
     * <p>Operating system that the game server binaries are built to run on. This
     * value determines the type of fleet resources that you can use for this
     * build.</p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>Operating system that the game server binaries are built to run on. This
     * value determines the type of fleet resources that you can use for this
     * build.</p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>Operating system that the game server binaries are built to run on. This
     * value determines the type of fleet resources that you can use for this
     * build.</p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>Operating system that the game server binaries are built to run on. This
     * value determines the type of fleet resources that you can use for this
     * build.</p>
     */
    inline CreateBuildRequest& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>Operating system that the game server binaries are built to run on. This
     * value determines the type of fleet resources that you can use for this
     * build.</p>
     */
    inline CreateBuildRequest& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_version;
    bool m_versionHasBeenSet;
    S3Location m_storageLocation;
    bool m_storageLocationHasBeenSet;
    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
