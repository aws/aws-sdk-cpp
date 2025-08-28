/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/ValidationLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace HealthLake
  {
    namespace Model
    {
      namespace ValidationLevelMapper
      {

        static const int strict_HASH = HashingUtils::HashString("strict");
        static const int structure_only_HASH = HashingUtils::HashString("structure-only");
        static const int minimal_HASH = HashingUtils::HashString("minimal");


        ValidationLevel GetValidationLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == strict_HASH)
          {
            return ValidationLevel::strict;
          }
          else if (hashCode == structure_only_HASH)
          {
            return ValidationLevel::structure_only;
          }
          else if (hashCode == minimal_HASH)
          {
            return ValidationLevel::minimal;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationLevel>(hashCode);
          }

          return ValidationLevel::NOT_SET;
        }

        Aws::String GetNameForValidationLevel(ValidationLevel enumValue)
        {
          switch(enumValue)
          {
          case ValidationLevel::NOT_SET:
            return {};
          case ValidationLevel::strict:
            return "strict";
          case ValidationLevel::structure_only:
            return "structure-only";
          case ValidationLevel::minimal:
            return "minimal";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationLevelMapper
    } // namespace Model
  } // namespace HealthLake
} // namespace Aws
