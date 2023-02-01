/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CopySnapshotResponse
  {
  public:
    AWS_EC2_API CopySnapshotResponse();
    AWS_EC2_API CopySnapshotResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CopySnapshotResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the new snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the new snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }

    /**
     * <p>The ID of the new snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the new snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }

    /**
     * <p>The ID of the new snapshot.</p>
     */
    inline CopySnapshotResponse& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the new snapshot.</p>
     */
    inline CopySnapshotResponse& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the new snapshot.</p>
     */
    inline CopySnapshotResponse& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>Any tags applied to the new snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags applied to the new snapshot.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Any tags applied to the new snapshot.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Any tags applied to the new snapshot.</p>
     */
    inline CopySnapshotResponse& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags applied to the new snapshot.</p>
     */
    inline CopySnapshotResponse& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags applied to the new snapshot.</p>
     */
    inline CopySnapshotResponse& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags applied to the new snapshot.</p>
     */
    inline CopySnapshotResponse& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CopySnapshotResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CopySnapshotResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_snapshotId;

    Aws::Vector<Tag> m_tags;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
