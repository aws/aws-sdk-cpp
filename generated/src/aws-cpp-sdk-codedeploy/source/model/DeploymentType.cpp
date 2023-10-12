/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentType.h>
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
      namespace DeploymentTypeMapper
      {

        static constexpr uint32_t IN_PLACE_HASH = ConstExprHashingUtils::HashString("IN_PLACE");
        static constexpr uint32_t BLUE_GREEN_HASH = ConstExprHashingUtils::HashString("BLUE_GREEN");


        DeploymentType GetDeploymentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PLACE_HASH)
          {
            return DeploymentType::IN_PLACE;
          }
          else if (hashCode == BLUE_GREEN_HASH)
          {
            return DeploymentType::BLUE_GREEN;
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
          case DeploymentType::NOT_SET:
            return {};
          case DeploymentType::IN_PLACE:
            return "IN_PLACE";
          case DeploymentType::BLUE_GREEN:
            return "BLUE_GREEN";
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
  } // namespace CodeDeploy
} // namespace Aws
