/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/HomeDirectoryType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace HomeDirectoryTypeMapper
      {

        static const int PATH_HASH = HashingUtils::HashString("PATH");
        static const int LOGICAL_HASH = HashingUtils::HashString("LOGICAL");


        HomeDirectoryType GetHomeDirectoryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PATH_HASH)
          {
            return HomeDirectoryType::PATH;
          }
          else if (hashCode == LOGICAL_HASH)
          {
            return HomeDirectoryType::LOGICAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HomeDirectoryType>(hashCode);
          }

          return HomeDirectoryType::NOT_SET;
        }

        Aws::String GetNameForHomeDirectoryType(HomeDirectoryType enumValue)
        {
          switch(enumValue)
          {
          case HomeDirectoryType::PATH:
            return "PATH";
          case HomeDirectoryType::LOGICAL:
            return "LOGICAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HomeDirectoryTypeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
