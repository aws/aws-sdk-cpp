/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/FeaturizationMethodName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace FeaturizationMethodNameMapper
      {

        static const int filling_HASH = HashingUtils::HashString("filling");


        FeaturizationMethodName GetFeaturizationMethodNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == filling_HASH)
          {
            return FeaturizationMethodName::filling;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeaturizationMethodName>(hashCode);
          }

          return FeaturizationMethodName::NOT_SET;
        }

        Aws::String GetNameForFeaturizationMethodName(FeaturizationMethodName enumValue)
        {
          switch(enumValue)
          {
          case FeaturizationMethodName::filling:
            return "filling";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeaturizationMethodNameMapper
    } // namespace Model
  } // namespace ForecastService
} // namespace Aws
