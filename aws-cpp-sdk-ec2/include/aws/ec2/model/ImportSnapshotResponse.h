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
    AWS_EC2_API ImportSnapshotResponse();
    AWS_EC2_API ImportSnapshotResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ImportSnapshotResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline const Aws::String& GetImportTaskId() const{ return m_importTaskId; }

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline void SetImportTaskId(const Aws::String& value) { m_importTaskId = value; }

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline void SetImportTaskId(Aws::String&& value) { m_importTaskId = std::move(value); }

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline void SetImportTaskId(const char* value) { m_importTaskId.assign(value); }

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithImportTaskId(const Aws::String& value) { SetImportTaskId(value); return *this;}

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithImportTaskId(Aws::String&& value) { SetImportTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithImportTaskId(const char* value) { SetImportTaskId(value); return *this;}


    /**
     * <p>Information about the import snapshot task.</p>
     */
    inline const SnapshotTaskDetail& GetSnapshotTaskDetail() const{ return m_snapshotTaskDetail; }

    /**
     * <p>Information about the import snapshot task.</p>
     */
    inline void SetSnapshotTaskDetail(const SnapshotTaskDetail& value) { m_snapshotTaskDetail = value; }

    /**
     * <p>Information about the import snapshot task.</p>
     */
    inline void SetSnapshotTaskDetail(SnapshotTaskDetail&& value) { m_snapshotTaskDetail = std::move(value); }

    /**
     * <p>Information about the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithSnapshotTaskDetail(const SnapshotTaskDetail& value) { SetSnapshotTaskDetail(value); return *this;}

    /**
     * <p>Information about the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithSnapshotTaskDetail(SnapshotTaskDetail&& value) { SetSnapshotTaskDetail(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to the import snapshot task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the import snapshot task.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Any tags assigned to the import snapshot task.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ImportSnapshotResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ImportSnapshotResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_description;

    Aws::String m_importTaskId;

    SnapshotTaskDetail m_snapshotTaskDetail;

    Aws::Vector<Tag> m_tags;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
