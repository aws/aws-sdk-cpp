/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssociatedNetworkType.h>
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
      namespace AssociatedNetworkTypeMapper
      {

        static const int vpc_HASH = HashingUtils::HashString("vpc");


        AssociatedNetworkType GetAssociatedNetworkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == vpc_HASH)
          {
            return AssociatedNetworkType::vpc;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociatedNetworkType>(hashCode);
          }

          return AssociatedNetworkType::NOT_SET;
        }

        Aws::String GetNameForAssociatedNetworkType(AssociatedNetworkType enumValue)
        {
          switch(enumValue)
          {
          case AssociatedNetworkType::vpc:
            return "vpc";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociatedNetworkTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
