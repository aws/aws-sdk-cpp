/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ExpressionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace ExpressionTypeMapper
      {

        static const int RuleName_HASH = HashingUtils::HashString("RuleName");


        ExpressionType GetExpressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RuleName_HASH)
          {
            return ExpressionType::RuleName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExpressionType>(hashCode);
          }

          return ExpressionType::NOT_SET;
        }

        Aws::String GetNameForExpressionType(ExpressionType enumValue)
        {
          switch(enumValue)
          {
          case ExpressionType::RuleName:
            return "RuleName";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExpressionTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
