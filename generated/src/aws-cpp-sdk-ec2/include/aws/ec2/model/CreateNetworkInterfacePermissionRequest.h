/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InterfacePermissionType.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateNetworkInterfacePermission.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkInterfacePermissionRequest">AWS
   * API Reference</a></p>
   */
  class CreateNetworkInterfacePermissionRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateNetworkInterfacePermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkInterfacePermission"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }
    inline CreateNetworkInterfacePermissionRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline CreateNetworkInterfacePermissionRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline CreateNetworkInterfacePermissionRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline CreateNetworkInterfacePermissionRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline CreateNetworkInterfacePermissionRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline CreateNetworkInterfacePermissionRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service. Currently not supported.</p>
     */
    inline const Aws::String& GetAwsService() const{ return m_awsService; }
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }
    inline void SetAwsService(const Aws::String& value) { m_awsServiceHasBeenSet = true; m_awsService = value; }
    inline void SetAwsService(Aws::String&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::move(value); }
    inline void SetAwsService(const char* value) { m_awsServiceHasBeenSet = true; m_awsService.assign(value); }
    inline CreateNetworkInterfacePermissionRequest& WithAwsService(const Aws::String& value) { SetAwsService(value); return *this;}
    inline CreateNetworkInterfacePermissionRequest& WithAwsService(Aws::String&& value) { SetAwsService(std::move(value)); return *this;}
    inline CreateNetworkInterfacePermissionRequest& WithAwsService(const char* value) { SetAwsService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of permission to grant.</p>
     */
    inline const InterfacePermissionType& GetPermission() const{ return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(const InterfacePermissionType& value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline void SetPermission(InterfacePermissionType&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }
    inline CreateNetworkInterfacePermissionRequest& WithPermission(const InterfacePermissionType& value) { SetPermission(value); return *this;}
    inline CreateNetworkInterfacePermissionRequest& WithPermission(InterfacePermissionType&& value) { SetPermission(std::move(value)); return *this;}
    ///@}

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
    inline CreateNetworkInterfacePermissionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsService;
    bool m_awsServiceHasBeenSet = false;

    InterfacePermissionType m_permission;
    bool m_permissionHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
