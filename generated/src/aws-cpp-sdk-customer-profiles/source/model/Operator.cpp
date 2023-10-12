/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/Operator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace OperatorMapper
      {

        static constexpr uint32_t EQUAL_TO_HASH = ConstExprHashingUtils::HashString("EQUAL_TO");
        static constexpr uint32_t GREATER_THAN_HASH = ConstExprHashingUtils::HashString("GREATER_THAN");
        static constexpr uint32_t LESS_THAN_HASH = ConstExprHashingUtils::HashString("LESS_THAN");
        static constexpr uint32_t NOT_EQUAL_TO_HASH = ConstExprHashingUtils::HashString("NOT_EQUAL_TO");


        Operator GetOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUAL_TO_HASH)
          {
            return Operator::EQUAL_TO;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return Operator::GREATER_THAN;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return Operator::LESS_THAN;
          }
          else if (hashCode == NOT_EQUAL_TO_HASH)
          {
            return Operator::NOT_EQUAL_TO;
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
          case Operator::EQUAL_TO:
            return "EQUAL_TO";
          case Operator::GREATER_THAN:
            return "GREATER_THAN";
          case Operator::LESS_THAN:
            return "LESS_THAN";
          case Operator::NOT_EQUAL_TO:
            return "NOT_EQUAL_TO";
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
  } // namespace CustomerProfiles
} // namespace Aws
