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
    AWS_EC2_API NetworkInterfacePermission() = default;
    AWS_EC2_API NetworkInterfacePermission(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInterfacePermission& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline const Aws::String& GetNetworkInterfacePermissionId() const { return m_networkInterfacePermissionId; }
    inline bool NetworkInterfacePermissionIdHasBeenSet() const { return m_networkInterfacePermissionIdHasBeenSet; }
    template<typename NetworkInterfacePermissionIdT = Aws::String>
    void SetNetworkInterfacePermissionId(NetworkInterfacePermissionIdT&& value) { m_networkInterfacePermissionIdHasBeenSet = true; m_networkInterfacePermissionId = std::forward<NetworkInterfacePermissionIdT>(value); }
    template<typename NetworkInterfacePermissionIdT = Aws::String>
    NetworkInterfacePermission& WithNetworkInterfacePermissionId(NetworkInterfacePermissionIdT&& value) { SetNetworkInterfacePermissionId(std::forward<NetworkInterfacePermissionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    NetworkInterfacePermission& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    NetworkInterfacePermission& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service.</p>
     */
    inline const Aws::String& GetAwsService() const { return m_awsService; }
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }
    template<typename AwsServiceT = Aws::String>
    void SetAwsService(AwsServiceT&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::forward<AwsServiceT>(value); }
    template<typename AwsServiceT = Aws::String>
    NetworkInterfacePermission& WithAwsService(AwsServiceT&& value) { SetAwsService(std::forward<AwsServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of permission.</p>
     */
    inline InterfacePermissionType GetPermission() const { return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(InterfacePermissionType value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline NetworkInterfacePermission& WithPermission(InterfacePermissionType value) { SetPermission(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the state of the permission.</p>
     */
    inline const NetworkInterfacePermissionState& GetPermissionState() const { return m_permissionState; }
    inline bool PermissionStateHasBeenSet() const { return m_permissionStateHasBeenSet; }
    template<typename PermissionStateT = NetworkInterfacePermissionState>
    void SetPermissionState(PermissionStateT&& value) { m_permissionStateHasBeenSet = true; m_permissionState = std::forward<PermissionStateT>(value); }
    template<typename PermissionStateT = NetworkInterfacePermissionState>
    NetworkInterfacePermission& WithPermissionState(PermissionStateT&& value) { SetPermissionState(std::forward<PermissionStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkInterfacePermissionId;
    bool m_networkInterfacePermissionIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsService;
    bool m_awsServiceHasBeenSet = false;

    InterfacePermissionType m_permission{InterfacePermissionType::NOT_SET};
    bool m_permissionHasBeenSet = false;

    NetworkInterfacePermissionState m_permissionState;
    bool m_permissionStateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
