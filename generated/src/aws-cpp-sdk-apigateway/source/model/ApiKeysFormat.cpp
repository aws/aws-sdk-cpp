/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/ApiKeysFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace ApiKeysFormatMapper
      {

        static const int csv_HASH = HashingUtils::HashString("csv");


        ApiKeysFormat GetApiKeysFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == csv_HASH)
          {
            return ApiKeysFormat::csv;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApiKeysFormat>(hashCode);
          }

          return ApiKeysFormat::NOT_SET;
        }

        Aws::String GetNameForApiKeysFormat(ApiKeysFormat enumValue)
        {
          switch(enumValue)
          {
          case ApiKeysFormat::csv:
            return "csv";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApiKeysFormatMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
