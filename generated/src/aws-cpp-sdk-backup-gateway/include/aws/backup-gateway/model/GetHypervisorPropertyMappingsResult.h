/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup-gateway/model/VmwareToAwsTagMapping.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace BackupGateway
{
namespace Model
{
  class GetHypervisorPropertyMappingsResult
  {
  public:
    AWS_BACKUPGATEWAY_API GetHypervisorPropertyMappingsResult() = default;
    AWS_BACKUPGATEWAY_API GetHypervisorPropertyMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API GetHypervisorPropertyMappingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline const Aws::String& GetHypervisorArn() const { return m_hypervisorArn; }
    template<typename HypervisorArnT = Aws::String>
    void SetHypervisorArn(HypervisorArnT&& value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn = std::forward<HypervisorArnT>(value); }
    template<typename HypervisorArnT = Aws::String>
    GetHypervisorPropertyMappingsResult& WithHypervisorArn(HypervisorArnT&& value) { SetHypervisorArn(std::forward<HypervisorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    GetHypervisorPropertyMappingsResult& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a display of the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline const Aws::Vector<VmwareToAwsTagMapping>& GetVmwareToAwsTagMappings() const { return m_vmwareToAwsTagMappings; }
    template<typename VmwareToAwsTagMappingsT = Aws::Vector<VmwareToAwsTagMapping>>
    void SetVmwareToAwsTagMappings(VmwareToAwsTagMappingsT&& value) { m_vmwareToAwsTagMappingsHasBeenSet = true; m_vmwareToAwsTagMappings = std::forward<VmwareToAwsTagMappingsT>(value); }
    template<typename VmwareToAwsTagMappingsT = Aws::Vector<VmwareToAwsTagMapping>>
    GetHypervisorPropertyMappingsResult& WithVmwareToAwsTagMappings(VmwareToAwsTagMappingsT&& value) { SetVmwareToAwsTagMappings(std::forward<VmwareToAwsTagMappingsT>(value)); return *this;}
    template<typename VmwareToAwsTagMappingsT = VmwareToAwsTagMapping>
    GetHypervisorPropertyMappingsResult& AddVmwareToAwsTagMappings(VmwareToAwsTagMappingsT&& value) { m_vmwareToAwsTagMappingsHasBeenSet = true; m_vmwareToAwsTagMappings.emplace_back(std::forward<VmwareToAwsTagMappingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetHypervisorPropertyMappingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hypervisorArn;
    bool m_hypervisorArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::Vector<VmwareToAwsTagMapping> m_vmwareToAwsTagMappings;
    bool m_vmwareToAwsTagMappingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
