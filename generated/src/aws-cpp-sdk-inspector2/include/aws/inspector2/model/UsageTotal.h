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
    AWS_INSPECTOR2_API UsageTotal() = default;
    AWS_INSPECTOR2_API UsageTotal(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API UsageTotal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID of the account that usage data was retrieved for.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    UsageTotal& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing the total usage for an account.</p>
     */
    inline const Aws::Vector<Usage>& GetUsage() const { return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    template<typename UsageT = Aws::Vector<Usage>>
    void SetUsage(UsageT&& value) { m_usageHasBeenSet = true; m_usage = std::forward<UsageT>(value); }
    template<typename UsageT = Aws::Vector<Usage>>
    UsageTotal& WithUsage(UsageT&& value) { SetUsage(std::forward<UsageT>(value)); return *this;}
    template<typename UsageT = Usage>
    UsageTotal& AddUsage(UsageT&& value) { m_usageHasBeenSet = true; m_usage.emplace_back(std::forward<UsageT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<Usage> m_usage;
    bool m_usageHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
