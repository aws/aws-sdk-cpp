/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/PublicBucketRestrictBehavior.h>
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
      namespace PublicBucketRestrictBehaviorMapper
      {

        static const int RESTRICTED_HASH = HashingUtils::HashString("RESTRICTED");
        static const int NOT_RESTRICTED_HASH = HashingUtils::HashString("NOT_RESTRICTED");


        PublicBucketRestrictBehavior GetPublicBucketRestrictBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESTRICTED_HASH)
          {
            return PublicBucketRestrictBehavior::RESTRICTED;
          }
          else if (hashCode == NOT_RESTRICTED_HASH)
          {
            return PublicBucketRestrictBehavior::NOT_RESTRICTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PublicBucketRestrictBehavior>(hashCode);
          }

          return PublicBucketRestrictBehavior::NOT_SET;
        }

        Aws::String GetNameForPublicBucketRestrictBehavior(PublicBucketRestrictBehavior enumValue)
        {
          switch(enumValue)
          {
          case PublicBucketRestrictBehavior::NOT_SET:
            return {};
          case PublicBucketRestrictBehavior::RESTRICTED:
            return "RESTRICTED";
          case PublicBucketRestrictBehavior::NOT_RESTRICTED:
            return "NOT_RESTRICTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PublicBucketRestrictBehaviorMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
