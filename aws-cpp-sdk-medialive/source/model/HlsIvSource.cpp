﻿/*
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

#include <aws/medialive/model/HlsIvSource.h>
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
      namespace HlsIvSourceMapper
      {

        static const int EXPLICIT_HASH = HashingUtils::HashString("EXPLICIT");
        static const int FOLLOWS_SEGMENT_NUMBER_HASH = HashingUtils::HashString("FOLLOWS_SEGMENT_NUMBER");


        HlsIvSource GetHlsIvSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXPLICIT_HASH)
          {
            return HlsIvSource::EXPLICIT;
          }
          else if (hashCode == FOLLOWS_SEGMENT_NUMBER_HASH)
          {
            return HlsIvSource::FOLLOWS_SEGMENT_NUMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsIvSource>(hashCode);
          }

          return HlsIvSource::NOT_SET;
        }

        Aws::String GetNameForHlsIvSource(HlsIvSource enumValue)
        {
          switch(enumValue)
          {
          case HlsIvSource::EXPLICIT:
            return "EXPLICIT";
          case HlsIvSource::FOLLOWS_SEGMENT_NUMBER:
            return "FOLLOWS_SEGMENT_NUMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace HlsIvSourceMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
