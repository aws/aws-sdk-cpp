/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/SnapshotType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace SnapshotTypeMapper
      {

        static const int Auto_HASH = HashingUtils::HashString("Auto");
        static const int Manual_HASH = HashingUtils::HashString("Manual");


        SnapshotType GetSnapshotTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Auto_HASH)
          {
            return SnapshotType::Auto;
          }
          else if (hashCode == Manual_HASH)
          {
            return SnapshotType::Manual;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotType>(hashCode);
          }

          return SnapshotType::NOT_SET;
        }

        Aws::String GetNameForSnapshotType(SnapshotType enumValue)
        {
          switch(enumValue)
          {
          case SnapshotType::Auto:
            return "Auto";
          case SnapshotType::Manual:
            return "Manual";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnapshotTypeMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
