﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/AdminStatus.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the delegated Amazon Macie administrator account
   * for an AWS organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AdminAccount">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API AdminAccount
  {
  public:
    AdminAccount();
    AdminAccount(Aws::Utils::Json::JsonView jsonValue);
    AdminAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account ID for the account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account ID for the account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account ID for the account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account ID for the account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account ID for the account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account ID for the account.</p>
     */
    inline AdminAccount& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID for the account.</p>
     */
    inline AdminAccount& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID for the account.</p>
     */
    inline AdminAccount& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The current status of the account as the delegated administrator of Amazon
     * Macie for the organization.</p>
     */
    inline const AdminStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the account as the delegated administrator of Amazon
     * Macie for the organization.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the account as the delegated administrator of Amazon
     * Macie for the organization.</p>
     */
    inline void SetStatus(const AdminStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the account as the delegated administrator of Amazon
     * Macie for the organization.</p>
     */
    inline void SetStatus(AdminStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the account as the delegated administrator of Amazon
     * Macie for the organization.</p>
     */
    inline AdminAccount& WithStatus(const AdminStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the account as the delegated administrator of Amazon
     * Macie for the organization.</p>
     */
    inline AdminAccount& WithStatus(AdminStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    AdminStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
