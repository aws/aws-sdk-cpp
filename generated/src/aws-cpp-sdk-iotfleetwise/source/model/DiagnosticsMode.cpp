/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/DiagnosticsMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace DiagnosticsModeMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int SEND_ACTIVE_DTCS_HASH = HashingUtils::HashString("SEND_ACTIVE_DTCS");


        DiagnosticsMode GetDiagnosticsModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return DiagnosticsMode::OFF;
          }
          else if (hashCode == SEND_ACTIVE_DTCS_HASH)
          {
            return DiagnosticsMode::SEND_ACTIVE_DTCS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiagnosticsMode>(hashCode);
          }

          return DiagnosticsMode::NOT_SET;
        }

        Aws::String GetNameForDiagnosticsMode(DiagnosticsMode enumValue)
        {
          switch(enumValue)
          {
          case DiagnosticsMode::OFF:
            return "OFF";
          case DiagnosticsMode::SEND_ACTIVE_DTCS:
            return "SEND_ACTIVE_DTCS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiagnosticsModeMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
