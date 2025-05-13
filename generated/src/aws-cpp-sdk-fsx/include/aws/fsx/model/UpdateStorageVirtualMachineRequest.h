/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/fsx/model/UpdateSvmActiveDirectoryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class UpdateStorageVirtualMachineRequest : public FSxRequest
  {
  public:
    AWS_FSX_API UpdateStorageVirtualMachineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStorageVirtualMachine"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies updates to an SVM's Microsoft Active Directory (AD)
     * configuration.</p>
     */
    inline const UpdateSvmActiveDirectoryConfiguration& GetActiveDirectoryConfiguration() const { return m_activeDirectoryConfiguration; }
    inline bool ActiveDirectoryConfigurationHasBeenSet() const { return m_activeDirectoryConfigurationHasBeenSet; }
    template<typename ActiveDirectoryConfigurationT = UpdateSvmActiveDirectoryConfiguration>
    void SetActiveDirectoryConfiguration(ActiveDirectoryConfigurationT&& value) { m_activeDirectoryConfigurationHasBeenSet = true; m_activeDirectoryConfiguration = std::forward<ActiveDirectoryConfigurationT>(value); }
    template<typename ActiveDirectoryConfigurationT = UpdateSvmActiveDirectoryConfiguration>
    UpdateStorageVirtualMachineRequest& WithActiveDirectoryConfiguration(ActiveDirectoryConfigurationT&& value) { SetActiveDirectoryConfiguration(std::forward<ActiveDirectoryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    UpdateStorageVirtualMachineRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the SVM that you want to update, in the format
     * <code>svm-0123456789abcdef0</code>.</p>
     */
    inline const Aws::String& GetStorageVirtualMachineId() const { return m_storageVirtualMachineId; }
    inline bool StorageVirtualMachineIdHasBeenSet() const { return m_storageVirtualMachineIdHasBeenSet; }
    template<typename StorageVirtualMachineIdT = Aws::String>
    void SetStorageVirtualMachineId(StorageVirtualMachineIdT&& value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId = std::forward<StorageVirtualMachineIdT>(value); }
    template<typename StorageVirtualMachineIdT = Aws::String>
    UpdateStorageVirtualMachineRequest& WithStorageVirtualMachineId(StorageVirtualMachineIdT&& value) { SetStorageVirtualMachineId(std::forward<StorageVirtualMachineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a new SvmAdminPassword.</p>
     */
    inline const Aws::String& GetSvmAdminPassword() const { return m_svmAdminPassword; }
    inline bool SvmAdminPasswordHasBeenSet() const { return m_svmAdminPasswordHasBeenSet; }
    template<typename SvmAdminPasswordT = Aws::String>
    void SetSvmAdminPassword(SvmAdminPasswordT&& value) { m_svmAdminPasswordHasBeenSet = true; m_svmAdminPassword = std::forward<SvmAdminPasswordT>(value); }
    template<typename SvmAdminPasswordT = Aws::String>
    UpdateStorageVirtualMachineRequest& WithSvmAdminPassword(SvmAdminPasswordT&& value) { SetSvmAdminPassword(std::forward<SvmAdminPasswordT>(value)); return *this;}
    ///@}
  private:

    UpdateSvmActiveDirectoryConfiguration m_activeDirectoryConfiguration;
    bool m_activeDirectoryConfigurationHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::String m_storageVirtualMachineId;
    bool m_storageVirtualMachineIdHasBeenSet = false;

    Aws::String m_svmAdminPassword;
    bool m_svmAdminPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
