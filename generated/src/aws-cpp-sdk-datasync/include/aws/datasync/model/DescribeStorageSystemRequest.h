﻿/**
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
  class DescribeStorageSystemRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API DescribeStorageSystemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStorageSystem"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of an on-premises storage system
     * that you're using with DataSync Discovery.</p>
     */
    inline const Aws::String& GetStorageSystemArn() const{ return m_storageSystemArn; }
    inline bool StorageSystemArnHasBeenSet() const { return m_storageSystemArnHasBeenSet; }
    inline void SetStorageSystemArn(const Aws::String& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = value; }
    inline void SetStorageSystemArn(Aws::String&& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = std::move(value); }
    inline void SetStorageSystemArn(const char* value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn.assign(value); }
    inline DescribeStorageSystemRequest& WithStorageSystemArn(const Aws::String& value) { SetStorageSystemArn(value); return *this;}
    inline DescribeStorageSystemRequest& WithStorageSystemArn(Aws::String&& value) { SetStorageSystemArn(std::move(value)); return *this;}
    inline DescribeStorageSystemRequest& WithStorageSystemArn(const char* value) { SetStorageSystemArn(value); return *this;}
    ///@}
  private:

    Aws::String m_storageSystemArn;
    bool m_storageSystemArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
