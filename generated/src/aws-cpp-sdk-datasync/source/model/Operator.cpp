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

        static constexpr uint32_t Equals_HASH = ConstExprHashingUtils::HashString("Equals");
        static constexpr uint32_t NotEquals_HASH = ConstExprHashingUtils::HashString("NotEquals");
        static constexpr uint32_t In_HASH = ConstExprHashingUtils::HashString("In");
        static constexpr uint32_t LessThanOrEqual_HASH = ConstExprHashingUtils::HashString("LessThanOrEqual");
        static constexpr uint32_t LessThan_HASH = ConstExprHashingUtils::HashString("LessThan");
        static constexpr uint32_t GreaterThanOrEqual_HASH = ConstExprHashingUtils::HashString("GreaterThanOrEqual");
        static constexpr uint32_t GreaterThan_HASH = ConstExprHashingUtils::HashString("GreaterThan");
        static constexpr uint32_t Contains_HASH = ConstExprHashingUtils::HashString("Contains");
        static constexpr uint32_t NotContains_HASH = ConstExprHashingUtils::HashString("NotContains");
        static constexpr uint32_t BeginsWith_HASH = ConstExprHashingUtils::HashString("BeginsWith");


        Operator GetOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case Operator::NOT_SET:
            return {};
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
