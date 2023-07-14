/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ReplicaMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace ReplicaModeMapper
      {

        static const int open_read_only_HASH = HashingUtils::HashString("open-read-only");
        static const int mounted_HASH = HashingUtils::HashString("mounted");


        ReplicaMode GetReplicaModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == open_read_only_HASH)
          {
            return ReplicaMode::open_read_only;
          }
          else if (hashCode == mounted_HASH)
          {
            return ReplicaMode::mounted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicaMode>(hashCode);
          }

          return ReplicaMode::NOT_SET;
        }

        Aws::String GetNameForReplicaMode(ReplicaMode enumValue)
        {
          switch(enumValue)
          {
          case ReplicaMode::open_read_only:
            return "open-read-only";
          case ReplicaMode::mounted:
            return "mounted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicaModeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
