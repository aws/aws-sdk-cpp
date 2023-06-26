/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InterfacePermissionType.h>
#include <aws/ec2/model/NetworkInterfacePermissionState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a permission for a network interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInterfacePermission">AWS
   * API Reference</a></p>
   */
  class NetworkInterfacePermission
  {
  public:
    AWS_EC2_API NetworkInterfacePermission();
    AWS_EC2_API NetworkInterfacePermission(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInterfacePermission& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline const Aws::String& GetNetworkInterfacePermissionId() const{ return m_networkInterfacePermissionId; }

    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline bool NetworkInterfacePermissionIdHasBeenSet() const { return m_networkInterfacePermissionIdHasBeenSet; }

    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline void SetNetworkInterfacePermissionId(const Aws::String& value) { m_networkInterfacePermissionIdHasBeenSet = true; m_networkInterfacePermissionId = value; }

    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline void SetNetworkInterfacePermissionId(Aws::String&& value) { m_networkInterfacePermissionIdHasBeenSet = true; m_networkInterfacePermissionId = std::move(value); }

    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline void SetNetworkInterfacePermissionId(const char* value) { m_networkInterfacePermissionIdHasBeenSet = true; m_networkInterfacePermissionId.assign(value); }

    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline NetworkInterfacePermission& WithNetworkInterfacePermissionId(const Aws::String& value) { SetNetworkInterfacePermissionId(value); return *this;}

    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline NetworkInterfacePermission& WithNetworkInterfacePermissionId(Aws::String&& value) { SetNetworkInterfacePermissionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline NetworkInterfacePermission& WithNetworkInterfacePermissionId(const char* value) { SetNetworkInterfacePermissionId(value); return *this;}


    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

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
    inline NetworkInterfacePermission& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline NetworkInterfacePermission& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline NetworkInterfacePermission& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline NetworkInterfacePermission& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline NetworkInterfacePermission& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline NetworkInterfacePermission& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The Amazon Web Service.</p>
     */
    inline const Aws::String& GetAwsService() const{ return m_awsService; }

    /**
     * <p>The Amazon Web Service.</p>
     */
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }

    /**
     * <p>The Amazon Web Service.</p>
     */
    inline void SetAwsService(const Aws::String& value) { m_awsServiceHasBeenSet = true; m_awsService = value; }

    /**
     * <p>The Amazon Web Service.</p>
     */
    inline void SetAwsService(Aws::String&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::move(value); }

    /**
     * <p>The Amazon Web Service.</p>
     */
    inline void SetAwsService(const char* value) { m_awsServiceHasBeenSet = true; m_awsService.assign(value); }

    /**
     * <p>The Amazon Web Service.</p>
     */
    inline NetworkInterfacePermission& WithAwsService(const Aws::String& value) { SetAwsService(value); return *this;}

    /**
     * <p>The Amazon Web Service.</p>
     */
    inline NetworkInterfacePermission& WithAwsService(Aws::String&& value) { SetAwsService(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Service.</p>
     */
    inline NetworkInterfacePermission& WithAwsService(const char* value) { SetAwsService(value); return *this;}


    /**
     * <p>The type of permission.</p>
     */
    inline const InterfacePermissionType& GetPermission() const{ return m_permission; }

    /**
     * <p>The type of permission.</p>
     */
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }

    /**
     * <p>The type of permission.</p>
     */
    inline void SetPermission(const InterfacePermissionType& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * <p>The type of permission.</p>
     */
    inline void SetPermission(InterfacePermissionType&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * <p>The type of permission.</p>
     */
    inline NetworkInterfacePermission& WithPermission(const InterfacePermissionType& value) { SetPermission(value); return *this;}

    /**
     * <p>The type of permission.</p>
     */
    inline NetworkInterfacePermission& WithPermission(InterfacePermissionType&& value) { SetPermission(std::move(value)); return *this;}


    /**
     * <p>Information about the state of the permission.</p>
     */
    inline const NetworkInterfacePermissionState& GetPermissionState() const{ return m_permissionState; }

    /**
     * <p>Information about the state of the permission.</p>
     */
    inline bool PermissionStateHasBeenSet() const { return m_permissionStateHasBeenSet; }

    /**
     * <p>Information about the state of the permission.</p>
     */
    inline void SetPermissionState(const NetworkInterfacePermissionState& value) { m_permissionStateHasBeenSet = true; m_permissionState = value; }

    /**
     * <p>Information about the state of the permission.</p>
     */
    inline void SetPermissionState(NetworkInterfacePermissionState&& value) { m_permissionStateHasBeenSet = true; m_permissionState = std::move(value); }

    /**
     * <p>Information about the state of the permission.</p>
     */
    inline NetworkInterfacePermission& WithPermissionState(const NetworkInterfacePermissionState& value) { SetPermissionState(value); return *this;}

    /**
     * <p>Information about the state of the permission.</p>
     */
    inline NetworkInterfacePermission& WithPermissionState(NetworkInterfacePermissionState&& value) { SetPermissionState(std::move(value)); return *this;}

  private:

    Aws::String m_networkInterfacePermissionId;
    bool m_networkInterfacePermissionIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsService;
    bool m_awsServiceHasBeenSet = false;

    InterfacePermissionType m_permission;
    bool m_permissionHasBeenSet = false;

    NetworkInterfacePermissionState m_permissionState;
    bool m_permissionStateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
