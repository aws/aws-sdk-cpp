/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/RecipientDetail.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Contains the information of one or more recipients who receive the
   * emails.</p>  <p>You must <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
   * the users that receive emails to your AWS SSO store</a>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/EmailRecipients">AWS
   * API Reference</a></p>
   */
  class EmailRecipients
  {
  public:
    AWS_IOTEVENTS_API EmailRecipients();
    AWS_IOTEVENTS_API EmailRecipients(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API EmailRecipients& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies one or more recipients who receive the email.</p>
     */
    inline const Aws::Vector<RecipientDetail>& GetTo() const{ return m_to; }

    /**
     * <p>Specifies one or more recipients who receive the email.</p>
     */
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    /**
     * <p>Specifies one or more recipients who receive the email.</p>
     */
    inline void SetTo(const Aws::Vector<RecipientDetail>& value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p>Specifies one or more recipients who receive the email.</p>
     */
    inline void SetTo(Aws::Vector<RecipientDetail>&& value) { m_toHasBeenSet = true; m_to = std::move(value); }

    /**
     * <p>Specifies one or more recipients who receive the email.</p>
     */
    inline EmailRecipients& WithTo(const Aws::Vector<RecipientDetail>& value) { SetTo(value); return *this;}

    /**
     * <p>Specifies one or more recipients who receive the email.</p>
     */
    inline EmailRecipients& WithTo(Aws::Vector<RecipientDetail>&& value) { SetTo(std::move(value)); return *this;}

    /**
     * <p>Specifies one or more recipients who receive the email.</p>
     */
    inline EmailRecipients& AddTo(const RecipientDetail& value) { m_toHasBeenSet = true; m_to.push_back(value); return *this; }

    /**
     * <p>Specifies one or more recipients who receive the email.</p>
     */
    inline EmailRecipients& AddTo(RecipientDetail&& value) { m_toHasBeenSet = true; m_to.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RecipientDetail> m_to;
    bool m_toHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
