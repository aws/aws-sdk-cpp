/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/CustomAccountPoolHandler.h>
#include <aws/datazone/model/AccountInfo.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The source of accounts for the account pool. In the current release, it's
   * either a static list of accounts provided by the customer or a custom Amazon Web
   * Services Lambda handler. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AccountSource">AWS
   * API Reference</a></p>
   */
  class AccountSource
  {
  public:
    AWS_DATAZONE_API AccountSource() = default;
    AWS_DATAZONE_API AccountSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AccountSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The static list of accounts within an account pool.</p>
     */
    inline const Aws::Vector<AccountInfo>& GetAccounts() const { return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    template<typename AccountsT = Aws::Vector<AccountInfo>>
    void SetAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts = std::forward<AccountsT>(value); }
    template<typename AccountsT = Aws::Vector<AccountInfo>>
    AccountSource& WithAccounts(AccountsT&& value) { SetAccounts(std::forward<AccountsT>(value)); return *this;}
    template<typename AccountsT = AccountInfo>
    AccountSource& AddAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts.emplace_back(std::forward<AccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom Amazon Web Services Lambda handler within an account pool.</p>
     */
    inline const CustomAccountPoolHandler& GetCustomAccountPoolHandler() const { return m_customAccountPoolHandler; }
    inline bool CustomAccountPoolHandlerHasBeenSet() const { return m_customAccountPoolHandlerHasBeenSet; }
    template<typename CustomAccountPoolHandlerT = CustomAccountPoolHandler>
    void SetCustomAccountPoolHandler(CustomAccountPoolHandlerT&& value) { m_customAccountPoolHandlerHasBeenSet = true; m_customAccountPoolHandler = std::forward<CustomAccountPoolHandlerT>(value); }
    template<typename CustomAccountPoolHandlerT = CustomAccountPoolHandler>
    AccountSource& WithCustomAccountPoolHandler(CustomAccountPoolHandlerT&& value) { SetCustomAccountPoolHandler(std::forward<CustomAccountPoolHandlerT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountInfo> m_accounts;
    bool m_accountsHasBeenSet = false;

    CustomAccountPoolHandler m_customAccountPoolHandler;
    bool m_customAccountPoolHandlerHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
