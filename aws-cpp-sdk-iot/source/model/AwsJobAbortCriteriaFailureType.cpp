/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AwsJobAbortCriteriaFailureType.h>
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
      namespace AwsJobAbortCriteriaFailureTypeMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        AwsJobAbortCriteriaFailureType GetAwsJobAbortCriteriaFailureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return AwsJobAbortCriteriaFailureType::FAILED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return AwsJobAbortCriteriaFailureType::REJECTED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return AwsJobAbortCriteriaFailureType::TIMED_OUT;
          }
          else if (hashCode == ALL_HASH)
          {
            return AwsJobAbortCriteriaFailureType::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AwsJobAbortCriteriaFailureType>(hashCode);
          }

          return AwsJobAbortCriteriaFailureType::NOT_SET;
        }

        Aws::String GetNameForAwsJobAbortCriteriaFailureType(AwsJobAbortCriteriaFailureType enumValue)
        {
          switch(enumValue)
          {
          case AwsJobAbortCriteriaFailureType::FAILED:
            return "FAILED";
          case AwsJobAbortCriteriaFailureType::REJECTED:
            return "REJECTED";
          case AwsJobAbortCriteriaFailureType::TIMED_OUT:
            return "TIMED_OUT";
          case AwsJobAbortCriteriaFailureType::ALL:
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

      } // namespace AwsJobAbortCriteriaFailureTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
