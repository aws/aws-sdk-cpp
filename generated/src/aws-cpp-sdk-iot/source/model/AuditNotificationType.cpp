/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AuditNotificationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace AuditNotificationTypeMapper
      {

        static const int SNS_HASH = HashingUtils::HashString("SNS");


        AuditNotificationType GetAuditNotificationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SNS_HASH)
          {
            return AuditNotificationType::SNS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuditNotificationType>(hashCode);
          }

          return AuditNotificationType::NOT_SET;
        }

        Aws::String GetNameForAuditNotificationType(AuditNotificationType enumValue)
        {
          switch(enumValue)
          {
          case AuditNotificationType::SNS:
            return "SNS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuditNotificationTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
