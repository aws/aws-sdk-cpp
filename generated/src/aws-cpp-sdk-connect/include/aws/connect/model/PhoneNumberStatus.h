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
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ClaimPhoneNumber.html">ClaimPhoneNumber</a>
   * or <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdatePhoneNumber.html">UpdatePhoneNumber</a>
   * operation succeeded.</p> </li> <li> <p> <code>IN_PROGRESS</code> means a <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ClaimPhoneNumber.html">ClaimPhoneNumber</a>,
   * <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdatePhoneNumber.html">UpdatePhoneNumber</a>,
   * or <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdatePhoneNumberMetadata.html">UpdatePhoneNumberMetadata</a>
   * operation is still in progress and has not yet completed. You can call <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribePhoneNumber.html">DescribePhoneNumber</a>
   * at a later time to verify if the previous operation has completed.</p> </li>
   * <li> <p> <code>FAILED</code> indicates that the previous <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ClaimPhoneNumber.html">ClaimPhoneNumber</a>
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
    AWS_CONNECT_API PhoneNumberStatus() = default;
    AWS_CONNECT_API PhoneNumberStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PhoneNumberStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status.</p>
     */
    inline PhoneNumberWorkflowStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PhoneNumberWorkflowStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PhoneNumberStatus& WithStatus(PhoneNumberWorkflowStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    PhoneNumberStatus& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    PhoneNumberWorkflowStatus m_status{PhoneNumberWorkflowStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
