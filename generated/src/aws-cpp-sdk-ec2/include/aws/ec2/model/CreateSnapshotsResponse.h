/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateSnapshotsResponse
  {
  public:
    AWS_EC2_API CreateSnapshotsResponse() = default;
    AWS_EC2_API CreateSnapshotsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateSnapshotsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>List of snapshots.</p>
     */
    inline const Aws::Vector<SnapshotInfo>& GetSnapshots() const { return m_snapshots; }
    template<typename SnapshotsT = Aws::Vector<SnapshotInfo>>
    void SetSnapshots(SnapshotsT&& value) { m_snapshotsHasBeenSet = true; m_snapshots = std::forward<SnapshotsT>(value); }
    template<typename SnapshotsT = Aws::Vector<SnapshotInfo>>
    CreateSnapshotsResponse& WithSnapshots(SnapshotsT&& value) { SetSnapshots(std::forward<SnapshotsT>(value)); return *this;}
    template<typename SnapshotsT = SnapshotInfo>
    CreateSnapshotsResponse& AddSnapshots(SnapshotsT&& value) { m_snapshotsHasBeenSet = true; m_snapshots.emplace_back(std::forward<SnapshotsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateSnapshotsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SnapshotInfo> m_snapshots;
    bool m_snapshotsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
