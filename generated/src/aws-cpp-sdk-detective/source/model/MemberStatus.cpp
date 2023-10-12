/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/MemberStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Detective
  {
    namespace Model
    {
      namespace MemberStatusMapper
      {

        static constexpr uint32_t INVITED_HASH = ConstExprHashingUtils::HashString("INVITED");
        static constexpr uint32_t VERIFICATION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("VERIFICATION_IN_PROGRESS");
        static constexpr uint32_t VERIFICATION_FAILED_HASH = ConstExprHashingUtils::HashString("VERIFICATION_FAILED");
        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");
        static constexpr uint32_t ACCEPTED_BUT_DISABLED_HASH = ConstExprHashingUtils::HashString("ACCEPTED_BUT_DISABLED");


        MemberStatus GetMemberStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVITED_HASH)
          {
            return MemberStatus::INVITED;
          }
          else if (hashCode == VERIFICATION_IN_PROGRESS_HASH)
          {
            return MemberStatus::VERIFICATION_IN_PROGRESS;
          }
          else if (hashCode == VERIFICATION_FAILED_HASH)
          {
            return MemberStatus::VERIFICATION_FAILED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return MemberStatus::ENABLED;
          }
          else if (hashCode == ACCEPTED_BUT_DISABLED_HASH)
          {
            return MemberStatus::ACCEPTED_BUT_DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemberStatus>(hashCode);
          }

          return MemberStatus::NOT_SET;
        }

        Aws::String GetNameForMemberStatus(MemberStatus enumValue)
        {
          switch(enumValue)
          {
          case MemberStatus::NOT_SET:
            return {};
          case MemberStatus::INVITED:
            return "INVITED";
          case MemberStatus::VERIFICATION_IN_PROGRESS:
            return "VERIFICATION_IN_PROGRESS";
          case MemberStatus::VERIFICATION_FAILED:
            return "VERIFICATION_FAILED";
          case MemberStatus::ENABLED:
            return "ENABLED";
          case MemberStatus::ACCEPTED_BUT_DISABLED:
            return "ACCEPTED_BUT_DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MemberStatusMapper
    } // namespace Model
  } // namespace Detective
} // namespace Aws
