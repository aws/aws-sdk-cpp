/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

            return "";
          }
        }

      } // namespace BlueprintTypeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
