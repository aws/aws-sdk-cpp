/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Comparator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ComparatorMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int GREATER_THAN_EQUALS_HASH = HashingUtils::HashString("GREATER_THAN_EQUALS");
        static const int LESS_THAN_EQUALS_HASH = HashingUtils::HashString("LESS_THAN_EQUALS");


        Comparator GetComparatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return Comparator::EQUALS;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return Comparator::GREATER_THAN;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return Comparator::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_EQUALS_HASH)
          {
            return Comparator::GREATER_THAN_EQUALS;
          }
          else if (hashCode == LESS_THAN_EQUALS_HASH)
          {
            return Comparator::LESS_THAN_EQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Comparator>(hashCode);
          }

          return Comparator::NOT_SET;
        }

        Aws::String GetNameForComparator(Comparator enumValue)
        {
          switch(enumValue)
          {
          case Comparator::EQUALS:
            return "EQUALS";
          case Comparator::GREATER_THAN:
            return "GREATER_THAN";
          case Comparator::LESS_THAN:
            return "LESS_THAN";
          case Comparator::GREATER_THAN_EQUALS:
            return "GREATER_THAN_EQUALS";
          case Comparator::LESS_THAN_EQUALS:
            return "LESS_THAN_EQUALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComparatorMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
