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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>AWS OpsWorks Stacks supports five lifecycle events: <b>setup</b>,
   * <b>configuration</b>, <b>deploy</b>, <b>undeploy</b>, and <b>shutdown</b>. For
   * each layer, AWS OpsWorks Stacks runs a set of standard recipes for each event.
   * In addition, you can provide custom recipes for any or all layers and events.
   * AWS OpsWorks Stacks runs custom event recipes after the standard recipes.
   * <code>LayerCustomRecipes</code> specifies the custom recipes for a particular
   * layer to be run in response to each of the five events. </p> <p>To specify a
   * recipe, use the cookbook's directory name in the repository followed by two
   * colons and the recipe name, which is the recipe's file name without the .rb
   * extension. For example: phpapp2::dbsetup specifies the dbsetup.rb recipe in the
   * repository's phpapp2 folder.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/Recipes">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API Recipes
  {
  public:
    Recipes();
    Recipes(Aws::Utils::Json::JsonView jsonValue);
    Recipes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of custom recipe names to be run following a <code>setup</code>
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSetup() const{ return m_setup; }

    /**
     * <p>An array of custom recipe names to be run following a <code>setup</code>
     * event.</p>
     */
    inline bool SetupHasBeenSet() const { return m_setupHasBeenSet; }

    /**
     * <p>An array of custom recipe names to be run following a <code>setup</code>
     * event.</p>
     */
    inline void SetSetup(const Aws::Vector<Aws::String>& value) { m_setupHasBeenSet = true; m_setup = value; }

    /**
     * <p>An array of custom recipe names to be run following a <code>setup</code>
     * event.</p>
     */
    inline void SetSetup(Aws::Vector<Aws::String>&& value) { m_setupHasBeenSet = true; m_setup = std::move(value); }

    /**
     * <p>An array of custom recipe names to be run following a <code>setup</code>
     * event.</p>
     */
    inline Recipes& WithSetup(const Aws::Vector<Aws::String>& value) { SetSetup(value); return *this;}

    /**
     * <p>An array of custom recipe names to be run following a <code>setup</code>
     * event.</p>
     */
    inline Recipes& WithSetup(Aws::Vector<Aws::String>&& value) { SetSetup(std::move(value)); return *this;}

    /**
     * <p>An array of custom recipe names to be run following a <code>setup</code>
     * event.</p>
     */
    inline Recipes& AddSetup(const Aws::String& value) { m_setupHasBeenSet = true; m_setup.push_back(value); return *this; }

    /**
     * <p>An array of custom recipe names to be run following a <code>setup</code>
     * event.</p>
     */
    inline Recipes& AddSetup(Aws::String&& value) { m_setupHasBeenSet = true; m_setup.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of custom recipe names to be run following a <code>setup</code>
     * event.</p>
     */
    inline Recipes& AddSetup(const char* value) { m_setupHasBeenSet = true; m_setup.push_back(value); return *this; }


    /**
     * <p>An array of custom recipe names to be run following a <code>configure</code>
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigure() const{ return m_configure; }

    /**
     * <p>An array of custom recipe names to be run following a <code>configure</code>
     * event.</p>
     */
    inline bool ConfigureHasBeenSet() const { return m_configureHasBeenSet; }

    /**
     * <p>An array of custom recipe names to be run following a <code>configure</code>
     * event.</p>
     */
    inline void SetConfigure(const Aws::Vector<Aws::String>& value) { m_configureHasBeenSet = true; m_configure = value; }

    /**
     * <p>An array of custom recipe names to be run following a <code>configure</code>
     * event.</p>
     */
    inline void SetConfigure(Aws::Vector<Aws::String>&& value) { m_configureHasBeenSet = true; m_configure = std::move(value); }

    /**
     * <p>An array of custom recipe names to be run following a <code>configure</code>
     * event.</p>
     */
    inline Recipes& WithConfigure(const Aws::Vector<Aws::String>& value) { SetConfigure(value); return *this;}

    /**
     * <p>An array of custom recipe names to be run following a <code>configure</code>
     * event.</p>
     */
    inline Recipes& WithConfigure(Aws::Vector<Aws::String>&& value) { SetConfigure(std::move(value)); return *this;}

    /**
     * <p>An array of custom recipe names to be run following a <code>configure</code>
     * event.</p>
     */
    inline Recipes& AddConfigure(const Aws::String& value) { m_configureHasBeenSet = true; m_configure.push_back(value); return *this; }

    /**
     * <p>An array of custom recipe names to be run following a <code>configure</code>
     * event.</p>
     */
    inline Recipes& AddConfigure(Aws::String&& value) { m_configureHasBeenSet = true; m_configure.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of custom recipe names to be run following a <code>configure</code>
     * event.</p>
     */
    inline Recipes& AddConfigure(const char* value) { m_configureHasBeenSet = true; m_configure.push_back(value); return *this; }


    /**
     * <p>An array of custom recipe names to be run following a <code>deploy</code>
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploy() const{ return m_deploy; }

    /**
     * <p>An array of custom recipe names to be run following a <code>deploy</code>
     * event.</p>
     */
    inline bool DeployHasBeenSet() const { return m_deployHasBeenSet; }

    /**
     * <p>An array of custom recipe names to be run following a <code>deploy</code>
     * event.</p>
     */
    inline void SetDeploy(const Aws::Vector<Aws::String>& value) { m_deployHasBeenSet = true; m_deploy = value; }

    /**
     * <p>An array of custom recipe names to be run following a <code>deploy</code>
     * event.</p>
     */
    inline void SetDeploy(Aws::Vector<Aws::String>&& value) { m_deployHasBeenSet = true; m_deploy = std::move(value); }

    /**
     * <p>An array of custom recipe names to be run following a <code>deploy</code>
     * event.</p>
     */
    inline Recipes& WithDeploy(const Aws::Vector<Aws::String>& value) { SetDeploy(value); return *this;}

    /**
     * <p>An array of custom recipe names to be run following a <code>deploy</code>
     * event.</p>
     */
    inline Recipes& WithDeploy(Aws::Vector<Aws::String>&& value) { SetDeploy(std::move(value)); return *this;}

    /**
     * <p>An array of custom recipe names to be run following a <code>deploy</code>
     * event.</p>
     */
    inline Recipes& AddDeploy(const Aws::String& value) { m_deployHasBeenSet = true; m_deploy.push_back(value); return *this; }

    /**
     * <p>An array of custom recipe names to be run following a <code>deploy</code>
     * event.</p>
     */
    inline Recipes& AddDeploy(Aws::String&& value) { m_deployHasBeenSet = true; m_deploy.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of custom recipe names to be run following a <code>deploy</code>
     * event.</p>
     */
    inline Recipes& AddDeploy(const char* value) { m_deployHasBeenSet = true; m_deploy.push_back(value); return *this; }


    /**
     * <p>An array of custom recipe names to be run following a <code>undeploy</code>
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUndeploy() const{ return m_undeploy; }

    /**
     * <p>An array of custom recipe names to be run following a <code>undeploy</code>
     * event.</p>
     */
    inline bool UndeployHasBeenSet() const { return m_undeployHasBeenSet; }

    /**
     * <p>An array of custom recipe names to be run following a <code>undeploy</code>
     * event.</p>
     */
    inline void SetUndeploy(const Aws::Vector<Aws::String>& value) { m_undeployHasBeenSet = true; m_undeploy = value; }

    /**
     * <p>An array of custom recipe names to be run following a <code>undeploy</code>
     * event.</p>
     */
    inline void SetUndeploy(Aws::Vector<Aws::String>&& value) { m_undeployHasBeenSet = true; m_undeploy = std::move(value); }

    /**
     * <p>An array of custom recipe names to be run following a <code>undeploy</code>
     * event.</p>
     */
    inline Recipes& WithUndeploy(const Aws::Vector<Aws::String>& value) { SetUndeploy(value); return *this;}

    /**
     * <p>An array of custom recipe names to be run following a <code>undeploy</code>
     * event.</p>
     */
    inline Recipes& WithUndeploy(Aws::Vector<Aws::String>&& value) { SetUndeploy(std::move(value)); return *this;}

    /**
     * <p>An array of custom recipe names to be run following a <code>undeploy</code>
     * event.</p>
     */
    inline Recipes& AddUndeploy(const Aws::String& value) { m_undeployHasBeenSet = true; m_undeploy.push_back(value); return *this; }

    /**
     * <p>An array of custom recipe names to be run following a <code>undeploy</code>
     * event.</p>
     */
    inline Recipes& AddUndeploy(Aws::String&& value) { m_undeployHasBeenSet = true; m_undeploy.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of custom recipe names to be run following a <code>undeploy</code>
     * event.</p>
     */
    inline Recipes& AddUndeploy(const char* value) { m_undeployHasBeenSet = true; m_undeploy.push_back(value); return *this; }


    /**
     * <p>An array of custom recipe names to be run following a <code>shutdown</code>
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetShutdown() const{ return m_shutdown; }

    /**
     * <p>An array of custom recipe names to be run following a <code>shutdown</code>
     * event.</p>
     */
    inline bool ShutdownHasBeenSet() const { return m_shutdownHasBeenSet; }

    /**
     * <p>An array of custom recipe names to be run following a <code>shutdown</code>
     * event.</p>
     */
    inline void SetShutdown(const Aws::Vector<Aws::String>& value) { m_shutdownHasBeenSet = true; m_shutdown = value; }

    /**
     * <p>An array of custom recipe names to be run following a <code>shutdown</code>
     * event.</p>
     */
    inline void SetShutdown(Aws::Vector<Aws::String>&& value) { m_shutdownHasBeenSet = true; m_shutdown = std::move(value); }

    /**
     * <p>An array of custom recipe names to be run following a <code>shutdown</code>
     * event.</p>
     */
    inline Recipes& WithShutdown(const Aws::Vector<Aws::String>& value) { SetShutdown(value); return *this;}

    /**
     * <p>An array of custom recipe names to be run following a <code>shutdown</code>
     * event.</p>
     */
    inline Recipes& WithShutdown(Aws::Vector<Aws::String>&& value) { SetShutdown(std::move(value)); return *this;}

    /**
     * <p>An array of custom recipe names to be run following a <code>shutdown</code>
     * event.</p>
     */
    inline Recipes& AddShutdown(const Aws::String& value) { m_shutdownHasBeenSet = true; m_shutdown.push_back(value); return *this; }

    /**
     * <p>An array of custom recipe names to be run following a <code>shutdown</code>
     * event.</p>
     */
    inline Recipes& AddShutdown(Aws::String&& value) { m_shutdownHasBeenSet = true; m_shutdown.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of custom recipe names to be run following a <code>shutdown</code>
     * event.</p>
     */
    inline Recipes& AddShutdown(const char* value) { m_shutdownHasBeenSet = true; m_shutdown.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_setup;
    bool m_setupHasBeenSet;

    Aws::Vector<Aws::String> m_configure;
    bool m_configureHasBeenSet;

    Aws::Vector<Aws::String> m_deploy;
    bool m_deployHasBeenSet;

    Aws::Vector<Aws::String> m_undeploy;
    bool m_undeployHasBeenSet;

    Aws::Vector<Aws::String> m_shutdown;
    bool m_shutdownHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
