/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/InstanceHealthCheckState.h>
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
      namespace InstanceHealthCheckStateMapper
      {

        static const int OK_HASH = HashingUtils::HashString("OK");
        static const int IMPAIRED_HASH = HashingUtils::HashString("IMPAIRED");
        static const int INSUFFICIENT_DATA_HASH = HashingUtils::HashString("INSUFFICIENT_DATA");
        static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");


        InstanceHealthCheckState GetInstanceHealthCheckStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OK_HASH)
          {
            return InstanceHealthCheckState::OK;
          }
          else if (hashCode == IMPAIRED_HASH)
          {
            return InstanceHealthCheckState::IMPAIRED;
          }
          else if (hashCode == INSUFFICIENT_DATA_HASH)
          {
            return InstanceHealthCheckState::INSUFFICIENT_DATA;
          }
          else if (hashCode == INITIALIZING_HASH)
          {
            return InstanceHealthCheckState::INITIALIZING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceHealthCheckState>(hashCode);
          }

          return InstanceHealthCheckState::NOT_SET;
        }

        Aws::String GetNameForInstanceHealthCheckState(InstanceHealthCheckState enumValue)
        {
          switch(enumValue)
          {
          case InstanceHealthCheckState::NOT_SET:
            return {};
          case InstanceHealthCheckState::OK:
            return "OK";
          case InstanceHealthCheckState::IMPAIRED:
            return "IMPAIRED";
          case InstanceHealthCheckState::INSUFFICIENT_DATA:
            return "INSUFFICIENT_DATA";
          case InstanceHealthCheckState::INITIALIZING:
            return "INITIALIZING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceHealthCheckStateMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
