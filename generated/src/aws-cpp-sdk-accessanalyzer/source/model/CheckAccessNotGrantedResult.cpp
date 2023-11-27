/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/CheckAccessNotGrantedResult.h>
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
      namespace CheckAccessNotGrantedResultMapper
      {

        static const int PASS_HASH = HashingUtils::HashString("PASS");
        static const int FAIL_HASH = HashingUtils::HashString("FAIL");


        CheckAccessNotGrantedResult GetCheckAccessNotGrantedResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASS_HASH)
          {
            return CheckAccessNotGrantedResult::PASS;
          }
          else if (hashCode == FAIL_HASH)
          {
            return CheckAccessNotGrantedResult::FAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CheckAccessNotGrantedResult>(hashCode);
          }

          return CheckAccessNotGrantedResult::NOT_SET;
        }

        Aws::String GetNameForCheckAccessNotGrantedResult(CheckAccessNotGrantedResult enumValue)
        {
          switch(enumValue)
          {
          case CheckAccessNotGrantedResult::NOT_SET:
            return {};
          case CheckAccessNotGrantedResult::PASS:
            return "PASS";
          case CheckAccessNotGrantedResult::FAIL:
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

      } // namespace CheckAccessNotGrantedResultMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
