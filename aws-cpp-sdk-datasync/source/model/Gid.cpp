/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/Gid.h>
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
      namespace GidMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int INT_VALUE_HASH = HashingUtils::HashString("INT_VALUE");
        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int BOTH_HASH = HashingUtils::HashString("BOTH");


        Gid GetGidForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Gid::NONE;
          }
          else if (hashCode == INT_VALUE_HASH)
          {
            return Gid::INT_VALUE;
          }
          else if (hashCode == NAME_HASH)
          {
            return Gid::NAME;
          }
          else if (hashCode == BOTH_HASH)
          {
            return Gid::BOTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Gid>(hashCode);
          }

          return Gid::NOT_SET;
        }

        Aws::String GetNameForGid(Gid enumValue)
        {
          switch(enumValue)
          {
          case Gid::NONE:
            return "NONE";
          case Gid::INT_VALUE:
            return "INT_VALUE";
          case Gid::NAME:
            return "NAME";
          case Gid::BOTH:
            return "BOTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GidMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
