/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ApplicationRevisionSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace ApplicationRevisionSortByMapper
      {

        static constexpr uint32_t registerTime_HASH = ConstExprHashingUtils::HashString("registerTime");
        static constexpr uint32_t firstUsedTime_HASH = ConstExprHashingUtils::HashString("firstUsedTime");
        static constexpr uint32_t lastUsedTime_HASH = ConstExprHashingUtils::HashString("lastUsedTime");


        ApplicationRevisionSortBy GetApplicationRevisionSortByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == registerTime_HASH)
          {
            return ApplicationRevisionSortBy::registerTime;
          }
          else if (hashCode == firstUsedTime_HASH)
          {
            return ApplicationRevisionSortBy::firstUsedTime;
          }
          else if (hashCode == lastUsedTime_HASH)
          {
            return ApplicationRevisionSortBy::lastUsedTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationRevisionSortBy>(hashCode);
          }

          return ApplicationRevisionSortBy::NOT_SET;
        }

        Aws::String GetNameForApplicationRevisionSortBy(ApplicationRevisionSortBy enumValue)
        {
          switch(enumValue)
          {
          case ApplicationRevisionSortBy::NOT_SET:
            return {};
          case ApplicationRevisionSortBy::registerTime:
            return "registerTime";
          case ApplicationRevisionSortBy::firstUsedTime:
            return "firstUsedTime";
          case ApplicationRevisionSortBy::lastUsedTime:
            return "lastUsedTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationRevisionSortByMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
