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
  class AWS_EC2_API CreateNetworkInterfacePermissionRequest : public EC2Request
  {
  public:
    CreateNetworkInterfacePermissionRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkInterfacePermission"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline CreateNetworkInterfacePermissionRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline CreateNetworkInterfacePermissionRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline CreateNetworkInterfacePermissionRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The AWS account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The AWS account ID.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The AWS account ID.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The AWS account ID.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The AWS account ID.</p>
     */
    inline CreateNetworkInterfacePermissionRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The AWS account ID.</p>
     */
    inline CreateNetworkInterfacePermissionRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID.</p>
     */
    inline CreateNetworkInterfacePermissionRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The AWS service. Currently not supported.</p>
     */
    inline const Aws::String& GetAwsService() const{ return m_awsService; }

    /**
     * <p>The AWS service. Currently not supported.</p>
     */
    inline void SetAwsService(const Aws::String& value) { m_awsServiceHasBeenSet = true; m_awsService = value; }

    /**
     * <p>The AWS service. Currently not supported.</p>
     */
    inline void SetAwsService(Aws::String&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::move(value); }

    /**
     * <p>The AWS service. Currently not supported.</p>
     */
    inline void SetAwsService(const char* value) { m_awsServiceHasBeenSet = true; m_awsService.assign(value); }

    /**
     * <p>The AWS service. Currently not supported.</p>
     */
    inline CreateNetworkInterfacePermissionRequest& WithAwsService(const Aws::String& value) { SetAwsService(value); return *this;}

    /**
     * <p>The AWS service. Currently not supported.</p>
     */
    inline CreateNetworkInterfacePermissionRequest& WithAwsService(Aws::String&& value) { SetAwsService(std::move(value)); return *this;}

    /**
     * <p>The AWS service. Currently not supported.</p>
     */
    inline CreateNetworkInterfacePermissionRequest& WithAwsService(const char* value) { SetAwsService(value); return *this;}


    /**
     * <p>The type of permission to grant.</p>
     */
    inline const InterfacePermissionType& GetPermission() const{ return m_permission; }

    /**
     * <p>The type of permission to grant.</p>
     */
    inline void SetPermission(const InterfacePermissionType& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * <p>The type of permission to grant.</p>
     */
    inline void SetPermission(InterfacePermissionType&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * <p>The type of permission to grant.</p>
     */
    inline CreateNetworkInterfacePermissionRequest& WithPermission(const InterfacePermissionType& value) { SetPermission(value); return *this;}

    /**
     * <p>The type of permission to grant.</p>
     */
    inline CreateNetworkInterfacePermissionRequest& WithPermission(InterfacePermissionType&& value) { SetPermission(std::move(value)); return *this;}


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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateNetworkInterfacePermissionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_awsService;
    bool m_awsServiceHasBeenSet;

    InterfacePermissionType m_permission;
    bool m_permissionHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
