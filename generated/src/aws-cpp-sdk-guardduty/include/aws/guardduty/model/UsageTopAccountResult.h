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
   * <p>Contains information on the total of usage based on the topmost 50 account
   * IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UsageTopAccountResult">AWS
   * API Reference</a></p>
   */
  class UsageTopAccountResult
  {
  public:
    AWS_GUARDDUTY_API UsageTopAccountResult();
    AWS_GUARDDUTY_API UsageTopAccountResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UsageTopAccountResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The unique account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The unique account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The unique account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The unique account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The unique account ID.</p>
     */
    inline UsageTopAccountResult& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The unique account ID.</p>
     */
    inline UsageTopAccountResult& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique account ID.</p>
     */
    inline UsageTopAccountResult& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    
    inline const Total& GetTotal() const{ return m_total; }

    
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    
    inline void SetTotal(const Total& value) { m_totalHasBeenSet = true; m_total = value; }

    
    inline void SetTotal(Total&& value) { m_totalHasBeenSet = true; m_total = std::move(value); }

    
    inline UsageTopAccountResult& WithTotal(const Total& value) { SetTotal(value); return *this;}

    
    inline UsageTopAccountResult& WithTotal(Total&& value) { SetTotal(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Total m_total;
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
