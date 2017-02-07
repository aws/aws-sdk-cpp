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
#include <aws/codedeploy/model/GreenFleetProvisioningAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace GreenFleetProvisioningActionMapper
      {

        static const int DISCOVER_EXISTING_HASH = HashingUtils::HashString("DISCOVER_EXISTING");
        static const int COPY_AUTO_SCALING_GROUP_HASH = HashingUtils::HashString("COPY_AUTO_SCALING_GROUP");


        GreenFleetProvisioningAction GetGreenFleetProvisioningActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISCOVER_EXISTING_HASH)
          {
            return GreenFleetProvisioningAction::DISCOVER_EXISTING;
          }
          else if (hashCode == COPY_AUTO_SCALING_GROUP_HASH)
          {
            return GreenFleetProvisioningAction::COPY_AUTO_SCALING_GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GreenFleetProvisioningAction>(hashCode);
          }

          return GreenFleetProvisioningAction::NOT_SET;
        }

        Aws::String GetNameForGreenFleetProvisioningAction(GreenFleetProvisioningAction enumValue)
        {
          switch(enumValue)
          {
          case GreenFleetProvisioningAction::DISCOVER_EXISTING:
            return "DISCOVER_EXISTING";
          case GreenFleetProvisioningAction::COPY_AUTO_SCALING_GROUP:
            return "COPY_AUTO_SCALING_GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace GreenFleetProvisioningActionMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
