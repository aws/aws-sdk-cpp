/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/AdminStatus.h>
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
   * <p>The account within the organization specified as the GuardDuty delegated
   * administrator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AdminAccount">AWS
   * API Reference</a></p>
   */
  class AdminAccount
  {
  public:
    AWS_GUARDDUTY_API AdminAccount() = default;
    AWS_GUARDDUTY_API AdminAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AdminAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline const Aws::String& GetAdminAccountId() const { return m_adminAccountId; }
    inline bool AdminAccountIdHasBeenSet() const { return m_adminAccountIdHasBeenSet; }
    template<typename AdminAccountIdT = Aws::String>
    void SetAdminAccountId(AdminAccountIdT&& value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId = std::forward<AdminAccountIdT>(value); }
    template<typename AdminAccountIdT = Aws::String>
    AdminAccount& WithAdminAccountId(AdminAccountIdT&& value) { SetAdminAccountId(std::forward<AdminAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the account is enabled as the delegated administrator.</p>
     */
    inline AdminStatus GetAdminStatus() const { return m_adminStatus; }
    inline bool AdminStatusHasBeenSet() const { return m_adminStatusHasBeenSet; }
    inline void SetAdminStatus(AdminStatus value) { m_adminStatusHasBeenSet = true; m_adminStatus = value; }
    inline AdminAccount& WithAdminStatus(AdminStatus value) { SetAdminStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_adminAccountId;
    bool m_adminAccountIdHasBeenSet = false;

    AdminStatus m_adminStatus{AdminStatus::NOT_SET};
    bool m_adminStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
