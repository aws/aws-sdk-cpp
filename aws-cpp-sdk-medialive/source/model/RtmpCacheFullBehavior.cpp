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

#include <aws/medialive/model/RtmpCacheFullBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace RtmpCacheFullBehaviorMapper
      {

        static const int DISCONNECT_IMMEDIATELY_HASH = HashingUtils::HashString("DISCONNECT_IMMEDIATELY");
        static const int WAIT_FOR_SERVER_HASH = HashingUtils::HashString("WAIT_FOR_SERVER");


        RtmpCacheFullBehavior GetRtmpCacheFullBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISCONNECT_IMMEDIATELY_HASH)
          {
            return RtmpCacheFullBehavior::DISCONNECT_IMMEDIATELY;
          }
          else if (hashCode == WAIT_FOR_SERVER_HASH)
          {
            return RtmpCacheFullBehavior::WAIT_FOR_SERVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RtmpCacheFullBehavior>(hashCode);
          }

          return RtmpCacheFullBehavior::NOT_SET;
        }

        Aws::String GetNameForRtmpCacheFullBehavior(RtmpCacheFullBehavior enumValue)
        {
          switch(enumValue)
          {
          case RtmpCacheFullBehavior::DISCONNECT_IMMEDIATELY:
            return "DISCONNECT_IMMEDIATELY";
          case RtmpCacheFullBehavior::WAIT_FOR_SERVER:
            return "WAIT_FOR_SERVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RtmpCacheFullBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
