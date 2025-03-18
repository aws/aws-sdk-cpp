/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/FindingAction.h>
#include <aws/macie2/model/FindingActor.h>
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
   * <p>Provides the details of a policy finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/PolicyDetails">AWS
   * API Reference</a></p>
   */
  class PolicyDetails
  {
  public:
    AWS_MACIE2_API PolicyDetails() = default;
    AWS_MACIE2_API PolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API PolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action that produced the finding.</p>
     */
    inline const FindingAction& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = FindingAction>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = FindingAction>
    PolicyDetails& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that performed the action that produced the finding.</p>
     */
    inline const FindingActor& GetActor() const { return m_actor; }
    inline bool ActorHasBeenSet() const { return m_actorHasBeenSet; }
    template<typename ActorT = FindingActor>
    void SetActor(ActorT&& value) { m_actorHasBeenSet = true; m_actor = std::forward<ActorT>(value); }
    template<typename ActorT = FindingActor>
    PolicyDetails& WithActor(ActorT&& value) { SetActor(std::forward<ActorT>(value)); return *this;}
    ///@}
  private:

    FindingAction m_action;
    bool m_actionHasBeenSet = false;

    FindingActor m_actor;
    bool m_actorHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
