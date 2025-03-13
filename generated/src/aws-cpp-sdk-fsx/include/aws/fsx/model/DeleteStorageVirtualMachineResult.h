/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/StorageVirtualMachineLifecycle.h>
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
  class DeleteStorageVirtualMachineResult
  {
  public:
    AWS_FSX_API DeleteStorageVirtualMachineResult() = default;
    AWS_FSX_API DeleteStorageVirtualMachineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DeleteStorageVirtualMachineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the SVM Amazon FSx is deleting.</p>
     */
    inline const Aws::String& GetStorageVirtualMachineId() const { return m_storageVirtualMachineId; }
    template<typename StorageVirtualMachineIdT = Aws::String>
    void SetStorageVirtualMachineId(StorageVirtualMachineIdT&& value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId = std::forward<StorageVirtualMachineIdT>(value); }
    template<typename StorageVirtualMachineIdT = Aws::String>
    DeleteStorageVirtualMachineResult& WithStorageVirtualMachineId(StorageVirtualMachineIdT&& value) { SetStorageVirtualMachineId(std::forward<StorageVirtualMachineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the lifecycle state of the SVM being deleted.</p>
     */
    inline StorageVirtualMachineLifecycle GetLifecycle() const { return m_lifecycle; }
    inline void SetLifecycle(StorageVirtualMachineLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline DeleteStorageVirtualMachineResult& WithLifecycle(StorageVirtualMachineLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteStorageVirtualMachineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_storageVirtualMachineId;
    bool m_storageVirtualMachineIdHasBeenSet = false;

    StorageVirtualMachineLifecycle m_lifecycle{StorageVirtualMachineLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
