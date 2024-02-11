/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/ReplicationOverwriteProtection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EFS
  {
    namespace Model
    {
      namespace ReplicationOverwriteProtectionMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int REPLICATING_HASH = HashingUtils::HashString("REPLICATING");


        ReplicationOverwriteProtection GetReplicationOverwriteProtectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ReplicationOverwriteProtection::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ReplicationOverwriteProtection::DISABLED;
          }
          else if (hashCode == REPLICATING_HASH)
          {
            return ReplicationOverwriteProtection::REPLICATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationOverwriteProtection>(hashCode);
          }

          return ReplicationOverwriteProtection::NOT_SET;
        }

        Aws::String GetNameForReplicationOverwriteProtection(ReplicationOverwriteProtection enumValue)
        {
          switch(enumValue)
          {
          case ReplicationOverwriteProtection::NOT_SET:
            return {};
          case ReplicationOverwriteProtection::ENABLED:
            return "ENABLED";
          case ReplicationOverwriteProtection::DISABLED:
            return "DISABLED";
          case ReplicationOverwriteProtection::REPLICATING:
            return "REPLICATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationOverwriteProtectionMapper
    } // namespace Model
  } // namespace EFS
} // namespace Aws
