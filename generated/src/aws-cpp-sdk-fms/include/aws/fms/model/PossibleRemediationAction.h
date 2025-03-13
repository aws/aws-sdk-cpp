/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/RemediationActionWithOrder.h>
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
   * <p>A list of remediation actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PossibleRemediationAction">AWS
   * API Reference</a></p>
   */
  class PossibleRemediationAction
  {
  public:
    AWS_FMS_API PossibleRemediationAction() = default;
    AWS_FMS_API PossibleRemediationAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API PossibleRemediationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of the list of remediation actions.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PossibleRemediationAction& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ordered list of remediation actions.</p>
     */
    inline const Aws::Vector<RemediationActionWithOrder>& GetOrderedRemediationActions() const { return m_orderedRemediationActions; }
    inline bool OrderedRemediationActionsHasBeenSet() const { return m_orderedRemediationActionsHasBeenSet; }
    template<typename OrderedRemediationActionsT = Aws::Vector<RemediationActionWithOrder>>
    void SetOrderedRemediationActions(OrderedRemediationActionsT&& value) { m_orderedRemediationActionsHasBeenSet = true; m_orderedRemediationActions = std::forward<OrderedRemediationActionsT>(value); }
    template<typename OrderedRemediationActionsT = Aws::Vector<RemediationActionWithOrder>>
    PossibleRemediationAction& WithOrderedRemediationActions(OrderedRemediationActionsT&& value) { SetOrderedRemediationActions(std::forward<OrderedRemediationActionsT>(value)); return *this;}
    template<typename OrderedRemediationActionsT = RemediationActionWithOrder>
    PossibleRemediationAction& AddOrderedRemediationActions(OrderedRemediationActionsT&& value) { m_orderedRemediationActionsHasBeenSet = true; m_orderedRemediationActions.emplace_back(std::forward<OrderedRemediationActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about whether an action is taken by default.</p>
     */
    inline bool GetIsDefaultAction() const { return m_isDefaultAction; }
    inline bool IsDefaultActionHasBeenSet() const { return m_isDefaultActionHasBeenSet; }
    inline void SetIsDefaultAction(bool value) { m_isDefaultActionHasBeenSet = true; m_isDefaultAction = value; }
    inline PossibleRemediationAction& WithIsDefaultAction(bool value) { SetIsDefaultAction(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<RemediationActionWithOrder> m_orderedRemediationActions;
    bool m_orderedRemediationActionsHasBeenSet = false;

    bool m_isDefaultAction{false};
    bool m_isDefaultActionHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
