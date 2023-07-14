/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/AppValidationStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace AppValidationStrategyMapper
      {

        static const int SSM_HASH = HashingUtils::HashString("SSM");


        AppValidationStrategy GetAppValidationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSM_HASH)
          {
            return AppValidationStrategy::SSM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppValidationStrategy>(hashCode);
          }

          return AppValidationStrategy::NOT_SET;
        }

        Aws::String GetNameForAppValidationStrategy(AppValidationStrategy enumValue)
        {
          switch(enumValue)
          {
          case AppValidationStrategy::SSM:
            return "SSM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppValidationStrategyMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
