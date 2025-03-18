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
    AWS_IOTEVENTS_API EmailRecipients() = default;
    AWS_IOTEVENTS_API EmailRecipients(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API EmailRecipients& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies one or more recipients who receive the email.</p>
     */
    inline const Aws::Vector<RecipientDetail>& GetTo() const { return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    template<typename ToT = Aws::Vector<RecipientDetail>>
    void SetTo(ToT&& value) { m_toHasBeenSet = true; m_to = std::forward<ToT>(value); }
    template<typename ToT = Aws::Vector<RecipientDetail>>
    EmailRecipients& WithTo(ToT&& value) { SetTo(std::forward<ToT>(value)); return *this;}
    template<typename ToT = RecipientDetail>
    EmailRecipients& AddTo(ToT&& value) { m_toHasBeenSet = true; m_to.emplace_back(std::forward<ToT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RecipientDetail> m_to;
    bool m_toHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
