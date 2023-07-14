/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int SessionId_HASH = HashingUtils::HashString("SessionId");


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
          else if (hashCode == SessionId_HASH)
          {
            return SessionFilterKey::SessionId;
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
          case SessionFilterKey::SessionId:
            return "SessionId";
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
