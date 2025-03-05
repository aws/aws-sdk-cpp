/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/StreamGroupStatusReason.h>
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
      namespace StreamGroupStatusReasonMapper
      {

        static const int internalError_HASH = HashingUtils::HashString("internalError");
        static const int noAvailableInstances_HASH = HashingUtils::HashString("noAvailableInstances");


        StreamGroupStatusReason GetStreamGroupStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == internalError_HASH)
          {
            return StreamGroupStatusReason::internalError;
          }
          else if (hashCode == noAvailableInstances_HASH)
          {
            return StreamGroupStatusReason::noAvailableInstances;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamGroupStatusReason>(hashCode);
          }

          return StreamGroupStatusReason::NOT_SET;
        }

        Aws::String GetNameForStreamGroupStatusReason(StreamGroupStatusReason enumValue)
        {
          switch(enumValue)
          {
          case StreamGroupStatusReason::NOT_SET:
            return {};
          case StreamGroupStatusReason::internalError:
            return "internalError";
          case StreamGroupStatusReason::noAvailableInstances:
            return "noAvailableInstances";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamGroupStatusReasonMapper
    } // namespace Model
  } // namespace GameLiftStreams
} // namespace Aws
