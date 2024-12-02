/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/PublicAccessStatus.h>
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
      namespace PublicAccessStatusMapper
      {

        static const int BLOCKED_HASH = HashingUtils::HashString("BLOCKED");
        static const int ALLOWED_HASH = HashingUtils::HashString("ALLOWED");


        PublicAccessStatus GetPublicAccessStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLOCKED_HASH)
          {
            return PublicAccessStatus::BLOCKED;
          }
          else if (hashCode == ALLOWED_HASH)
          {
            return PublicAccessStatus::ALLOWED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PublicAccessStatus>(hashCode);
          }

          return PublicAccessStatus::NOT_SET;
        }

        Aws::String GetNameForPublicAccessStatus(PublicAccessStatus enumValue)
        {
          switch(enumValue)
          {
          case PublicAccessStatus::NOT_SET:
            return {};
          case PublicAccessStatus::BLOCKED:
            return "BLOCKED";
          case PublicAccessStatus::ALLOWED:
            return "ALLOWED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PublicAccessStatusMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
