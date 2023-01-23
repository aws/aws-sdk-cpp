/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceRoleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace InstanceRoleTypeMapper
      {

        static const int MASTER_HASH = HashingUtils::HashString("MASTER");
        static const int CORE_HASH = HashingUtils::HashString("CORE");
        static const int TASK_HASH = HashingUtils::HashString("TASK");


        InstanceRoleType GetInstanceRoleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MASTER_HASH)
          {
            return InstanceRoleType::MASTER;
          }
          else if (hashCode == CORE_HASH)
          {
            return InstanceRoleType::CORE;
          }
          else if (hashCode == TASK_HASH)
          {
            return InstanceRoleType::TASK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceRoleType>(hashCode);
          }

          return InstanceRoleType::NOT_SET;
        }

        Aws::String GetNameForInstanceRoleType(InstanceRoleType enumValue)
        {
          switch(enumValue)
          {
          case InstanceRoleType::MASTER:
            return "MASTER";
          case InstanceRoleType::CORE:
            return "CORE";
          case InstanceRoleType::TASK:
            return "TASK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceRoleTypeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
