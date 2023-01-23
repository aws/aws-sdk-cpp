/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/BlueprintType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace BlueprintTypeMapper
      {

        static const int os_HASH = HashingUtils::HashString("os");
        static const int app_HASH = HashingUtils::HashString("app");


        BlueprintType GetBlueprintTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == os_HASH)
          {
            return BlueprintType::os;
          }
          else if (hashCode == app_HASH)
          {
            return BlueprintType::app;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BlueprintType>(hashCode);
          }

          return BlueprintType::NOT_SET;
        }

        Aws::String GetNameForBlueprintType(BlueprintType enumValue)
        {
          switch(enumValue)
          {
          case BlueprintType::os:
            return "os";
          case BlueprintType::app:
            return "app";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BlueprintTypeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
