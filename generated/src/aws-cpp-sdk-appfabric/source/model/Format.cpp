/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/Format.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppFabric
  {
    namespace Model
    {
      namespace FormatMapper
      {

        static const int json_HASH = HashingUtils::HashString("json");
        static const int parquet_HASH = HashingUtils::HashString("parquet");


        Format GetFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == json_HASH)
          {
            return Format::json;
          }
          else if (hashCode == parquet_HASH)
          {
            return Format::parquet;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Format>(hashCode);
          }

          return Format::NOT_SET;
        }

        Aws::String GetNameForFormat(Format enumValue)
        {
          switch(enumValue)
          {
          case Format::NOT_SET:
            return {};
          case Format::json:
            return "json";
          case Format::parquet:
            return "parquet";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FormatMapper
    } // namespace Model
  } // namespace AppFabric
} // namespace Aws
