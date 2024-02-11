/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/CheckNoNewAccessResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace CheckNoNewAccessResultMapper
      {

        static const int PASS_HASH = HashingUtils::HashString("PASS");
        static const int FAIL_HASH = HashingUtils::HashString("FAIL");


        CheckNoNewAccessResult GetCheckNoNewAccessResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASS_HASH)
          {
            return CheckNoNewAccessResult::PASS;
          }
          else if (hashCode == FAIL_HASH)
          {
            return CheckNoNewAccessResult::FAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CheckNoNewAccessResult>(hashCode);
          }

          return CheckNoNewAccessResult::NOT_SET;
        }

        Aws::String GetNameForCheckNoNewAccessResult(CheckNoNewAccessResult enumValue)
        {
          switch(enumValue)
          {
          case CheckNoNewAccessResult::NOT_SET:
            return {};
          case CheckNoNewAccessResult::PASS:
            return "PASS";
          case CheckNoNewAccessResult::FAIL:
            return "FAIL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CheckNoNewAccessResultMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
