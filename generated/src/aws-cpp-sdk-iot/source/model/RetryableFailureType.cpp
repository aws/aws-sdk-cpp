/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/RetryableFailureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace RetryableFailureTypeMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        RetryableFailureType GetRetryableFailureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return RetryableFailureType::FAILED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return RetryableFailureType::TIMED_OUT;
          }
          else if (hashCode == ALL_HASH)
          {
            return RetryableFailureType::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetryableFailureType>(hashCode);
          }

          return RetryableFailureType::NOT_SET;
        }

        Aws::String GetNameForRetryableFailureType(RetryableFailureType enumValue)
        {
          switch(enumValue)
          {
          case RetryableFailureType::NOT_SET:
            return {};
          case RetryableFailureType::FAILED:
            return "FAILED";
          case RetryableFailureType::TIMED_OUT:
            return "TIMED_OUT";
          case RetryableFailureType::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetryableFailureTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
