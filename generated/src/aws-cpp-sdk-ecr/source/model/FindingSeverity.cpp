/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/FindingSeverity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECR
  {
    namespace Model
    {
      namespace FindingSeverityMapper
      {

        static constexpr uint32_t INFORMATIONAL_HASH = ConstExprHashingUtils::HashString("INFORMATIONAL");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t CRITICAL_HASH = ConstExprHashingUtils::HashString("CRITICAL");
        static constexpr uint32_t UNDEFINED_HASH = ConstExprHashingUtils::HashString("UNDEFINED");


        FindingSeverity GetFindingSeverityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INFORMATIONAL_HASH)
          {
            return FindingSeverity::INFORMATIONAL;
          }
          else if (hashCode == LOW_HASH)
          {
            return FindingSeverity::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return FindingSeverity::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return FindingSeverity::HIGH;
          }
          else if (hashCode == CRITICAL_HASH)
          {
            return FindingSeverity::CRITICAL;
          }
          else if (hashCode == UNDEFINED_HASH)
          {
            return FindingSeverity::UNDEFINED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingSeverity>(hashCode);
          }

          return FindingSeverity::NOT_SET;
        }

        Aws::String GetNameForFindingSeverity(FindingSeverity enumValue)
        {
          switch(enumValue)
          {
          case FindingSeverity::NOT_SET:
            return {};
          case FindingSeverity::INFORMATIONAL:
            return "INFORMATIONAL";
          case FindingSeverity::LOW:
            return "LOW";
          case FindingSeverity::MEDIUM:
            return "MEDIUM";
          case FindingSeverity::HIGH:
            return "HIGH";
          case FindingSeverity::CRITICAL:
            return "CRITICAL";
          case FindingSeverity::UNDEFINED:
            return "UNDEFINED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingSeverityMapper
    } // namespace Model
  } // namespace ECR
} // namespace Aws
