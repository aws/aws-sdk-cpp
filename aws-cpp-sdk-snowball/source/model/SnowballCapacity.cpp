/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/snowball/model/SnowballCapacity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace SnowballCapacityMapper
      {

        static const int T50_HASH = HashingUtils::HashString("T50");
        static const int T80_HASH = HashingUtils::HashString("T80");
        static const int NoPreference_HASH = HashingUtils::HashString("NoPreference");


        SnowballCapacity GetSnowballCapacityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == T50_HASH)
          {
            return SnowballCapacity::T50;
          }
          else if (hashCode == T80_HASH)
          {
            return SnowballCapacity::T80;
          }
          else if (hashCode == NoPreference_HASH)
          {
            return SnowballCapacity::NoPreference;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnowballCapacity>(hashCode);
          }

          return SnowballCapacity::NOT_SET;
        }

        Aws::String GetNameForSnowballCapacity(SnowballCapacity enumValue)
        {
          switch(enumValue)
          {
          case SnowballCapacity::T50:
            return "T50";
          case SnowballCapacity::T80:
            return "T80";
          case SnowballCapacity::NoPreference:
            return "NoPreference";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SnowballCapacityMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
