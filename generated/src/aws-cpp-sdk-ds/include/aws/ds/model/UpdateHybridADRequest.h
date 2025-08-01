/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/HybridAdministratorAccountUpdate.h>
#include <aws/ds/model/HybridCustomerInstancesSettings.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class UpdateHybridADRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API UpdateHybridADRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateHybridAD"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the hybrid directory to update.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    UpdateHybridADRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>We create a hybrid directory administrator account when we create a hybrid
     * directory. Use <code>HybridAdministratorAccountUpdate</code> to recover the
     * hybrid directory administrator account if you have deleted it.</p> <p>To recover
     * your hybrid directory administrator account, we need temporary access to a user
     * in your self-managed AD with administrator permissions in the form of a secret
     * from Amazon Web Services Secrets Manager. We use these credentials once during
     * recovery and don't store them.</p> <p>If your hybrid directory administrator
     * account exists, then you don’t need to use
     * <code>HybridAdministratorAccountUpdate</code>, even if you have updated your
     * self-managed AD administrator user.</p>
     */
    inline const HybridAdministratorAccountUpdate& GetHybridAdministratorAccountUpdate() const { return m_hybridAdministratorAccountUpdate; }
    inline bool HybridAdministratorAccountUpdateHasBeenSet() const { return m_hybridAdministratorAccountUpdateHasBeenSet; }
    template<typename HybridAdministratorAccountUpdateT = HybridAdministratorAccountUpdate>
    void SetHybridAdministratorAccountUpdate(HybridAdministratorAccountUpdateT&& value) { m_hybridAdministratorAccountUpdateHasBeenSet = true; m_hybridAdministratorAccountUpdate = std::forward<HybridAdministratorAccountUpdateT>(value); }
    template<typename HybridAdministratorAccountUpdateT = HybridAdministratorAccountUpdate>
    UpdateHybridADRequest& WithHybridAdministratorAccountUpdate(HybridAdministratorAccountUpdateT&& value) { SetHybridAdministratorAccountUpdate(std::forward<HybridAdministratorAccountUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates to the self-managed AD configuration, including DNS server IP
     * addresses and Amazon Web Services System Manager managed node identifiers.</p>
     */
    inline const HybridCustomerInstancesSettings& GetSelfManagedInstancesSettings() const { return m_selfManagedInstancesSettings; }
    inline bool SelfManagedInstancesSettingsHasBeenSet() const { return m_selfManagedInstancesSettingsHasBeenSet; }
    template<typename SelfManagedInstancesSettingsT = HybridCustomerInstancesSettings>
    void SetSelfManagedInstancesSettings(SelfManagedInstancesSettingsT&& value) { m_selfManagedInstancesSettingsHasBeenSet = true; m_selfManagedInstancesSettings = std::forward<SelfManagedInstancesSettingsT>(value); }
    template<typename SelfManagedInstancesSettingsT = HybridCustomerInstancesSettings>
    UpdateHybridADRequest& WithSelfManagedInstancesSettings(SelfManagedInstancesSettingsT&& value) { SetSelfManagedInstancesSettings(std::forward<SelfManagedInstancesSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    HybridAdministratorAccountUpdate m_hybridAdministratorAccountUpdate;
    bool m_hybridAdministratorAccountUpdateHasBeenSet = false;

    HybridCustomerInstancesSettings m_selfManagedInstancesSettings;
    bool m_selfManagedInstancesSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
