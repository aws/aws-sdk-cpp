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
    AWS_BACKUPGATEWAY_API PutHypervisorPropertyMappingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutHypervisorPropertyMappings"; }

    AWS_BACKUPGATEWAY_API Aws::String SerializePayload() const override;

    AWS_BACKUPGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline const Aws::String& GetHypervisorArn() const{ return m_hypervisorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline bool HypervisorArnHasBeenSet() const { return m_hypervisorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline void SetHypervisorArn(const Aws::String& value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline void SetHypervisorArn(Aws::String&& value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline void SetHypervisorArn(const char* value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline PutHypervisorPropertyMappingsRequest& WithHypervisorArn(const Aws::String& value) { SetHypervisorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline PutHypervisorPropertyMappingsRequest& WithHypervisorArn(Aws::String&& value) { SetHypervisorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline PutHypervisorPropertyMappingsRequest& WithHypervisorArn(const char* value) { SetHypervisorArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline PutHypervisorPropertyMappingsRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline PutHypervisorPropertyMappingsRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline PutHypervisorPropertyMappingsRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>This action requests the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline const Aws::Vector<VmwareToAwsTagMapping>& GetVmwareToAwsTagMappings() const{ return m_vmwareToAwsTagMappings; }

    /**
     * <p>This action requests the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline bool VmwareToAwsTagMappingsHasBeenSet() const { return m_vmwareToAwsTagMappingsHasBeenSet; }

    /**
     * <p>This action requests the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline void SetVmwareToAwsTagMappings(const Aws::Vector<VmwareToAwsTagMapping>& value) { m_vmwareToAwsTagMappingsHasBeenSet = true; m_vmwareToAwsTagMappings = value; }

    /**
     * <p>This action requests the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline void SetVmwareToAwsTagMappings(Aws::Vector<VmwareToAwsTagMapping>&& value) { m_vmwareToAwsTagMappingsHasBeenSet = true; m_vmwareToAwsTagMappings = std::move(value); }

    /**
     * <p>This action requests the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline PutHypervisorPropertyMappingsRequest& WithVmwareToAwsTagMappings(const Aws::Vector<VmwareToAwsTagMapping>& value) { SetVmwareToAwsTagMappings(value); return *this;}

    /**
     * <p>This action requests the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline PutHypervisorPropertyMappingsRequest& WithVmwareToAwsTagMappings(Aws::Vector<VmwareToAwsTagMapping>&& value) { SetVmwareToAwsTagMappings(std::move(value)); return *this;}

    /**
     * <p>This action requests the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline PutHypervisorPropertyMappingsRequest& AddVmwareToAwsTagMappings(const VmwareToAwsTagMapping& value) { m_vmwareToAwsTagMappingsHasBeenSet = true; m_vmwareToAwsTagMappings.push_back(value); return *this; }

    /**
     * <p>This action requests the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline PutHypervisorPropertyMappingsRequest& AddVmwareToAwsTagMappings(VmwareToAwsTagMapping&& value) { m_vmwareToAwsTagMappingsHasBeenSet = true; m_vmwareToAwsTagMappings.push_back(std::move(value)); return *this; }

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
