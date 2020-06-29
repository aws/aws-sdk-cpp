/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/OutputType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace OutputTypeMapper
      {

        static const int SDL_HASH = HashingUtils::HashString("SDL");
        static const int JSON_HASH = HashingUtils::HashString("JSON");


        OutputType GetOutputTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SDL_HASH)
          {
            return OutputType::SDL;
          }
          else if (hashCode == JSON_HASH)
          {
            return OutputType::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutputType>(hashCode);
          }

          return OutputType::NOT_SET;
        }

        Aws::String GetNameForOutputType(OutputType enumValue)
        {
          switch(enumValue)
          {
          case OutputType::SDL:
            return "SDL";
          case OutputType::JSON:
            return "JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutputTypeMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
