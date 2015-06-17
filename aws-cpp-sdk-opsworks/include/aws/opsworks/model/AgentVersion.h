/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/StackConfigurationManager.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_OPSWORKS_API AgentVersion
  {
  public:
    AgentVersion();
    AgentVersion(const Aws::Utils::Json::JsonValue& jsonValue);
    AgentVersion& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetVersion() const{ return m_version; }
    
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    
    inline AgentVersion&  WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    
    inline AgentVersion& WithVersion(const char* value) { SetVersion(value); return *this;}

    
    inline const StackConfigurationManager& GetConfigurationManager() const{ return m_configurationManager; }
    
    inline void SetConfigurationManager(const StackConfigurationManager& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = value; }

    
    inline AgentVersion&  WithConfigurationManager(const StackConfigurationManager& value) { SetConfigurationManager(value); return *this;}

  private:
    Aws::String m_version;
    bool m_versionHasBeenSet;
    StackConfigurationManager m_configurationManager;
    bool m_configurationManagerHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
