/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies the details of an account to associate with an Amazon Macie
   * administrator account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AccountDetail">AWS
   * API Reference</a></p>
   */
  class AccountDetail
  {
  public:
    AWS_MACIE2_API AccountDetail();
    AWS_MACIE2_API AccountDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API AccountDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline AccountDetail& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline AccountDetail& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline AccountDetail& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The email address for the account.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address for the account.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address for the account.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address for the account.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address for the account.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address for the account.</p>
     */
    inline AccountDetail& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address for the account.</p>
     */
    inline AccountDetail& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address for the account.</p>
     */
    inline AccountDetail& WithEmail(const char* value) { SetEmail(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
