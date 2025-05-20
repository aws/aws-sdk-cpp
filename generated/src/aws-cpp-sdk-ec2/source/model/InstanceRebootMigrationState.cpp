/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceRebootMigrationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace InstanceRebootMigrationStateMapper
      {

        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int default__HASH = HashingUtils::HashString("default");


        InstanceRebootMigrationState GetInstanceRebootMigrationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return InstanceRebootMigrationState::disabled;
          }
          else if (hashCode == default__HASH)
          {
            return InstanceRebootMigrationState::default_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceRebootMigrationState>(hashCode);
          }

          return InstanceRebootMigrationState::NOT_SET;
        }

        Aws::String GetNameForInstanceRebootMigrationState(InstanceRebootMigrationState enumValue)
        {
          switch(enumValue)
          {
          case InstanceRebootMigrationState::NOT_SET:
            return {};
          case InstanceRebootMigrationState::disabled:
            return "disabled";
          case InstanceRebootMigrationState::default_:
            return "default";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceRebootMigrationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
