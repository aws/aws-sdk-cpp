/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ConcurrencyMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace ConcurrencyModeMapper
      {

        static const int STRICT_FAILURE_TOLERANCE_HASH = HashingUtils::HashString("STRICT_FAILURE_TOLERANCE");
        static const int SOFT_FAILURE_TOLERANCE_HASH = HashingUtils::HashString("SOFT_FAILURE_TOLERANCE");


        ConcurrencyMode GetConcurrencyModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRICT_FAILURE_TOLERANCE_HASH)
          {
            return ConcurrencyMode::STRICT_FAILURE_TOLERANCE;
          }
          else if (hashCode == SOFT_FAILURE_TOLERANCE_HASH)
          {
            return ConcurrencyMode::SOFT_FAILURE_TOLERANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConcurrencyMode>(hashCode);
          }

          return ConcurrencyMode::NOT_SET;
        }

        Aws::String GetNameForConcurrencyMode(ConcurrencyMode enumValue)
        {
          switch(enumValue)
          {
          case ConcurrencyMode::NOT_SET:
            return {};
          case ConcurrencyMode::STRICT_FAILURE_TOLERANCE:
            return "STRICT_FAILURE_TOLERANCE";
          case ConcurrencyMode::SOFT_FAILURE_TOLERANCE:
            return "SOFT_FAILURE_TOLERANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConcurrencyModeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
