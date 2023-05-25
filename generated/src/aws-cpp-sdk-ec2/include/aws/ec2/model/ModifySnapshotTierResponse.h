/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class ModifySnapshotTierResponse
  {
  public:
    AWS_EC2_API ModifySnapshotTierResponse();
    AWS_EC2_API ModifySnapshotTierResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifySnapshotTierResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline ModifySnapshotTierResponse& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline ModifySnapshotTierResponse& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline ModifySnapshotTierResponse& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The date and time when the archive process was started.</p>
     */
    inline const Aws::Utils::DateTime& GetTieringStartTime() const{ return m_tieringStartTime; }

    /**
     * <p>The date and time when the archive process was started.</p>
     */
    inline void SetTieringStartTime(const Aws::Utils::DateTime& value) { m_tieringStartTime = value; }

    /**
     * <p>The date and time when the archive process was started.</p>
     */
    inline void SetTieringStartTime(Aws::Utils::DateTime&& value) { m_tieringStartTime = std::move(value); }

    /**
     * <p>The date and time when the archive process was started.</p>
     */
    inline ModifySnapshotTierResponse& WithTieringStartTime(const Aws::Utils::DateTime& value) { SetTieringStartTime(value); return *this;}

    /**
     * <p>The date and time when the archive process was started.</p>
     */
    inline ModifySnapshotTierResponse& WithTieringStartTime(Aws::Utils::DateTime&& value) { SetTieringStartTime(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifySnapshotTierResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifySnapshotTierResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_snapshotId;

    Aws::Utils::DateTime m_tieringStartTime;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
