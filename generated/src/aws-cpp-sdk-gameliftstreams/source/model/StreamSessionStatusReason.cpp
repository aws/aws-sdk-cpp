/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/StreamSessionStatusReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLiftStreams
  {
    namespace Model
    {
      namespace StreamSessionStatusReasonMapper
      {

        static const int internalError_HASH = HashingUtils::HashString("internalError");
        static const int invalidSignalRequest_HASH = HashingUtils::HashString("invalidSignalRequest");
        static const int placementTimeout_HASH = HashingUtils::HashString("placementTimeout");
        static const int applicationLogS3DestinationError_HASH = HashingUtils::HashString("applicationLogS3DestinationError");


        StreamSessionStatusReason GetStreamSessionStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == internalError_HASH)
          {
            return StreamSessionStatusReason::internalError;
          }
          else if (hashCode == invalidSignalRequest_HASH)
          {
            return StreamSessionStatusReason::invalidSignalRequest;
          }
          else if (hashCode == placementTimeout_HASH)
          {
            return StreamSessionStatusReason::placementTimeout;
          }
          else if (hashCode == applicationLogS3DestinationError_HASH)
          {
            return StreamSessionStatusReason::applicationLogS3DestinationError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamSessionStatusReason>(hashCode);
          }

          return StreamSessionStatusReason::NOT_SET;
        }

        Aws::String GetNameForStreamSessionStatusReason(StreamSessionStatusReason enumValue)
        {
          switch(enumValue)
          {
          case StreamSessionStatusReason::NOT_SET:
            return {};
          case StreamSessionStatusReason::internalError:
            return "internalError";
          case StreamSessionStatusReason::invalidSignalRequest:
            return "invalidSignalRequest";
          case StreamSessionStatusReason::placementTimeout:
            return "placementTimeout";
          case StreamSessionStatusReason::applicationLogS3DestinationError:
            return "applicationLogS3DestinationError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamSessionStatusReasonMapper
    } // namespace Model
  } // namespace GameLiftStreams
} // namespace Aws
