/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AccountAttributeName.h>
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
      namespace AccountAttributeNameMapper
      {

        static const int supported_platforms_HASH = HashingUtils::HashString("supported-platforms");
        static const int default_vpc_HASH = HashingUtils::HashString("default-vpc");


        AccountAttributeName GetAccountAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == supported_platforms_HASH)
          {
            return AccountAttributeName::supported_platforms;
          }
          else if (hashCode == default_vpc_HASH)
          {
            return AccountAttributeName::default_vpc;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountAttributeName>(hashCode);
          }

          return AccountAttributeName::NOT_SET;
        }

        Aws::String GetNameForAccountAttributeName(AccountAttributeName enumValue)
        {
          switch(enumValue)
          {
          case AccountAttributeName::supported_platforms:
            return "supported-platforms";
          case AccountAttributeName::default_vpc:
            return "default-vpc";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountAttributeNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
