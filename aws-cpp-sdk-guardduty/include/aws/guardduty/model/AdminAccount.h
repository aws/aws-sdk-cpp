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
    AWS_GUARDDUTY_API AdminAccount();
    AWS_GUARDDUTY_API AdminAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AdminAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline const Aws::String& GetAdminAccountId() const{ return m_adminAccountId; }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline bool AdminAccountIdHasBeenSet() const { return m_adminAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline void SetAdminAccountId(const Aws::String& value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline void SetAdminAccountId(Aws::String&& value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline void SetAdminAccountId(const char* value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline AdminAccount& WithAdminAccountId(const Aws::String& value) { SetAdminAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline AdminAccount& WithAdminAccountId(Aws::String&& value) { SetAdminAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline AdminAccount& WithAdminAccountId(const char* value) { SetAdminAccountId(value); return *this;}


    /**
     * <p>Indicates whether the account is enabled as the delegated administrator.</p>
     */
    inline const AdminStatus& GetAdminStatus() const{ return m_adminStatus; }

    /**
     * <p>Indicates whether the account is enabled as the delegated administrator.</p>
     */
    inline bool AdminStatusHasBeenSet() const { return m_adminStatusHasBeenSet; }

    /**
     * <p>Indicates whether the account is enabled as the delegated administrator.</p>
     */
    inline void SetAdminStatus(const AdminStatus& value) { m_adminStatusHasBeenSet = true; m_adminStatus = value; }

    /**
     * <p>Indicates whether the account is enabled as the delegated administrator.</p>
     */
    inline void SetAdminStatus(AdminStatus&& value) { m_adminStatusHasBeenSet = true; m_adminStatus = std::move(value); }

    /**
     * <p>Indicates whether the account is enabled as the delegated administrator.</p>
     */
    inline AdminAccount& WithAdminStatus(const AdminStatus& value) { SetAdminStatus(value); return *this;}

    /**
     * <p>Indicates whether the account is enabled as the delegated administrator.</p>
     */
    inline AdminAccount& WithAdminStatus(AdminStatus&& value) { SetAdminStatus(std::move(value)); return *this;}

  private:

    Aws::String m_adminAccountId;
    bool m_adminAccountIdHasBeenSet = false;

    AdminStatus m_adminStatus;
    bool m_adminStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
