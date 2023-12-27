/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AwsEcrContainerSortBy.h>
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
      namespace AwsEcrContainerSortByMapper
      {

        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        AwsEcrContainerSortBy GetAwsEcrContainerSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return AwsEcrContainerSortBy::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return AwsEcrContainerSortBy::HIGH;
          }
          else if (hashCode == ALL_HASH)
          {
            return AwsEcrContainerSortBy::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AwsEcrContainerSortBy>(hashCode);
          }

          return AwsEcrContainerSortBy::NOT_SET;
        }

        Aws::String GetNameForAwsEcrContainerSortBy(AwsEcrContainerSortBy enumValue)
        {
          switch(enumValue)
          {
          case AwsEcrContainerSortBy::NOT_SET:
            return {};
          case AwsEcrContainerSortBy::CRITICAL:
            return "CRITICAL";
          case AwsEcrContainerSortBy::HIGH:
            return "HIGH";
          case AwsEcrContainerSortBy::ALL:
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

      } // namespace AwsEcrContainerSortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
