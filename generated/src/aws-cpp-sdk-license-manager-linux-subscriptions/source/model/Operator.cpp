/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/Operator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManagerLinuxSubscriptions
  {
    namespace Model
    {
      namespace OperatorMapper
      {

        static constexpr uint32_t Equal_HASH = ConstExprHashingUtils::HashString("Equal");
        static constexpr uint32_t NotEqual_HASH = ConstExprHashingUtils::HashString("NotEqual");
        static constexpr uint32_t Contains_HASH = ConstExprHashingUtils::HashString("Contains");


        Operator GetOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equal_HASH)
          {
            return Operator::Equal;
          }
          else if (hashCode == NotEqual_HASH)
          {
            return Operator::NotEqual;
          }
          else if (hashCode == Contains_HASH)
          {
            return Operator::Contains;
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
          case Operator::Equal:
            return "Equal";
          case Operator::NotEqual:
            return "NotEqual";
          case Operator::Contains:
            return "Contains";
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
  } // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
