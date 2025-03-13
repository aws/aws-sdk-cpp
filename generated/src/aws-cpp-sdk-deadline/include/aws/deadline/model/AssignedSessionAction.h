/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/AssignedSessionActionDefinition.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The action for a session defined by the session action ID.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AssignedSessionAction">AWS
   * API Reference</a></p>
   */
  class AssignedSessionAction
  {
  public:
    AWS_DEADLINE_API AssignedSessionAction() = default;
    AWS_DEADLINE_API AssignedSessionAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API AssignedSessionAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The session action ID for the assigned session.</p>
     */
    inline const Aws::String& GetSessionActionId() const { return m_sessionActionId; }
    inline bool SessionActionIdHasBeenSet() const { return m_sessionActionIdHasBeenSet; }
    template<typename SessionActionIdT = Aws::String>
    void SetSessionActionId(SessionActionIdT&& value) { m_sessionActionIdHasBeenSet = true; m_sessionActionId = std::forward<SessionActionIdT>(value); }
    template<typename SessionActionIdT = Aws::String>
    AssignedSessionAction& WithSessionActionId(SessionActionIdT&& value) { SetSessionActionId(std::forward<SessionActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the assigned session action.</p>
     */
    inline const AssignedSessionActionDefinition& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = AssignedSessionActionDefinition>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = AssignedSessionActionDefinition>
    AssignedSessionAction& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionActionId;
    bool m_sessionActionIdHasBeenSet = false;

    AssignedSessionActionDefinition m_definition;
    bool m_definitionHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
