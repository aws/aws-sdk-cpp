/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/SnapshotType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DocDBElastic
  {
    namespace Model
    {
      namespace SnapshotTypeMapper
      {

        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");
        static const int AUTOMATED_HASH = HashingUtils::HashString("AUTOMATED");


        SnapshotType GetSnapshotTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANUAL_HASH)
          {
            return SnapshotType::MANUAL;
          }
          else if (hashCode == AUTOMATED_HASH)
          {
            return SnapshotType::AUTOMATED;
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
          case SnapshotType::NOT_SET:
            return {};
          case SnapshotType::MANUAL:
            return "MANUAL";
          case SnapshotType::AUTOMATED:
            return "AUTOMATED";
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
  } // namespace DocDBElastic
} // namespace Aws
