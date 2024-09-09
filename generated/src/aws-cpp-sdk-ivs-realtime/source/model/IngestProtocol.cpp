/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/IngestProtocol.h>
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
      namespace IngestProtocolMapper
      {

        static const int RTMP_HASH = HashingUtils::HashString("RTMP");
        static const int RTMPS_HASH = HashingUtils::HashString("RTMPS");


        IngestProtocol GetIngestProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RTMP_HASH)
          {
            return IngestProtocol::RTMP;
          }
          else if (hashCode == RTMPS_HASH)
          {
            return IngestProtocol::RTMPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestProtocol>(hashCode);
          }

          return IngestProtocol::NOT_SET;
        }

        Aws::String GetNameForIngestProtocol(IngestProtocol enumValue)
        {
          switch(enumValue)
          {
          case IngestProtocol::NOT_SET:
            return {};
          case IngestProtocol::RTMP:
            return "RTMP";
          case IngestProtocol::RTMPS:
            return "RTMPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngestProtocolMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
