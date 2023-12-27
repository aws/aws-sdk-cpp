/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/UserGroupResolutionMode.h>
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
      namespace UserGroupResolutionModeMapper
      {

        static const int AWS_SSO_HASH = HashingUtils::HashString("AWS_SSO");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        UserGroupResolutionMode GetUserGroupResolutionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_SSO_HASH)
          {
            return UserGroupResolutionMode::AWS_SSO;
          }
          else if (hashCode == NONE_HASH)
          {
            return UserGroupResolutionMode::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserGroupResolutionMode>(hashCode);
          }

          return UserGroupResolutionMode::NOT_SET;
        }

        Aws::String GetNameForUserGroupResolutionMode(UserGroupResolutionMode enumValue)
        {
          switch(enumValue)
          {
          case UserGroupResolutionMode::NOT_SET:
            return {};
          case UserGroupResolutionMode::AWS_SSO:
            return "AWS_SSO";
          case UserGroupResolutionMode::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserGroupResolutionModeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
