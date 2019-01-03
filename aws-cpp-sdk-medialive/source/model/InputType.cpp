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

#include <aws/medialive/model/InputType.h>
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
      namespace InputTypeMapper
      {

        static const int UDP_PUSH_HASH = HashingUtils::HashString("UDP_PUSH");
        static const int RTP_PUSH_HASH = HashingUtils::HashString("RTP_PUSH");
        static const int RTMP_PUSH_HASH = HashingUtils::HashString("RTMP_PUSH");
        static const int RTMP_PULL_HASH = HashingUtils::HashString("RTMP_PULL");
        static const int URL_PULL_HASH = HashingUtils::HashString("URL_PULL");
        static const int MP4_FILE_HASH = HashingUtils::HashString("MP4_FILE");
        static const int MEDIACONNECT_HASH = HashingUtils::HashString("MEDIACONNECT");


        InputType GetInputTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UDP_PUSH_HASH)
          {
            return InputType::UDP_PUSH;
          }
          else if (hashCode == RTP_PUSH_HASH)
          {
            return InputType::RTP_PUSH;
          }
          else if (hashCode == RTMP_PUSH_HASH)
          {
            return InputType::RTMP_PUSH;
          }
          else if (hashCode == RTMP_PULL_HASH)
          {
            return InputType::RTMP_PULL;
          }
          else if (hashCode == URL_PULL_HASH)
          {
            return InputType::URL_PULL;
          }
          else if (hashCode == MP4_FILE_HASH)
          {
            return InputType::MP4_FILE;
          }
          else if (hashCode == MEDIACONNECT_HASH)
          {
            return InputType::MEDIACONNECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputType>(hashCode);
          }

          return InputType::NOT_SET;
        }

        Aws::String GetNameForInputType(InputType enumValue)
        {
          switch(enumValue)
          {
          case InputType::UDP_PUSH:
            return "UDP_PUSH";
          case InputType::RTP_PUSH:
            return "RTP_PUSH";
          case InputType::RTMP_PUSH:
            return "RTMP_PUSH";
          case InputType::RTMP_PULL:
            return "RTMP_PULL";
          case InputType::URL_PULL:
            return "URL_PULL";
          case InputType::MP4_FILE:
            return "MP4_FILE";
          case InputType::MEDIACONNECT:
            return "MEDIACONNECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
