/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/SnapshotBlockPublicAccessState.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class EnableSnapshotBlockPublicAccessRequest : public EC2Request
  {
  public:
    AWS_EC2_API EnableSnapshotBlockPublicAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableSnapshotBlockPublicAccess"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The mode in which to enable block public access for snapshots for the Region.
     * Specify one of the following values:</p> <ul> <li> <p>
     * <code>block-all-sharing</code> - Prevents all public sharing of snapshots in the
     * Region. Users in the account will no longer be able to request new public
     * sharing. Additionally, snapshots that are already publicly shared are treated as
     * private and they are no longer publicly available.</p>  <p>If you enable
     * block public access for snapshots in <code>block-all-sharing</code> mode, it
     * does not change the permissions for snapshots that are already publicly shared.
     * Instead, it prevents these snapshots from be publicly visible and publicly
     * accessible. Therefore, the attributes for these snapshots still indicate that
     * they are publicly shared, even though they are not publicly available.</p>
     *  </li> <li> <p> <code>block-new-sharing</code> - Prevents only new public
     * sharing of snapshots in the Region. Users in the account will no longer be able
     * to request new public sharing. However, snapshots that are already publicly
     * shared, remain publicly available.</p> </li> </ul> <p> <code>unblocked</code> is
     * not a valid value for <b>EnableSnapshotBlockPublicAccess</b>.</p>
     */
    inline const SnapshotBlockPublicAccessState& GetState() const{ return m_state; }

    /**
     * <p>The mode in which to enable block public access for snapshots for the Region.
     * Specify one of the following values:</p> <ul> <li> <p>
     * <code>block-all-sharing</code> - Prevents all public sharing of snapshots in the
     * Region. Users in the account will no longer be able to request new public
     * sharing. Additionally, snapshots that are already publicly shared are treated as
     * private and they are no longer publicly available.</p>  <p>If you enable
     * block public access for snapshots in <code>block-all-sharing</code> mode, it
     * does not change the permissions for snapshots that are already publicly shared.
     * Instead, it prevents these snapshots from be publicly visible and publicly
     * accessible. Therefore, the attributes for these snapshots still indicate that
     * they are publicly shared, even though they are not publicly available.</p>
     *  </li> <li> <p> <code>block-new-sharing</code> - Prevents only new public
     * sharing of snapshots in the Region. Users in the account will no longer be able
     * to request new public sharing. However, snapshots that are already publicly
     * shared, remain publicly available.</p> </li> </ul> <p> <code>unblocked</code> is
     * not a valid value for <b>EnableSnapshotBlockPublicAccess</b>.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The mode in which to enable block public access for snapshots for the Region.
     * Specify one of the following values:</p> <ul> <li> <p>
     * <code>block-all-sharing</code> - Prevents all public sharing of snapshots in the
     * Region. Users in the account will no longer be able to request new public
     * sharing. Additionally, snapshots that are already publicly shared are treated as
     * private and they are no longer publicly available.</p>  <p>If you enable
     * block public access for snapshots in <code>block-all-sharing</code> mode, it
     * does not change the permissions for snapshots that are already publicly shared.
     * Instead, it prevents these snapshots from be publicly visible and publicly
     * accessible. Therefore, the attributes for these snapshots still indicate that
     * they are publicly shared, even though they are not publicly available.</p>
     *  </li> <li> <p> <code>block-new-sharing</code> - Prevents only new public
     * sharing of snapshots in the Region. Users in the account will no longer be able
     * to request new public sharing. However, snapshots that are already publicly
     * shared, remain publicly available.</p> </li> </ul> <p> <code>unblocked</code> is
     * not a valid value for <b>EnableSnapshotBlockPublicAccess</b>.</p>
     */
    inline void SetState(const SnapshotBlockPublicAccessState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The mode in which to enable block public access for snapshots for the Region.
     * Specify one of the following values:</p> <ul> <li> <p>
     * <code>block-all-sharing</code> - Prevents all public sharing of snapshots in the
     * Region. Users in the account will no longer be able to request new public
     * sharing. Additionally, snapshots that are already publicly shared are treated as
     * private and they are no longer publicly available.</p>  <p>If you enable
     * block public access for snapshots in <code>block-all-sharing</code> mode, it
     * does not change the permissions for snapshots that are already publicly shared.
     * Instead, it prevents these snapshots from be publicly visible and publicly
     * accessible. Therefore, the attributes for these snapshots still indicate that
     * they are publicly shared, even though they are not publicly available.</p>
     *  </li> <li> <p> <code>block-new-sharing</code> - Prevents only new public
     * sharing of snapshots in the Region. Users in the account will no longer be able
     * to request new public sharing. However, snapshots that are already publicly
     * shared, remain publicly available.</p> </li> </ul> <p> <code>unblocked</code> is
     * not a valid value for <b>EnableSnapshotBlockPublicAccess</b>.</p>
     */
    inline void SetState(SnapshotBlockPublicAccessState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The mode in which to enable block public access for snapshots for the Region.
     * Specify one of the following values:</p> <ul> <li> <p>
     * <code>block-all-sharing</code> - Prevents all public sharing of snapshots in the
     * Region. Users in the account will no longer be able to request new public
     * sharing. Additionally, snapshots that are already publicly shared are treated as
     * private and they are no longer publicly available.</p>  <p>If you enable
     * block public access for snapshots in <code>block-all-sharing</code> mode, it
     * does not change the permissions for snapshots that are already publicly shared.
     * Instead, it prevents these snapshots from be publicly visible and publicly
     * accessible. Therefore, the attributes for these snapshots still indicate that
     * they are publicly shared, even though they are not publicly available.</p>
     *  </li> <li> <p> <code>block-new-sharing</code> - Prevents only new public
     * sharing of snapshots in the Region. Users in the account will no longer be able
     * to request new public sharing. However, snapshots that are already publicly
     * shared, remain publicly available.</p> </li> </ul> <p> <code>unblocked</code> is
     * not a valid value for <b>EnableSnapshotBlockPublicAccess</b>.</p>
     */
    inline EnableSnapshotBlockPublicAccessRequest& WithState(const SnapshotBlockPublicAccessState& value) { SetState(value); return *this;}

    /**
     * <p>The mode in which to enable block public access for snapshots for the Region.
     * Specify one of the following values:</p> <ul> <li> <p>
     * <code>block-all-sharing</code> - Prevents all public sharing of snapshots in the
     * Region. Users in the account will no longer be able to request new public
     * sharing. Additionally, snapshots that are already publicly shared are treated as
     * private and they are no longer publicly available.</p>  <p>If you enable
     * block public access for snapshots in <code>block-all-sharing</code> mode, it
     * does not change the permissions for snapshots that are already publicly shared.
     * Instead, it prevents these snapshots from be publicly visible and publicly
     * accessible. Therefore, the attributes for these snapshots still indicate that
     * they are publicly shared, even though they are not publicly available.</p>
     *  </li> <li> <p> <code>block-new-sharing</code> - Prevents only new public
     * sharing of snapshots in the Region. Users in the account will no longer be able
     * to request new public sharing. However, snapshots that are already publicly
     * shared, remain publicly available.</p> </li> </ul> <p> <code>unblocked</code> is
     * not a valid value for <b>EnableSnapshotBlockPublicAccess</b>.</p>
     */
    inline EnableSnapshotBlockPublicAccessRequest& WithState(SnapshotBlockPublicAccessState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline EnableSnapshotBlockPublicAccessRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    SnapshotBlockPublicAccessState m_state;
    bool m_stateHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
