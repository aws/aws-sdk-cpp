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

#include <aws/cognito-idp/model/EventFilterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace EventFilterTypeMapper
      {

        static const int SIGN_IN_HASH = HashingUtils::HashString("SIGN_IN");
        static const int PASSWORD_CHANGE_HASH = HashingUtils::HashString("PASSWORD_CHANGE");
        static const int SIGN_UP_HASH = HashingUtils::HashString("SIGN_UP");


        EventFilterType GetEventFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIGN_IN_HASH)
          {
            return EventFilterType::SIGN_IN;
          }
          else if (hashCode == PASSWORD_CHANGE_HASH)
          {
            return EventFilterType::PASSWORD_CHANGE;
          }
          else if (hashCode == SIGN_UP_HASH)
          {
            return EventFilterType::SIGN_UP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventFilterType>(hashCode);
          }

          return EventFilterType::NOT_SET;
        }

        Aws::String GetNameForEventFilterType(EventFilterType enumValue)
        {
          switch(enumValue)
          {
          case EventFilterType::SIGN_IN:
            return "SIGN_IN";
          case EventFilterType::PASSWORD_CHANGE:
            return "PASSWORD_CHANGE";
          case EventFilterType::SIGN_UP:
            return "SIGN_UP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventFilterTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
