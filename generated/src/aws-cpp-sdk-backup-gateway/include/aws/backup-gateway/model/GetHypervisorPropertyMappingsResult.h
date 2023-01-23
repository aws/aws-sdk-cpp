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
    AWS_BACKUPGATEWAY_API GetHypervisorPropertyMappingsResult();
    AWS_BACKUPGATEWAY_API GetHypervisorPropertyMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API GetHypervisorPropertyMappingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline const Aws::String& GetHypervisorArn() const{ return m_hypervisorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline void SetHypervisorArn(const Aws::String& value) { m_hypervisorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline void SetHypervisorArn(Aws::String&& value) { m_hypervisorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline void SetHypervisorArn(const char* value) { m_hypervisorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline GetHypervisorPropertyMappingsResult& WithHypervisorArn(const Aws::String& value) { SetHypervisorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline GetHypervisorPropertyMappingsResult& WithHypervisorArn(Aws::String&& value) { SetHypervisorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline GetHypervisorPropertyMappingsResult& WithHypervisorArn(const char* value) { SetHypervisorArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline GetHypervisorPropertyMappingsResult& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline GetHypervisorPropertyMappingsResult& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline GetHypervisorPropertyMappingsResult& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>This is a display of the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline const Aws::Vector<VmwareToAwsTagMapping>& GetVmwareToAwsTagMappings() const{ return m_vmwareToAwsTagMappings; }

    /**
     * <p>This is a display of the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline void SetVmwareToAwsTagMappings(const Aws::Vector<VmwareToAwsTagMapping>& value) { m_vmwareToAwsTagMappings = value; }

    /**
     * <p>This is a display of the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline void SetVmwareToAwsTagMappings(Aws::Vector<VmwareToAwsTagMapping>&& value) { m_vmwareToAwsTagMappings = std::move(value); }

    /**
     * <p>This is a display of the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline GetHypervisorPropertyMappingsResult& WithVmwareToAwsTagMappings(const Aws::Vector<VmwareToAwsTagMapping>& value) { SetVmwareToAwsTagMappings(value); return *this;}

    /**
     * <p>This is a display of the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline GetHypervisorPropertyMappingsResult& WithVmwareToAwsTagMappings(Aws::Vector<VmwareToAwsTagMapping>&& value) { SetVmwareToAwsTagMappings(std::move(value)); return *this;}

    /**
     * <p>This is a display of the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline GetHypervisorPropertyMappingsResult& AddVmwareToAwsTagMappings(const VmwareToAwsTagMapping& value) { m_vmwareToAwsTagMappings.push_back(value); return *this; }

    /**
     * <p>This is a display of the mappings of on-premises VMware tags to the Amazon
     * Web Services tags.</p>
     */
    inline GetHypervisorPropertyMappingsResult& AddVmwareToAwsTagMappings(VmwareToAwsTagMapping&& value) { m_vmwareToAwsTagMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_hypervisorArn;

    Aws::String m_iamRoleArn;

    Aws::Vector<VmwareToAwsTagMapping> m_vmwareToAwsTagMappings;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
