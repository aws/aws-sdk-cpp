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

#include <aws/pinpoint-email/model/BehaviorOnMxFailure.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointEmail
  {
    namespace Model
    {
      namespace BehaviorOnMxFailureMapper
      {

        static const int USE_DEFAULT_VALUE_HASH = HashingUtils::HashString("USE_DEFAULT_VALUE");
        static const int REJECT_MESSAGE_HASH = HashingUtils::HashString("REJECT_MESSAGE");


        BehaviorOnMxFailure GetBehaviorOnMxFailureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USE_DEFAULT_VALUE_HASH)
          {
            return BehaviorOnMxFailure::USE_DEFAULT_VALUE;
          }
          else if (hashCode == REJECT_MESSAGE_HASH)
          {
            return BehaviorOnMxFailure::REJECT_MESSAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BehaviorOnMxFailure>(hashCode);
          }

          return BehaviorOnMxFailure::NOT_SET;
        }

        Aws::String GetNameForBehaviorOnMxFailure(BehaviorOnMxFailure enumValue)
        {
          switch(enumValue)
          {
          case BehaviorOnMxFailure::USE_DEFAULT_VALUE:
            return "USE_DEFAULT_VALUE";
          case BehaviorOnMxFailure::REJECT_MESSAGE:
            return "REJECT_MESSAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BehaviorOnMxFailureMapper
    } // namespace Model
  } // namespace PinpointEmail
} // namespace Aws
