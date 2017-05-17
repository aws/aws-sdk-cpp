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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/BuildStatus.h>
#include <aws/gamelift/model/OperatingSystem.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Properties describing a game build.</p> <p>Build-related operations
   * include:</p> <ul> <li> <p> <a>CreateBuild</a> </p> </li> <li> <p>
   * <a>ListBuilds</a> </p> </li> <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p>
   * <a>UpdateBuild</a> </p> </li> <li> <p> <a>DeleteBuild</a> </p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Build">AWS API
   * Reference</a></p>
   */
  class AWS_GAMELIFT_API Build
  {
  public:
    Build();
    Build(const Aws::Utils::Json::JsonValue& jsonValue);
    Build& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = std::move(value); }

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline Build& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline Build& WithBuildId(Aws::String&& value) { SetBuildId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline Build& WithBuildId(const char* value) { SetBuildId(value); return *this;}

    /**
     * <p>Descriptive label that is associated with a build. Build names do not need to
     * be unique. It can be set using <a>CreateBuild</a> or <a>UpdateBuild</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label that is associated with a build. Build names do not need to
     * be unique. It can be set using <a>CreateBuild</a> or <a>UpdateBuild</a>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label that is associated with a build. Build names do not need to
     * be unique. It can be set using <a>CreateBuild</a> or <a>UpdateBuild</a>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Descriptive label that is associated with a build. Build names do not need to
     * be unique. It can be set using <a>CreateBuild</a> or <a>UpdateBuild</a>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label that is associated with a build. Build names do not need to
     * be unique. It can be set using <a>CreateBuild</a> or <a>UpdateBuild</a>.</p>
     */
    inline Build& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with a build. Build names do not need to
     * be unique. It can be set using <a>CreateBuild</a> or <a>UpdateBuild</a>.</p>
     */
    inline Build& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with a build. Build names do not need to
     * be unique. It can be set using <a>CreateBuild</a> or <a>UpdateBuild</a>.</p>
     */
    inline Build& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Version that is associated with this build. Version strings do not need to be
     * unique. This value can be set using <a>CreateBuild</a> or
     * <a>UpdateBuild</a>.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Version that is associated with this build. Version strings do not need to be
     * unique. This value can be set using <a>CreateBuild</a> or
     * <a>UpdateBuild</a>.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version that is associated with this build. Version strings do not need to be
     * unique. This value can be set using <a>CreateBuild</a> or
     * <a>UpdateBuild</a>.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Version that is associated with this build. Version strings do not need to be
     * unique. This value can be set using <a>CreateBuild</a> or
     * <a>UpdateBuild</a>.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Version that is associated with this build. Version strings do not need to be
     * unique. This value can be set using <a>CreateBuild</a> or
     * <a>UpdateBuild</a>.</p>
     */
    inline Build& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Version that is associated with this build. Version strings do not need to be
     * unique. This value can be set using <a>CreateBuild</a> or
     * <a>UpdateBuild</a>.</p>
     */
    inline Build& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Version that is associated with this build. Version strings do not need to be
     * unique. This value can be set using <a>CreateBuild</a> or
     * <a>UpdateBuild</a>.</p>
     */
    inline Build& WithVersion(const char* value) { SetVersion(value); return *this;}

    /**
     * <p>Current status of the build.</p> <p>Possible build statuses include the
     * following:</p> <ul> <li> <p> <b>INITIALIZED</b> – A new build has been defined,
     * but no files have been uploaded. You cannot create fleets for builds that are in
     * this status. When a build is successfully created, the build status is set to
     * this value. </p> </li> <li> <p> <b>READY</b> – The game build has been
     * successfully uploaded. You can now create new fleets for this build.</p> </li>
     * <li> <p> <b>FAILED</b> – The game build upload failed. You cannot create new
     * fleets for this build. </p> </li> </ul>
     */
    inline const BuildStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the build.</p> <p>Possible build statuses include the
     * following:</p> <ul> <li> <p> <b>INITIALIZED</b> – A new build has been defined,
     * but no files have been uploaded. You cannot create fleets for builds that are in
     * this status. When a build is successfully created, the build status is set to
     * this value. </p> </li> <li> <p> <b>READY</b> – The game build has been
     * successfully uploaded. You can now create new fleets for this build.</p> </li>
     * <li> <p> <b>FAILED</b> – The game build upload failed. You cannot create new
     * fleets for this build. </p> </li> </ul>
     */
    inline void SetStatus(const BuildStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the build.</p> <p>Possible build statuses include the
     * following:</p> <ul> <li> <p> <b>INITIALIZED</b> – A new build has been defined,
     * but no files have been uploaded. You cannot create fleets for builds that are in
     * this status. When a build is successfully created, the build status is set to
     * this value. </p> </li> <li> <p> <b>READY</b> – The game build has been
     * successfully uploaded. You can now create new fleets for this build.</p> </li>
     * <li> <p> <b>FAILED</b> – The game build upload failed. You cannot create new
     * fleets for this build. </p> </li> </ul>
     */
    inline void SetStatus(BuildStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Current status of the build.</p> <p>Possible build statuses include the
     * following:</p> <ul> <li> <p> <b>INITIALIZED</b> – A new build has been defined,
     * but no files have been uploaded. You cannot create fleets for builds that are in
     * this status. When a build is successfully created, the build status is set to
     * this value. </p> </li> <li> <p> <b>READY</b> – The game build has been
     * successfully uploaded. You can now create new fleets for this build.</p> </li>
     * <li> <p> <b>FAILED</b> – The game build upload failed. You cannot create new
     * fleets for this build. </p> </li> </ul>
     */
    inline Build& WithStatus(const BuildStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the build.</p> <p>Possible build statuses include the
     * following:</p> <ul> <li> <p> <b>INITIALIZED</b> – A new build has been defined,
     * but no files have been uploaded. You cannot create fleets for builds that are in
     * this status. When a build is successfully created, the build status is set to
     * this value. </p> </li> <li> <p> <b>READY</b> – The game build has been
     * successfully uploaded. You can now create new fleets for this build.</p> </li>
     * <li> <p> <b>FAILED</b> – The game build upload failed. You cannot create new
     * fleets for this build. </p> </li> </ul>
     */
    inline Build& WithStatus(BuildStatus&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>File size of the uploaded game build, expressed in bytes. When the build
     * status is <code>INITIALIZED</code>, this value is 0.</p>
     */
    inline long long GetSizeOnDisk() const{ return m_sizeOnDisk; }

    /**
     * <p>File size of the uploaded game build, expressed in bytes. When the build
     * status is <code>INITIALIZED</code>, this value is 0.</p>
     */
    inline void SetSizeOnDisk(long long value) { m_sizeOnDiskHasBeenSet = true; m_sizeOnDisk = value; }

    /**
     * <p>File size of the uploaded game build, expressed in bytes. When the build
     * status is <code>INITIALIZED</code>, this value is 0.</p>
     */
    inline Build& WithSizeOnDisk(long long value) { SetSizeOnDisk(value); return *this;}

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
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>Operating system that the game server binaries are built to run on. This
     * value determines the type of fleet resources that you can use for this
     * build.</p>
     */
    inline Build& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>Operating system that the game server binaries are built to run on. This
     * value determines the type of fleet resources that you can use for this
     * build.</p>
     */
    inline Build& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline Build& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline Build& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:
    Aws::String m_buildId;
    bool m_buildIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_version;
    bool m_versionHasBeenSet;
    BuildStatus m_status;
    bool m_statusHasBeenSet;
    long long m_sizeOnDisk;
    bool m_sizeOnDiskHasBeenSet;
    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet;
    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
