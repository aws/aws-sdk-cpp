/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AuditFindingSeverity.h>
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
      namespace AuditFindingSeverityMapper
      {

        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LOW_HASH = HashingUtils::HashString("LOW");


        AuditFindingSeverity GetAuditFindingSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return AuditFindingSeverity::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return AuditFindingSeverity::HIGH;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return AuditFindingSeverity::MEDIUM;
          }
          else if (hashCode == LOW_HASH)
          {
            return AuditFindingSeverity::LOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuditFindingSeverity>(hashCode);
          }

          return AuditFindingSeverity::NOT_SET;
        }

        Aws::String GetNameForAuditFindingSeverity(AuditFindingSeverity enumValue)
        {
          switch(enumValue)
          {
          case AuditFindingSeverity::CRITICAL:
            return "CRITICAL";
          case AuditFindingSeverity::HIGH:
            return "HIGH";
          case AuditFindingSeverity::MEDIUM:
            return "MEDIUM";
          case AuditFindingSeverity::LOW:
            return "LOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuditFindingSeverityMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
