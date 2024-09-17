/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/CheckNoPublicAccessResult.h>
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
      namespace CheckNoPublicAccessResultMapper
      {

        static const int PASS_HASH = HashingUtils::HashString("PASS");
        static const int FAIL_HASH = HashingUtils::HashString("FAIL");


        CheckNoPublicAccessResult GetCheckNoPublicAccessResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASS_HASH)
          {
            return CheckNoPublicAccessResult::PASS;
          }
          else if (hashCode == FAIL_HASH)
          {
            return CheckNoPublicAccessResult::FAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CheckNoPublicAccessResult>(hashCode);
          }

          return CheckNoPublicAccessResult::NOT_SET;
        }

        Aws::String GetNameForCheckNoPublicAccessResult(CheckNoPublicAccessResult enumValue)
        {
          switch(enumValue)
          {
          case CheckNoPublicAccessResult::NOT_SET:
            return {};
          case CheckNoPublicAccessResult::PASS:
            return "PASS";
          case CheckNoPublicAccessResult::FAIL:
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

      } // namespace CheckNoPublicAccessResultMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
