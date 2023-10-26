/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/ValidationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace ValidationModeMapper
      {

        static const int CHECK_ALL_HASH = HashingUtils::HashString("CHECK_ALL");


        ValidationMode GetValidationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHECK_ALL_HASH)
          {
            return ValidationMode::CHECK_ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationMode>(hashCode);
          }

          return ValidationMode::NOT_SET;
        }

        Aws::String GetNameForValidationMode(ValidationMode enumValue)
        {
          switch(enumValue)
          {
          case ValidationMode::NOT_SET:
            return {};
          case ValidationMode::CHECK_ALL:
            return "CHECK_ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationModeMapper
    } // namespace Model
  } // namespace GlueDataBrew
} // namespace Aws
