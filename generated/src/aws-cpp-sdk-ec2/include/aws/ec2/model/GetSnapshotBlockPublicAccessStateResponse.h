/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SnapshotBlockPublicAccessState.h>
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
    AWS_EC2_API GetSnapshotBlockPublicAccessStateResponse();
    AWS_EC2_API GetSnapshotBlockPublicAccessStateResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetSnapshotBlockPublicAccessStateResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline const SnapshotBlockPublicAccessState& GetState() const{ return m_state; }

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
    inline void SetState(const SnapshotBlockPublicAccessState& value) { m_state = value; }

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
    inline void SetState(SnapshotBlockPublicAccessState&& value) { m_state = std::move(value); }

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
    inline GetSnapshotBlockPublicAccessStateResponse& WithState(const SnapshotBlockPublicAccessState& value) { SetState(value); return *this;}

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
    inline GetSnapshotBlockPublicAccessStateResponse& WithState(SnapshotBlockPublicAccessState&& value) { SetState(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetSnapshotBlockPublicAccessStateResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetSnapshotBlockPublicAccessStateResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    SnapshotBlockPublicAccessState m_state;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
