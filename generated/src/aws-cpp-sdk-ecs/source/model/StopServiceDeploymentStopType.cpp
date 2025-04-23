/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/StopServiceDeploymentStopType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace StopServiceDeploymentStopTypeMapper
      {

        static const int ABORT_HASH = HashingUtils::HashString("ABORT");
        static const int ROLLBACK_HASH = HashingUtils::HashString("ROLLBACK");


        StopServiceDeploymentStopType GetStopServiceDeploymentStopTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ABORT_HASH)
          {
            return StopServiceDeploymentStopType::ABORT;
          }
          else if (hashCode == ROLLBACK_HASH)
          {
            return StopServiceDeploymentStopType::ROLLBACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StopServiceDeploymentStopType>(hashCode);
          }

          return StopServiceDeploymentStopType::NOT_SET;
        }

        Aws::String GetNameForStopServiceDeploymentStopType(StopServiceDeploymentStopType enumValue)
        {
          switch(enumValue)
          {
          case StopServiceDeploymentStopType::NOT_SET:
            return {};
          case StopServiceDeploymentStopType::ABORT:
            return "ABORT";
          case StopServiceDeploymentStopType::ROLLBACK:
            return "ROLLBACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StopServiceDeploymentStopTypeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
