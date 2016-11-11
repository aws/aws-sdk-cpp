/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  class AWS_EMR_API BootstrapActionConfig
  {
  public:
    BootstrapActionConfig();
    BootstrapActionConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    BootstrapActionConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline BootstrapActionConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline BootstrapActionConfig& WithName(Aws::String&& value) { SetName(value); return *this;}

    
    inline BootstrapActionConfig& WithName(const char* value) { SetName(value); return *this;}

    
    inline const ScriptBootstrapActionConfig& GetScriptBootstrapAction() const{ return m_scriptBootstrapAction; }

    
    inline void SetScriptBootstrapAction(const ScriptBootstrapActionConfig& value) { m_scriptBootstrapActionHasBeenSet = true; m_scriptBootstrapAction = value; }

    
    inline void SetScriptBootstrapAction(ScriptBootstrapActionConfig&& value) { m_scriptBootstrapActionHasBeenSet = true; m_scriptBootstrapAction = value; }

    
    inline BootstrapActionConfig& WithScriptBootstrapAction(const ScriptBootstrapActionConfig& value) { SetScriptBootstrapAction(value); return *this;}

    
    inline BootstrapActionConfig& WithScriptBootstrapAction(ScriptBootstrapActionConfig&& value) { SetScriptBootstrapAction(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    ScriptBootstrapActionConfig m_scriptBootstrapAction;
    bool m_scriptBootstrapActionHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
