/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/ReceiptType.h>
#include <aws/core/utils/DateTime.h>
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
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>Records events during an engagement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/Receipt">AWS
   * API Reference</a></p>
   */
  class Receipt
  {
  public:
    AWS_SSMCONTACTS_API Receipt();
    AWS_SSMCONTACTS_API Receipt(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Receipt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel Incident Manager
     * engaged.</p>
     */
    inline const Aws::String& GetContactChannelArn() const{ return m_contactChannelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel Incident Manager
     * engaged.</p>
     */
    inline bool ContactChannelArnHasBeenSet() const { return m_contactChannelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel Incident Manager
     * engaged.</p>
     */
    inline void SetContactChannelArn(const Aws::String& value) { m_contactChannelArnHasBeenSet = true; m_contactChannelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel Incident Manager
     * engaged.</p>
     */
    inline void SetContactChannelArn(Aws::String&& value) { m_contactChannelArnHasBeenSet = true; m_contactChannelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel Incident Manager
     * engaged.</p>
     */
    inline void SetContactChannelArn(const char* value) { m_contactChannelArnHasBeenSet = true; m_contactChannelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel Incident Manager
     * engaged.</p>
     */
    inline Receipt& WithContactChannelArn(const Aws::String& value) { SetContactChannelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel Incident Manager
     * engaged.</p>
     */
    inline Receipt& WithContactChannelArn(Aws::String&& value) { SetContactChannelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel Incident Manager
     * engaged.</p>
     */
    inline Receipt& WithContactChannelArn(const char* value) { SetContactChannelArn(value); return *this;}


    /**
     * <p>The type follows the engagement cycle, <code>SENT</code>,
     * <code>DELIVERED</code>, and <code>READ</code>.</p>
     */
    inline const ReceiptType& GetReceiptType() const{ return m_receiptType; }

    /**
     * <p>The type follows the engagement cycle, <code>SENT</code>,
     * <code>DELIVERED</code>, and <code>READ</code>.</p>
     */
    inline bool ReceiptTypeHasBeenSet() const { return m_receiptTypeHasBeenSet; }

    /**
     * <p>The type follows the engagement cycle, <code>SENT</code>,
     * <code>DELIVERED</code>, and <code>READ</code>.</p>
     */
    inline void SetReceiptType(const ReceiptType& value) { m_receiptTypeHasBeenSet = true; m_receiptType = value; }

    /**
     * <p>The type follows the engagement cycle, <code>SENT</code>,
     * <code>DELIVERED</code>, and <code>READ</code>.</p>
     */
    inline void SetReceiptType(ReceiptType&& value) { m_receiptTypeHasBeenSet = true; m_receiptType = std::move(value); }

    /**
     * <p>The type follows the engagement cycle, <code>SENT</code>,
     * <code>DELIVERED</code>, and <code>READ</code>.</p>
     */
    inline Receipt& WithReceiptType(const ReceiptType& value) { SetReceiptType(value); return *this;}

    /**
     * <p>The type follows the engagement cycle, <code>SENT</code>,
     * <code>DELIVERED</code>, and <code>READ</code>.</p>
     */
    inline Receipt& WithReceiptType(ReceiptType&& value) { SetReceiptType(std::move(value)); return *this;}


    /**
     * <p>Information provided during the page acknowledgement.</p>
     */
    inline const Aws::String& GetReceiptInfo() const{ return m_receiptInfo; }

    /**
     * <p>Information provided during the page acknowledgement.</p>
     */
    inline bool ReceiptInfoHasBeenSet() const { return m_receiptInfoHasBeenSet; }

    /**
     * <p>Information provided during the page acknowledgement.</p>
     */
    inline void SetReceiptInfo(const Aws::String& value) { m_receiptInfoHasBeenSet = true; m_receiptInfo = value; }

    /**
     * <p>Information provided during the page acknowledgement.</p>
     */
    inline void SetReceiptInfo(Aws::String&& value) { m_receiptInfoHasBeenSet = true; m_receiptInfo = std::move(value); }

    /**
     * <p>Information provided during the page acknowledgement.</p>
     */
    inline void SetReceiptInfo(const char* value) { m_receiptInfoHasBeenSet = true; m_receiptInfo.assign(value); }

    /**
     * <p>Information provided during the page acknowledgement.</p>
     */
    inline Receipt& WithReceiptInfo(const Aws::String& value) { SetReceiptInfo(value); return *this;}

    /**
     * <p>Information provided during the page acknowledgement.</p>
     */
    inline Receipt& WithReceiptInfo(Aws::String&& value) { SetReceiptInfo(std::move(value)); return *this;}

    /**
     * <p>Information provided during the page acknowledgement.</p>
     */
    inline Receipt& WithReceiptInfo(const char* value) { SetReceiptInfo(value); return *this;}


    /**
     * <p>The time receipt was <code>SENT</code>, <code>DELIVERED</code>, or
     * <code>READ</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetReceiptTime() const{ return m_receiptTime; }

    /**
     * <p>The time receipt was <code>SENT</code>, <code>DELIVERED</code>, or
     * <code>READ</code>.</p>
     */
    inline bool ReceiptTimeHasBeenSet() const { return m_receiptTimeHasBeenSet; }

    /**
     * <p>The time receipt was <code>SENT</code>, <code>DELIVERED</code>, or
     * <code>READ</code>.</p>
     */
    inline void SetReceiptTime(const Aws::Utils::DateTime& value) { m_receiptTimeHasBeenSet = true; m_receiptTime = value; }

    /**
     * <p>The time receipt was <code>SENT</code>, <code>DELIVERED</code>, or
     * <code>READ</code>.</p>
     */
    inline void SetReceiptTime(Aws::Utils::DateTime&& value) { m_receiptTimeHasBeenSet = true; m_receiptTime = std::move(value); }

    /**
     * <p>The time receipt was <code>SENT</code>, <code>DELIVERED</code>, or
     * <code>READ</code>.</p>
     */
    inline Receipt& WithReceiptTime(const Aws::Utils::DateTime& value) { SetReceiptTime(value); return *this;}

    /**
     * <p>The time receipt was <code>SENT</code>, <code>DELIVERED</code>, or
     * <code>READ</code>.</p>
     */
    inline Receipt& WithReceiptTime(Aws::Utils::DateTime&& value) { SetReceiptTime(std::move(value)); return *this;}

  private:

    Aws::String m_contactChannelArn;
    bool m_contactChannelArnHasBeenSet = false;

    ReceiptType m_receiptType;
    bool m_receiptTypeHasBeenSet = false;

    Aws::String m_receiptInfo;
    bool m_receiptInfoHasBeenSet = false;

    Aws::Utils::DateTime m_receiptTime;
    bool m_receiptTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
