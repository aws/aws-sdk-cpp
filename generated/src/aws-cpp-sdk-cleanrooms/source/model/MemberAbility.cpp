/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/MemberAbility.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace MemberAbilityMapper
      {

        static const int CAN_QUERY_HASH = HashingUtils::HashString("CAN_QUERY");
        static const int CAN_RECEIVE_RESULTS_HASH = HashingUtils::HashString("CAN_RECEIVE_RESULTS");


        MemberAbility GetMemberAbilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CAN_QUERY_HASH)
          {
            return MemberAbility::CAN_QUERY;
          }
          else if (hashCode == CAN_RECEIVE_RESULTS_HASH)
          {
            return MemberAbility::CAN_RECEIVE_RESULTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemberAbility>(hashCode);
          }

          return MemberAbility::NOT_SET;
        }

        Aws::String GetNameForMemberAbility(MemberAbility enumValue)
        {
          switch(enumValue)
          {
          case MemberAbility::NOT_SET:
            return {};
          case MemberAbility::CAN_QUERY:
            return "CAN_QUERY";
          case MemberAbility::CAN_RECEIVE_RESULTS:
            return "CAN_RECEIVE_RESULTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MemberAbilityMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
