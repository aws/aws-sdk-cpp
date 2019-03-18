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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/StackConfigurationManager.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an agent version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AgentVersion">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API AgentVersion
  {
  public:
    AgentVersion();
    AgentVersion(Aws::Utils::Json::JsonView jsonValue);
    AgentVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The agent version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The agent version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The agent version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The agent version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The agent version.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The agent version.</p>
     */
    inline AgentVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The agent version.</p>
     */
    inline AgentVersion& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The agent version.</p>
     */
    inline AgentVersion& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The configuration manager.</p>
     */
    inline const StackConfigurationManager& GetConfigurationManager() const{ return m_configurationManager; }

    /**
     * <p>The configuration manager.</p>
     */
    inline bool ConfigurationManagerHasBeenSet() const { return m_configurationManagerHasBeenSet; }

    /**
     * <p>The configuration manager.</p>
     */
    inline void SetConfigurationManager(const StackConfigurationManager& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = value; }

    /**
     * <p>The configuration manager.</p>
     */
    inline void SetConfigurationManager(StackConfigurationManager&& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = std::move(value); }

    /**
     * <p>The configuration manager.</p>
     */
    inline AgentVersion& WithConfigurationManager(const StackConfigurationManager& value) { SetConfigurationManager(value); return *this;}

    /**
     * <p>The configuration manager.</p>
     */
    inline AgentVersion& WithConfigurationManager(StackConfigurationManager&& value) { SetConfigurationManager(std::move(value)); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet;

    StackConfigurationManager m_configurationManager;
    bool m_configurationManagerHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
