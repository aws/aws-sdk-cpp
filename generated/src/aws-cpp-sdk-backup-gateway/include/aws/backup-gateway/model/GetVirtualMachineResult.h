/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/model/VirtualMachineDetails.h>
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
  class GetVirtualMachineResult
  {
  public:
    AWS_BACKUPGATEWAY_API GetVirtualMachineResult() = default;
    AWS_BACKUPGATEWAY_API GetVirtualMachineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API GetVirtualMachineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This object contains the basic attributes of <code>VirtualMachine</code>
     * contained by the output of <code>GetVirtualMachine</code> </p>
     */
    inline const VirtualMachineDetails& GetVirtualMachine() const { return m_virtualMachine; }
    template<typename VirtualMachineT = VirtualMachineDetails>
    void SetVirtualMachine(VirtualMachineT&& value) { m_virtualMachineHasBeenSet = true; m_virtualMachine = std::forward<VirtualMachineT>(value); }
    template<typename VirtualMachineT = VirtualMachineDetails>
    GetVirtualMachineResult& WithVirtualMachine(VirtualMachineT&& value) { SetVirtualMachine(std::forward<VirtualMachineT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetVirtualMachineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VirtualMachineDetails m_virtualMachine;
    bool m_virtualMachineHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
