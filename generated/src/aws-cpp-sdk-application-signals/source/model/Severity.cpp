/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/Severity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationSignals
  {
    namespace Model
    {
      namespace SeverityMapper
      {

        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        Severity GetSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return Severity::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return Severity::HIGH;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return Severity::MEDIUM;
          }
          else if (hashCode == LOW_HASH)
          {
            return Severity::LOW;
          }
          else if (hashCode == NONE_HASH)
          {
            return Severity::NONE;
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
          case Severity::CRITICAL:
            return "CRITICAL";
          case Severity::HIGH:
            return "HIGH";
          case Severity::MEDIUM:
            return "MEDIUM";
          case Severity::LOW:
            return "LOW";
          case Severity::NONE:
            return "NONE";
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
  } // namespace ApplicationSignals
} // namespace Aws
