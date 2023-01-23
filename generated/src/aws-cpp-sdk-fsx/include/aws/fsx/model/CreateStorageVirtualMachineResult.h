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

  private:

    StorageVirtualMachine m_storageVirtualMachine;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
