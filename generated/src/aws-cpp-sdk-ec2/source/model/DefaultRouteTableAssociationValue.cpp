/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DefaultRouteTableAssociationValue.h>
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
      namespace DefaultRouteTableAssociationValueMapper
      {

        static const int enable_HASH = HashingUtils::HashString("enable");
        static const int disable_HASH = HashingUtils::HashString("disable");


        DefaultRouteTableAssociationValue GetDefaultRouteTableAssociationValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enable_HASH)
          {
            return DefaultRouteTableAssociationValue::enable;
          }
          else if (hashCode == disable_HASH)
          {
            return DefaultRouteTableAssociationValue::disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefaultRouteTableAssociationValue>(hashCode);
          }

          return DefaultRouteTableAssociationValue::NOT_SET;
        }

        Aws::String GetNameForDefaultRouteTableAssociationValue(DefaultRouteTableAssociationValue enumValue)
        {
          switch(enumValue)
          {
          case DefaultRouteTableAssociationValue::enable:
            return "enable";
          case DefaultRouteTableAssociationValue::disable:
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

      } // namespace DefaultRouteTableAssociationValueMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
