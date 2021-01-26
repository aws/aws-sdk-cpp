/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/MemberDisabledReason.h>
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
      namespace MemberDisabledReasonMapper
      {

        static const int VOLUME_TOO_HIGH_HASH = HashingUtils::HashString("VOLUME_TOO_HIGH");
        static const int VOLUME_UNKNOWN_HASH = HashingUtils::HashString("VOLUME_UNKNOWN");


        MemberDisabledReason GetMemberDisabledReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VOLUME_TOO_HIGH_HASH)
          {
            return MemberDisabledReason::VOLUME_TOO_HIGH;
          }
          else if (hashCode == VOLUME_UNKNOWN_HASH)
          {
            return MemberDisabledReason::VOLUME_UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemberDisabledReason>(hashCode);
          }

          return MemberDisabledReason::NOT_SET;
        }

        Aws::String GetNameForMemberDisabledReason(MemberDisabledReason enumValue)
        {
          switch(enumValue)
          {
          case MemberDisabledReason::VOLUME_TOO_HIGH:
            return "VOLUME_TOO_HIGH";
          case MemberDisabledReason::VOLUME_UNKNOWN:
            return "VOLUME_UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MemberDisabledReasonMapper
    } // namespace Model
  } // namespace Detective
} // namespace Aws
