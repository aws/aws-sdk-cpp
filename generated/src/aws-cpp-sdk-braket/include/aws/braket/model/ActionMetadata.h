/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>Contains metadata about the quantum task action, including the action type
   * and program statistics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/ActionMetadata">AWS
   * API Reference</a></p>
   */
  class ActionMetadata
  {
  public:
    AWS_BRAKET_API ActionMetadata() = default;
    AWS_BRAKET_API ActionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API ActionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of action associated with the quantum task.</p>
     */
    inline const Aws::String& GetActionType() const { return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    template<typename ActionTypeT = Aws::String>
    void SetActionType(ActionTypeT&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::forward<ActionTypeT>(value); }
    template<typename ActionTypeT = Aws::String>
    ActionMetadata& WithActionType(ActionTypeT&& value) { SetActionType(std::forward<ActionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of programs in a program set. This is only available for a Program
     * Set.</p>
     */
    inline long long GetProgramCount() const { return m_programCount; }
    inline bool ProgramCountHasBeenSet() const { return m_programCountHasBeenSet; }
    inline void SetProgramCount(long long value) { m_programCountHasBeenSet = true; m_programCount = value; }
    inline ActionMetadata& WithProgramCount(long long value) { SetProgramCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of executables in a program set. This is only available for a
     * Program Set.</p>
     */
    inline long long GetExecutableCount() const { return m_executableCount; }
    inline bool ExecutableCountHasBeenSet() const { return m_executableCountHasBeenSet; }
    inline void SetExecutableCount(long long value) { m_executableCountHasBeenSet = true; m_executableCount = value; }
    inline ActionMetadata& WithExecutableCount(long long value) { SetExecutableCount(value); return *this;}
    ///@}
  private:

    Aws::String m_actionType;
    bool m_actionTypeHasBeenSet = false;

    long long m_programCount{0};
    bool m_programCountHasBeenSet = false;

    long long m_executableCount{0};
    bool m_executableCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
