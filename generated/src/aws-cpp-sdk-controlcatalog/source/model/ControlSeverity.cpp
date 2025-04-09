/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/ControlSeverity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ControlCatalog
  {
    namespace Model
    {
      namespace ControlSeverityMapper
      {

        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");


        ControlSeverity GetControlSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return ControlSeverity::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return ControlSeverity::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return ControlSeverity::HIGH;
          }
          else if (hashCode == CRITICAL_HASH)
          {
            return ControlSeverity::CRITICAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ControlSeverity>(hashCode);
          }

          return ControlSeverity::NOT_SET;
        }

        Aws::String GetNameForControlSeverity(ControlSeverity enumValue)
        {
          switch(enumValue)
          {
          case ControlSeverity::NOT_SET:
            return {};
          case ControlSeverity::LOW:
            return "LOW";
          case ControlSeverity::MEDIUM:
            return "MEDIUM";
          case ControlSeverity::HIGH:
            return "HIGH";
          case ControlSeverity::CRITICAL:
            return "CRITICAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ControlSeverityMapper
    } // namespace Model
  } // namespace ControlCatalog
} // namespace Aws
