﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/Total.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information on the total of usage based on the topmost 50 account
   * IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UsageTopAccountResult">AWS
   * API Reference</a></p>
   */
  class UsageTopAccountResult
  {
  public:
    AWS_GUARDDUTY_API UsageTopAccountResult() = default;
    AWS_GUARDDUTY_API UsageTopAccountResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UsageTopAccountResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    UsageTopAccountResult& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Total& GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    template<typename TotalT = Total>
    void SetTotal(TotalT&& value) { m_totalHasBeenSet = true; m_total = std::forward<TotalT>(value); }
    template<typename TotalT = Total>
    UsageTopAccountResult& WithTotal(TotalT&& value) { SetTotal(std::forward<TotalT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Total m_total;
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
