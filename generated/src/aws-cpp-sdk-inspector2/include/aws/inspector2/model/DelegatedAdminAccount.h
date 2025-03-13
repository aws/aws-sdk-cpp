/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/DelegatedAdminStatus.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details of the Amazon Inspector delegated administrator for your
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DelegatedAdminAccount">AWS
   * API Reference</a></p>
   */
  class DelegatedAdminAccount
  {
  public:
    AWS_INSPECTOR2_API DelegatedAdminAccount() = default;
    AWS_INSPECTOR2_API DelegatedAdminAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API DelegatedAdminAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    DelegatedAdminAccount& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon Inspector delegated administrator.</p>
     */
    inline DelegatedAdminStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DelegatedAdminStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DelegatedAdminAccount& WithStatus(DelegatedAdminStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    DelegatedAdminStatus m_status{DelegatedAdminStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
