/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>An object that contains details about the status of Amazon Inspector deep
   * inspection for a member account in your organization.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/MemberAccountEc2DeepInspectionStatus">AWS
   * API Reference</a></p>
   */
  class MemberAccountEc2DeepInspectionStatus
  {
  public:
    AWS_INSPECTOR2_API MemberAccountEc2DeepInspectionStatus() = default;
    AWS_INSPECTOR2_API MemberAccountEc2DeepInspectionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API MemberAccountEc2DeepInspectionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the Amazon Web Services account of the organization
     * member.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    MemberAccountEc2DeepInspectionStatus& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether Amazon Inspector deep inspection is active in the account. If
     * <code>TRUE</code> Amazon Inspector deep inspection is active, if
     * <code>FALSE</code> it is not active.</p>
     */
    inline bool GetActivateDeepInspection() const { return m_activateDeepInspection; }
    inline bool ActivateDeepInspectionHasBeenSet() const { return m_activateDeepInspectionHasBeenSet; }
    inline void SetActivateDeepInspection(bool value) { m_activateDeepInspectionHasBeenSet = true; m_activateDeepInspection = value; }
    inline MemberAccountEc2DeepInspectionStatus& WithActivateDeepInspection(bool value) { SetActivateDeepInspection(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    bool m_activateDeepInspection{false};
    bool m_activateDeepInspectionHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
