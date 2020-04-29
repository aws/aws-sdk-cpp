/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iotsitewise/model/CapabilitySyncStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace CapabilitySyncStatusMapper
      {

        static const int IN_SYNC_HASH = HashingUtils::HashString("IN_SYNC");
        static const int OUT_OF_SYNC_HASH = HashingUtils::HashString("OUT_OF_SYNC");
        static const int SYNC_FAILED_HASH = HashingUtils::HashString("SYNC_FAILED");


        CapabilitySyncStatus GetCapabilitySyncStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_SYNC_HASH)
          {
            return CapabilitySyncStatus::IN_SYNC;
          }
          else if (hashCode == OUT_OF_SYNC_HASH)
          {
            return CapabilitySyncStatus::OUT_OF_SYNC;
          }
          else if (hashCode == SYNC_FAILED_HASH)
          {
            return CapabilitySyncStatus::SYNC_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapabilitySyncStatus>(hashCode);
          }

          return CapabilitySyncStatus::NOT_SET;
        }

        Aws::String GetNameForCapabilitySyncStatus(CapabilitySyncStatus enumValue)
        {
          switch(enumValue)
          {
          case CapabilitySyncStatus::IN_SYNC:
            return "IN_SYNC";
          case CapabilitySyncStatus::OUT_OF_SYNC:
            return "OUT_OF_SYNC";
          case CapabilitySyncStatus::SYNC_FAILED:
            return "SYNC_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapabilitySyncStatusMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
