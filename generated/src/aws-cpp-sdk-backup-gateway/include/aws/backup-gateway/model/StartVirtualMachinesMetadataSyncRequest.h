/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/BackupGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BackupGateway
{
namespace Model
{

  /**
   */
  class StartVirtualMachinesMetadataSyncRequest : public BackupGatewayRequest
  {
  public:
    AWS_BACKUPGATEWAY_API StartVirtualMachinesMetadataSyncRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartVirtualMachinesMetadataSync"; }

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
    StartVirtualMachinesMetadataSyncRequest& WithHypervisorArn(HypervisorArnT&& value) { SetHypervisorArn(std::forward<HypervisorArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hypervisorArn;
    bool m_hypervisorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
