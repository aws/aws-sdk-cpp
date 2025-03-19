/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/RemediationAction.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>An ordered list of actions you can take to remediate a
   * violation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/RemediationActionWithOrder">AWS
   * API Reference</a></p>
   */
  class RemediationActionWithOrder
  {
  public:
    AWS_FMS_API RemediationActionWithOrder() = default;
    AWS_FMS_API RemediationActionWithOrder(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API RemediationActionWithOrder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about an action you can take to remediate a violation.</p>
     */
    inline const RemediationAction& GetRemediationAction() const { return m_remediationAction; }
    inline bool RemediationActionHasBeenSet() const { return m_remediationActionHasBeenSet; }
    template<typename RemediationActionT = RemediationAction>
    void SetRemediationAction(RemediationActionT&& value) { m_remediationActionHasBeenSet = true; m_remediationAction = std::forward<RemediationActionT>(value); }
    template<typename RemediationActionT = RemediationAction>
    RemediationActionWithOrder& WithRemediationAction(RemediationActionT&& value) { SetRemediationAction(std::forward<RemediationActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order of the remediation actions in the list.</p>
     */
    inline int GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }
    inline RemediationActionWithOrder& WithOrder(int value) { SetOrder(value); return *this;}
    ///@}
  private:

    RemediationAction m_remediationAction;
    bool m_remediationActionHasBeenSet = false;

    int m_order{0};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
