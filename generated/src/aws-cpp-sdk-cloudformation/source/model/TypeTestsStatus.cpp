/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/TypeTestsStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace TypeTestsStatusMapper
      {

        static const int PASSED_HASH = HashingUtils::HashString("PASSED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int NOT_TESTED_HASH = HashingUtils::HashString("NOT_TESTED");


        TypeTestsStatus GetTypeTestsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSED_HASH)
          {
            return TypeTestsStatus::PASSED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return TypeTestsStatus::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return TypeTestsStatus::IN_PROGRESS;
          }
          else if (hashCode == NOT_TESTED_HASH)
          {
            return TypeTestsStatus::NOT_TESTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TypeTestsStatus>(hashCode);
          }

          return TypeTestsStatus::NOT_SET;
        }

        Aws::String GetNameForTypeTestsStatus(TypeTestsStatus enumValue)
        {
          switch(enumValue)
          {
          case TypeTestsStatus::NOT_SET:
            return {};
          case TypeTestsStatus::PASSED:
            return "PASSED";
          case TypeTestsStatus::FAILED:
            return "FAILED";
          case TypeTestsStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case TypeTestsStatus::NOT_TESTED:
            return "NOT_TESTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypeTestsStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
