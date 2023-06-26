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


    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. You can change this value later. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. You can change this value later. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. You can change this value later. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. You can change this value later. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. You can change this value later. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. You can change this value later. </p>
     */
    inline CreateBuildRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. You can change this value later. </p>
     */
    inline CreateBuildRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label associated with a build. Build names don't need to be
     * unique. You can change this value later. </p>
     */
    inline CreateBuildRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique. You can change this value later. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique. You can change this value later. </p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique. You can change this value later. </p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique. You can change this value later. </p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique. You can change this value later. </p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique. You can change this value later. </p>
     */
    inline CreateBuildRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique. You can change this value later. </p>
     */
    inline CreateBuildRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Version information associated with a build or script. Version strings don't
     * need to be unique. You can change this value later. </p>
     */
    inline CreateBuildRequest& WithVersion(const char* value) { SetVersion(value); return *this;}


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
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }

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
    inline void SetStorageLocation(const S3Location& value) { m_storageLocationHasBeenSet = true; m_storageLocation = value; }

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
    inline void SetStorageLocation(S3Location&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::move(value); }

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
    inline CreateBuildRequest& WithStorageLocation(const S3Location& value) { SetStorageLocation(value); return *this;}

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
    inline CreateBuildRequest& WithStorageLocation(S3Location&& value) { SetStorageLocation(std::move(value)); return *this;}


    /**
     * <p>The operating system that your game server binaries run on. This value
     * determines the type of fleet resources that you use for this build. If your game
     * build contains multiple executables, they all must run on the same operating
     * system. You must specify a valid operating system in this request. There is no
     * default value. You can't change a build's operating system later.</p> 
     * <p>If you have active fleets using the Windows Server 2012 operating system, you
     * can continue to create new builds using this OS until October 10, 2023, when
     * Microsoft ends its support. All others must use Windows Server 2016 when
     * creating new Windows-based builds.</p> 
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>The operating system that your game server binaries run on. This value
     * determines the type of fleet resources that you use for this build. If your game
     * build contains multiple executables, they all must run on the same operating
     * system. You must specify a valid operating system in this request. There is no
     * default value. You can't change a build's operating system later.</p> 
     * <p>If you have active fleets using the Windows Server 2012 operating system, you
     * can continue to create new builds using this OS until October 10, 2023, when
     * Microsoft ends its support. All others must use Windows Server 2016 when
     * creating new Windows-based builds.</p> 
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p>The operating system that your game server binaries run on. This value
     * determines the type of fleet resources that you use for this build. If your game
     * build contains multiple executables, they all must run on the same operating
     * system. You must specify a valid operating system in this request. There is no
     * default value. You can't change a build's operating system later.</p> 
     * <p>If you have active fleets using the Windows Server 2012 operating system, you
     * can continue to create new builds using this OS until October 10, 2023, when
     * Microsoft ends its support. All others must use Windows Server 2016 when
     * creating new Windows-based builds.</p> 
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>The operating system that your game server binaries run on. This value
     * determines the type of fleet resources that you use for this build. If your game
     * build contains multiple executables, they all must run on the same operating
     * system. You must specify a valid operating system in this request. There is no
     * default value. You can't change a build's operating system later.</p> 
     * <p>If you have active fleets using the Windows Server 2012 operating system, you
     * can continue to create new builds using this OS until October 10, 2023, when
     * Microsoft ends its support. All others must use Windows Server 2016 when
     * creating new Windows-based builds.</p> 
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>The operating system that your game server binaries run on. This value
     * determines the type of fleet resources that you use for this build. If your game
     * build contains multiple executables, they all must run on the same operating
     * system. You must specify a valid operating system in this request. There is no
     * default value. You can't change a build's operating system later.</p> 
     * <p>If you have active fleets using the Windows Server 2012 operating system, you
     * can continue to create new builds using this OS until October 10, 2023, when
     * Microsoft ends its support. All others must use Windows Server 2016 when
     * creating new Windows-based builds.</p> 
     */
    inline CreateBuildRequest& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>The operating system that your game server binaries run on. This value
     * determines the type of fleet resources that you use for this build. If your game
     * build contains multiple executables, they all must run on the same operating
     * system. You must specify a valid operating system in this request. There is no
     * default value. You can't change a build's operating system later.</p> 
     * <p>If you have active fleets using the Windows Server 2012 operating system, you
     * can continue to create new builds using this OS until October 10, 2023, when
     * Microsoft ends its support. All others must use Windows Server 2016 when
     * creating new Windows-based builds.</p> 
     */
    inline CreateBuildRequest& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}


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
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

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
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

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
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

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
    inline CreateBuildRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

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
    inline CreateBuildRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

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
    inline CreateBuildRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

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
    inline CreateBuildRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A server SDK version you used when integrating your game server build with
     * Amazon GameLift. For more information see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/integration-custom-intro.html">Integrate
     * games with custom game servers</a>. By default Amazon GameLift sets this value
     * to <code>4.0.2</code>.</p>
     */
    inline const Aws::String& GetServerSdkVersion() const{ return m_serverSdkVersion; }

    /**
     * <p>A server SDK version you used when integrating your game server build with
     * Amazon GameLift. For more information see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/integration-custom-intro.html">Integrate
     * games with custom game servers</a>. By default Amazon GameLift sets this value
     * to <code>4.0.2</code>.</p>
     */
    inline bool ServerSdkVersionHasBeenSet() const { return m_serverSdkVersionHasBeenSet; }

    /**
     * <p>A server SDK version you used when integrating your game server build with
     * Amazon GameLift. For more information see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/integration-custom-intro.html">Integrate
     * games with custom game servers</a>. By default Amazon GameLift sets this value
     * to <code>4.0.2</code>.</p>
     */
    inline void SetServerSdkVersion(const Aws::String& value) { m_serverSdkVersionHasBeenSet = true; m_serverSdkVersion = value; }

    /**
     * <p>A server SDK version you used when integrating your game server build with
     * Amazon GameLift. For more information see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/integration-custom-intro.html">Integrate
     * games with custom game servers</a>. By default Amazon GameLift sets this value
     * to <code>4.0.2</code>.</p>
     */
    inline void SetServerSdkVersion(Aws::String&& value) { m_serverSdkVersionHasBeenSet = true; m_serverSdkVersion = std::move(value); }

    /**
     * <p>A server SDK version you used when integrating your game server build with
     * Amazon GameLift. For more information see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/integration-custom-intro.html">Integrate
     * games with custom game servers</a>. By default Amazon GameLift sets this value
     * to <code>4.0.2</code>.</p>
     */
    inline void SetServerSdkVersion(const char* value) { m_serverSdkVersionHasBeenSet = true; m_serverSdkVersion.assign(value); }

    /**
     * <p>A server SDK version you used when integrating your game server build with
     * Amazon GameLift. For more information see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/integration-custom-intro.html">Integrate
     * games with custom game servers</a>. By default Amazon GameLift sets this value
     * to <code>4.0.2</code>.</p>
     */
    inline CreateBuildRequest& WithServerSdkVersion(const Aws::String& value) { SetServerSdkVersion(value); return *this;}

    /**
     * <p>A server SDK version you used when integrating your game server build with
     * Amazon GameLift. For more information see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/integration-custom-intro.html">Integrate
     * games with custom game servers</a>. By default Amazon GameLift sets this value
     * to <code>4.0.2</code>.</p>
     */
    inline CreateBuildRequest& WithServerSdkVersion(Aws::String&& value) { SetServerSdkVersion(std::move(value)); return *this;}

    /**
     * <p>A server SDK version you used when integrating your game server build with
     * Amazon GameLift. For more information see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/integration-custom-intro.html">Integrate
     * games with custom game servers</a>. By default Amazon GameLift sets this value
     * to <code>4.0.2</code>.</p>
     */
    inline CreateBuildRequest& WithServerSdkVersion(const char* value) { SetServerSdkVersion(value); return *this;}

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
