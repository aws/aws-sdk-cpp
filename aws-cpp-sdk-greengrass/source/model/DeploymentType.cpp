/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/DeploymentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Greengrass
  {
    namespace Model
    {
      namespace DeploymentTypeMapper
      {

        static const int NewDeployment_HASH = HashingUtils::HashString("NewDeployment");
        static const int Redeployment_HASH = HashingUtils::HashString("Redeployment");
        static const int ResetDeployment_HASH = HashingUtils::HashString("ResetDeployment");
        static const int ForceResetDeployment_HASH = HashingUtils::HashString("ForceResetDeployment");


        DeploymentType GetDeploymentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NewDeployment_HASH)
          {
            return DeploymentType::NewDeployment;
          }
          else if (hashCode == Redeployment_HASH)
          {
            return DeploymentType::Redeployment;
          }
          else if (hashCode == ResetDeployment_HASH)
          {
            return DeploymentType::ResetDeployment;
          }
          else if (hashCode == ForceResetDeployment_HASH)
          {
            return DeploymentType::ForceResetDeployment;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentType>(hashCode);
          }

          return DeploymentType::NOT_SET;
        }

        Aws::String GetNameForDeploymentType(DeploymentType enumValue)
        {
          switch(enumValue)
          {
          case DeploymentType::NewDeployment:
            return "NewDeployment";
          case DeploymentType::Redeployment:
            return "Redeployment";
          case DeploymentType::ResetDeployment:
            return "ResetDeployment";
          case DeploymentType::ForceResetDeployment:
            return "ForceResetDeployment";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentTypeMapper
    } // namespace Model
  } // namespace Greengrass
} // namespace Aws
