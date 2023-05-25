/**
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
   * <p>Contains information on the total of usage based on account
   * IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UsageAccountResult">AWS
   * API Reference</a></p>
   */
  class UsageAccountResult
  {
  public:
    AWS_GUARDDUTY_API UsageAccountResult();
    AWS_GUARDDUTY_API UsageAccountResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UsageAccountResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Account ID that generated usage.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Account ID that generated usage.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Account ID that generated usage.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Account ID that generated usage.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Account ID that generated usage.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Account ID that generated usage.</p>
     */
    inline UsageAccountResult& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Account ID that generated usage.</p>
     */
    inline UsageAccountResult& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Account ID that generated usage.</p>
     */
    inline UsageAccountResult& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Represents the total of usage for the Account ID.</p>
     */
    inline const Total& GetTotal() const{ return m_total; }

    /**
     * <p>Represents the total of usage for the Account ID.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>Represents the total of usage for the Account ID.</p>
     */
    inline void SetTotal(const Total& value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>Represents the total of usage for the Account ID.</p>
     */
    inline void SetTotal(Total&& value) { m_totalHasBeenSet = true; m_total = std::move(value); }

    /**
     * <p>Represents the total of usage for the Account ID.</p>
     */
    inline UsageAccountResult& WithTotal(const Total& value) { SetTotal(value); return *this;}

    /**
     * <p>Represents the total of usage for the Account ID.</p>
     */
    inline UsageAccountResult& WithTotal(Total&& value) { SetTotal(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Total m_total;
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
