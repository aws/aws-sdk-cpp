/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerGroupDefinitionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace ContainerGroupDefinitionStatusMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int COPYING_HASH = HashingUtils::HashString("COPYING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ContainerGroupDefinitionStatus GetContainerGroupDefinitionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return ContainerGroupDefinitionStatus::READY;
          }
          else if (hashCode == COPYING_HASH)
          {
            return ContainerGroupDefinitionStatus::COPYING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ContainerGroupDefinitionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerGroupDefinitionStatus>(hashCode);
          }

          return ContainerGroupDefinitionStatus::NOT_SET;
        }

        Aws::String GetNameForContainerGroupDefinitionStatus(ContainerGroupDefinitionStatus enumValue)
        {
          switch(enumValue)
          {
          case ContainerGroupDefinitionStatus::NOT_SET:
            return {};
          case ContainerGroupDefinitionStatus::READY:
            return "READY";
          case ContainerGroupDefinitionStatus::COPYING:
            return "COPYING";
          case ContainerGroupDefinitionStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerGroupDefinitionStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
