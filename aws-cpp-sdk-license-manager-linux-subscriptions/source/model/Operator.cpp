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

        static const int Equal_HASH = HashingUtils::HashString("Equal");
        static const int NotEqual_HASH = HashingUtils::HashString("NotEqual");
        static const int Contains_HASH = HashingUtils::HashString("Contains");


        Operator GetOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
