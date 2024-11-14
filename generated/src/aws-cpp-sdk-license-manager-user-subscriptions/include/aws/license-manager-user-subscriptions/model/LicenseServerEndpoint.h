/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/LicenseServerEndpointProvisioningStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager-user-subscriptions/model/ServerEndpoint.h>
#include <aws/license-manager-user-subscriptions/model/ServerType.h>
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
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServerEndpoint();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServerEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServerEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp when License Manager created the license server endpoint.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline LicenseServerEndpoint& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline LicenseServerEndpoint& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the identity provider that's associated
     * with the RDS license server endpoint.</p>
     */
    inline const Aws::String& GetIdentityProviderArn() const{ return m_identityProviderArn; }
    inline bool IdentityProviderArnHasBeenSet() const { return m_identityProviderArnHasBeenSet; }
    inline void SetIdentityProviderArn(const Aws::String& value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn = value; }
    inline void SetIdentityProviderArn(Aws::String&& value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn = std::move(value); }
    inline void SetIdentityProviderArn(const char* value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn.assign(value); }
    inline LicenseServerEndpoint& WithIdentityProviderArn(const Aws::String& value) { SetIdentityProviderArn(value); return *this;}
    inline LicenseServerEndpoint& WithIdentityProviderArn(Aws::String&& value) { SetIdentityProviderArn(std::move(value)); return *this;}
    inline LicenseServerEndpoint& WithIdentityProviderArn(const char* value) { SetIdentityProviderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>ServerEndpoint</code> resource for the RDS license
     * server.</p>
     */
    inline const Aws::String& GetLicenseServerEndpointArn() const{ return m_licenseServerEndpointArn; }
    inline bool LicenseServerEndpointArnHasBeenSet() const { return m_licenseServerEndpointArnHasBeenSet; }
    inline void SetLicenseServerEndpointArn(const Aws::String& value) { m_licenseServerEndpointArnHasBeenSet = true; m_licenseServerEndpointArn = value; }
    inline void SetLicenseServerEndpointArn(Aws::String&& value) { m_licenseServerEndpointArnHasBeenSet = true; m_licenseServerEndpointArn = std::move(value); }
    inline void SetLicenseServerEndpointArn(const char* value) { m_licenseServerEndpointArnHasBeenSet = true; m_licenseServerEndpointArn.assign(value); }
    inline LicenseServerEndpoint& WithLicenseServerEndpointArn(const Aws::String& value) { SetLicenseServerEndpointArn(value); return *this;}
    inline LicenseServerEndpoint& WithLicenseServerEndpointArn(Aws::String&& value) { SetLicenseServerEndpointArn(std::move(value)); return *this;}
    inline LicenseServerEndpoint& WithLicenseServerEndpointArn(const char* value) { SetLicenseServerEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the license server endpoint.</p>
     */
    inline const Aws::String& GetLicenseServerEndpointId() const{ return m_licenseServerEndpointId; }
    inline bool LicenseServerEndpointIdHasBeenSet() const { return m_licenseServerEndpointIdHasBeenSet; }
    inline void SetLicenseServerEndpointId(const Aws::String& value) { m_licenseServerEndpointIdHasBeenSet = true; m_licenseServerEndpointId = value; }
    inline void SetLicenseServerEndpointId(Aws::String&& value) { m_licenseServerEndpointIdHasBeenSet = true; m_licenseServerEndpointId = std::move(value); }
    inline void SetLicenseServerEndpointId(const char* value) { m_licenseServerEndpointIdHasBeenSet = true; m_licenseServerEndpointId.assign(value); }
    inline LicenseServerEndpoint& WithLicenseServerEndpointId(const Aws::String& value) { SetLicenseServerEndpointId(value); return *this;}
    inline LicenseServerEndpoint& WithLicenseServerEndpointId(Aws::String&& value) { SetLicenseServerEndpointId(std::move(value)); return *this;}
    inline LicenseServerEndpoint& WithLicenseServerEndpointId(const char* value) { SetLicenseServerEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the provisioning process for the RDS license server
     * endpoint</p>
     */
    inline const LicenseServerEndpointProvisioningStatus& GetLicenseServerEndpointProvisioningStatus() const{ return m_licenseServerEndpointProvisioningStatus; }
    inline bool LicenseServerEndpointProvisioningStatusHasBeenSet() const { return m_licenseServerEndpointProvisioningStatusHasBeenSet; }
    inline void SetLicenseServerEndpointProvisioningStatus(const LicenseServerEndpointProvisioningStatus& value) { m_licenseServerEndpointProvisioningStatusHasBeenSet = true; m_licenseServerEndpointProvisioningStatus = value; }
    inline void SetLicenseServerEndpointProvisioningStatus(LicenseServerEndpointProvisioningStatus&& value) { m_licenseServerEndpointProvisioningStatusHasBeenSet = true; m_licenseServerEndpointProvisioningStatus = std::move(value); }
    inline LicenseServerEndpoint& WithLicenseServerEndpointProvisioningStatus(const LicenseServerEndpointProvisioningStatus& value) { SetLicenseServerEndpointProvisioningStatus(value); return *this;}
    inline LicenseServerEndpoint& WithLicenseServerEndpointProvisioningStatus(LicenseServerEndpointProvisioningStatus&& value) { SetLicenseServerEndpointProvisioningStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>LicenseServer</code> resources that represent the license
     * servers that are accessed through this endpoint.</p>
     */
    inline const Aws::Vector<LicenseServer>& GetLicenseServers() const{ return m_licenseServers; }
    inline bool LicenseServersHasBeenSet() const { return m_licenseServersHasBeenSet; }
    inline void SetLicenseServers(const Aws::Vector<LicenseServer>& value) { m_licenseServersHasBeenSet = true; m_licenseServers = value; }
    inline void SetLicenseServers(Aws::Vector<LicenseServer>&& value) { m_licenseServersHasBeenSet = true; m_licenseServers = std::move(value); }
    inline LicenseServerEndpoint& WithLicenseServers(const Aws::Vector<LicenseServer>& value) { SetLicenseServers(value); return *this;}
    inline LicenseServerEndpoint& WithLicenseServers(Aws::Vector<LicenseServer>&& value) { SetLicenseServers(std::move(value)); return *this;}
    inline LicenseServerEndpoint& AddLicenseServers(const LicenseServer& value) { m_licenseServersHasBeenSet = true; m_licenseServers.push_back(value); return *this; }
    inline LicenseServerEndpoint& AddLicenseServers(LicenseServer&& value) { m_licenseServersHasBeenSet = true; m_licenseServers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>ServerEndpoint</code> resource contains the network address of the
     * RDS license server endpoint.</p>
     */
    inline const ServerEndpoint& GetServerEndpoint() const{ return m_serverEndpoint; }
    inline bool ServerEndpointHasBeenSet() const { return m_serverEndpointHasBeenSet; }
    inline void SetServerEndpoint(const ServerEndpoint& value) { m_serverEndpointHasBeenSet = true; m_serverEndpoint = value; }
    inline void SetServerEndpoint(ServerEndpoint&& value) { m_serverEndpointHasBeenSet = true; m_serverEndpoint = std::move(value); }
    inline LicenseServerEndpoint& WithServerEndpoint(const ServerEndpoint& value) { SetServerEndpoint(value); return *this;}
    inline LicenseServerEndpoint& WithServerEndpoint(ServerEndpoint&& value) { SetServerEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of license server.</p>
     */
    inline const ServerType& GetServerType() const{ return m_serverType; }
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }
    inline void SetServerType(const ServerType& value) { m_serverTypeHasBeenSet = true; m_serverType = value; }
    inline void SetServerType(ServerType&& value) { m_serverTypeHasBeenSet = true; m_serverType = std::move(value); }
    inline LicenseServerEndpoint& WithServerType(const ServerType& value) { SetServerType(value); return *this;}
    inline LicenseServerEndpoint& WithServerType(ServerType&& value) { SetServerType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message associated with the provisioning status, if there is one.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline LicenseServerEndpoint& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline LicenseServerEndpoint& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline LicenseServerEndpoint& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_identityProviderArn;
    bool m_identityProviderArnHasBeenSet = false;

    Aws::String m_licenseServerEndpointArn;
    bool m_licenseServerEndpointArnHasBeenSet = false;

    Aws::String m_licenseServerEndpointId;
    bool m_licenseServerEndpointIdHasBeenSet = false;

    LicenseServerEndpointProvisioningStatus m_licenseServerEndpointProvisioningStatus;
    bool m_licenseServerEndpointProvisioningStatusHasBeenSet = false;

    Aws::Vector<LicenseServer> m_licenseServers;
    bool m_licenseServersHasBeenSet = false;

    ServerEndpoint m_serverEndpoint;
    bool m_serverEndpointHasBeenSet = false;

    ServerType m_serverType;
    bool m_serverTypeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
