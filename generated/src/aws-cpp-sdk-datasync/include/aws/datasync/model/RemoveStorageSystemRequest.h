/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class RemoveStorageSystemRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API RemoveStorageSystemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveStorageSystem"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the storage system that you want
     * to permanently remove from DataSync Discovery.</p>
     */
    inline const Aws::String& GetStorageSystemArn() const{ return m_storageSystemArn; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the storage system that you want
     * to permanently remove from DataSync Discovery.</p>
     */
    inline bool StorageSystemArnHasBeenSet() const { return m_storageSystemArnHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the storage system that you want
     * to permanently remove from DataSync Discovery.</p>
     */
    inline void SetStorageSystemArn(const Aws::String& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the storage system that you want
     * to permanently remove from DataSync Discovery.</p>
     */
    inline void SetStorageSystemArn(Aws::String&& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the storage system that you want
     * to permanently remove from DataSync Discovery.</p>
     */
    inline void SetStorageSystemArn(const char* value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the storage system that you want
     * to permanently remove from DataSync Discovery.</p>
     */
    inline RemoveStorageSystemRequest& WithStorageSystemArn(const Aws::String& value) { SetStorageSystemArn(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the storage system that you want
     * to permanently remove from DataSync Discovery.</p>
     */
    inline RemoveStorageSystemRequest& WithStorageSystemArn(Aws::String&& value) { SetStorageSystemArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the storage system that you want
     * to permanently remove from DataSync Discovery.</p>
     */
    inline RemoveStorageSystemRequest& WithStorageSystemArn(const char* value) { SetStorageSystemArn(value); return *this;}

  private:

    Aws::String m_storageSystemArn;
    bool m_storageSystemArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
