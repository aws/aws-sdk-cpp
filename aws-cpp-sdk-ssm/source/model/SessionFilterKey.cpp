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

#include <aws/ssm/model/SessionFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace SessionFilterKeyMapper
      {

        static const int InvokedAfter_HASH = HashingUtils::HashString("InvokedAfter");
        static const int InvokedBefore_HASH = HashingUtils::HashString("InvokedBefore");
        static const int Target_HASH = HashingUtils::HashString("Target");
        static const int Owner_HASH = HashingUtils::HashString("Owner");
        static const int Status_HASH = HashingUtils::HashString("Status");


        SessionFilterKey GetSessionFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvokedAfter_HASH)
          {
            return SessionFilterKey::InvokedAfter;
          }
          else if (hashCode == InvokedBefore_HASH)
          {
            return SessionFilterKey::InvokedBefore;
          }
          else if (hashCode == Target_HASH)
          {
            return SessionFilterKey::Target;
          }
          else if (hashCode == Owner_HASH)
          {
            return SessionFilterKey::Owner;
          }
          else if (hashCode == Status_HASH)
          {
            return SessionFilterKey::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionFilterKey>(hashCode);
          }

          return SessionFilterKey::NOT_SET;
        }

        Aws::String GetNameForSessionFilterKey(SessionFilterKey enumValue)
        {
          switch(enumValue)
          {
          case SessionFilterKey::InvokedAfter:
            return "InvokedAfter";
          case SessionFilterKey::InvokedBefore:
            return "InvokedBefore";
          case SessionFilterKey::Target:
            return "Target";
          case SessionFilterKey::Owner:
            return "Owner";
          case SessionFilterKey::Status:
            return "Status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
