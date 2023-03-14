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
    AWS_FSX_API CreateStorageVirtualMachineResult();
    AWS_FSX_API CreateStorageVirtualMachineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CreateStorageVirtualMachineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returned after a successful <code>CreateStorageVirtualMachine</code>
     * operation; describes the SVM just created.</p>
     */
    inline const StorageVirtualMachine& GetStorageVirtualMachine() const{ return m_storageVirtualMachine; }

    /**
     * <p>Returned after a successful <code>CreateStorageVirtualMachine</code>
     * operation; describes the SVM just created.</p>
     */
    inline void SetStorageVirtualMachine(const StorageVirtualMachine& value) { m_storageVirtualMachine = value; }

    /**
     * <p>Returned after a successful <code>CreateStorageVirtualMachine</code>
     * operation; describes the SVM just created.</p>
     */
    inline void SetStorageVirtualMachine(StorageVirtualMachine&& value) { m_storageVirtualMachine = std::move(value); }

    /**
     * <p>Returned after a successful <code>CreateStorageVirtualMachine</code>
     * operation; describes the SVM just created.</p>
     */
    inline CreateStorageVirtualMachineResult& WithStorageVirtualMachine(const StorageVirtualMachine& value) { SetStorageVirtualMachine(value); return *this;}

    /**
     * <p>Returned after a successful <code>CreateStorageVirtualMachine</code>
     * operation; describes the SVM just created.</p>
     */
    inline CreateStorageVirtualMachineResult& WithStorageVirtualMachine(StorageVirtualMachine&& value) { SetStorageVirtualMachine(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateStorageVirtualMachineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateStorageVirtualMachineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateStorageVirtualMachineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StorageVirtualMachine m_storageVirtualMachine;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
