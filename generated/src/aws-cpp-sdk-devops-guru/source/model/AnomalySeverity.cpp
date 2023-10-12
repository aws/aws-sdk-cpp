/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/AnomalySeverity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace AnomalySeverityMapper
      {

        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");


        AnomalySeverity GetAnomalySeverityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return AnomalySeverity::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return AnomalySeverity::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return AnomalySeverity::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnomalySeverity>(hashCode);
          }

          return AnomalySeverity::NOT_SET;
        }

        Aws::String GetNameForAnomalySeverity(AnomalySeverity enumValue)
        {
          switch(enumValue)
          {
          case AnomalySeverity::NOT_SET:
            return {};
          case AnomalySeverity::LOW:
            return "LOW";
          case AnomalySeverity::MEDIUM:
            return "MEDIUM";
          case AnomalySeverity::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnomalySeverityMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
