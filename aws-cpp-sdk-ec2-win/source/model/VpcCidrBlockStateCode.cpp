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

        static const int associating_HASH = HashingUtils::HashString("associating");
        static const int associated_HASH = HashingUtils::HashString("associated");
        static const int disassociating_HASH = HashingUtils::HashString("disassociating");
        static const int disassociated_HASH = HashingUtils::HashString("disassociated");
        static const int failing_HASH = HashingUtils::HashString("failing");
        static const int failed_HASH = HashingUtils::HashString("failed");


        VpcCidrBlockStateCode GetVpcCidrBlockStateCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
