/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/Mtime.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace MtimeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int PRESERVE_HASH = HashingUtils::HashString("PRESERVE");


        Mtime GetMtimeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Mtime::NONE;
          }
          else if (hashCode == PRESERVE_HASH)
          {
            return Mtime::PRESERVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mtime>(hashCode);
          }

          return Mtime::NOT_SET;
        }

        Aws::String GetNameForMtime(Mtime enumValue)
        {
          switch(enumValue)
          {
          case Mtime::NONE:
            return "NONE";
          case Mtime::PRESERVE:
            return "PRESERVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MtimeMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
