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

#include <aws/mq/model/DeploymentMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MQ
  {
    namespace Model
    {
      namespace DeploymentModeMapper
      {

        static const int SINGLE_INSTANCE_HASH = HashingUtils::HashString("SINGLE_INSTANCE");
        static const int ACTIVE_STANDBY_MULTI_AZ_HASH = HashingUtils::HashString("ACTIVE_STANDBY_MULTI_AZ");


        DeploymentMode GetDeploymentModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_INSTANCE_HASH)
          {
            return DeploymentMode::SINGLE_INSTANCE;
          }
          else if (hashCode == ACTIVE_STANDBY_MULTI_AZ_HASH)
          {
            return DeploymentMode::ACTIVE_STANDBY_MULTI_AZ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentMode>(hashCode);
          }

          return DeploymentMode::NOT_SET;
        }

        Aws::String GetNameForDeploymentMode(DeploymentMode enumValue)
        {
          switch(enumValue)
          {
          case DeploymentMode::SINGLE_INSTANCE:
            return "SINGLE_INSTANCE";
          case DeploymentMode::ACTIVE_STANDBY_MULTI_AZ:
            return "ACTIVE_STANDBY_MULTI_AZ";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentModeMapper
    } // namespace Model
  } // namespace MQ
} // namespace Aws
