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
    AWS_GAMELIFT_API CreateBuildRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateBuildRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateBuildRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateBuildRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version information that is associated with a build or script. Version
     * strings do not need to be unique. You can change this value later. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline CreateBuildRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CreateBuildRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CreateBuildRequest& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information indicating where your game build files are stored. Use this
     * parameter only when creating a build with files stored in an Amazon S3 bucket
     * that you own. The storage location must specify an Amazon S3 bucket name and
     * key. The location must also specify a role ARN that you set up to allow Amazon
     * GameLift to access your Amazon S3 bucket. The S3 bucket and your new build must
     * be in the same Region.</p> <p>If a <code>StorageLocation</code> is specified,
     * the size of your file can be found in your Amazon S3 bucket. Amazon GameLift
     * will report a <code>SizeOnDisk</code> of 0. </p>
     */
    inline const S3Location& GetStorageLocation() const{ return m_storageLocation; }
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }
    inline void SetStorageLocation(const S3Location& value) { m_storageLocationHasBeenSet = true; m_storageLocation = value; }
    inline void SetStorageLocation(S3Location&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::move(value); }
    inline CreateBuildRequest& WithStorageLocation(const S3Location& value) { SetStorageLocation(value); return *this;}
    inline CreateBuildRequest& WithStorageLocation(S3Location&& value) { SetStorageLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment that your game server binaries run on. This value determines
     * the type of fleet resources that you use for this build. If your game build
     * contains multiple executables, they all must run on the same operating system.
     * This parameter is required, and there's no default value. You can't change a
     * build's operating system later.</p>  <p>Amazon Linux 2 (AL2) will reach
     * end of support on 6/30/2025. See more details in the <a
     * href="https://aws.amazon.com/amazon-linux-2/faqs/">Amazon Linux 2 FAQs</a>. For
     * game servers that are hosted on AL2 and use Amazon GameLift server SDK 4.x.,
     * first update the game server build to server SDK 5.x, and then deploy to AL2023
     * instances. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-serversdk5-migration.html">
     * Migrate to Amazon GameLift server SDK version 5.</a> </p> 
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }
    inline CreateBuildRequest& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}
    inline CreateBuildRequest& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}
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
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateBuildRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateBuildRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateBuildRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateBuildRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A server SDK version you used when integrating your game server build with
     * Amazon GameLift. For more information see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/integration-custom-intro.html">Integrate
     * games with custom game servers</a>. By default Amazon GameLift sets this value
     * to <code>4.0.2</code>.</p>
     */
    inline const Aws::String& GetServerSdkVersion() const{ return m_serverSdkVersion; }
    inline bool ServerSdkVersionHasBeenSet() const { return m_serverSdkVersionHasBeenSet; }
    inline void SetServerSdkVersion(const Aws::String& value) { m_serverSdkVersionHasBeenSet = true; m_serverSdkVersion = value; }
    inline void SetServerSdkVersion(Aws::String&& value) { m_serverSdkVersionHasBeenSet = true; m_serverSdkVersion = std::move(value); }
    inline void SetServerSdkVersion(const char* value) { m_serverSdkVersionHasBeenSet = true; m_serverSdkVersion.assign(value); }
    inline CreateBuildRequest& WithServerSdkVersion(const Aws::String& value) { SetServerSdkVersion(value); return *this;}
    inline CreateBuildRequest& WithServerSdkVersion(Aws::String&& value) { SetServerSdkVersion(std::move(value)); return *this;}
    inline CreateBuildRequest& WithServerSdkVersion(const char* value) { SetServerSdkVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    S3Location m_storageLocation;
    bool m_storageLocationHasBeenSet = false;

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_serverSdkVersion;
    bool m_serverSdkVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
