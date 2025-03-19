/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains details about the remote Amazon Web Services account that made the
   * API call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RemoteAccountDetails">AWS
   * API Reference</a></p>
   */
  class RemoteAccountDetails
  {
  public:
    AWS_GUARDDUTY_API RemoteAccountDetails() = default;
    AWS_GUARDDUTY_API RemoteAccountDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API RemoteAccountDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the remote API caller.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    RemoteAccountDetails& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details on whether the Amazon Web Services account of the remote API caller
     * is related to your GuardDuty environment. If this value is <code>True</code> the
     * API caller is affiliated to your account in some way. If it is
     * <code>False</code> the API caller is from outside your environment.</p>
     */
    inline bool GetAffiliated() const { return m_affiliated; }
    inline bool AffiliatedHasBeenSet() const { return m_affiliatedHasBeenSet; }
    inline void SetAffiliated(bool value) { m_affiliatedHasBeenSet = true; m_affiliated = value; }
    inline RemoteAccountDetails& WithAffiliated(bool value) { SetAffiliated(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    bool m_affiliated{false};
    bool m_affiliatedHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
