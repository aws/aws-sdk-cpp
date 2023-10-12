/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcCidrBlockStateCode.h>
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
      namespace VpcCidrBlockStateCodeMapper
      {

        static constexpr uint32_t associating_HASH = ConstExprHashingUtils::HashString("associating");
        static constexpr uint32_t associated_HASH = ConstExprHashingUtils::HashString("associated");
        static constexpr uint32_t disassociating_HASH = ConstExprHashingUtils::HashString("disassociating");
        static constexpr uint32_t disassociated_HASH = ConstExprHashingUtils::HashString("disassociated");
        static constexpr uint32_t failing_HASH = ConstExprHashingUtils::HashString("failing");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");


        VpcCidrBlockStateCode GetVpcCidrBlockStateCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == associating_HASH)
          {
            return VpcCidrBlockStateCode::associating;
          }
          else if (hashCode == associated_HASH)
          {
            return VpcCidrBlockStateCode::associated;
          }
          else if (hashCode == disassociating_HASH)
          {
            return VpcCidrBlockStateCode::disassociating;
          }
          else if (hashCode == disassociated_HASH)
          {
            return VpcCidrBlockStateCode::disassociated;
          }
          else if (hashCode == failing_HASH)
          {
            return VpcCidrBlockStateCode::failing;
          }
          else if (hashCode == failed_HASH)
          {
            return VpcCidrBlockStateCode::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcCidrBlockStateCode>(hashCode);
          }

          return VpcCidrBlockStateCode::NOT_SET;
        }

        Aws::String GetNameForVpcCidrBlockStateCode(VpcCidrBlockStateCode enumValue)
        {
          switch(enumValue)
          {
          case VpcCidrBlockStateCode::NOT_SET:
            return {};
          case VpcCidrBlockStateCode::associating:
            return "associating";
          case VpcCidrBlockStateCode::associated:
            return "associated";
          case VpcCidrBlockStateCode::disassociating:
            return "disassociating";
          case VpcCidrBlockStateCode::disassociated:
            return "disassociated";
          case VpcCidrBlockStateCode::failing:
            return "failing";
          case VpcCidrBlockStateCode::failed:
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

      } // namespace VpcCidrBlockStateCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
