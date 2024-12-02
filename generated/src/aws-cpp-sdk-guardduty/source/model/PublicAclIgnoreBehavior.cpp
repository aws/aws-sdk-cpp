/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/PublicAclIgnoreBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace PublicAclIgnoreBehaviorMapper
      {

        static const int IGNORED_HASH = HashingUtils::HashString("IGNORED");
        static const int NOT_IGNORED_HASH = HashingUtils::HashString("NOT_IGNORED");


        PublicAclIgnoreBehavior GetPublicAclIgnoreBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IGNORED_HASH)
          {
            return PublicAclIgnoreBehavior::IGNORED;
          }
          else if (hashCode == NOT_IGNORED_HASH)
          {
            return PublicAclIgnoreBehavior::NOT_IGNORED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PublicAclIgnoreBehavior>(hashCode);
          }

          return PublicAclIgnoreBehavior::NOT_SET;
        }

        Aws::String GetNameForPublicAclIgnoreBehavior(PublicAclIgnoreBehavior enumValue)
        {
          switch(enumValue)
          {
          case PublicAclIgnoreBehavior::NOT_SET:
            return {};
          case PublicAclIgnoreBehavior::IGNORED:
            return "IGNORED";
          case PublicAclIgnoreBehavior::NOT_IGNORED:
            return "NOT_IGNORED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PublicAclIgnoreBehaviorMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
