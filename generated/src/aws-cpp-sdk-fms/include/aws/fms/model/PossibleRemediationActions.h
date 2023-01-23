/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/PossibleRemediationAction.h>
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
   * <p>A list of possible remediation action lists. Each individual possible
   * remediation action is a list of individual remediation actions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PossibleRemediationActions">AWS
   * API Reference</a></p>
   */
  class PossibleRemediationActions
  {
  public:
    AWS_FMS_API PossibleRemediationActions();
    AWS_FMS_API PossibleRemediationActions(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API PossibleRemediationActions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the possible remediation actions list.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the possible remediation actions list.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the possible remediation actions list.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the possible remediation actions list.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the possible remediation actions list.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the possible remediation actions list.</p>
     */
    inline PossibleRemediationActions& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the possible remediation actions list.</p>
     */
    inline PossibleRemediationActions& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the possible remediation actions list.</p>
     */
    inline PossibleRemediationActions& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the actions.</p>
     */
    inline const Aws::Vector<PossibleRemediationAction>& GetActions() const{ return m_actions; }

    /**
     * <p>Information about the actions.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>Information about the actions.</p>
     */
    inline void SetActions(const Aws::Vector<PossibleRemediationAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>Information about the actions.</p>
     */
    inline void SetActions(Aws::Vector<PossibleRemediationAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>Information about the actions.</p>
     */
    inline PossibleRemediationActions& WithActions(const Aws::Vector<PossibleRemediationAction>& value) { SetActions(value); return *this;}

    /**
     * <p>Information about the actions.</p>
     */
    inline PossibleRemediationActions& WithActions(Aws::Vector<PossibleRemediationAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>Information about the actions.</p>
     */
    inline PossibleRemediationActions& AddActions(const PossibleRemediationAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>Information about the actions.</p>
     */
    inline PossibleRemediationActions& AddActions(PossibleRemediationAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<PossibleRemediationAction> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
