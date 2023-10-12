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

        static constexpr uint32_t PendingAutoRenewal_HASH = ConstExprHashingUtils::HashString("PendingAutoRenewal");
        static constexpr uint32_t PendingValidation_HASH = ConstExprHashingUtils::HashString("PendingValidation");
        static constexpr uint32_t Success_HASH = ConstExprHashingUtils::HashString("Success");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        RenewalStatus GetRenewalStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case RenewalStatus::NOT_SET:
            return {};
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
