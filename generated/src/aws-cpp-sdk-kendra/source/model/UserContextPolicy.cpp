/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/UserContextPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace UserContextPolicyMapper
      {

        static const int ATTRIBUTE_FILTER_HASH = HashingUtils::HashString("ATTRIBUTE_FILTER");
        static const int USER_TOKEN_HASH = HashingUtils::HashString("USER_TOKEN");


        UserContextPolicy GetUserContextPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ATTRIBUTE_FILTER_HASH)
          {
            return UserContextPolicy::ATTRIBUTE_FILTER;
          }
          else if (hashCode == USER_TOKEN_HASH)
          {
            return UserContextPolicy::USER_TOKEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserContextPolicy>(hashCode);
          }

          return UserContextPolicy::NOT_SET;
        }

        Aws::String GetNameForUserContextPolicy(UserContextPolicy enumValue)
        {
          switch(enumValue)
          {
          case UserContextPolicy::ATTRIBUTE_FILTER:
            return "ATTRIBUTE_FILTER";
          case UserContextPolicy::USER_TOKEN:
            return "USER_TOKEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserContextPolicyMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
