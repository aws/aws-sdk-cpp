/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
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
  class UpdateStorageVirtualMachineResult
  {
  public:
    AWS_FSX_API UpdateStorageVirtualMachineResult();
    AWS_FSX_API UpdateStorageVirtualMachineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API UpdateStorageVirtualMachineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const StorageVirtualMachine& GetStorageVirtualMachine() const{ return m_storageVirtualMachine; }

    
    inline void SetStorageVirtualMachine(const StorageVirtualMachine& value) { m_storageVirtualMachine = value; }

    
    inline void SetStorageVirtualMachine(StorageVirtualMachine&& value) { m_storageVirtualMachine = std::move(value); }

    
    inline UpdateStorageVirtualMachineResult& WithStorageVirtualMachine(const StorageVirtualMachine& value) { SetStorageVirtualMachine(value); return *this;}

    
    inline UpdateStorageVirtualMachineResult& WithStorageVirtualMachine(StorageVirtualMachine&& value) { SetStorageVirtualMachine(std::move(value)); return *this;}

  private:

    StorageVirtualMachine m_storageVirtualMachine;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
