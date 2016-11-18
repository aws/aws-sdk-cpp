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
#include <aws/core/utils/memory/stl/AWSVector.h>

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

  class AWS_EMR_API ScriptBootstrapActionConfig
  {
  public:
    ScriptBootstrapActionConfig();
    ScriptBootstrapActionConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    ScriptBootstrapActionConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetPath() const{ return m_path; }

    
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = value; }

    
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    
    inline ScriptBootstrapActionConfig& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    
    inline ScriptBootstrapActionConfig& WithPath(Aws::String&& value) { SetPath(value); return *this;}

    
    inline ScriptBootstrapActionConfig& WithPath(const char* value) { SetPath(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetArgs() const{ return m_args; }

    
    inline void SetArgs(const Aws::Vector<Aws::String>& value) { m_argsHasBeenSet = true; m_args = value; }

    
    inline void SetArgs(Aws::Vector<Aws::String>&& value) { m_argsHasBeenSet = true; m_args = value; }

    
    inline ScriptBootstrapActionConfig& WithArgs(const Aws::Vector<Aws::String>& value) { SetArgs(value); return *this;}

    
    inline ScriptBootstrapActionConfig& WithArgs(Aws::Vector<Aws::String>&& value) { SetArgs(value); return *this;}

    
    inline ScriptBootstrapActionConfig& AddArgs(const Aws::String& value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

    
    inline ScriptBootstrapActionConfig& AddArgs(Aws::String&& value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

    
    inline ScriptBootstrapActionConfig& AddArgs(const char* value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

  private:
    Aws::String m_path;
    bool m_pathHasBeenSet;
    Aws::Vector<Aws::String> m_args;
    bool m_argsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
