/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about actions that define permissions to check against a
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/Access">AWS
   * API Reference</a></p>
   */
  class Access
  {
  public:
    AWS_ACCESSANALYZER_API Access();
    AWS_ACCESSANALYZER_API Access(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Access& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of actions for the access permissions. Any strings that can be used as
     * an action in an IAM policy can be used in the list of actions to check.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }

    /**
     * <p>A list of actions for the access permissions. Any strings that can be used as
     * an action in an IAM policy can be used in the list of actions to check.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>A list of actions for the access permissions. Any strings that can be used as
     * an action in an IAM policy can be used in the list of actions to check.</p>
     */
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>A list of actions for the access permissions. Any strings that can be used as
     * an action in an IAM policy can be used in the list of actions to check.</p>
     */
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>A list of actions for the access permissions. Any strings that can be used as
     * an action in an IAM policy can be used in the list of actions to check.</p>
     */
    inline Access& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}

    /**
     * <p>A list of actions for the access permissions. Any strings that can be used as
     * an action in an IAM policy can be used in the list of actions to check.</p>
     */
    inline Access& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>A list of actions for the access permissions. Any strings that can be used as
     * an action in an IAM policy can be used in the list of actions to check.</p>
     */
    inline Access& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>A list of actions for the access permissions. Any strings that can be used as
     * an action in an IAM policy can be used in the list of actions to check.</p>
     */
    inline Access& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of actions for the access permissions. Any strings that can be used as
     * an action in an IAM policy can be used in the list of actions to check.</p>
     */
    inline Access& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
