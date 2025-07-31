/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisRuleStatus.h>
#include <aws/core/utils/Array.h>
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
   * <p>The CIS session message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisSessionMessage">AWS
   * API Reference</a></p>
   */
  class CisSessionMessage
  {
  public:
    AWS_INSPECTOR2_API CisSessionMessage() = default;
    AWS_INSPECTOR2_API CisSessionMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisSessionMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The rule ID for the CIS session message.</p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    CisSessionMessage& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the CIS session message.</p>
     */
    inline CisRuleStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CisRuleStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CisSessionMessage& WithStatus(CisRuleStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS rule details for the CIS session message.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCisRuleDetails() const { return m_cisRuleDetails; }
    inline bool CisRuleDetailsHasBeenSet() const { return m_cisRuleDetailsHasBeenSet; }
    template<typename CisRuleDetailsT = Aws::Utils::ByteBuffer>
    void SetCisRuleDetails(CisRuleDetailsT&& value) { m_cisRuleDetailsHasBeenSet = true; m_cisRuleDetails = std::forward<CisRuleDetailsT>(value); }
    template<typename CisRuleDetailsT = Aws::Utils::ByteBuffer>
    CisSessionMessage& WithCisRuleDetails(CisRuleDetailsT&& value) { SetCisRuleDetails(std::forward<CisRuleDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    CisRuleStatus m_status{CisRuleStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::ByteBuffer m_cisRuleDetails{};
    bool m_cisRuleDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
