/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/PhoneNumberWorkflowStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>The status of the phone number.</p> <ul> <li> <p> <code>CLAIMED</code> means
   * the previous <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ClaimedPhoneNumber.html">ClaimedPhoneNumber</a>
   * or <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdatePhoneNumber.html">UpdatePhoneNumber</a>
   * operation succeeded.</p> </li> <li> <p> <code>IN_PROGRESS</code> means a <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ClaimedPhoneNumber.html">ClaimedPhoneNumber</a>
   * or <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdatePhoneNumber.html">UpdatePhoneNumber</a>
   * operation is still in progress and has not yet completed. You can call <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribePhoneNumber.html">DescribePhoneNumber</a>
   * at a later time to verify if the previous operation has completed.</p> </li>
   * <li> <p> <code>FAILED</code> indicates that the previous <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ClaimedPhoneNumber.html">ClaimedPhoneNumber</a>
   * or <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdatePhoneNumber.html">UpdatePhoneNumber</a>
   * operation has failed. It will include a message indicating the failure reason. A
   * common reason for a failure may be that the <code>TargetArn</code> value you are
   * claiming or updating a phone number to has reached its limit of total claimed
   * numbers. If you received a <code>FAILED</code> status from a
   * <code>ClaimPhoneNumber</code> API call, you have one day to retry claiming the
   * phone number before the number is released back to the inventory for other
   * customers to claim.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PhoneNumberStatus">AWS
   * API Reference</a></p>
   */
  class PhoneNumberStatus
  {
  public:
    AWS_CONNECT_API PhoneNumberStatus();
    AWS_CONNECT_API PhoneNumberStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PhoneNumberStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status.</p>
     */
    inline const PhoneNumberWorkflowStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(const PhoneNumberWorkflowStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(PhoneNumberWorkflowStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status.</p>
     */
    inline PhoneNumberStatus& WithStatus(const PhoneNumberWorkflowStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline PhoneNumberStatus& WithStatus(PhoneNumberWorkflowStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The status message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The status message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The status message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The status message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The status message.</p>
     */
    inline PhoneNumberStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The status message.</p>
     */
    inline PhoneNumberStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The status message.</p>
     */
    inline PhoneNumberStatus& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    PhoneNumberWorkflowStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
