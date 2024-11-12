/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/S3Location.h>
#include <aws/core/utils/Array.h>
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
  class CreateScriptRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API CreateScriptRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateScript"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A descriptive label that is associated with a script. Script names do not
     * need to be unique. You can use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateScript.html">UpdateScript</a>
     * to change this value later. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateScriptRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateScriptRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateScriptRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version information that is associated with a build or script. Version
     * strings do not need to be unique. You can use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateScript.html">UpdateScript</a>
     * to change this value later. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline CreateScriptRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CreateScriptRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CreateScriptRequest& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the Amazon S3 bucket where a zipped file containing your
     * Realtime scripts is stored. The storage location must specify the Amazon S3
     * bucket name, the zip file name (the "key"), and a role ARN that allows Amazon
     * GameLift to access the Amazon S3 storage location. The S3 bucket must be in the
     * same Region where you want to create a new script. By default, Amazon GameLift
     * uploads the latest version of the zip file; if you have S3 object versioning
     * turned on, you can use the <code>ObjectVersion</code> parameter to specify an
     * earlier version. </p>
     */
    inline const S3Location& GetStorageLocation() const{ return m_storageLocation; }
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }
    inline void SetStorageLocation(const S3Location& value) { m_storageLocationHasBeenSet = true; m_storageLocation = value; }
    inline void SetStorageLocation(S3Location&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::move(value); }
    inline CreateScriptRequest& WithStorageLocation(const S3Location& value) { SetStorageLocation(value); return *this;}
    inline CreateScriptRequest& WithStorageLocation(S3Location&& value) { SetStorageLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A data object containing your Realtime scripts and dependencies as a zip
     * file. The zip file can have one or multiple files. Maximum size of a zip file is
     * 5 MB.</p> <p>When using the Amazon Web Services CLI tool to create a script,
     * this parameter is set to the zip file name. It must be prepended with the string
     * "fileb://" to indicate that the file data is a binary object. For example:
     * <code>--zip-file fileb://myRealtimeScript.zip</code>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetZipFile() const{ return m_zipFile; }
    inline bool ZipFileHasBeenSet() const { return m_zipFileHasBeenSet; }
    inline void SetZipFile(const Aws::Utils::ByteBuffer& value) { m_zipFileHasBeenSet = true; m_zipFile = value; }
    inline void SetZipFile(Aws::Utils::ByteBuffer&& value) { m_zipFileHasBeenSet = true; m_zipFile = std::move(value); }
    inline CreateScriptRequest& WithZipFile(const Aws::Utils::ByteBuffer& value) { SetZipFile(value); return *this;}
    inline CreateScriptRequest& WithZipFile(Aws::Utils::ByteBuffer&& value) { SetZipFile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of labels to assign to the new script resource. Tags are
     * developer-defined key-value pairs. Tagging Amazon Web Services resources are
     * useful for resource management, access management and cost allocation. For more
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
    inline CreateScriptRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateScriptRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateScriptRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateScriptRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    S3Location m_storageLocation;
    bool m_storageLocationHasBeenSet = false;

    Aws::Utils::ByteBuffer m_zipFile;
    bool m_zipFileHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
