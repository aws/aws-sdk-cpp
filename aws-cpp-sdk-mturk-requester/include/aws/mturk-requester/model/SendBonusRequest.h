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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API SendBonusRequest : public MTurkRequest
  {
  public:
    SendBonusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendBonus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Worker being paid the bonus.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p>The ID of the Worker being paid the bonus.</p>
     */
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }

    /**
     * <p>The ID of the Worker being paid the bonus.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p>The ID of the Worker being paid the bonus.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }

    /**
     * <p>The ID of the Worker being paid the bonus.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }

    /**
     * <p>The ID of the Worker being paid the bonus.</p>
     */
    inline SendBonusRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p>The ID of the Worker being paid the bonus.</p>
     */
    inline SendBonusRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Worker being paid the bonus.</p>
     */
    inline SendBonusRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}


    /**
     * <p> The Bonus amount is a US Dollar amount specified using a string (for
     * example, "5" represents $5.00 USD and "101.42" represents $101.42 USD). Do not
     * include currency symbols or currency codes. </p>
     */
    inline const Aws::String& GetBonusAmount() const{ return m_bonusAmount; }

    /**
     * <p> The Bonus amount is a US Dollar amount specified using a string (for
     * example, "5" represents $5.00 USD and "101.42" represents $101.42 USD). Do not
     * include currency symbols or currency codes. </p>
     */
    inline bool BonusAmountHasBeenSet() const { return m_bonusAmountHasBeenSet; }

    /**
     * <p> The Bonus amount is a US Dollar amount specified using a string (for
     * example, "5" represents $5.00 USD and "101.42" represents $101.42 USD). Do not
     * include currency symbols or currency codes. </p>
     */
    inline void SetBonusAmount(const Aws::String& value) { m_bonusAmountHasBeenSet = true; m_bonusAmount = value; }

    /**
     * <p> The Bonus amount is a US Dollar amount specified using a string (for
     * example, "5" represents $5.00 USD and "101.42" represents $101.42 USD). Do not
     * include currency symbols or currency codes. </p>
     */
    inline void SetBonusAmount(Aws::String&& value) { m_bonusAmountHasBeenSet = true; m_bonusAmount = std::move(value); }

    /**
     * <p> The Bonus amount is a US Dollar amount specified using a string (for
     * example, "5" represents $5.00 USD and "101.42" represents $101.42 USD). Do not
     * include currency symbols or currency codes. </p>
     */
    inline void SetBonusAmount(const char* value) { m_bonusAmountHasBeenSet = true; m_bonusAmount.assign(value); }

    /**
     * <p> The Bonus amount is a US Dollar amount specified using a string (for
     * example, "5" represents $5.00 USD and "101.42" represents $101.42 USD). Do not
     * include currency symbols or currency codes. </p>
     */
    inline SendBonusRequest& WithBonusAmount(const Aws::String& value) { SetBonusAmount(value); return *this;}

    /**
     * <p> The Bonus amount is a US Dollar amount specified using a string (for
     * example, "5" represents $5.00 USD and "101.42" represents $101.42 USD). Do not
     * include currency symbols or currency codes. </p>
     */
    inline SendBonusRequest& WithBonusAmount(Aws::String&& value) { SetBonusAmount(std::move(value)); return *this;}

    /**
     * <p> The Bonus amount is a US Dollar amount specified using a string (for
     * example, "5" represents $5.00 USD and "101.42" represents $101.42 USD). Do not
     * include currency symbols or currency codes. </p>
     */
    inline SendBonusRequest& WithBonusAmount(const char* value) { SetBonusAmount(value); return *this;}


    /**
     * <p>The ID of the assignment for which this bonus is paid.</p>
     */
    inline const Aws::String& GetAssignmentId() const{ return m_assignmentId; }

    /**
     * <p>The ID of the assignment for which this bonus is paid.</p>
     */
    inline bool AssignmentIdHasBeenSet() const { return m_assignmentIdHasBeenSet; }

    /**
     * <p>The ID of the assignment for which this bonus is paid.</p>
     */
    inline void SetAssignmentId(const Aws::String& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = value; }

    /**
     * <p>The ID of the assignment for which this bonus is paid.</p>
     */
    inline void SetAssignmentId(Aws::String&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::move(value); }

    /**
     * <p>The ID of the assignment for which this bonus is paid.</p>
     */
    inline void SetAssignmentId(const char* value) { m_assignmentIdHasBeenSet = true; m_assignmentId.assign(value); }

    /**
     * <p>The ID of the assignment for which this bonus is paid.</p>
     */
    inline SendBonusRequest& WithAssignmentId(const Aws::String& value) { SetAssignmentId(value); return *this;}

    /**
     * <p>The ID of the assignment for which this bonus is paid.</p>
     */
    inline SendBonusRequest& WithAssignmentId(Aws::String&& value) { SetAssignmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the assignment for which this bonus is paid.</p>
     */
    inline SendBonusRequest& WithAssignmentId(const char* value) { SetAssignmentId(value); return *this;}


    /**
     * <p>A message that explains the reason for the bonus payment. The Worker
     * receiving the bonus can see this message.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A message that explains the reason for the bonus payment. The Worker
     * receiving the bonus can see this message.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A message that explains the reason for the bonus payment. The Worker
     * receiving the bonus can see this message.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A message that explains the reason for the bonus payment. The Worker
     * receiving the bonus can see this message.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A message that explains the reason for the bonus payment. The Worker
     * receiving the bonus can see this message.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A message that explains the reason for the bonus payment. The Worker
     * receiving the bonus can see this message.</p>
     */
    inline SendBonusRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A message that explains the reason for the bonus payment. The Worker
     * receiving the bonus can see this message.</p>
     */
    inline SendBonusRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A message that explains the reason for the bonus payment. The Worker
     * receiving the bonus can see this message.</p>
     */
    inline SendBonusRequest& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>A unique identifier for this request, which allows you to retry the call on
     * error without granting multiple bonuses. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the bonus already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return an error with a message
     * containing the request ID.</p>
     */
    inline const Aws::String& GetUniqueRequestToken() const{ return m_uniqueRequestToken; }

    /**
     * <p>A unique identifier for this request, which allows you to retry the call on
     * error without granting multiple bonuses. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the bonus already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return an error with a message
     * containing the request ID.</p>
     */
    inline bool UniqueRequestTokenHasBeenSet() const { return m_uniqueRequestTokenHasBeenSet; }

    /**
     * <p>A unique identifier for this request, which allows you to retry the call on
     * error without granting multiple bonuses. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the bonus already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return an error with a message
     * containing the request ID.</p>
     */
    inline void SetUniqueRequestToken(const Aws::String& value) { m_uniqueRequestTokenHasBeenSet = true; m_uniqueRequestToken = value; }

    /**
     * <p>A unique identifier for this request, which allows you to retry the call on
     * error without granting multiple bonuses. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the bonus already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return an error with a message
     * containing the request ID.</p>
     */
    inline void SetUniqueRequestToken(Aws::String&& value) { m_uniqueRequestTokenHasBeenSet = true; m_uniqueRequestToken = std::move(value); }

    /**
     * <p>A unique identifier for this request, which allows you to retry the call on
     * error without granting multiple bonuses. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the bonus already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return an error with a message
     * containing the request ID.</p>
     */
    inline void SetUniqueRequestToken(const char* value) { m_uniqueRequestTokenHasBeenSet = true; m_uniqueRequestToken.assign(value); }

    /**
     * <p>A unique identifier for this request, which allows you to retry the call on
     * error without granting multiple bonuses. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the bonus already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return an error with a message
     * containing the request ID.</p>
     */
    inline SendBonusRequest& WithUniqueRequestToken(const Aws::String& value) { SetUniqueRequestToken(value); return *this;}

    /**
     * <p>A unique identifier for this request, which allows you to retry the call on
     * error without granting multiple bonuses. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the bonus already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return an error with a message
     * containing the request ID.</p>
     */
    inline SendBonusRequest& WithUniqueRequestToken(Aws::String&& value) { SetUniqueRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for this request, which allows you to retry the call on
     * error without granting multiple bonuses. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the bonus already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return an error with a message
     * containing the request ID.</p>
     */
    inline SendBonusRequest& WithUniqueRequestToken(const char* value) { SetUniqueRequestToken(value); return *this;}

  private:

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet;

    Aws::String m_bonusAmount;
    bool m_bonusAmountHasBeenSet;

    Aws::String m_assignmentId;
    bool m_assignmentIdHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;

    Aws::String m_uniqueRequestToken;
    bool m_uniqueRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
