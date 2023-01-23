﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/RenewalStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACM
  {
    namespace Model
    {
      namespace RenewalStatusMapper
      {

        static const int PENDING_AUTO_RENEWAL_HASH = HashingUtils::HashString("PENDING_AUTO_RENEWAL");
        static const int PENDING_VALIDATION_HASH = HashingUtils::HashString("PENDING_VALIDATION");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        RenewalStatus GetRenewalStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_AUTO_RENEWAL_HASH)
          {
            return RenewalStatus::PENDING_AUTO_RENEWAL;
          }
          else if (hashCode == PENDING_VALIDATION_HASH)
          {
            return RenewalStatus::PENDING_VALIDATION;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return RenewalStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RenewalStatus::FAILED;
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
          case RenewalStatus::PENDING_AUTO_RENEWAL:
            return "PENDING_AUTO_RENEWAL";
          case RenewalStatus::PENDING_VALIDATION:
            return "PENDING_VALIDATION";
          case RenewalStatus::SUCCESS:
            return "SUCCESS";
          case RenewalStatus::FAILED:
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

      } // namespace RenewalStatusMapper
    } // namespace Model
  } // namespace ACM
} // namespace Aws
