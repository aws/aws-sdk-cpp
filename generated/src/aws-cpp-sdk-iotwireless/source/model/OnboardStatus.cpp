/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/OnboardStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace OnboardStatusMapper
      {

        static const int INITIALIZED_HASH = HashingUtils::HashString("INITIALIZED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ONBOARDED_HASH = HashingUtils::HashString("ONBOARDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        OnboardStatus GetOnboardStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZED_HASH)
          {
            return OnboardStatus::INITIALIZED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return OnboardStatus::PENDING;
          }
          else if (hashCode == ONBOARDED_HASH)
          {
            return OnboardStatus::ONBOARDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return OnboardStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OnboardStatus>(hashCode);
          }

          return OnboardStatus::NOT_SET;
        }

        Aws::String GetNameForOnboardStatus(OnboardStatus enumValue)
        {
          switch(enumValue)
          {
          case OnboardStatus::NOT_SET:
            return {};
          case OnboardStatus::INITIALIZED:
            return "INITIALIZED";
          case OnboardStatus::PENDING:
            return "PENDING";
          case OnboardStatus::ONBOARDED:
            return "ONBOARDED";
          case OnboardStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OnboardStatusMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
