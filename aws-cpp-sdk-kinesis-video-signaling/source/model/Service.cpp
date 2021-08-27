/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-signaling/model/Service.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideoSignalingChannels
  {
    namespace Model
    {
      namespace ServiceMapper
      {

        static const int TURN_HASH = HashingUtils::HashString("TURN");


        Service GetServiceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TURN_HASH)
          {
            return Service::TURN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Service>(hashCode);
          }

          return Service::NOT_SET;
        }

        Aws::String GetNameForService(Service enumValue)
        {
          switch(enumValue)
          {
          case Service::TURN:
            return "TURN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceMapper
    } // namespace Model
  } // namespace KinesisVideoSignalingChannels
} // namespace Aws
