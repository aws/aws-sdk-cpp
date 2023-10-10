/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/UserIdentityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kafka
  {
    namespace Model
    {
      namespace UserIdentityTypeMapper
      {

        static const int AWSACCOUNT_HASH = HashingUtils::HashString("AWSACCOUNT");
        static const int AWSSERVICE_HASH = HashingUtils::HashString("AWSSERVICE");


        UserIdentityType GetUserIdentityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWSACCOUNT_HASH)
          {
            return UserIdentityType::AWSACCOUNT;
          }
          else if (hashCode == AWSSERVICE_HASH)
          {
            return UserIdentityType::AWSSERVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserIdentityType>(hashCode);
          }

          return UserIdentityType::NOT_SET;
        }

        Aws::String GetNameForUserIdentityType(UserIdentityType enumValue)
        {
          switch(enumValue)
          {
          case UserIdentityType::NOT_SET:
            return {};
          case UserIdentityType::AWSACCOUNT:
            return "AWSACCOUNT";
          case UserIdentityType::AWSSERVICE:
            return "AWSSERVICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserIdentityTypeMapper
    } // namespace Model
  } // namespace Kafka
} // namespace Aws
