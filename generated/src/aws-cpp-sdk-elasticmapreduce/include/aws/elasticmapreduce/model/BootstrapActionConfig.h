/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/ScriptBootstrapActionConfig.h>
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
   * <p>Configuration of a bootstrap action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/BootstrapActionConfig">AWS
   * API Reference</a></p>
   */
  class BootstrapActionConfig
  {
  public:
    AWS_EMR_API BootstrapActionConfig() = default;
    AWS_EMR_API BootstrapActionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API BootstrapActionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the bootstrap action.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    BootstrapActionConfig& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The script run by the bootstrap action.</p>
     */
    inline const ScriptBootstrapActionConfig& GetScriptBootstrapAction() const { return m_scriptBootstrapAction; }
    inline bool ScriptBootstrapActionHasBeenSet() const { return m_scriptBootstrapActionHasBeenSet; }
    template<typename ScriptBootstrapActionT = ScriptBootstrapActionConfig>
    void SetScriptBootstrapAction(ScriptBootstrapActionT&& value) { m_scriptBootstrapActionHasBeenSet = true; m_scriptBootstrapAction = std::forward<ScriptBootstrapActionT>(value); }
    template<typename ScriptBootstrapActionT = ScriptBootstrapActionConfig>
    BootstrapActionConfig& WithScriptBootstrapAction(ScriptBootstrapActionT&& value) { SetScriptBootstrapAction(std::forward<ScriptBootstrapActionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ScriptBootstrapActionConfig m_scriptBootstrapAction;
    bool m_scriptBootstrapActionHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
