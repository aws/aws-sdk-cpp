/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the following fields:</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeWorkingStorageOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API DescribeWorkingStorageResult
  {
  public:
    DescribeWorkingStorageResult();
    DescribeWorkingStorageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeWorkingStorageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline DescribeWorkingStorageResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeWorkingStorageResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline DescribeWorkingStorageResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>An array of the gateway's local disk IDs that are configured as working
     * storage. Each local disk ID is specified as a string (minimum length of 1 and
     * maximum length of 300). If no local disks are configured as working storage,
     * then the DiskIds array is empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDiskIds() const{ return m_diskIds; }

    /**
     * <p>An array of the gateway's local disk IDs that are configured as working
     * storage. Each local disk ID is specified as a string (minimum length of 1 and
     * maximum length of 300). If no local disks are configured as working storage,
     * then the DiskIds array is empty.</p>
     */
    inline void SetDiskIds(const Aws::Vector<Aws::String>& value) { m_diskIds = value; }

    /**
     * <p>An array of the gateway's local disk IDs that are configured as working
     * storage. Each local disk ID is specified as a string (minimum length of 1 and
     * maximum length of 300). If no local disks are configured as working storage,
     * then the DiskIds array is empty.</p>
     */
    inline void SetDiskIds(Aws::Vector<Aws::String>&& value) { m_diskIds = std::move(value); }

    /**
     * <p>An array of the gateway's local disk IDs that are configured as working
     * storage. Each local disk ID is specified as a string (minimum length of 1 and
     * maximum length of 300). If no local disks are configured as working storage,
     * then the DiskIds array is empty.</p>
     */
    inline DescribeWorkingStorageResult& WithDiskIds(const Aws::Vector<Aws::String>& value) { SetDiskIds(value); return *this;}

    /**
     * <p>An array of the gateway's local disk IDs that are configured as working
     * storage. Each local disk ID is specified as a string (minimum length of 1 and
     * maximum length of 300). If no local disks are configured as working storage,
     * then the DiskIds array is empty.</p>
     */
    inline DescribeWorkingStorageResult& WithDiskIds(Aws::Vector<Aws::String>&& value) { SetDiskIds(std::move(value)); return *this;}

    /**
     * <p>An array of the gateway's local disk IDs that are configured as working
     * storage. Each local disk ID is specified as a string (minimum length of 1 and
     * maximum length of 300). If no local disks are configured as working storage,
     * then the DiskIds array is empty.</p>
     */
    inline DescribeWorkingStorageResult& AddDiskIds(const Aws::String& value) { m_diskIds.push_back(value); return *this; }

    /**
     * <p>An array of the gateway's local disk IDs that are configured as working
     * storage. Each local disk ID is specified as a string (minimum length of 1 and
     * maximum length of 300). If no local disks are configured as working storage,
     * then the DiskIds array is empty.</p>
     */
    inline DescribeWorkingStorageResult& AddDiskIds(Aws::String&& value) { m_diskIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of the gateway's local disk IDs that are configured as working
     * storage. Each local disk ID is specified as a string (minimum length of 1 and
     * maximum length of 300). If no local disks are configured as working storage,
     * then the DiskIds array is empty.</p>
     */
    inline DescribeWorkingStorageResult& AddDiskIds(const char* value) { m_diskIds.push_back(value); return *this; }


    /**
     * <p>The total working storage in bytes in use by the gateway. If no working
     * storage is configured for the gateway, this field returns 0.</p>
     */
    inline long long GetWorkingStorageUsedInBytes() const{ return m_workingStorageUsedInBytes; }

    /**
     * <p>The total working storage in bytes in use by the gateway. If no working
     * storage is configured for the gateway, this field returns 0.</p>
     */
    inline void SetWorkingStorageUsedInBytes(long long value) { m_workingStorageUsedInBytes = value; }

    /**
     * <p>The total working storage in bytes in use by the gateway. If no working
     * storage is configured for the gateway, this field returns 0.</p>
     */
    inline DescribeWorkingStorageResult& WithWorkingStorageUsedInBytes(long long value) { SetWorkingStorageUsedInBytes(value); return *this;}


    /**
     * <p>The total working storage in bytes allocated for the gateway. If no working
     * storage is configured for the gateway, this field returns 0.</p>
     */
    inline long long GetWorkingStorageAllocatedInBytes() const{ return m_workingStorageAllocatedInBytes; }

    /**
     * <p>The total working storage in bytes allocated for the gateway. If no working
     * storage is configured for the gateway, this field returns 0.</p>
     */
    inline void SetWorkingStorageAllocatedInBytes(long long value) { m_workingStorageAllocatedInBytes = value; }

    /**
     * <p>The total working storage in bytes allocated for the gateway. If no working
     * storage is configured for the gateway, this field returns 0.</p>
     */
    inline DescribeWorkingStorageResult& WithWorkingStorageAllocatedInBytes(long long value) { SetWorkingStorageAllocatedInBytes(value); return *this;}

  private:

    Aws::String m_gatewayARN;

    Aws::Vector<Aws::String> m_diskIds;

    long long m_workingStorageUsedInBytes;

    long long m_workingStorageAllocatedInBytes;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
