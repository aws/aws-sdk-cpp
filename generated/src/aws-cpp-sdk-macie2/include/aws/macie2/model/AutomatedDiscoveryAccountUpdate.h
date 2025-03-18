/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/AutomatedDiscoveryAccountStatus.h>
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
   * <p>Changes the status of automated sensitive data discovery for an Amazon Macie
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AutomatedDiscoveryAccountUpdate">AWS
   * API Reference</a></p>
   */
  class AutomatedDiscoveryAccountUpdate
  {
  public:
    AWS_MACIE2_API AutomatedDiscoveryAccountUpdate() = default;
    AWS_MACIE2_API AutomatedDiscoveryAccountUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API AutomatedDiscoveryAccountUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AutomatedDiscoveryAccountUpdate& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new status of automated sensitive data discovery for the account. Valid
     * values are: ENABLED, perform automated sensitive data discovery activities for
     * the account; and, DISABLED, don't perform automated sensitive data discovery
     * activities for the account.</p>
     */
    inline AutomatedDiscoveryAccountStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AutomatedDiscoveryAccountStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AutomatedDiscoveryAccountUpdate& WithStatus(AutomatedDiscoveryAccountStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AutomatedDiscoveryAccountStatus m_status{AutomatedDiscoveryAccountStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
