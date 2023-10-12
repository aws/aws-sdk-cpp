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

        static constexpr uint32_t CRITICAL_HASH = ConstExprHashingUtils::HashString("CRITICAL");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");


        AuditFindingSeverity GetAuditFindingSeverityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case AuditFindingSeverity::NOT_SET:
            return {};
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
