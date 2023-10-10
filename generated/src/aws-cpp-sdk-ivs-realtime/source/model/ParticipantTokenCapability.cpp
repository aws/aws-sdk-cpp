/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ParticipantTokenCapability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace ParticipantTokenCapabilityMapper
      {

        static const int PUBLISH_HASH = HashingUtils::HashString("PUBLISH");
        static const int SUBSCRIBE_HASH = HashingUtils::HashString("SUBSCRIBE");


        ParticipantTokenCapability GetParticipantTokenCapabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLISH_HASH)
          {
            return ParticipantTokenCapability::PUBLISH;
          }
          else if (hashCode == SUBSCRIBE_HASH)
          {
            return ParticipantTokenCapability::SUBSCRIBE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParticipantTokenCapability>(hashCode);
          }

          return ParticipantTokenCapability::NOT_SET;
        }

        Aws::String GetNameForParticipantTokenCapability(ParticipantTokenCapability enumValue)
        {
          switch(enumValue)
          {
          case ParticipantTokenCapability::NOT_SET:
            return {};
          case ParticipantTokenCapability::PUBLISH:
            return "PUBLISH";
          case ParticipantTokenCapability::SUBSCRIBE:
            return "SUBSCRIBE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParticipantTokenCapabilityMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
