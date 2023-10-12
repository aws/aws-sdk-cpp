/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MembershipType.h>
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
      namespace MembershipTypeMapper
      {

        static constexpr uint32_t static__HASH = ConstExprHashingUtils::HashString("static");
        static constexpr uint32_t igmp_HASH = ConstExprHashingUtils::HashString("igmp");


        MembershipType GetMembershipTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == static__HASH)
          {
            return MembershipType::static_;
          }
          else if (hashCode == igmp_HASH)
          {
            return MembershipType::igmp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MembershipType>(hashCode);
          }

          return MembershipType::NOT_SET;
        }

        Aws::String GetNameForMembershipType(MembershipType enumValue)
        {
          switch(enumValue)
          {
          case MembershipType::NOT_SET:
            return {};
          case MembershipType::static_:
            return "static";
          case MembershipType::igmp:
            return "igmp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MembershipTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
