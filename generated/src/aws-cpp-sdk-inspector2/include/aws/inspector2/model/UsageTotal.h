/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/Usage.h>
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
   * <p>The total of usage for an account ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UsageTotal">AWS
   * API Reference</a></p>
   */
  class UsageTotal
  {
  public:
    AWS_INSPECTOR2_API UsageTotal();
    AWS_INSPECTOR2_API UsageTotal(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API UsageTotal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account ID of the account that usage data was retrieved for.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID of the account that usage data was retrieved for.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID of the account that usage data was retrieved for.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID of the account that usage data was retrieved for.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID of the account that usage data was retrieved for.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID of the account that usage data was retrieved for.</p>
     */
    inline UsageTotal& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID of the account that usage data was retrieved for.</p>
     */
    inline UsageTotal& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID of the account that usage data was retrieved for.</p>
     */
    inline UsageTotal& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>An object representing the total usage for an account.</p>
     */
    inline const Aws::Vector<Usage>& GetUsage() const{ return m_usage; }

    /**
     * <p>An object representing the total usage for an account.</p>
     */
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }

    /**
     * <p>An object representing the total usage for an account.</p>
     */
    inline void SetUsage(const Aws::Vector<Usage>& value) { m_usageHasBeenSet = true; m_usage = value; }

    /**
     * <p>An object representing the total usage for an account.</p>
     */
    inline void SetUsage(Aws::Vector<Usage>&& value) { m_usageHasBeenSet = true; m_usage = std::move(value); }

    /**
     * <p>An object representing the total usage for an account.</p>
     */
    inline UsageTotal& WithUsage(const Aws::Vector<Usage>& value) { SetUsage(value); return *this;}

    /**
     * <p>An object representing the total usage for an account.</p>
     */
    inline UsageTotal& WithUsage(Aws::Vector<Usage>&& value) { SetUsage(std::move(value)); return *this;}

    /**
     * <p>An object representing the total usage for an account.</p>
     */
    inline UsageTotal& AddUsage(const Usage& value) { m_usageHasBeenSet = true; m_usage.push_back(value); return *this; }

    /**
     * <p>An object representing the total usage for an account.</p>
     */
    inline UsageTotal& AddUsage(Usage&& value) { m_usageHasBeenSet = true; m_usage.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<Usage> m_usage;
    bool m_usageHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
