/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/StatusReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace StatusReasonMapper
      {

        static const int VALIDATION_FAILURE_HASH = HashingUtils::HashString("VALIDATION_FAILURE");
        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");


        StatusReason GetStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATION_FAILURE_HASH)
          {
            return StatusReason::VALIDATION_FAILURE;
          }
          else if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return StatusReason::INTERNAL_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatusReason>(hashCode);
          }

          return StatusReason::NOT_SET;
        }

        Aws::String GetNameForStatusReason(StatusReason enumValue)
        {
          switch(enumValue)
          {
          case StatusReason::NOT_SET:
            return {};
          case StatusReason::VALIDATION_FAILURE:
            return "VALIDATION_FAILURE";
          case StatusReason::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusReasonMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
