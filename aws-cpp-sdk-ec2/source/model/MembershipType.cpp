/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int static__HASH = HashingUtils::HashString("static");
        static const int igmp_HASH = HashingUtils::HashString("igmp");


        MembershipType GetMembershipTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
