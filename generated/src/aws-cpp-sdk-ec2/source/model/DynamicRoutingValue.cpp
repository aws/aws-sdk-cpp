/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DynamicRoutingValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace DynamicRoutingValueMapper
      {

        static const int enable_HASH = HashingUtils::HashString("enable");
        static const int disable_HASH = HashingUtils::HashString("disable");


        DynamicRoutingValue GetDynamicRoutingValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enable_HASH)
          {
            return DynamicRoutingValue::enable;
          }
          else if (hashCode == disable_HASH)
          {
            return DynamicRoutingValue::disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DynamicRoutingValue>(hashCode);
          }

          return DynamicRoutingValue::NOT_SET;
        }

        Aws::String GetNameForDynamicRoutingValue(DynamicRoutingValue enumValue)
        {
          switch(enumValue)
          {
          case DynamicRoutingValue::NOT_SET:
            return {};
          case DynamicRoutingValue::enable:
            return "enable";
          case DynamicRoutingValue::disable:
            return "disable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DynamicRoutingValueMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
