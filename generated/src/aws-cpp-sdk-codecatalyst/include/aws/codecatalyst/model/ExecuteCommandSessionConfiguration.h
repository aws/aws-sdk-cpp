/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about the commands that will be run on a Dev Environment when an
   * SSH session begins.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ExecuteCommandSessionConfiguration">AWS
   * API Reference</a></p>
   */
  class ExecuteCommandSessionConfiguration
  {
  public:
    AWS_CODECATALYST_API ExecuteCommandSessionConfiguration() = default;
    AWS_CODECATALYST_API ExecuteCommandSessionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API ExecuteCommandSessionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The command used at the beginning of the SSH session to a Dev
     * Environment.</p>
     */
    inline const Aws::String& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::String>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::String>
    ExecuteCommandSessionConfiguration& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of arguments containing arguments and members.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArguments() const { return m_arguments; }
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }
    template<typename ArgumentsT = Aws::Vector<Aws::String>>
    void SetArguments(ArgumentsT&& value) { m_argumentsHasBeenSet = true; m_arguments = std::forward<ArgumentsT>(value); }
    template<typename ArgumentsT = Aws::Vector<Aws::String>>
    ExecuteCommandSessionConfiguration& WithArguments(ArgumentsT&& value) { SetArguments(std::forward<ArgumentsT>(value)); return *this;}
    template<typename ArgumentsT = Aws::String>
    ExecuteCommandSessionConfiguration& AddArguments(ArgumentsT&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace_back(std::forward<ArgumentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_command;
    bool m_commandHasBeenSet = false;

    Aws::Vector<Aws::String> m_arguments;
    bool m_argumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
