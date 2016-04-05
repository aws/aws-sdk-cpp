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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/BuildStatus.h>
#include <aws/core/utils/DateTime.h>

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
   * <p>Properties describing a game build.</p>
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
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

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
    inline Build& WithBuildId(Aws::String&& value) { SetBuildId(value); return *this;}

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline Build& WithBuildId(const char* value) { SetBuildId(value); return *this;}

    /**
     * <p>Descriptive label associated with this build. Build names do not need to be
     * unique. It can be set using <a>CreateBuild</a> or <a>UpdateBuild</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label associated with this build. Build names do not need to be
     * unique. It can be set using <a>CreateBuild</a> or <a>UpdateBuild</a>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with this build. Build names do not need to be
     * unique. It can be set using <a>CreateBuild</a> or <a>UpdateBuild</a>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with this build. Build names do not need to be
     * unique. It can be set using <a>CreateBuild</a> or <a>UpdateBuild</a>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label associated with this build. Build names do not need to be
     * unique. It can be set using <a>CreateBuild</a> or <a>UpdateBuild</a>.</p>
     */
    inline Build& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with this build. Build names do not need to be
     * unique. It can be set using <a>CreateBuild</a> or <a>UpdateBuild</a>.</p>
     */
    inline Build& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with this build. Build names do not need to be
     * unique. It can be set using <a>CreateBuild</a> or <a>UpdateBuild</a>.</p>
     */
    inline Build& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Version associated with this build. Version strings do not need to be unique
     * to a build. This value can be set using <a>CreateBuild</a> or
     * <a>UpdateBuild</a>.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Version associated with this build. Version strings do not need to be unique
     * to a build. This value can be set using <a>CreateBuild</a> or
     * <a>UpdateBuild</a>.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version associated with this build. Version strings do not need to be unique
     * to a build. This value can be set using <a>CreateBuild</a> or
     * <a>UpdateBuild</a>.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version associated with this build. Version strings do not need to be unique
     * to a build. This value can be set using <a>CreateBuild</a> or
     * <a>UpdateBuild</a>.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Version associated with this build. Version strings do not need to be unique
     * to a build. This value can be set using <a>CreateBuild</a> or
     * <a>UpdateBuild</a>.</p>
     */
    inline Build& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Version associated with this build. Version strings do not need to be unique
     * to a build. This value can be set using <a>CreateBuild</a> or
     * <a>UpdateBuild</a>.</p>
     */
    inline Build& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>Version associated with this build. Version strings do not need to be unique
     * to a build. This value can be set using <a>CreateBuild</a> or
     * <a>UpdateBuild</a>.</p>
     */
    inline Build& WithVersion(const char* value) { SetVersion(value); return *this;}

    /**
     * <p>Current status of the build. Possible build states include:
     * <ul><li>INITIALIZED: A new build has been defined, but no files have been
     * uploaded. You cannot create fleets for builds that are in this state. When a
     * build is successfully created, the build state is set to this value.
     * </li><li>READY: The game build has been successfully uploaded. You can now
     * create new fleets for this build.</li><li>FAILED: The game build upload failed.
     * You cannot create new fleets for this build. </li></ul></p>
     */
    inline const BuildStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the build. Possible build states include:
     * <ul><li>INITIALIZED: A new build has been defined, but no files have been
     * uploaded. You cannot create fleets for builds that are in this state. When a
     * build is successfully created, the build state is set to this value.
     * </li><li>READY: The game build has been successfully uploaded. You can now
     * create new fleets for this build.</li><li>FAILED: The game build upload failed.
     * You cannot create new fleets for this build. </li></ul></p>
     */
    inline void SetStatus(const BuildStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the build. Possible build states include:
     * <ul><li>INITIALIZED: A new build has been defined, but no files have been
     * uploaded. You cannot create fleets for builds that are in this state. When a
     * build is successfully created, the build state is set to this value.
     * </li><li>READY: The game build has been successfully uploaded. You can now
     * create new fleets for this build.</li><li>FAILED: The game build upload failed.
     * You cannot create new fleets for this build. </li></ul></p>
     */
    inline void SetStatus(BuildStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the build. Possible build states include:
     * <ul><li>INITIALIZED: A new build has been defined, but no files have been
     * uploaded. You cannot create fleets for builds that are in this state. When a
     * build is successfully created, the build state is set to this value.
     * </li><li>READY: The game build has been successfully uploaded. You can now
     * create new fleets for this build.</li><li>FAILED: The game build upload failed.
     * You cannot create new fleets for this build. </li></ul></p>
     */
    inline Build& WithStatus(const BuildStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the build. Possible build states include:
     * <ul><li>INITIALIZED: A new build has been defined, but no files have been
     * uploaded. You cannot create fleets for builds that are in this state. When a
     * build is successfully created, the build state is set to this value.
     * </li><li>READY: The game build has been successfully uploaded. You can now
     * create new fleets for this build.</li><li>FAILED: The game build upload failed.
     * You cannot create new fleets for this build. </li></ul></p>
     */
    inline Build& WithStatus(BuildStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>File size of the uploaded game build, expressed in bytes. When the build
     * state is INITIALIZED, this value is 0.</p>
     */
    inline long long GetSizeOnDisk() const{ return m_sizeOnDisk; }

    /**
     * <p>File size of the uploaded game build, expressed in bytes. When the build
     * state is INITIALIZED, this value is 0.</p>
     */
    inline void SetSizeOnDisk(long long value) { m_sizeOnDiskHasBeenSet = true; m_sizeOnDisk = value; }

    /**
     * <p>File size of the uploaded game build, expressed in bytes. When the build
     * state is INITIALIZED, this value is 0.</p>
     */
    inline Build& WithSizeOnDisk(long long value) { SetSizeOnDisk(value); return *this;}

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline Build& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline Build& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(value); return *this;}

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
    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
