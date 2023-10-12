/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Severity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace SeverityMapper
      {

        static constexpr uint32_t INFORMATIONAL_HASH = ConstExprHashingUtils::HashString("INFORMATIONAL");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t CRITICAL_HASH = ConstExprHashingUtils::HashString("CRITICAL");
        static constexpr uint32_t UNTRIAGED_HASH = ConstExprHashingUtils::HashString("UNTRIAGED");


        Severity GetSeverityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INFORMATIONAL_HASH)
          {
            return Severity::INFORMATIONAL;
          }
          else if (hashCode == LOW_HASH)
          {
            return Severity::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return Severity::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return Severity::HIGH;
          }
          else if (hashCode == CRITICAL_HASH)
          {
            return Severity::CRITICAL;
          }
          else if (hashCode == UNTRIAGED_HASH)
          {
            return Severity::UNTRIAGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Severity>(hashCode);
          }

          return Severity::NOT_SET;
        }

        Aws::String GetNameForSeverity(Severity enumValue)
        {
          switch(enumValue)
          {
          case Severity::NOT_SET:
            return {};
          case Severity::INFORMATIONAL:
            return "INFORMATIONAL";
          case Severity::LOW:
            return "LOW";
          case Severity::MEDIUM:
            return "MEDIUM";
          case Severity::HIGH:
            return "HIGH";
          case Severity::CRITICAL:
            return "CRITICAL";
          case Severity::UNTRIAGED:
            return "UNTRIAGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SeverityMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
