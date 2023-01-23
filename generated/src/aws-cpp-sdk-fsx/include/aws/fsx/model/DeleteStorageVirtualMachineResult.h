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
    AWS_FSX_API DeleteStorageVirtualMachineResult();
    AWS_FSX_API DeleteStorageVirtualMachineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DeleteStorageVirtualMachineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the SVM Amazon FSx is deleting.</p>
     */
    inline const Aws::String& GetStorageVirtualMachineId() const{ return m_storageVirtualMachineId; }

    /**
     * <p>The ID of the SVM Amazon FSx is deleting.</p>
     */
    inline void SetStorageVirtualMachineId(const Aws::String& value) { m_storageVirtualMachineId = value; }

    /**
     * <p>The ID of the SVM Amazon FSx is deleting.</p>
     */
    inline void SetStorageVirtualMachineId(Aws::String&& value) { m_storageVirtualMachineId = std::move(value); }

    /**
     * <p>The ID of the SVM Amazon FSx is deleting.</p>
     */
    inline void SetStorageVirtualMachineId(const char* value) { m_storageVirtualMachineId.assign(value); }

    /**
     * <p>The ID of the SVM Amazon FSx is deleting.</p>
     */
    inline DeleteStorageVirtualMachineResult& WithStorageVirtualMachineId(const Aws::String& value) { SetStorageVirtualMachineId(value); return *this;}

    /**
     * <p>The ID of the SVM Amazon FSx is deleting.</p>
     */
    inline DeleteStorageVirtualMachineResult& WithStorageVirtualMachineId(Aws::String&& value) { SetStorageVirtualMachineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SVM Amazon FSx is deleting.</p>
     */
    inline DeleteStorageVirtualMachineResult& WithStorageVirtualMachineId(const char* value) { SetStorageVirtualMachineId(value); return *this;}


    /**
     * <p>Describes the lifecycle state of the SVM being deleted.</p>
     */
    inline const StorageVirtualMachineLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>Describes the lifecycle state of the SVM being deleted.</p>
     */
    inline void SetLifecycle(const StorageVirtualMachineLifecycle& value) { m_lifecycle = value; }

    /**
     * <p>Describes the lifecycle state of the SVM being deleted.</p>
     */
    inline void SetLifecycle(StorageVirtualMachineLifecycle&& value) { m_lifecycle = std::move(value); }

    /**
     * <p>Describes the lifecycle state of the SVM being deleted.</p>
     */
    inline DeleteStorageVirtualMachineResult& WithLifecycle(const StorageVirtualMachineLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>Describes the lifecycle state of the SVM being deleted.</p>
     */
    inline DeleteStorageVirtualMachineResult& WithLifecycle(StorageVirtualMachineLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}

  private:

    Aws::String m_storageVirtualMachineId;

    StorageVirtualMachineLifecycle m_lifecycle;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
