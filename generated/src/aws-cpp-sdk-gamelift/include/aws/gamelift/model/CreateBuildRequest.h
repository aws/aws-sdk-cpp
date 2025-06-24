/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/S3Location.h>
#include <aws/gamelift/model/OperatingSystem.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class CreateBuildRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API CreateBuildRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBuild"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A descriptive label that is associated with a build. Build names do not need
     * to be unique. You can change this value later. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateBuildRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version information that is associated with a build or script. Version
     * strings do not need to be unique. You can change this value later. </p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    CreateBuildRequest& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information indicating where your game build files are stored. Use this
     * parameter only when creating a build with files stored in an Amazon S3 bucket
     * that you own. The storage location must specify an Amazon S3 bucket name and
     * key. The location must also specify a role ARN that you set up to allow Amazon
     * GameLift Servers to access your Amazon S3 bucket. The S3 bucket and your new
     * build must be in the same Region.</p> <p>If a <code>StorageLocation</code> is
     * specified, the size of your file can be found in your Amazon S3 bucket. Amazon
     * GameLift Servers will report a <code>SizeOnDisk</code> of 0. </p>
     */
    inline const S3Location& GetStorageLocation() const { return m_storageLocation; }
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }
    template<typename StorageLocationT = S3Location>
    void SetStorageLocation(StorageLocationT&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::forward<StorageLocationT>(value); }
    template<typename StorageLocationT = S3Location>
    CreateBuildRequest& WithStorageLocation(StorageLocationT&& value) { SetStorageLocation(std::forward<StorageLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system that your game server binaries run on. This value
     * determines the type of fleet resources that you use for this build. If your game
     * build contains multiple executables, they all must run on the same operating
     * system. You must specify a valid operating system in this request. There is no
     * default value. You can't change a build's operating system later.</p> 
     * <p>Amazon Linux 2 (AL2) will reach end of support on 6/30/2025. See more details
     * in the <a href="http://aws.amazon.com/amazon-linux-2/faqs/">Amazon Linux 2
     * FAQs</a>. For game servers that are hosted on AL2 and use server SDK version 4.x
     * for Amazon GameLift Servers, first update the game server build to server SDK
     * 5.x, and then deploy to AL2023 instances. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-serversdk5-migration.html">
     * Migrate to server SDK version 5.</a> </p> 
     */
    inline OperatingSystem GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(OperatingSystem value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline CreateBuildRequest& WithOperatingSystem(OperatingSystem value) { SetOperatingSystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of labels to assign to the new build resource. Tags are developer
     * defined key-value pairs. Tagging Amazon Web Services resources are useful for
     * resource management, access management and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>. Once the resource is created, you can use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_TagResource.html">TagResource</a>,
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UntagResource.html">UntagResource</a>,
     * and <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ListTagsForResource.html">ListTagsForResource</a>
     * to add, remove, and view tags. The maximum tag limit may be lower than stated.
     * See the Amazon Web Services General Reference for actual tagging limits.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateBuildRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateBuildRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A server SDK version you used when integrating your game server build with
     * Amazon GameLift Servers. For more information see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/integration-custom-intro.html">Integrate
     * games with custom game servers</a>. By default Amazon GameLift Servers sets this
     * value to <code>4.0.2</code>.</p>
     */
    inline const Aws::String& GetServerSdkVersion() const { return m_serverSdkVersion; }
    inline bool ServerSdkVersionHasBeenSet() const { return m_serverSdkVersionHasBeenSet; }
    template<typename ServerSdkVersionT = Aws::String>
    void SetServerSdkVersion(ServerSdkVersionT&& value) { m_serverSdkVersionHasBeenSet = true; m_serverSdkVersion = std::forward<ServerSdkVersionT>(value); }
    template<typename ServerSdkVersionT = Aws::String>
    CreateBuildRequest& WithServerSdkVersion(ServerSdkVersionT&& value) { SetServerSdkVersion(std::forward<ServerSdkVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    S3Location m_storageLocation;
    bool m_storageLocationHasBeenSet = false;

    OperatingSystem m_operatingSystem{OperatingSystem::NOT_SET};
    bool m_operatingSystemHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_serverSdkVersion;
    bool m_serverSdkVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
