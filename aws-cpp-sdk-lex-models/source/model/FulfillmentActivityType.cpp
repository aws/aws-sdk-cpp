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
#include <aws/lex-models/model/FulfillmentActivityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace FulfillmentActivityTypeMapper
      {

        static const int ReturnIntent_HASH = HashingUtils::HashString("ReturnIntent");
        static const int CodeHook_HASH = HashingUtils::HashString("CodeHook");


        FulfillmentActivityType GetFulfillmentActivityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ReturnIntent_HASH)
          {
            return FulfillmentActivityType::ReturnIntent;
          }
          else if (hashCode == CodeHook_HASH)
          {
            return FulfillmentActivityType::CodeHook;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FulfillmentActivityType>(hashCode);
          }

          return FulfillmentActivityType::NOT_SET;
        }

        Aws::String GetNameForFulfillmentActivityType(FulfillmentActivityType enumValue)
        {
          switch(enumValue)
          {
          case FulfillmentActivityType::ReturnIntent:
            return "ReturnIntent";
          case FulfillmentActivityType::CodeHook:
            return "CodeHook";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace FulfillmentActivityTypeMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
