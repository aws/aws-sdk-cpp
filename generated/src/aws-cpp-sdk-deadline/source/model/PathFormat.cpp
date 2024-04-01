/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/PathFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace PathFormatMapper
      {

        static const int windows_HASH = HashingUtils::HashString("windows");
        static const int posix_HASH = HashingUtils::HashString("posix");


        PathFormat GetPathFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == windows_HASH)
          {
            return PathFormat::windows;
          }
          else if (hashCode == posix_HASH)
          {
            return PathFormat::posix;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PathFormat>(hashCode);
          }

          return PathFormat::NOT_SET;
        }

        Aws::String GetNameForPathFormat(PathFormat enumValue)
        {
          switch(enumValue)
          {
          case PathFormat::NOT_SET:
            return {};
          case PathFormat::windows:
            return "windows";
          case PathFormat::posix:
            return "posix";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PathFormatMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
