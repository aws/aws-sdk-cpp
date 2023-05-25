/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/RenewalStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace RenewalStatusMapper
      {

        static const int PendingAutoRenewal_HASH = HashingUtils::HashString("PendingAutoRenewal");
        static const int PendingValidation_HASH = HashingUtils::HashString("PendingValidation");
        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        RenewalStatus GetRenewalStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PendingAutoRenewal_HASH)
          {
            return RenewalStatus::PendingAutoRenewal;
          }
          else if (hashCode == PendingValidation_HASH)
          {
            return RenewalStatus::PendingValidation;
          }
          else if (hashCode == Success_HASH)
          {
            return RenewalStatus::Success;
          }
          else if (hashCode == Failed_HASH)
          {
            return RenewalStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RenewalStatus>(hashCode);
          }

          return RenewalStatus::NOT_SET;
        }

        Aws::String GetNameForRenewalStatus(RenewalStatus enumValue)
        {
          switch(enumValue)
          {
          case RenewalStatus::PendingAutoRenewal:
            return "PendingAutoRenewal";
          case RenewalStatus::PendingValidation:
            return "PendingValidation";
          case RenewalStatus::Success:
            return "Success";
          case RenewalStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RenewalStatusMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
