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
#include <aws/opsworks/model/DeploymentCommandName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace DeploymentCommandNameMapper
      {

        static const int install_dependencies_HASH = HashingUtils::HashString("install_dependencies");
        static const int update_dependencies_HASH = HashingUtils::HashString("update_dependencies");
        static const int update_custom_cookbooks_HASH = HashingUtils::HashString("update_custom_cookbooks");
        static const int execute_recipes_HASH = HashingUtils::HashString("execute_recipes");
        static const int configure_HASH = HashingUtils::HashString("configure");
        static const int setup_HASH = HashingUtils::HashString("setup");
        static const int deploy_HASH = HashingUtils::HashString("deploy");
        static const int rollback_HASH = HashingUtils::HashString("rollback");
        static const int start_HASH = HashingUtils::HashString("start");
        static const int stop_HASH = HashingUtils::HashString("stop");
        static const int restart_HASH = HashingUtils::HashString("restart");
        static const int undeploy_HASH = HashingUtils::HashString("undeploy");


        DeploymentCommandName GetDeploymentCommandNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == install_dependencies_HASH)
          {
            return DeploymentCommandName::install_dependencies;
          }
          else if (hashCode == update_dependencies_HASH)
          {
            return DeploymentCommandName::update_dependencies;
          }
          else if (hashCode == update_custom_cookbooks_HASH)
          {
            return DeploymentCommandName::update_custom_cookbooks;
          }
          else if (hashCode == execute_recipes_HASH)
          {
            return DeploymentCommandName::execute_recipes;
          }
          else if (hashCode == configure_HASH)
          {
            return DeploymentCommandName::configure;
          }
          else if (hashCode == setup_HASH)
          {
            return DeploymentCommandName::setup;
          }
          else if (hashCode == deploy_HASH)
          {
            return DeploymentCommandName::deploy;
          }
          else if (hashCode == rollback_HASH)
          {
            return DeploymentCommandName::rollback;
          }
          else if (hashCode == start_HASH)
          {
            return DeploymentCommandName::start;
          }
          else if (hashCode == stop_HASH)
          {
            return DeploymentCommandName::stop;
          }
          else if (hashCode == restart_HASH)
          {
            return DeploymentCommandName::restart;
          }
          else if (hashCode == undeploy_HASH)
          {
            return DeploymentCommandName::undeploy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentCommandName>(hashCode);
          }

          return DeploymentCommandName::NOT_SET;
        }

        Aws::String GetNameForDeploymentCommandName(DeploymentCommandName enumValue)
        {
          switch(enumValue)
          {
          case DeploymentCommandName::install_dependencies:
            return "install_dependencies";
          case DeploymentCommandName::update_dependencies:
            return "update_dependencies";
          case DeploymentCommandName::update_custom_cookbooks:
            return "update_custom_cookbooks";
          case DeploymentCommandName::execute_recipes:
            return "execute_recipes";
          case DeploymentCommandName::configure:
            return "configure";
          case DeploymentCommandName::setup:
            return "setup";
          case DeploymentCommandName::deploy:
            return "deploy";
          case DeploymentCommandName::rollback:
            return "rollback";
          case DeploymentCommandName::start:
            return "start";
          case DeploymentCommandName::stop:
            return "stop";
          case DeploymentCommandName::restart:
            return "restart";
          case DeploymentCommandName::undeploy:
            return "undeploy";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DeploymentCommandNameMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
