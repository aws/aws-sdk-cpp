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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/Tag.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object containing one or more of the following fields:</p> <ul> <li>
   * <p> <a>CreateSnapshotInput$SnapshotDescription</a> </p> </li> <li> <p>
   * <a>CreateSnapshotInput$VolumeARN</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateSnapshotInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API CreateSnapshotRequest : public StorageGatewayRequest
  {
  public:
    CreateSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSnapshot"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline bool VolumeARNHasBeenSet() const { return m_volumeARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline CreateSnapshotRequest& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline CreateSnapshotRequest& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline CreateSnapshotRequest& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}


    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline const Aws::String& GetSnapshotDescription() const{ return m_snapshotDescription; }

    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline bool SnapshotDescriptionHasBeenSet() const { return m_snapshotDescriptionHasBeenSet; }

    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline void SetSnapshotDescription(const Aws::String& value) { m_snapshotDescriptionHasBeenSet = true; m_snapshotDescription = value; }

    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline void SetSnapshotDescription(Aws::String&& value) { m_snapshotDescriptionHasBeenSet = true; m_snapshotDescription = std::move(value); }

    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline void SetSnapshotDescription(const char* value) { m_snapshotDescriptionHasBeenSet = true; m_snapshotDescription.assign(value); }

    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline CreateSnapshotRequest& WithSnapshotDescription(const Aws::String& value) { SetSnapshotDescription(value); return *this;}

    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline CreateSnapshotRequest& WithSnapshotDescription(Aws::String&& value) { SetSnapshotDescription(std::move(value)); return *this;}

    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline CreateSnapshotRequest& WithSnapshotDescription(const char* value) { SetSnapshotDescription(value); return *this;}


    /**
     * <p>A list of up to 50 tags that can be assigned to a snapshot. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of up to 50 tags that can be assigned to a snapshot. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of up to 50 tags that can be assigned to a snapshot. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of up to 50 tags that can be assigned to a snapshot. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of up to 50 tags that can be assigned to a snapshot. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline CreateSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of up to 50 tags that can be assigned to a snapshot. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline CreateSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of up to 50 tags that can be assigned to a snapshot. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline CreateSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of up to 50 tags that can be assigned to a snapshot. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline CreateSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet;

    Aws::String m_snapshotDescription;
    bool m_snapshotDescriptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
