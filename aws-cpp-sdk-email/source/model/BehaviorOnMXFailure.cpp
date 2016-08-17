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
#include <aws/email/model/BehaviorOnMXFailure.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SES
  {
    namespace Model
    {
      namespace BehaviorOnMXFailureMapper
      {

        static const int UseDefaultValue_HASH = HashingUtils::HashString("UseDefaultValue");
        static const int RejectMessage_HASH = HashingUtils::HashString("RejectMessage");


        BehaviorOnMXFailure GetBehaviorOnMXFailureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UseDefaultValue_HASH)
          {
            return BehaviorOnMXFailure::UseDefaultValue;
          }
          else if (hashCode == RejectMessage_HASH)
          {
            return BehaviorOnMXFailure::RejectMessage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BehaviorOnMXFailure>(hashCode);
          }

          return BehaviorOnMXFailure::NOT_SET;
        }

        Aws::String GetNameForBehaviorOnMXFailure(BehaviorOnMXFailure enumValue)
        {
          switch(enumValue)
          {
          case BehaviorOnMXFailure::UseDefaultValue:
            return "UseDefaultValue";
          case BehaviorOnMXFailure::RejectMessage:
            return "RejectMessage";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace BehaviorOnMXFailureMapper
    } // namespace Model
  } // namespace SES
} // namespace Aws
