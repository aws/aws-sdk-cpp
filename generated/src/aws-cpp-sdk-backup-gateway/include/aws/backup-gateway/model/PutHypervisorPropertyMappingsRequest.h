/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/BackupGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup-gateway/model/VmwareToAwsTagMapping.h>
#include <utility>

namespace Aws
{
namespace BackupGateway
{
namespace Model
{

  /**
   */
  class PutHypervisorPropertyMappingsRequest : public BackupGatewayRequest
  {
  public:
    AWS_BACKUPGATEWAY_API PutHypervisorPropertyMappingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutHypervisorPropertyMappings"; }

    AWS_BACKUPGATEWAY_API Aws::String SerializePayload() const override;

    AWS_BACKUPGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline const Aws::String& GetHypervisorArn() const { return m_hypervisorArn; }
    inline bool HypervisorArnHasBeenSet() const { return m_hypervisorArnHasBeenSet; }
    template<typename HypervisorArnT = Aws::String>
    void SetHypervisorArn(HypervisorArnT&& value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn = std::forward<HypervisorArnT>(value); }
    template<typename HypervisorArnT = Aws::String>
    PutHypervisorPropertyMappingsRequest& WithHypervisorArn(HypervisorArnT&& value) { SetHypervisorArn(std::forward<HypervisorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    PutHypervisorPropertyMappingsRequest& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This action requests the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline const Aws::Vector<VmwareToAwsTagMapping>& GetVmwareToAwsTagMappings() const { return m_vmwareToAwsTagMappings; }
    inline bool VmwareToAwsTagMappingsHasBeenSet() const { return m_vmwareToAwsTagMappingsHasBeenSet; }
    template<typename VmwareToAwsTagMappingsT = Aws::Vector<VmwareToAwsTagMapping>>
    void SetVmwareToAwsTagMappings(VmwareToAwsTagMappingsT&& value) { m_vmwareToAwsTagMappingsHasBeenSet = true; m_vmwareToAwsTagMappings = std::forward<VmwareToAwsTagMappingsT>(value); }
    template<typename VmwareToAwsTagMappingsT = Aws::Vector<VmwareToAwsTagMapping>>
    PutHypervisorPropertyMappingsRequest& WithVmwareToAwsTagMappings(VmwareToAwsTagMappingsT&& value) { SetVmwareToAwsTagMappings(std::forward<VmwareToAwsTagMappingsT>(value)); return *this;}
    template<typename VmwareToAwsTagMappingsT = VmwareToAwsTagMapping>
    PutHypervisorPropertyMappingsRequest& AddVmwareToAwsTagMappings(VmwareToAwsTagMappingsT&& value) { m_vmwareToAwsTagMappingsHasBeenSet = true; m_vmwareToAwsTagMappings.emplace_back(std::forward<VmwareToAwsTagMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_hypervisorArn;
    bool m_hypervisorArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::Vector<VmwareToAwsTagMapping> m_vmwareToAwsTagMappings;
    bool m_vmwareToAwsTagMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
