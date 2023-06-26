/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Properties describing a custom game build.</p> <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
   * APIs by task</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Build">AWS API
   * Reference</a></p>
   */
  class Build
  {
  public:
    AWS_GAMELIFT_API Build();
    AWS_GAMELIFT_API Build(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Build& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the build.</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }

    /**
     * <p>A unique identifier for the build.</p>
     */
    inline bool BuildIdHasBeenSet() const { return m_buildIdHasBeenSet; }

    /**
     * <p>A unique identifier for the build.</p>
     */
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>A unique identifier for the build.</p>
     */
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = std::move(value); }

    /**
     * <p>A unique identifier for the build.</p>
     */
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }

    /**
     * <p>A unique identifier for the build.</p>
     */
    inline Build& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}

    /**
     * <p>A unique identifier for the build.</p>
     */
    inline Build& WithBuildId(Aws::String&& value) { SetBuildId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the build.</p>
     */
    inline Build& WithBuildId(const char* value) { SetBuildId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * assigned to a Amazon GameLift build resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::build/build-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift build ARN, the resource ID matches the <i>BuildId</i> value.</p>
     */
    inline const Aws::String& GetBuildArn() const{ return m_buildArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * assigned to a Amazon GameLift build resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::build/build-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift build ARN, the resource ID matches the <i>BuildId</i> value.</p>
     */
    inline bool BuildArnHasBeenSet() const { return m_buildArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * assigned to a Amazon GameLift build resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::build/build-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift build ARN, the resource ID matches the <i>BuildId</i> value.</p>
     */
    inline void SetBuildArn(const Aws::String& value) { m_buildArnHasBeenSet = true; m_buildArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * assigned to a Amazon GameLift build resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::build/build-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift build ARN, the resource ID matches the <i>BuildId</i> value.</p>
     */
    inline void SetBuildArn(Aws::String&& value) { m_buildArnHasBeenSet = true; m_buildArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * assigned to a Amazon GameLift build resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::build/build-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift build ARN, the resource ID matches the <i>BuildId</i> value.</p>
     */
    inline void SetBuildArn(const char* value) { m_buildArnHasBeenSet = true; m_buildArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * assigned to a Amazon GameLift build resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::build/build-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift build ARN, the resource ID matches the <i>BuildId</i> value.</p>
     */
    inline Build& WithBuildArn(const Aws::String& value) { SetBuildArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * assigned to a Amazon GameLift build resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::build/build-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift build ARN, the resource ID matches the <i>BuildId</i> value.</p>
     */
    inline Build& WithBuildArn(Aws::String&& value) { SetBuildArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * assigned to a Amazon GameLift build resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::build/build-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift build ARN, the resource ID matches the <i>BuildId</i> value.</p>
     */
    inline Build& WithBuildArn(const char* value) { SetBuildArn(value); return *this;}


    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. It can be set using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateBuild.html">CreateBuild</a>
     * or <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/UpdateBuild">UpdateBuild</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. It can be set using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateBuild.html">CreateBuild</a>
     * or <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/UpdateBuild">UpdateBuild</a>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. It can be set using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateBuild.html">CreateBuild</a>
     * or <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/UpdateBuild">UpdateBuild</a>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. It can be set using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateBuild.html">CreateBuild</a>
     * or <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/UpdateBuild">UpdateBuild</a>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. It can be set using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateBuild.html">CreateBuild</a>
     * or <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/UpdateBuild">UpdateBuild</a>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. It can be set using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateBuild.html">CreateBuild</a>
     * or <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/UpdateBuild">UpdateBuild</a>.</p>
     */
    inline Build& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. It can be set using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateBuild.html">CreateBuild</a>
     * or <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/UpdateBuild">UpdateBuild</a>.</p>
     */
    inline Build& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. It can be set using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateBuild.html">CreateBuild</a>
     * or <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/UpdateBuild">UpdateBuild</a>.</p>
     */
    inline Build& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique.</p>
     */
    inline Build& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique.</p>
     */
    inline Build& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique.</p>
     */
    inline Build& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>Current status of the build.</p> <p>Possible build statuses include the
     * following:</p> <ul> <li> <p> <b>INITIALIZED</b> -- A new build has been defined,
     * but no files have been uploaded. You cannot create fleets for builds that are in
     * this status. When a build is successfully created, the build status is set to
     * this value. </p> </li> <li> <p> <b>READY</b> -- The game build has been
     * successfully uploaded. You can now create new fleets for this build.</p> </li>
     * <li> <p> <b>FAILED</b> -- The game build upload failed. You cannot create new
     * fleets for this build. </p> </li> </ul>
     */
    inline const BuildStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the build.</p> <p>Possible build statuses include the
     * following:</p> <ul> <li> <p> <b>INITIALIZED</b> -- A new build has been defined,
     * but no files have been uploaded. You cannot create fleets for builds that are in
     * this status. When a build is successfully created, the build status is set to
     * this value. </p> </li> <li> <p> <b>READY</b> -- The game build has been
     * successfully uploaded. You can now create new fleets for this build.</p> </li>
     * <li> <p> <b>FAILED</b> -- The game build upload failed. You cannot create new
     * fleets for this build. </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Current status of the build.</p> <p>Possible build statuses include the
     * following:</p> <ul> <li> <p> <b>INITIALIZED</b> -- A new build has been defined,
     * but no files have been uploaded. You cannot create fleets for builds that are in
     * this status. When a build is successfully created, the build status is set to
     * this value. </p> </li> <li> <p> <b>READY</b> -- The game build has been
     * successfully uploaded. You can now create new fleets for this build.</p> </li>
     * <li> <p> <b>FAILED</b> -- The game build upload failed. You cannot create new
     * fleets for this build. </p> </li> </ul>
     */
    inline void SetStatus(const BuildStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the build.</p> <p>Possible build statuses include the
     * following:</p> <ul> <li> <p> <b>INITIALIZED</b> -- A new build has been defined,
     * but no files have been uploaded. You cannot create fleets for builds that are in
     * this status. When a build is successfully created, the build status is set to
     * this value. </p> </li> <li> <p> <b>READY</b> -- The game build has been
     * successfully uploaded. You can now create new fleets for this build.</p> </li>
     * <li> <p> <b>FAILED</b> -- The game build upload failed. You cannot create new
     * fleets for this build. </p> </li> </ul>
     */
    inline void SetStatus(BuildStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Current status of the build.</p> <p>Possible build statuses include the
     * following:</p> <ul> <li> <p> <b>INITIALIZED</b> -- A new build has been defined,
     * but no files have been uploaded. You cannot create fleets for builds that are in
     * this status. When a build is successfully created, the build status is set to
     * this value. </p> </li> <li> <p> <b>READY</b> -- The game build has been
     * successfully uploaded. You can now create new fleets for this build.</p> </li>
     * <li> <p> <b>FAILED</b> -- The game build upload failed. You cannot create new
     * fleets for this build. </p> </li> </ul>
     */
    inline Build& WithStatus(const BuildStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the build.</p> <p>Possible build statuses include the
     * following:</p> <ul> <li> <p> <b>INITIALIZED</b> -- A new build has been defined,
     * but no files have been uploaded. You cannot create fleets for builds that are in
     * this status. When a build is successfully created, the build status is set to
     * this value. </p> </li> <li> <p> <b>READY</b> -- The game build has been
     * successfully uploaded. You can now create new fleets for this build.</p> </li>
     * <li> <p> <b>FAILED</b> -- The game build upload failed. You cannot create new
     * fleets for this build. </p> </li> </ul>
     */
    inline Build& WithStatus(BuildStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>File size of the uploaded game build, expressed in bytes. When the build
     * status is <code>INITIALIZED</code> or when using a custom Amazon S3 storage
     * location, this value is 0.</p>
     */
    inline long long GetSizeOnDisk() const{ return m_sizeOnDisk; }

    /**
     * <p>File size of the uploaded game build, expressed in bytes. When the build
     * status is <code>INITIALIZED</code> or when using a custom Amazon S3 storage
     * location, this value is 0.</p>
     */
    inline bool SizeOnDiskHasBeenSet() const { return m_sizeOnDiskHasBeenSet; }

    /**
     * <p>File size of the uploaded game build, expressed in bytes. When the build
     * status is <code>INITIALIZED</code> or when using a custom Amazon S3 storage
     * location, this value is 0.</p>
     */
    inline void SetSizeOnDisk(long long value) { m_sizeOnDiskHasBeenSet = true; m_sizeOnDisk = value; }

    /**
     * <p>File size of the uploaded game build, expressed in bytes. When the build
     * status is <code>INITIALIZED</code> or when using a custom Amazon S3 storage
     * location, this value is 0.</p>
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
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

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
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline Build& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline Build& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon GameLift Server SDK version used to develop your game server.</p>
     */
    inline const Aws::String& GetServerSdkVersion() const{ return m_serverSdkVersion; }

    /**
     * <p>The Amazon GameLift Server SDK version used to develop your game server.</p>
     */
    inline bool ServerSdkVersionHasBeenSet() const { return m_serverSdkVersionHasBeenSet; }

    /**
     * <p>The Amazon GameLift Server SDK version used to develop your game server.</p>
     */
    inline void SetServerSdkVersion(const Aws::String& value) { m_serverSdkVersionHasBeenSet = true; m_serverSdkVersion = value; }

    /**
     * <p>The Amazon GameLift Server SDK version used to develop your game server.</p>
     */
    inline void SetServerSdkVersion(Aws::String&& value) { m_serverSdkVersionHasBeenSet = true; m_serverSdkVersion = std::move(value); }

    /**
     * <p>The Amazon GameLift Server SDK version used to develop your game server.</p>
     */
    inline void SetServerSdkVersion(const char* value) { m_serverSdkVersionHasBeenSet = true; m_serverSdkVersion.assign(value); }

    /**
     * <p>The Amazon GameLift Server SDK version used to develop your game server.</p>
     */
    inline Build& WithServerSdkVersion(const Aws::String& value) { SetServerSdkVersion(value); return *this;}

    /**
     * <p>The Amazon GameLift Server SDK version used to develop your game server.</p>
     */
    inline Build& WithServerSdkVersion(Aws::String&& value) { SetServerSdkVersion(std::move(value)); return *this;}

    /**
     * <p>The Amazon GameLift Server SDK version used to develop your game server.</p>
     */
    inline Build& WithServerSdkVersion(const char* value) { SetServerSdkVersion(value); return *this;}

  private:

    Aws::String m_buildId;
    bool m_buildIdHasBeenSet = false;

    Aws::String m_buildArn;
    bool m_buildArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    BuildStatus m_status;
    bool m_statusHasBeenSet = false;

    long long m_sizeOnDisk;
    bool m_sizeOnDiskHasBeenSet = false;

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_serverSdkVersion;
    bool m_serverSdkVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
