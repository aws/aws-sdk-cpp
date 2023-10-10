/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SubnetCidrReservationType.h>
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
      namespace SubnetCidrReservationTypeMapper
      {

        static const int prefix_HASH = HashingUtils::HashString("prefix");
        static const int explicit__HASH = HashingUtils::HashString("explicit");


        SubnetCidrReservationType GetSubnetCidrReservationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == prefix_HASH)
          {
            return SubnetCidrReservationType::prefix;
          }
          else if (hashCode == explicit__HASH)
          {
            return SubnetCidrReservationType::explicit_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubnetCidrReservationType>(hashCode);
          }

          return SubnetCidrReservationType::NOT_SET;
        }

        Aws::String GetNameForSubnetCidrReservationType(SubnetCidrReservationType enumValue)
        {
          switch(enumValue)
          {
          case SubnetCidrReservationType::NOT_SET:
            return {};
          case SubnetCidrReservationType::prefix:
            return "prefix";
          case SubnetCidrReservationType::explicit_:
            return "explicit";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubnetCidrReservationTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
