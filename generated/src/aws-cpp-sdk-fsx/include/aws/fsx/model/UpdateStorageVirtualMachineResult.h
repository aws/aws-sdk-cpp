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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateStorageVirtualMachineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateStorageVirtualMachineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateStorageVirtualMachineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StorageVirtualMachine m_storageVirtualMachine;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
