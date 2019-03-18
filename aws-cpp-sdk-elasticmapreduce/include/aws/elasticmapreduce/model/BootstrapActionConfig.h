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
  class AWS_EMR_API BootstrapActionConfig
  {
  public:
    BootstrapActionConfig();
    BootstrapActionConfig(Aws::Utils::Json::JsonView jsonValue);
    BootstrapActionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the bootstrap action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the bootstrap action.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the bootstrap action.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the bootstrap action.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the bootstrap action.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the bootstrap action.</p>
     */
    inline BootstrapActionConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the bootstrap action.</p>
     */
    inline BootstrapActionConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the bootstrap action.</p>
     */
    inline BootstrapActionConfig& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The script run by the bootstrap action.</p>
     */
    inline const ScriptBootstrapActionConfig& GetScriptBootstrapAction() const{ return m_scriptBootstrapAction; }

    /**
     * <p>The script run by the bootstrap action.</p>
     */
    inline bool ScriptBootstrapActionHasBeenSet() const { return m_scriptBootstrapActionHasBeenSet; }

    /**
     * <p>The script run by the bootstrap action.</p>
     */
    inline void SetScriptBootstrapAction(const ScriptBootstrapActionConfig& value) { m_scriptBootstrapActionHasBeenSet = true; m_scriptBootstrapAction = value; }

    /**
     * <p>The script run by the bootstrap action.</p>
     */
    inline void SetScriptBootstrapAction(ScriptBootstrapActionConfig&& value) { m_scriptBootstrapActionHasBeenSet = true; m_scriptBootstrapAction = std::move(value); }

    /**
     * <p>The script run by the bootstrap action.</p>
     */
    inline BootstrapActionConfig& WithScriptBootstrapAction(const ScriptBootstrapActionConfig& value) { SetScriptBootstrapAction(value); return *this;}

    /**
     * <p>The script run by the bootstrap action.</p>
     */
    inline BootstrapActionConfig& WithScriptBootstrapAction(ScriptBootstrapActionConfig&& value) { SetScriptBootstrapAction(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ScriptBootstrapActionConfig m_scriptBootstrapAction;
    bool m_scriptBootstrapActionHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
