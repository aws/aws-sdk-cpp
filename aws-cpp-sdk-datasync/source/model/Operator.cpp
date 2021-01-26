/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/Operator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace OperatorMapper
      {

        static const int Equals_HASH = HashingUtils::HashString("Equals");
        static const int NotEquals_HASH = HashingUtils::HashString("NotEquals");
        static const int In_HASH = HashingUtils::HashString("In");
        static const int LessThanOrEqual_HASH = HashingUtils::HashString("LessThanOrEqual");
        static const int LessThan_HASH = HashingUtils::HashString("LessThan");
        static const int GreaterThanOrEqual_HASH = HashingUtils::HashString("GreaterThanOrEqual");
        static const int GreaterThan_HASH = HashingUtils::HashString("GreaterThan");
        static const int Contains_HASH = HashingUtils::HashString("Contains");
        static const int NotContains_HASH = HashingUtils::HashString("NotContains");
        static const int BeginsWith_HASH = HashingUtils::HashString("BeginsWith");


        Operator GetOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equals_HASH)
          {
            return Operator::Equals;
          }
          else if (hashCode == NotEquals_HASH)
          {
            return Operator::NotEquals;
          }
          else if (hashCode == In_HASH)
          {
            return Operator::In;
          }
          else if (hashCode == LessThanOrEqual_HASH)
          {
            return Operator::LessThanOrEqual;
          }
          else if (hashCode == LessThan_HASH)
          {
            return Operator::LessThan;
          }
          else if (hashCode == GreaterThanOrEqual_HASH)
          {
            return Operator::GreaterThanOrEqual;
          }
          else if (hashCode == GreaterThan_HASH)
          {
            return Operator::GreaterThan;
          }
          else if (hashCode == Contains_HASH)
          {
            return Operator::Contains;
          }
          else if (hashCode == NotContains_HASH)
          {
            return Operator::NotContains;
          }
          else if (hashCode == BeginsWith_HASH)
          {
            return Operator::BeginsWith;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Operator>(hashCode);
          }

          return Operator::NOT_SET;
        }

        Aws::String GetNameForOperator(Operator enumValue)
        {
          switch(enumValue)
          {
          case Operator::Equals:
            return "Equals";
          case Operator::NotEquals:
            return "NotEquals";
          case Operator::In:
            return "In";
          case Operator::LessThanOrEqual:
            return "LessThanOrEqual";
          case Operator::LessThan:
            return "LessThan";
          case Operator::GreaterThanOrEqual:
            return "GreaterThanOrEqual";
          case Operator::GreaterThan:
            return "GreaterThan";
          case Operator::Contains:
            return "Contains";
          case Operator::NotContains:
            return "NotContains";
          case Operator::BeginsWith:
            return "BeginsWith";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperatorMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
