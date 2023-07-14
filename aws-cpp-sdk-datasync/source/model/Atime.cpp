/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/Atime.h>
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
      namespace AtimeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int BEST_EFFORT_HASH = HashingUtils::HashString("BEST_EFFORT");


        Atime GetAtimeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Atime::NONE;
          }
          else if (hashCode == BEST_EFFORT_HASH)
          {
            return Atime::BEST_EFFORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Atime>(hashCode);
          }

          return Atime::NOT_SET;
        }

        Aws::String GetNameForAtime(Atime enumValue)
        {
          switch(enumValue)
          {
          case Atime::NONE:
            return "NONE";
          case Atime::BEST_EFFORT:
            return "BEST_EFFORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AtimeMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
