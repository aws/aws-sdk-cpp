/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ThrottleReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace ThrottleReasonMapper
      {

        static const int CONCURRENT_QUERY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("CONCURRENT_QUERY_LIMIT_EXCEEDED");


        ThrottleReason GetThrottleReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONCURRENT_QUERY_LIMIT_EXCEEDED_HASH)
          {
            return ThrottleReason::CONCURRENT_QUERY_LIMIT_EXCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThrottleReason>(hashCode);
          }

          return ThrottleReason::NOT_SET;
        }

        Aws::String GetNameForThrottleReason(ThrottleReason enumValue)
        {
          switch(enumValue)
          {
          case ThrottleReason::CONCURRENT_QUERY_LIMIT_EXCEEDED:
            return "CONCURRENT_QUERY_LIMIT_EXCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThrottleReasonMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
