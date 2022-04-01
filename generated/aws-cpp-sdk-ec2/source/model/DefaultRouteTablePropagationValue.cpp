/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DefaultRouteTablePropagationValue.h>
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
      namespace DefaultRouteTablePropagationValueMapper
      {

        static const int enable_HASH = HashingUtils::HashString("enable");
        static const int disable_HASH = HashingUtils::HashString("disable");


        DefaultRouteTablePropagationValue GetDefaultRouteTablePropagationValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enable_HASH)
          {
            return DefaultRouteTablePropagationValue::enable;
          }
          else if (hashCode == disable_HASH)
          {
            return DefaultRouteTablePropagationValue::disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefaultRouteTablePropagationValue>(hashCode);
          }

          return DefaultRouteTablePropagationValue::NOT_SET;
        }

        Aws::String GetNameForDefaultRouteTablePropagationValue(DefaultRouteTablePropagationValue enumValue)
        {
          switch(enumValue)
          {
          case DefaultRouteTablePropagationValue::enable:
            return "enable";
          case DefaultRouteTablePropagationValue::disable:
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

      } // namespace DefaultRouteTablePropagationValueMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
