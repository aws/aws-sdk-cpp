/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/StorageVirtualMachine.h>
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
  class DescribeStorageVirtualMachinesResult
  {
  public:
    AWS_FSX_API DescribeStorageVirtualMachinesResult() = default;
    AWS_FSX_API DescribeStorageVirtualMachinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeStorageVirtualMachinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returned after a successful <code>DescribeStorageVirtualMachines</code>
     * operation, describing each SVM.</p>
     */
    inline const Aws::Vector<StorageVirtualMachine>& GetStorageVirtualMachines() const { return m_storageVirtualMachines; }
    template<typename StorageVirtualMachinesT = Aws::Vector<StorageVirtualMachine>>
    void SetStorageVirtualMachines(StorageVirtualMachinesT&& value) { m_storageVirtualMachinesHasBeenSet = true; m_storageVirtualMachines = std::forward<StorageVirtualMachinesT>(value); }
    template<typename StorageVirtualMachinesT = Aws::Vector<StorageVirtualMachine>>
    DescribeStorageVirtualMachinesResult& WithStorageVirtualMachines(StorageVirtualMachinesT&& value) { SetStorageVirtualMachines(std::forward<StorageVirtualMachinesT>(value)); return *this;}
    template<typename StorageVirtualMachinesT = StorageVirtualMachine>
    DescribeStorageVirtualMachinesResult& AddStorageVirtualMachines(StorageVirtualMachinesT&& value) { m_storageVirtualMachinesHasBeenSet = true; m_storageVirtualMachines.emplace_back(std::forward<StorageVirtualMachinesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeStorageVirtualMachinesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeStorageVirtualMachinesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StorageVirtualMachine> m_storageVirtualMachines;
    bool m_storageVirtualMachinesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
