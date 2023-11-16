/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/MapType.h>
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
      namespace MapTypeMapper
      {

        static const int FILE_HASH = HashingUtils::HashString("FILE");
        static const int DIRECTORY_HASH = HashingUtils::HashString("DIRECTORY");


        MapType GetMapTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILE_HASH)
          {
            return MapType::FILE;
          }
          else if (hashCode == DIRECTORY_HASH)
          {
            return MapType::DIRECTORY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MapType>(hashCode);
          }

          return MapType::NOT_SET;
        }

        Aws::String GetNameForMapType(MapType enumValue)
        {
          switch(enumValue)
          {
          case MapType::NOT_SET:
            return {};
          case MapType::FILE:
            return "FILE";
          case MapType::DIRECTORY:
            return "DIRECTORY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MapTypeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
