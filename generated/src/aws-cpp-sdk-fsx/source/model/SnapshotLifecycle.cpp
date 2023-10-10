/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/SnapshotLifecycle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace SnapshotLifecycleMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");


        SnapshotLifecycle GetSnapshotLifecycleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return SnapshotLifecycle::PENDING;
          }
          else if (hashCode == CREATING_HASH)
          {
            return SnapshotLifecycle::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return SnapshotLifecycle::DELETING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return SnapshotLifecycle::AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotLifecycle>(hashCode);
          }

          return SnapshotLifecycle::NOT_SET;
        }

        Aws::String GetNameForSnapshotLifecycle(SnapshotLifecycle enumValue)
        {
          switch(enumValue)
          {
          case SnapshotLifecycle::NOT_SET:
            return {};
          case SnapshotLifecycle::PENDING:
            return "PENDING";
          case SnapshotLifecycle::CREATING:
            return "CREATING";
          case SnapshotLifecycle::DELETING:
            return "DELETING";
          case SnapshotLifecycle::AVAILABLE:
            return "AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnapshotLifecycleMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
