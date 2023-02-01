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
    AWS_INSPECTOR2_API DelegatedAdminAccount();
    AWS_INSPECTOR2_API DelegatedAdminAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API DelegatedAdminAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline DelegatedAdminAccount& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline DelegatedAdminAccount& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline DelegatedAdminAccount& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The status of the Amazon Inspector delegated administrator.</p>
     */
    inline const DelegatedAdminStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Amazon Inspector delegated administrator.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Amazon Inspector delegated administrator.</p>
     */
    inline void SetStatus(const DelegatedAdminStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Amazon Inspector delegated administrator.</p>
     */
    inline void SetStatus(DelegatedAdminStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Amazon Inspector delegated administrator.</p>
     */
    inline DelegatedAdminAccount& WithStatus(const DelegatedAdminStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Amazon Inspector delegated administrator.</p>
     */
    inline DelegatedAdminAccount& WithStatus(DelegatedAdminStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    DelegatedAdminStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
