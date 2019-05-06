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
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object containing one or more of the following fields:</p> <ul> <li>
   * <p> <a>AddWorkingStorageInput$DiskIds</a> </p> </li> </ul><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AddWorkingStorageInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API AddWorkingStorageRequest : public StorageGatewayRequest
  {
  public:
    AddWorkingStorageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddWorkingStorage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline AddWorkingStorageRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline AddWorkingStorageRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline AddWorkingStorageRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDiskIds() const{ return m_diskIds; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline bool DiskIdsHasBeenSet() const { return m_diskIdsHasBeenSet; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline void SetDiskIds(const Aws::Vector<Aws::String>& value) { m_diskIdsHasBeenSet = true; m_diskIds = value; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline void SetDiskIds(Aws::Vector<Aws::String>&& value) { m_diskIdsHasBeenSet = true; m_diskIds = std::move(value); }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline AddWorkingStorageRequest& WithDiskIds(const Aws::Vector<Aws::String>& value) { SetDiskIds(value); return *this;}

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline AddWorkingStorageRequest& WithDiskIds(Aws::Vector<Aws::String>&& value) { SetDiskIds(std::move(value)); return *this;}

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline AddWorkingStorageRequest& AddDiskIds(const Aws::String& value) { m_diskIdsHasBeenSet = true; m_diskIds.push_back(value); return *this; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline AddWorkingStorageRequest& AddDiskIds(Aws::String&& value) { m_diskIdsHasBeenSet = true; m_diskIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline AddWorkingStorageRequest& AddDiskIds(const char* value) { m_diskIdsHasBeenSet = true; m_diskIds.push_back(value); return *this; }

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;

    Aws::Vector<Aws::String> m_diskIds;
    bool m_diskIdsHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
