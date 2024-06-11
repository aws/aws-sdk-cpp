﻿/**
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
  class DisassociateMemberFromQueueRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API DisassociateMemberFromQueueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateMemberFromQueue"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The farm ID for the queue to disassociate from a member.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline DisassociateMemberFromQueueRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline DisassociateMemberFromQueueRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline DisassociateMemberFromQueueRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A member's principal ID to disassociate from a queue.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }
    inline DisassociateMemberFromQueueRequest& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline DisassociateMemberFromQueueRequest& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline DisassociateMemberFromQueueRequest& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID of the queue in which you're disassociating from a member.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline DisassociateMemberFromQueueRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline DisassociateMemberFromQueueRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline DisassociateMemberFromQueueRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
