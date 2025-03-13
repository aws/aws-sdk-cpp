/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SnapshotTaskDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class ImportSnapshotResponse
  {
  public:
    AWS_EC2_API ImportSnapshotResponse() = default;
    AWS_EC2_API ImportSnapshotResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ImportSnapshotResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ImportSnapshotResponse& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline const Aws::String& GetImportTaskId() const { return m_importTaskId; }
    template<typename ImportTaskIdT = Aws::String>
    void SetImportTaskId(ImportTaskIdT&& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = std::forward<ImportTaskIdT>(value); }
    template<typename ImportTaskIdT = Aws::String>
    ImportSnapshotResponse& WithImportTaskId(ImportTaskIdT&& value) { SetImportTaskId(std::forward<ImportTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the import snapshot task.</p>
     */
    inline const SnapshotTaskDetail& GetSnapshotTaskDetail() const { return m_snapshotTaskDetail; }
    template<typename SnapshotTaskDetailT = SnapshotTaskDetail>
    void SetSnapshotTaskDetail(SnapshotTaskDetailT&& value) { m_snapshotTaskDetailHasBeenSet = true; m_snapshotTaskDetail = std::forward<SnapshotTaskDetailT>(value); }
    template<typename SnapshotTaskDetailT = SnapshotTaskDetail>
    ImportSnapshotResponse& WithSnapshotTaskDetail(SnapshotTaskDetailT&& value) { SetSnapshotTaskDetail(std::forward<SnapshotTaskDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the import snapshot task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ImportSnapshotResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ImportSnapshotResponse& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ImportSnapshotResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_importTaskId;
    bool m_importTaskIdHasBeenSet = false;

    SnapshotTaskDetail m_snapshotTaskDetail;
    bool m_snapshotTaskDetailHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
