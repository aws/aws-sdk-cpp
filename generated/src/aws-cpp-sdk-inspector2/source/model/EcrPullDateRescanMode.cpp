/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/EcrPullDateRescanMode.h>
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
      namespace EcrPullDateRescanModeMapper
      {

        static const int LAST_PULL_DATE_HASH = HashingUtils::HashString("LAST_PULL_DATE");
        static const int LAST_IN_USE_AT_HASH = HashingUtils::HashString("LAST_IN_USE_AT");


        EcrPullDateRescanMode GetEcrPullDateRescanModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LAST_PULL_DATE_HASH)
          {
            return EcrPullDateRescanMode::LAST_PULL_DATE;
          }
          else if (hashCode == LAST_IN_USE_AT_HASH)
          {
            return EcrPullDateRescanMode::LAST_IN_USE_AT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EcrPullDateRescanMode>(hashCode);
          }

          return EcrPullDateRescanMode::NOT_SET;
        }

        Aws::String GetNameForEcrPullDateRescanMode(EcrPullDateRescanMode enumValue)
        {
          switch(enumValue)
          {
          case EcrPullDateRescanMode::NOT_SET:
            return {};
          case EcrPullDateRescanMode::LAST_PULL_DATE:
            return "LAST_PULL_DATE";
          case EcrPullDateRescanMode::LAST_IN_USE_AT:
            return "LAST_IN_USE_AT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EcrPullDateRescanModeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
