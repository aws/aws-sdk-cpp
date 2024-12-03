/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/MultiRegionConsistency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace MultiRegionConsistencyMapper
      {

        static const int EVENTUAL_HASH = HashingUtils::HashString("EVENTUAL");
        static const int STRONG_HASH = HashingUtils::HashString("STRONG");


        MultiRegionConsistency GetMultiRegionConsistencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EVENTUAL_HASH)
          {
            return MultiRegionConsistency::EVENTUAL;
          }
          else if (hashCode == STRONG_HASH)
          {
            return MultiRegionConsistency::STRONG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MultiRegionConsistency>(hashCode);
          }

          return MultiRegionConsistency::NOT_SET;
        }

        Aws::String GetNameForMultiRegionConsistency(MultiRegionConsistency enumValue)
        {
          switch(enumValue)
          {
          case MultiRegionConsistency::NOT_SET:
            return {};
          case MultiRegionConsistency::EVENTUAL:
            return "EVENTUAL";
          case MultiRegionConsistency::STRONG:
            return "STRONG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MultiRegionConsistencyMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
