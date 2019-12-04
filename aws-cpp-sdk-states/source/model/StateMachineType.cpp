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

#include <aws/states/model/StateMachineType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SFN
  {
    namespace Model
    {
      namespace StateMachineTypeMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int EXPRESS_HASH = HashingUtils::HashString("EXPRESS");


        StateMachineType GetStateMachineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return StateMachineType::STANDARD;
          }
          else if (hashCode == EXPRESS_HASH)
          {
            return StateMachineType::EXPRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StateMachineType>(hashCode);
          }

          return StateMachineType::NOT_SET;
        }

        Aws::String GetNameForStateMachineType(StateMachineType enumValue)
        {
          switch(enumValue)
          {
          case StateMachineType::STANDARD:
            return "STANDARD";
          case StateMachineType::EXPRESS:
            return "EXPRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StateMachineTypeMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
