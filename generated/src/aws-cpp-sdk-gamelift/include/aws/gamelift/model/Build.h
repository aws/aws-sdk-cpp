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
    AWS_GAMELIFT_API Build() = default;
    AWS_GAMELIFT_API Build(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Build& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the build.</p>
     */
    inline const Aws::String& GetBuildId() const { return m_buildId; }
    inline bool BuildIdHasBeenSet() const { return m_buildIdHasBeenSet; }
    template<typename BuildIdT = Aws::String>
    void SetBuildId(BuildIdT&& value) { m_buildIdHasBeenSet = true; m_buildId = std::forward<BuildIdT>(value); }
    template<typename BuildIdT = Aws::String>
    Build& WithBuildId(BuildIdT&& value) { SetBuildId(std::forward<BuildIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift Servers build resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::build/build-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift build ARN, the resource ID matches the <i>BuildId</i> value.</p>
     */
    inline const Aws::String& GetBuildArn() const { return m_buildArn; }
    inline bool BuildArnHasBeenSet() const { return m_buildArnHasBeenSet; }
    template<typename BuildArnT = Aws::String>
    void SetBuildArn(BuildArnT&& value) { m_buildArnHasBeenSet = true; m_buildArn = std::forward<BuildArnT>(value); }
    template<typename BuildArnT = Aws::String>
    Build& WithBuildArn(BuildArnT&& value) { SetBuildArn(std::forward<BuildArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with a build. Build names do not need
     * to be unique. It can be set using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateBuild.html">CreateBuild</a>
     * or <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/UpdateBuild">UpdateBuild</a>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Build& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version information that is associated with a build or script. Version
     * strings do not need to be unique.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    Build& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
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
    inline BuildStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(BuildStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Build& WithStatus(BuildStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>File size of the uploaded game build, expressed in bytes. When the build
     * status is <code>INITIALIZED</code> or when using a custom Amazon S3 storage
     * location, this value is 0.</p>
     */
    inline long long GetSizeOnDisk() const { return m_sizeOnDisk; }
    inline bool SizeOnDiskHasBeenSet() const { return m_sizeOnDiskHasBeenSet; }
    inline void SetSizeOnDisk(long long value) { m_sizeOnDiskHasBeenSet = true; m_sizeOnDisk = value; }
    inline Build& WithSizeOnDisk(long long value) { SetSizeOnDisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operating system that the game server binaries are built to run on. This
     * value determines the type of fleet resources that you can use for this
     * build.</p>  <p>Amazon Linux 2 (AL2) will reach end of support on
     * 6/30/2025. See more details in the <a
     * href="http://aws.amazon.com/amazon-linux-2/faqs/">Amazon Linux 2 FAQs</a>. For
     * game servers that are hosted on AL2 and use server SDK version 4.x for Amazon
     * GameLift Servers, first update the game server build to server SDK 5.x, and then
     * deploy to AL2023 instances. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-serversdk5-migration.html">
     * Migrate to server SDK version 5.</a> </p> 
     */
    inline OperatingSystem GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(OperatingSystem value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline Build& WithOperatingSystem(OperatingSystem value) { SetOperatingSystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Build& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon GameLift Servers Server SDK version used to develop your game
     * server.</p>
     */
    inline const Aws::String& GetServerSdkVersion() const { return m_serverSdkVersion; }
    inline bool ServerSdkVersionHasBeenSet() const { return m_serverSdkVersionHasBeenSet; }
    template<typename ServerSdkVersionT = Aws::String>
    void SetServerSdkVersion(ServerSdkVersionT&& value) { m_serverSdkVersionHasBeenSet = true; m_serverSdkVersion = std::forward<ServerSdkVersionT>(value); }
    template<typename ServerSdkVersionT = Aws::String>
    Build& WithServerSdkVersion(ServerSdkVersionT&& value) { SetServerSdkVersion(std::forward<ServerSdkVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_buildId;
    bool m_buildIdHasBeenSet = false;

    Aws::String m_buildArn;
    bool m_buildArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    BuildStatus m_status{BuildStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    long long m_sizeOnDisk{0};
    bool m_sizeOnDiskHasBeenSet = false;

    OperatingSystem m_operatingSystem{OperatingSystem::NOT_SET};
    bool m_operatingSystemHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_serverSdkVersion;
    bool m_serverSdkVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
