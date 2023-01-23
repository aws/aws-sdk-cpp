/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ReleaseStatusValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace ReleaseStatusValuesMapper
      {

        static const int beta_HASH = HashingUtils::HashString("beta");


        ReleaseStatusValues GetReleaseStatusValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == beta_HASH)
          {
            return ReleaseStatusValues::beta;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReleaseStatusValues>(hashCode);
          }

          return ReleaseStatusValues::NOT_SET;
        }

        Aws::String GetNameForReleaseStatusValues(ReleaseStatusValues enumValue)
        {
          switch(enumValue)
          {
          case ReleaseStatusValues::beta:
            return "beta";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReleaseStatusValuesMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
