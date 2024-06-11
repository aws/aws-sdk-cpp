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
    AWS_FSX_API UpdateStorageVirtualMachineRequest();

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
    inline const UpdateSvmActiveDirectoryConfiguration& GetActiveDirectoryConfiguration() const{ return m_activeDirectoryConfiguration; }
    inline bool ActiveDirectoryConfigurationHasBeenSet() const { return m_activeDirectoryConfigurationHasBeenSet; }
    inline void SetActiveDirectoryConfiguration(const UpdateSvmActiveDirectoryConfiguration& value) { m_activeDirectoryConfigurationHasBeenSet = true; m_activeDirectoryConfiguration = value; }
    inline void SetActiveDirectoryConfiguration(UpdateSvmActiveDirectoryConfiguration&& value) { m_activeDirectoryConfigurationHasBeenSet = true; m_activeDirectoryConfiguration = std::move(value); }
    inline UpdateStorageVirtualMachineRequest& WithActiveDirectoryConfiguration(const UpdateSvmActiveDirectoryConfiguration& value) { SetActiveDirectoryConfiguration(value); return *this;}
    inline UpdateStorageVirtualMachineRequest& WithActiveDirectoryConfiguration(UpdateSvmActiveDirectoryConfiguration&& value) { SetActiveDirectoryConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline UpdateStorageVirtualMachineRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline UpdateStorageVirtualMachineRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline UpdateStorageVirtualMachineRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the SVM that you want to update, in the format
     * <code>svm-0123456789abcdef0</code>.</p>
     */
    inline const Aws::String& GetStorageVirtualMachineId() const{ return m_storageVirtualMachineId; }
    inline bool StorageVirtualMachineIdHasBeenSet() const { return m_storageVirtualMachineIdHasBeenSet; }
    inline void SetStorageVirtualMachineId(const Aws::String& value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId = value; }
    inline void SetStorageVirtualMachineId(Aws::String&& value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId = std::move(value); }
    inline void SetStorageVirtualMachineId(const char* value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId.assign(value); }
    inline UpdateStorageVirtualMachineRequest& WithStorageVirtualMachineId(const Aws::String& value) { SetStorageVirtualMachineId(value); return *this;}
    inline UpdateStorageVirtualMachineRequest& WithStorageVirtualMachineId(Aws::String&& value) { SetStorageVirtualMachineId(std::move(value)); return *this;}
    inline UpdateStorageVirtualMachineRequest& WithStorageVirtualMachineId(const char* value) { SetStorageVirtualMachineId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a new SvmAdminPassword.</p>
     */
    inline const Aws::String& GetSvmAdminPassword() const{ return m_svmAdminPassword; }
    inline bool SvmAdminPasswordHasBeenSet() const { return m_svmAdminPasswordHasBeenSet; }
    inline void SetSvmAdminPassword(const Aws::String& value) { m_svmAdminPasswordHasBeenSet = true; m_svmAdminPassword = value; }
    inline void SetSvmAdminPassword(Aws::String&& value) { m_svmAdminPasswordHasBeenSet = true; m_svmAdminPassword = std::move(value); }
    inline void SetSvmAdminPassword(const char* value) { m_svmAdminPasswordHasBeenSet = true; m_svmAdminPassword.assign(value); }
    inline UpdateStorageVirtualMachineRequest& WithSvmAdminPassword(const Aws::String& value) { SetSvmAdminPassword(value); return *this;}
    inline UpdateStorageVirtualMachineRequest& WithSvmAdminPassword(Aws::String&& value) { SetSvmAdminPassword(std::move(value)); return *this;}
    inline UpdateStorageVirtualMachineRequest& WithSvmAdminPassword(const char* value) { SetSvmAdminPassword(value); return *this;}
    ///@}
  private:

    UpdateSvmActiveDirectoryConfiguration m_activeDirectoryConfiguration;
    bool m_activeDirectoryConfigurationHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_storageVirtualMachineId;
    bool m_storageVirtualMachineIdHasBeenSet = false;

    Aws::String m_svmAdminPassword;
    bool m_svmAdminPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
