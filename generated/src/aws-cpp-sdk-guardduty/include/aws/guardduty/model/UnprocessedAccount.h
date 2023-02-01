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
   * <p>Contains information about the accounts that weren't processed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UnprocessedAccount">AWS
   * API Reference</a></p>
   */
  class UnprocessedAccount
  {
  public:
    AWS_GUARDDUTY_API UnprocessedAccount();
    AWS_GUARDDUTY_API UnprocessedAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UnprocessedAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline UnprocessedAccount& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline UnprocessedAccount& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline UnprocessedAccount& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>A reason why the account hasn't been processed.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }

    /**
     * <p>A reason why the account hasn't been processed.</p>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p>A reason why the account hasn't been processed.</p>
     */
    inline void SetResult(const Aws::String& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>A reason why the account hasn't been processed.</p>
     */
    inline void SetResult(Aws::String&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>A reason why the account hasn't been processed.</p>
     */
    inline void SetResult(const char* value) { m_resultHasBeenSet = true; m_result.assign(value); }

    /**
     * <p>A reason why the account hasn't been processed.</p>
     */
    inline UnprocessedAccount& WithResult(const Aws::String& value) { SetResult(value); return *this;}

    /**
     * <p>A reason why the account hasn't been processed.</p>
     */
    inline UnprocessedAccount& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}

    /**
     * <p>A reason why the account hasn't been processed.</p>
     */
    inline UnprocessedAccount& WithResult(const char* value) { SetResult(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_result;
    bool m_resultHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
