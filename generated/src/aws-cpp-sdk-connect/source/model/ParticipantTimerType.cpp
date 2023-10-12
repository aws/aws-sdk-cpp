/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ParticipantTimerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace ParticipantTimerTypeMapper
      {

        static constexpr uint32_t IDLE_HASH = ConstExprHashingUtils::HashString("IDLE");
        static constexpr uint32_t DISCONNECT_NONCUSTOMER_HASH = ConstExprHashingUtils::HashString("DISCONNECT_NONCUSTOMER");


        ParticipantTimerType GetParticipantTimerTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IDLE_HASH)
          {
            return ParticipantTimerType::IDLE;
          }
          else if (hashCode == DISCONNECT_NONCUSTOMER_HASH)
          {
            return ParticipantTimerType::DISCONNECT_NONCUSTOMER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParticipantTimerType>(hashCode);
          }

          return ParticipantTimerType::NOT_SET;
        }

        Aws::String GetNameForParticipantTimerType(ParticipantTimerType enumValue)
        {
          switch(enumValue)
          {
          case ParticipantTimerType::NOT_SET:
            return {};
          case ParticipantTimerType::IDLE:
            return "IDLE";
          case ParticipantTimerType::DISCONNECT_NONCUSTOMER:
            return "DISCONNECT_NONCUSTOMER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParticipantTimerTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
