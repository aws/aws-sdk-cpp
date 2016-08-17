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
#include <aws/snowball/model/ShippingOption.h>
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
      namespace ShippingOptionMapper
      {

        static const int SECOND_DAY_HASH = HashingUtils::HashString("SECOND_DAY");
        static const int NEXT_DAY_HASH = HashingUtils::HashString("NEXT_DAY");
        static const int EXPRESS_HASH = HashingUtils::HashString("EXPRESS");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");


        ShippingOption GetShippingOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SECOND_DAY_HASH)
          {
            return ShippingOption::SECOND_DAY;
          }
          else if (hashCode == NEXT_DAY_HASH)
          {
            return ShippingOption::NEXT_DAY;
          }
          else if (hashCode == EXPRESS_HASH)
          {
            return ShippingOption::EXPRESS;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return ShippingOption::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShippingOption>(hashCode);
          }

          return ShippingOption::NOT_SET;
        }

        Aws::String GetNameForShippingOption(ShippingOption enumValue)
        {
          switch(enumValue)
          {
          case ShippingOption::SECOND_DAY:
            return "SECOND_DAY";
          case ShippingOption::NEXT_DAY:
            return "NEXT_DAY";
          case ShippingOption::EXPRESS:
            return "EXPRESS";
          case ShippingOption::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ShippingOptionMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
