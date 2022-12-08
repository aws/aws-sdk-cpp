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
    AWS_CODECATALYST_API ExecuteCommandSessionConfiguration();
    AWS_CODECATALYST_API ExecuteCommandSessionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API ExecuteCommandSessionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The command used at the beginning of the SSH session to a Dev
     * Environment.</p>
     */
    inline const Aws::String& GetCommand() const{ return m_command; }

    /**
     * <p>The command used at the beginning of the SSH session to a Dev
     * Environment.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The command used at the beginning of the SSH session to a Dev
     * Environment.</p>
     */
    inline void SetCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command used at the beginning of the SSH session to a Dev
     * Environment.</p>
     */
    inline void SetCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The command used at the beginning of the SSH session to a Dev
     * Environment.</p>
     */
    inline void SetCommand(const char* value) { m_commandHasBeenSet = true; m_command.assign(value); }

    /**
     * <p>The command used at the beginning of the SSH session to a Dev
     * Environment.</p>
     */
    inline ExecuteCommandSessionConfiguration& WithCommand(const Aws::String& value) { SetCommand(value); return *this;}

    /**
     * <p>The command used at the beginning of the SSH session to a Dev
     * Environment.</p>
     */
    inline ExecuteCommandSessionConfiguration& WithCommand(Aws::String&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>The command used at the beginning of the SSH session to a Dev
     * Environment.</p>
     */
    inline ExecuteCommandSessionConfiguration& WithCommand(const char* value) { SetCommand(value); return *this;}


    /**
     * <p>An array of arguments containing arguments and members.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArguments() const{ return m_arguments; }

    /**
     * <p>An array of arguments containing arguments and members.</p>
     */
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }

    /**
     * <p>An array of arguments containing arguments and members.</p>
     */
    inline void SetArguments(const Aws::Vector<Aws::String>& value) { m_argumentsHasBeenSet = true; m_arguments = value; }

    /**
     * <p>An array of arguments containing arguments and members.</p>
     */
    inline void SetArguments(Aws::Vector<Aws::String>&& value) { m_argumentsHasBeenSet = true; m_arguments = std::move(value); }

    /**
     * <p>An array of arguments containing arguments and members.</p>
     */
    inline ExecuteCommandSessionConfiguration& WithArguments(const Aws::Vector<Aws::String>& value) { SetArguments(value); return *this;}

    /**
     * <p>An array of arguments containing arguments and members.</p>
     */
    inline ExecuteCommandSessionConfiguration& WithArguments(Aws::Vector<Aws::String>&& value) { SetArguments(std::move(value)); return *this;}

    /**
     * <p>An array of arguments containing arguments and members.</p>
     */
    inline ExecuteCommandSessionConfiguration& AddArguments(const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.push_back(value); return *this; }

    /**
     * <p>An array of arguments containing arguments and members.</p>
     */
    inline ExecuteCommandSessionConfiguration& AddArguments(Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of arguments containing arguments and members.</p>
     */
    inline ExecuteCommandSessionConfiguration& AddArguments(const char* value) { m_argumentsHasBeenSet = true; m_arguments.push_back(value); return *this; }

  private:

    Aws::String m_command;
    bool m_commandHasBeenSet = false;

    Aws::Vector<Aws::String> m_arguments;
    bool m_argumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
