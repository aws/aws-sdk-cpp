/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Provides detailed information about a policy finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/PolicyDetails">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API PolicyDetails
  {
  public:
    PolicyDetails();
    PolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    PolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action that occurred and produced the finding.</p>
     */
    inline const FindingAction& GetAction() const{ return m_action; }

    /**
     * <p>The action that occurred and produced the finding.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action that occurred and produced the finding.</p>
     */
    inline void SetAction(const FindingAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that occurred and produced the finding.</p>
     */
    inline void SetAction(FindingAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action that occurred and produced the finding.</p>
     */
    inline PolicyDetails& WithAction(const FindingAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action that occurred and produced the finding.</p>
     */
    inline PolicyDetails& WithAction(FindingAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The entity who performed the action that produced the finding.</p>
     */
    inline const FindingActor& GetActor() const{ return m_actor; }

    /**
     * <p>The entity who performed the action that produced the finding.</p>
     */
    inline bool ActorHasBeenSet() const { return m_actorHasBeenSet; }

    /**
     * <p>The entity who performed the action that produced the finding.</p>
     */
    inline void SetActor(const FindingActor& value) { m_actorHasBeenSet = true; m_actor = value; }

    /**
     * <p>The entity who performed the action that produced the finding.</p>
     */
    inline void SetActor(FindingActor&& value) { m_actorHasBeenSet = true; m_actor = std::move(value); }

    /**
     * <p>The entity who performed the action that produced the finding.</p>
     */
    inline PolicyDetails& WithActor(const FindingActor& value) { SetActor(value); return *this;}

    /**
     * <p>The entity who performed the action that produced the finding.</p>
     */
    inline PolicyDetails& WithActor(FindingActor&& value) { SetActor(std::move(value)); return *this;}

  private:

    FindingAction m_action;
    bool m_actionHasBeenSet;

    FindingActor m_actor;
    bool m_actorHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
