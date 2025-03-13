/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/StorageVirtualMachine.h>
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
namespace FSx
{
namespace Model
{
  class CreateStorageVirtualMachineResult
  {
  public:
    AWS_FSX_API CreateStorageVirtualMachineResult() = default;
    AWS_FSX_API CreateStorageVirtualMachineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CreateStorageVirtualMachineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returned after a successful <code>CreateStorageVirtualMachine</code>
     * operation; describes the SVM just created.</p>
     */
    inline const StorageVirtualMachine& GetStorageVirtualMachine() const { return m_storageVirtualMachine; }
    template<typename StorageVirtualMachineT = StorageVirtualMachine>
    void SetStorageVirtualMachine(StorageVirtualMachineT&& value) { m_storageVirtualMachineHasBeenSet = true; m_storageVirtualMachine = std::forward<StorageVirtualMachineT>(value); }
    template<typename StorageVirtualMachineT = StorageVirtualMachine>
    CreateStorageVirtualMachineResult& WithStorageVirtualMachine(StorageVirtualMachineT&& value) { SetStorageVirtualMachine(std::forward<StorageVirtualMachineT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateStorageVirtualMachineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    StorageVirtualMachine m_storageVirtualMachine;
    bool m_storageVirtualMachineHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
