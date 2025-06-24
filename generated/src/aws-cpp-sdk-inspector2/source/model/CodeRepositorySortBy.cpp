/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeRepositorySortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace CodeRepositorySortByMapper
      {

        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        CodeRepositorySortBy GetCodeRepositorySortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return CodeRepositorySortBy::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return CodeRepositorySortBy::HIGH;
          }
          else if (hashCode == ALL_HASH)
          {
            return CodeRepositorySortBy::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CodeRepositorySortBy>(hashCode);
          }

          return CodeRepositorySortBy::NOT_SET;
        }

        Aws::String GetNameForCodeRepositorySortBy(CodeRepositorySortBy enumValue)
        {
          switch(enumValue)
          {
          case CodeRepositorySortBy::NOT_SET:
            return {};
          case CodeRepositorySortBy::CRITICAL:
            return "CRITICAL";
          case CodeRepositorySortBy::HIGH:
            return "HIGH";
          case CodeRepositorySortBy::ALL:
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

      } // namespace CodeRepositorySortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
