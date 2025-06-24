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
    AWS_GAMELIFT_API CreateScriptRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateScriptRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version information that is associated with a build or script. Version
     * strings do not need to be unique. You can use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateScript.html">UpdateScript</a>
     * to change this value later. </p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    CreateScriptRequest& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the Amazon S3 bucket where a zipped file containing your
     * Realtime scripts is stored. The storage location must specify the Amazon S3
     * bucket name, the zip file name (the "key"), and a role ARN that allows Amazon
     * GameLift Servers to access the Amazon S3 storage location. The S3 bucket must be
     * in the same Region where you want to create a new script. By default, Amazon
     * GameLift Servers uploads the latest version of the zip file; if you have S3
     * object versioning turned on, you can use the <code>ObjectVersion</code>
     * parameter to specify an earlier version. </p>
     */
    inline const S3Location& GetStorageLocation() const { return m_storageLocation; }
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }
    template<typename StorageLocationT = S3Location>
    void SetStorageLocation(StorageLocationT&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::forward<StorageLocationT>(value); }
    template<typename StorageLocationT = S3Location>
    CreateScriptRequest& WithStorageLocation(StorageLocationT&& value) { SetStorageLocation(std::forward<StorageLocationT>(value)); return *this;}
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
    inline const Aws::Utils::ByteBuffer& GetZipFile() const { return m_zipFile; }
    inline bool ZipFileHasBeenSet() const { return m_zipFileHasBeenSet; }
    template<typename ZipFileT = Aws::Utils::ByteBuffer>
    void SetZipFile(ZipFileT&& value) { m_zipFileHasBeenSet = true; m_zipFile = std::forward<ZipFileT>(value); }
    template<typename ZipFileT = Aws::Utils::ByteBuffer>
    CreateScriptRequest& WithZipFile(ZipFileT&& value) { SetZipFile(std::forward<ZipFileT>(value)); return *this;}
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
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateScriptRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateScriptRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    S3Location m_storageLocation;
    bool m_storageLocationHasBeenSet = false;

    Aws::Utils::ByteBuffer m_zipFile{};
    bool m_zipFileHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
