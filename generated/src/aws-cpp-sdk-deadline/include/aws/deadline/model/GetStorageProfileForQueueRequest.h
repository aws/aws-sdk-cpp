/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class GetStorageProfileForQueueRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API GetStorageProfileForQueueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetStorageProfileForQueue"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The farm ID for the queue in storage profile.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline GetStorageProfileForQueueRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline GetStorageProfileForQueueRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline GetStorageProfileForQueueRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID the queue in the storage profile.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline GetStorageProfileForQueueRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline GetStorageProfileForQueueRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline GetStorageProfileForQueueRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage profile ID for the storage profile in the queue.</p>
     */
    inline const Aws::String& GetStorageProfileId() const{ return m_storageProfileId; }
    inline bool StorageProfileIdHasBeenSet() const { return m_storageProfileIdHasBeenSet; }
    inline void SetStorageProfileId(const Aws::String& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = value; }
    inline void SetStorageProfileId(Aws::String&& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = std::move(value); }
    inline void SetStorageProfileId(const char* value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId.assign(value); }
    inline GetStorageProfileForQueueRequest& WithStorageProfileId(const Aws::String& value) { SetStorageProfileId(value); return *this;}
    inline GetStorageProfileForQueueRequest& WithStorageProfileId(Aws::String&& value) { SetStorageProfileId(std::move(value)); return *this;}
    inline GetStorageProfileForQueueRequest& WithStorageProfileId(const char* value) { SetStorageProfileId(value); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_storageProfileId;
    bool m_storageProfileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
