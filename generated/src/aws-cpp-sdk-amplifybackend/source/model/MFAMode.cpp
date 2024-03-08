/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/MFAMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyBackend
  {
    namespace Model
    {
      namespace MFAModeMapper
      {

        static const int ON_HASH = HashingUtils::HashString("ON");
        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int OPTIONAL_HASH = HashingUtils::HashString("OPTIONAL");


        MFAMode GetMFAModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_HASH)
          {
            return MFAMode::ON;
          }
          else if (hashCode == OFF_HASH)
          {
            return MFAMode::OFF;
          }
          else if (hashCode == OPTIONAL_HASH)
          {
            return MFAMode::OPTIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MFAMode>(hashCode);
          }

          return MFAMode::NOT_SET;
        }

        Aws::String GetNameForMFAMode(MFAMode enumValue)
        {
          switch(enumValue)
          {
          case MFAMode::NOT_SET:
            return {};
          case MFAMode::ON:
            return "ON";
          case MFAMode::OFF:
            return "OFF";
          case MFAMode::OPTIONAL:
            return "OPTIONAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MFAModeMapper
    } // namespace Model
  } // namespace AmplifyBackend
} // namespace Aws
