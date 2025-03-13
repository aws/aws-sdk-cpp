/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/DisableFastSnapshotRestoreSuccessItem.h>
#include <aws/ec2/model/DisableFastSnapshotRestoreErrorItem.h>
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
  class DisableFastSnapshotRestoresResponse
  {
  public:
    AWS_EC2_API DisableFastSnapshotRestoresResponse() = default;
    AWS_EC2_API DisableFastSnapshotRestoresResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisableFastSnapshotRestoresResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the snapshots for which fast snapshot restores were
     * successfully disabled.</p>
     */
    inline const Aws::Vector<DisableFastSnapshotRestoreSuccessItem>& GetSuccessful() const { return m_successful; }
    template<typename SuccessfulT = Aws::Vector<DisableFastSnapshotRestoreSuccessItem>>
    void SetSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful = std::forward<SuccessfulT>(value); }
    template<typename SuccessfulT = Aws::Vector<DisableFastSnapshotRestoreSuccessItem>>
    DisableFastSnapshotRestoresResponse& WithSuccessful(SuccessfulT&& value) { SetSuccessful(std::forward<SuccessfulT>(value)); return *this;}
    template<typename SuccessfulT = DisableFastSnapshotRestoreSuccessItem>
    DisableFastSnapshotRestoresResponse& AddSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful.emplace_back(std::forward<SuccessfulT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the snapshots for which fast snapshot restores could not be
     * disabled.</p>
     */
    inline const Aws::Vector<DisableFastSnapshotRestoreErrorItem>& GetUnsuccessful() const { return m_unsuccessful; }
    template<typename UnsuccessfulT = Aws::Vector<DisableFastSnapshotRestoreErrorItem>>
    void SetUnsuccessful(UnsuccessfulT&& value) { m_unsuccessfulHasBeenSet = true; m_unsuccessful = std::forward<UnsuccessfulT>(value); }
    template<typename UnsuccessfulT = Aws::Vector<DisableFastSnapshotRestoreErrorItem>>
    DisableFastSnapshotRestoresResponse& WithUnsuccessful(UnsuccessfulT&& value) { SetUnsuccessful(std::forward<UnsuccessfulT>(value)); return *this;}
    template<typename UnsuccessfulT = DisableFastSnapshotRestoreErrorItem>
    DisableFastSnapshotRestoresResponse& AddUnsuccessful(UnsuccessfulT&& value) { m_unsuccessfulHasBeenSet = true; m_unsuccessful.emplace_back(std::forward<UnsuccessfulT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DisableFastSnapshotRestoresResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DisableFastSnapshotRestoreSuccessItem> m_successful;
    bool m_successfulHasBeenSet = false;

    Aws::Vector<DisableFastSnapshotRestoreErrorItem> m_unsuccessful;
    bool m_unsuccessfulHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
