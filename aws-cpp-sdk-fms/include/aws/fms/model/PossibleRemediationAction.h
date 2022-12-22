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
    AWS_FMS_API PossibleRemediationAction();
    AWS_FMS_API PossibleRemediationAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API PossibleRemediationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the list of remediation actions.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the list of remediation actions.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the list of remediation actions.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the list of remediation actions.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the list of remediation actions.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the list of remediation actions.</p>
     */
    inline PossibleRemediationAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the list of remediation actions.</p>
     */
    inline PossibleRemediationAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the list of remediation actions.</p>
     */
    inline PossibleRemediationAction& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ordered list of remediation actions.</p>
     */
    inline const Aws::Vector<RemediationActionWithOrder>& GetOrderedRemediationActions() const{ return m_orderedRemediationActions; }

    /**
     * <p>The ordered list of remediation actions.</p>
     */
    inline bool OrderedRemediationActionsHasBeenSet() const { return m_orderedRemediationActionsHasBeenSet; }

    /**
     * <p>The ordered list of remediation actions.</p>
     */
    inline void SetOrderedRemediationActions(const Aws::Vector<RemediationActionWithOrder>& value) { m_orderedRemediationActionsHasBeenSet = true; m_orderedRemediationActions = value; }

    /**
     * <p>The ordered list of remediation actions.</p>
     */
    inline void SetOrderedRemediationActions(Aws::Vector<RemediationActionWithOrder>&& value) { m_orderedRemediationActionsHasBeenSet = true; m_orderedRemediationActions = std::move(value); }

    /**
     * <p>The ordered list of remediation actions.</p>
     */
    inline PossibleRemediationAction& WithOrderedRemediationActions(const Aws::Vector<RemediationActionWithOrder>& value) { SetOrderedRemediationActions(value); return *this;}

    /**
     * <p>The ordered list of remediation actions.</p>
     */
    inline PossibleRemediationAction& WithOrderedRemediationActions(Aws::Vector<RemediationActionWithOrder>&& value) { SetOrderedRemediationActions(std::move(value)); return *this;}

    /**
     * <p>The ordered list of remediation actions.</p>
     */
    inline PossibleRemediationAction& AddOrderedRemediationActions(const RemediationActionWithOrder& value) { m_orderedRemediationActionsHasBeenSet = true; m_orderedRemediationActions.push_back(value); return *this; }

    /**
     * <p>The ordered list of remediation actions.</p>
     */
    inline PossibleRemediationAction& AddOrderedRemediationActions(RemediationActionWithOrder&& value) { m_orderedRemediationActionsHasBeenSet = true; m_orderedRemediationActions.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about whether an action is taken by default.</p>
     */
    inline bool GetIsDefaultAction() const{ return m_isDefaultAction; }

    /**
     * <p>Information about whether an action is taken by default.</p>
     */
    inline bool IsDefaultActionHasBeenSet() const { return m_isDefaultActionHasBeenSet; }

    /**
     * <p>Information about whether an action is taken by default.</p>
     */
    inline void SetIsDefaultAction(bool value) { m_isDefaultActionHasBeenSet = true; m_isDefaultAction = value; }

    /**
     * <p>Information about whether an action is taken by default.</p>
     */
    inline PossibleRemediationAction& WithIsDefaultAction(bool value) { SetIsDefaultAction(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<RemediationActionWithOrder> m_orderedRemediationActions;
    bool m_orderedRemediationActionsHasBeenSet = false;

    bool m_isDefaultAction;
    bool m_isDefaultActionHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
