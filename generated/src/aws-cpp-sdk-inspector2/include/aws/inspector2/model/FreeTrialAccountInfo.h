/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/FreeTrialInfo.h>
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
   * <p>Information about the Amazon Inspector free trial for an
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/FreeTrialAccountInfo">AWS
   * API Reference</a></p>
   */
  class FreeTrialAccountInfo
  {
  public:
    AWS_INSPECTOR2_API FreeTrialAccountInfo() = default;
    AWS_INSPECTOR2_API FreeTrialAccountInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API FreeTrialAccountInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account associated with the Amazon Inspector free trial information.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    FreeTrialAccountInfo& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the Amazon Inspector free trial for an
     * account.</p>
     */
    inline const Aws::Vector<FreeTrialInfo>& GetFreeTrialInfo() const { return m_freeTrialInfo; }
    inline bool FreeTrialInfoHasBeenSet() const { return m_freeTrialInfoHasBeenSet; }
    template<typename FreeTrialInfoT = Aws::Vector<FreeTrialInfo>>
    void SetFreeTrialInfo(FreeTrialInfoT&& value) { m_freeTrialInfoHasBeenSet = true; m_freeTrialInfo = std::forward<FreeTrialInfoT>(value); }
    template<typename FreeTrialInfoT = Aws::Vector<FreeTrialInfo>>
    FreeTrialAccountInfo& WithFreeTrialInfo(FreeTrialInfoT&& value) { SetFreeTrialInfo(std::forward<FreeTrialInfoT>(value)); return *this;}
    template<typename FreeTrialInfoT = FreeTrialInfo>
    FreeTrialAccountInfo& AddFreeTrialInfo(FreeTrialInfoT&& value) { m_freeTrialInfoHasBeenSet = true; m_freeTrialInfo.emplace_back(std::forward<FreeTrialInfoT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<FreeTrialInfo> m_freeTrialInfo;
    bool m_freeTrialInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
