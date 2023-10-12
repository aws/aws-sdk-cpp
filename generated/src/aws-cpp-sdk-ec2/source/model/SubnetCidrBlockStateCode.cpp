/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SubnetCidrBlockStateCode.h>
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
      namespace SubnetCidrBlockStateCodeMapper
      {

        static constexpr uint32_t associating_HASH = ConstExprHashingUtils::HashString("associating");
        static constexpr uint32_t associated_HASH = ConstExprHashingUtils::HashString("associated");
        static constexpr uint32_t disassociating_HASH = ConstExprHashingUtils::HashString("disassociating");
        static constexpr uint32_t disassociated_HASH = ConstExprHashingUtils::HashString("disassociated");
        static constexpr uint32_t failing_HASH = ConstExprHashingUtils::HashString("failing");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");


        SubnetCidrBlockStateCode GetSubnetCidrBlockStateCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == associating_HASH)
          {
            return SubnetCidrBlockStateCode::associating;
          }
          else if (hashCode == associated_HASH)
          {
            return SubnetCidrBlockStateCode::associated;
          }
          else if (hashCode == disassociating_HASH)
          {
            return SubnetCidrBlockStateCode::disassociating;
          }
          else if (hashCode == disassociated_HASH)
          {
            return SubnetCidrBlockStateCode::disassociated;
          }
          else if (hashCode == failing_HASH)
          {
            return SubnetCidrBlockStateCode::failing;
          }
          else if (hashCode == failed_HASH)
          {
            return SubnetCidrBlockStateCode::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubnetCidrBlockStateCode>(hashCode);
          }

          return SubnetCidrBlockStateCode::NOT_SET;
        }

        Aws::String GetNameForSubnetCidrBlockStateCode(SubnetCidrBlockStateCode enumValue)
        {
          switch(enumValue)
          {
          case SubnetCidrBlockStateCode::NOT_SET:
            return {};
          case SubnetCidrBlockStateCode::associating:
            return "associating";
          case SubnetCidrBlockStateCode::associated:
            return "associated";
          case SubnetCidrBlockStateCode::disassociating:
            return "disassociating";
          case SubnetCidrBlockStateCode::disassociated:
            return "disassociated";
          case SubnetCidrBlockStateCode::failing:
            return "failing";
          case SubnetCidrBlockStateCode::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubnetCidrBlockStateCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
