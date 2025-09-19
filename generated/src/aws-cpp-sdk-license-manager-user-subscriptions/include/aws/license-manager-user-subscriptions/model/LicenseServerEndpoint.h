/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/ServerType.h>
#include <aws/license-manager-user-subscriptions/model/ServerEndpoint.h>
#include <aws/license-manager-user-subscriptions/model/LicenseServerEndpointProvisioningStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/license-manager-user-subscriptions/model/LicenseServer.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   * <p>Contains details about a network endpoint for a Remote Desktop Services (RDS)
   * license server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/LicenseServerEndpoint">AWS
   * API Reference</a></p>
   */
  class LicenseServerEndpoint
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServerEndpoint() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServerEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServerEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the identity provider that's associated
     * with the RDS license server endpoint.</p>
     */
    inline const Aws::String& GetIdentityProviderArn() const { return m_identityProviderArn; }
    inline bool IdentityProviderArnHasBeenSet() const { return m_identityProviderArnHasBeenSet; }
    template<typename IdentityProviderArnT = Aws::String>
    void SetIdentityProviderArn(IdentityProviderArnT&& value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn = std::forward<IdentityProviderArnT>(value); }
    template<typename IdentityProviderArnT = Aws::String>
    LicenseServerEndpoint& WithIdentityProviderArn(IdentityProviderArnT&& value) { SetIdentityProviderArn(std::forward<IdentityProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of license server.</p>
     */
    inline ServerType GetServerType() const { return m_serverType; }
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }
    inline void SetServerType(ServerType value) { m_serverTypeHasBeenSet = true; m_serverType = value; }
    inline LicenseServerEndpoint& WithServerType(ServerType value) { SetServerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ServerEndpoint</code> resource contains the network address of the
     * RDS license server endpoint.</p>
     */
    inline const ServerEndpoint& GetServerEndpoint() const { return m_serverEndpoint; }
    inline bool ServerEndpointHasBeenSet() const { return m_serverEndpointHasBeenSet; }
    template<typename ServerEndpointT = ServerEndpoint>
    void SetServerEndpoint(ServerEndpointT&& value) { m_serverEndpointHasBeenSet = true; m_serverEndpoint = std::forward<ServerEndpointT>(value); }
    template<typename ServerEndpointT = ServerEndpoint>
    LicenseServerEndpoint& WithServerEndpoint(ServerEndpointT&& value) { SetServerEndpoint(std::forward<ServerEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message associated with the provisioning status, if there is one.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    LicenseServerEndpoint& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the license server endpoint.</p>
     */
    inline const Aws::String& GetLicenseServerEndpointId() const { return m_licenseServerEndpointId; }
    inline bool LicenseServerEndpointIdHasBeenSet() const { return m_licenseServerEndpointIdHasBeenSet; }
    template<typename LicenseServerEndpointIdT = Aws::String>
    void SetLicenseServerEndpointId(LicenseServerEndpointIdT&& value) { m_licenseServerEndpointIdHasBeenSet = true; m_licenseServerEndpointId = std::forward<LicenseServerEndpointIdT>(value); }
    template<typename LicenseServerEndpointIdT = Aws::String>
    LicenseServerEndpoint& WithLicenseServerEndpointId(LicenseServerEndpointIdT&& value) { SetLicenseServerEndpointId(std::forward<LicenseServerEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>ServerEndpoint</code> resource for the RDS license
     * server.</p>
     */
    inline const Aws::String& GetLicenseServerEndpointArn() const { return m_licenseServerEndpointArn; }
    inline bool LicenseServerEndpointArnHasBeenSet() const { return m_licenseServerEndpointArnHasBeenSet; }
    template<typename LicenseServerEndpointArnT = Aws::String>
    void SetLicenseServerEndpointArn(LicenseServerEndpointArnT&& value) { m_licenseServerEndpointArnHasBeenSet = true; m_licenseServerEndpointArn = std::forward<LicenseServerEndpointArnT>(value); }
    template<typename LicenseServerEndpointArnT = Aws::String>
    LicenseServerEndpoint& WithLicenseServerEndpointArn(LicenseServerEndpointArnT&& value) { SetLicenseServerEndpointArn(std::forward<LicenseServerEndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the provisioning process for the RDS license server
     * endpoint</p>
     */
    inline LicenseServerEndpointProvisioningStatus GetLicenseServerEndpointProvisioningStatus() const { return m_licenseServerEndpointProvisioningStatus; }
    inline bool LicenseServerEndpointProvisioningStatusHasBeenSet() const { return m_licenseServerEndpointProvisioningStatusHasBeenSet; }
    inline void SetLicenseServerEndpointProvisioningStatus(LicenseServerEndpointProvisioningStatus value) { m_licenseServerEndpointProvisioningStatusHasBeenSet = true; m_licenseServerEndpointProvisioningStatus = value; }
    inline LicenseServerEndpoint& WithLicenseServerEndpointProvisioningStatus(LicenseServerEndpointProvisioningStatus value) { SetLicenseServerEndpointProvisioningStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>LicenseServer</code> resources that represent the license
     * servers that are accessed through this endpoint.</p>
     */
    inline const Aws::Vector<LicenseServer>& GetLicenseServers() const { return m_licenseServers; }
    inline bool LicenseServersHasBeenSet() const { return m_licenseServersHasBeenSet; }
    template<typename LicenseServersT = Aws::Vector<LicenseServer>>
    void SetLicenseServers(LicenseServersT&& value) { m_licenseServersHasBeenSet = true; m_licenseServers = std::forward<LicenseServersT>(value); }
    template<typename LicenseServersT = Aws::Vector<LicenseServer>>
    LicenseServerEndpoint& WithLicenseServers(LicenseServersT&& value) { SetLicenseServers(std::forward<LicenseServersT>(value)); return *this;}
    template<typename LicenseServersT = LicenseServer>
    LicenseServerEndpoint& AddLicenseServers(LicenseServersT&& value) { m_licenseServersHasBeenSet = true; m_licenseServers.emplace_back(std::forward<LicenseServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when License Manager created the license server endpoint.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    LicenseServerEndpoint& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityProviderArn;
    bool m_identityProviderArnHasBeenSet = false;

    ServerType m_serverType{ServerType::NOT_SET};
    bool m_serverTypeHasBeenSet = false;

    ServerEndpoint m_serverEndpoint;
    bool m_serverEndpointHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_licenseServerEndpointId;
    bool m_licenseServerEndpointIdHasBeenSet = false;

    Aws::String m_licenseServerEndpointArn;
    bool m_licenseServerEndpointArnHasBeenSet = false;

    LicenseServerEndpointProvisioningStatus m_licenseServerEndpointProvisioningStatus{LicenseServerEndpointProvisioningStatus::NOT_SET};
    bool m_licenseServerEndpointProvisioningStatusHasBeenSet = false;

    Aws::Vector<LicenseServer> m_licenseServers;
    bool m_licenseServersHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
