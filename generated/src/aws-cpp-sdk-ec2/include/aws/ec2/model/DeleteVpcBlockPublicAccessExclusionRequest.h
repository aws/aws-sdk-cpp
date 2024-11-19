/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DeleteVpcBlockPublicAccessExclusionRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteVpcBlockPublicAccessExclusionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVpcBlockPublicAccessExclusion"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DeleteVpcBlockPublicAccessExclusionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the exclusion.</p>
     */
    inline const Aws::String& GetExclusionId() const{ return m_exclusionId; }
    inline bool ExclusionIdHasBeenSet() const { return m_exclusionIdHasBeenSet; }
    inline void SetExclusionId(const Aws::String& value) { m_exclusionIdHasBeenSet = true; m_exclusionId = value; }
    inline void SetExclusionId(Aws::String&& value) { m_exclusionIdHasBeenSet = true; m_exclusionId = std::move(value); }
    inline void SetExclusionId(const char* value) { m_exclusionIdHasBeenSet = true; m_exclusionId.assign(value); }
    inline DeleteVpcBlockPublicAccessExclusionRequest& WithExclusionId(const Aws::String& value) { SetExclusionId(value); return *this;}
    inline DeleteVpcBlockPublicAccessExclusionRequest& WithExclusionId(Aws::String&& value) { SetExclusionId(std::move(value)); return *this;}
    inline DeleteVpcBlockPublicAccessExclusionRequest& WithExclusionId(const char* value) { SetExclusionId(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_exclusionId;
    bool m_exclusionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
