/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SnapshotLocationEnum.h>
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
      namespace SnapshotLocationEnumMapper
      {

        static const int regional_HASH = HashingUtils::HashString("regional");
        static const int local_HASH = HashingUtils::HashString("local");


        SnapshotLocationEnum GetSnapshotLocationEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == regional_HASH)
          {
            return SnapshotLocationEnum::regional;
          }
          else if (hashCode == local_HASH)
          {
            return SnapshotLocationEnum::local;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotLocationEnum>(hashCode);
          }

          return SnapshotLocationEnum::NOT_SET;
        }

        Aws::String GetNameForSnapshotLocationEnum(SnapshotLocationEnum enumValue)
        {
          switch(enumValue)
          {
          case SnapshotLocationEnum::NOT_SET:
            return {};
          case SnapshotLocationEnum::regional:
            return "regional";
          case SnapshotLocationEnum::local:
            return "local";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnapshotLocationEnumMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
