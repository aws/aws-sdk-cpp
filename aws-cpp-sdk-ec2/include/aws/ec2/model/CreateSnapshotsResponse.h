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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SnapshotInfo.h>
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
  class AWS_EC2_API CreateSnapshotsResponse
  {
  public:
    CreateSnapshotsResponse();
    CreateSnapshotsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateSnapshotsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>List of snapshots.</p>
     */
    inline const Aws::Vector<SnapshotInfo>& GetSnapshots() const{ return m_snapshots; }

    /**
     * <p>List of snapshots.</p>
     */
    inline void SetSnapshots(const Aws::Vector<SnapshotInfo>& value) { m_snapshots = value; }

    /**
     * <p>List of snapshots.</p>
     */
    inline void SetSnapshots(Aws::Vector<SnapshotInfo>&& value) { m_snapshots = std::move(value); }

    /**
     * <p>List of snapshots.</p>
     */
    inline CreateSnapshotsResponse& WithSnapshots(const Aws::Vector<SnapshotInfo>& value) { SetSnapshots(value); return *this;}

    /**
     * <p>List of snapshots.</p>
     */
    inline CreateSnapshotsResponse& WithSnapshots(Aws::Vector<SnapshotInfo>&& value) { SetSnapshots(std::move(value)); return *this;}

    /**
     * <p>List of snapshots.</p>
     */
    inline CreateSnapshotsResponse& AddSnapshots(const SnapshotInfo& value) { m_snapshots.push_back(value); return *this; }

    /**
     * <p>List of snapshots.</p>
     */
    inline CreateSnapshotsResponse& AddSnapshots(SnapshotInfo&& value) { m_snapshots.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateSnapshotsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateSnapshotsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<SnapshotInfo> m_snapshots;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
