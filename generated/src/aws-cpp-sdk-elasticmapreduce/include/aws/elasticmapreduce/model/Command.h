/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>An entity describing an executable that runs on a cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/Command">AWS
   * API Reference</a></p>
   */
  class Command
  {
  public:
    AWS_EMR_API Command() = default;
    AWS_EMR_API Command(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Command& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the command.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Command& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of the command script.</p>
     */
    inline const Aws::String& GetScriptPath() const { return m_scriptPath; }
    inline bool ScriptPathHasBeenSet() const { return m_scriptPathHasBeenSet; }
    template<typename ScriptPathT = Aws::String>
    void SetScriptPath(ScriptPathT&& value) { m_scriptPathHasBeenSet = true; m_scriptPath = std::forward<ScriptPathT>(value); }
    template<typename ScriptPathT = Aws::String>
    Command& WithScriptPath(ScriptPathT&& value) { SetScriptPath(std::forward<ScriptPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Arguments for Amazon EMR to pass to the command for execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArgs() const { return m_args; }
    inline bool ArgsHasBeenSet() const { return m_argsHasBeenSet; }
    template<typename ArgsT = Aws::Vector<Aws::String>>
    void SetArgs(ArgsT&& value) { m_argsHasBeenSet = true; m_args = std::forward<ArgsT>(value); }
    template<typename ArgsT = Aws::Vector<Aws::String>>
    Command& WithArgs(ArgsT&& value) { SetArgs(std::forward<ArgsT>(value)); return *this;}
    template<typename ArgsT = Aws::String>
    Command& AddArgs(ArgsT&& value) { m_argsHasBeenSet = true; m_args.emplace_back(std::forward<ArgsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_scriptPath;
    bool m_scriptPathHasBeenSet = false;

    Aws::Vector<Aws::String> m_args;
    bool m_argsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
