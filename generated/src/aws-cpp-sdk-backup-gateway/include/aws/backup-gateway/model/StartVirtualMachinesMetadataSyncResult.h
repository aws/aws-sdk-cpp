/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StartVirtualMachinesMetadataSyncResult
  {
  public:
    AWS_BACKUPGATEWAY_API StartVirtualMachinesMetadataSyncResult() = default;
    AWS_BACKUPGATEWAY_API StartVirtualMachinesMetadataSyncResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API StartVirtualMachinesMetadataSyncResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline const Aws::String& GetHypervisorArn() const { return m_hypervisorArn; }
    template<typename HypervisorArnT = Aws::String>
    void SetHypervisorArn(HypervisorArnT&& value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn = std::forward<HypervisorArnT>(value); }
    template<typename HypervisorArnT = Aws::String>
    StartVirtualMachinesMetadataSyncResult& WithHypervisorArn(HypervisorArnT&& value) { SetHypervisorArn(std::forward<HypervisorArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartVirtualMachinesMetadataSyncResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hypervisorArn;
    bool m_hypervisorArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
