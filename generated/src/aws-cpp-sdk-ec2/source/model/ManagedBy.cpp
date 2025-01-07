/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ManagedBy.h>
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
      namespace ManagedByMapper
      {

        static const int account_HASH = HashingUtils::HashString("account");
        static const int declarative_policy_HASH = HashingUtils::HashString("declarative-policy");


        ManagedBy GetManagedByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == account_HASH)
          {
            return ManagedBy::account;
          }
          else if (hashCode == declarative_policy_HASH)
          {
            return ManagedBy::declarative_policy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManagedBy>(hashCode);
          }

          return ManagedBy::NOT_SET;
        }

        Aws::String GetNameForManagedBy(ManagedBy enumValue)
        {
          switch(enumValue)
          {
          case ManagedBy::NOT_SET:
            return {};
          case ManagedBy::account:
            return "account";
          case ManagedBy::declarative_policy:
            return "declarative-policy";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManagedByMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
