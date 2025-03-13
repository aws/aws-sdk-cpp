/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SnapshotBlockPublicAccessState.h>
#include <aws/ec2/model/ManagedBy.h>
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
  class GetSnapshotBlockPublicAccessStateResponse
  {
  public:
    AWS_EC2_API GetSnapshotBlockPublicAccessStateResponse() = default;
    AWS_EC2_API GetSnapshotBlockPublicAccessStateResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetSnapshotBlockPublicAccessStateResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The current state of block public access for snapshots. Possible values
     * include:</p> <ul> <li> <p> <code>block-all-sharing</code> - All public sharing
     * of snapshots is blocked. Users in the account can't request new public sharing.
     * Additionally, snapshots that were already publicly shared are treated as private
     * and are not publicly available.</p> </li> <li> <p>
     * <code>block-new-sharing</code> - Only new public sharing of snapshots is
     * blocked. Users in the account can't request new public sharing. However,
     * snapshots that were already publicly shared, remain publicly available.</p>
     * </li> <li> <p> <code>unblocked</code> - Public sharing is not blocked. Users can
     * publicly share snapshots.</p> </li> </ul>
     */
    inline SnapshotBlockPublicAccessState GetState() const { return m_state; }
    inline void SetState(SnapshotBlockPublicAccessState value) { m_stateHasBeenSet = true; m_state = value; }
    inline GetSnapshotBlockPublicAccessStateResponse& WithState(SnapshotBlockPublicAccessState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that manages the state for block public access for snapshots.
     * Possible values include:</p> <ul> <li> <p> <code>account</code> - The state is
     * managed by the account.</p> </li> <li> <p> <code>declarative-policy</code> - The
     * state is managed by a declarative policy and can't be modified by the
     * account.</p> </li> </ul>
     */
    inline ManagedBy GetManagedBy() const { return m_managedBy; }
    inline void SetManagedBy(ManagedBy value) { m_managedByHasBeenSet = true; m_managedBy = value; }
    inline GetSnapshotBlockPublicAccessStateResponse& WithManagedBy(ManagedBy value) { SetManagedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetSnapshotBlockPublicAccessStateResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    SnapshotBlockPublicAccessState m_state{SnapshotBlockPublicAccessState::NOT_SET};
    bool m_stateHasBeenSet = false;

    ManagedBy m_managedBy{ManagedBy::NOT_SET};
    bool m_managedByHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
