/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/ThresholdComparator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace ThresholdComparatorMapper
      {

        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
        static const int GREATER_THAN_OR_EQUAL_TO_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUAL_TO");


        ThresholdComparator GetThresholdComparatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GREATER_THAN_HASH)
          {
            return ThresholdComparator::GREATER_THAN;
          }
          else if (hashCode == GREATER_THAN_OR_EQUAL_TO_HASH)
          {
            return ThresholdComparator::GREATER_THAN_OR_EQUAL_TO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThresholdComparator>(hashCode);
          }

          return ThresholdComparator::NOT_SET;
        }

        Aws::String GetNameForThresholdComparator(ThresholdComparator enumValue)
        {
          switch(enumValue)
          {
          case ThresholdComparator::GREATER_THAN:
            return "GREATER_THAN";
          case ThresholdComparator::GREATER_THAN_OR_EQUAL_TO:
            return "GREATER_THAN_OR_EQUAL_TO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThresholdComparatorMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
