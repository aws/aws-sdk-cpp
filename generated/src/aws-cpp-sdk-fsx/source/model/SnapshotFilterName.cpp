/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/SnapshotFilterName.h>
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
      namespace SnapshotFilterNameMapper
      {

        static const int file_system_id_HASH = HashingUtils::HashString("file-system-id");
        static const int volume_id_HASH = HashingUtils::HashString("volume-id");


        SnapshotFilterName GetSnapshotFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == file_system_id_HASH)
          {
            return SnapshotFilterName::file_system_id;
          }
          else if (hashCode == volume_id_HASH)
          {
            return SnapshotFilterName::volume_id;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotFilterName>(hashCode);
          }

          return SnapshotFilterName::NOT_SET;
        }

        Aws::String GetNameForSnapshotFilterName(SnapshotFilterName enumValue)
        {
          switch(enumValue)
          {
          case SnapshotFilterName::NOT_SET:
            return {};
          case SnapshotFilterName::file_system_id:
            return "file-system-id";
          case SnapshotFilterName::volume_id:
            return "volume-id";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnapshotFilterNameMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
