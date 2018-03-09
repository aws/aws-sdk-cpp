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

#include <aws/mediaconvert/model/HlsTimedMetadataId3Frame.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace HlsTimedMetadataId3FrameMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int PRIV_HASH = HashingUtils::HashString("PRIV");
        static const int TDRL_HASH = HashingUtils::HashString("TDRL");


        HlsTimedMetadataId3Frame GetHlsTimedMetadataId3FrameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return HlsTimedMetadataId3Frame::NONE;
          }
          else if (hashCode == PRIV_HASH)
          {
            return HlsTimedMetadataId3Frame::PRIV;
          }
          else if (hashCode == TDRL_HASH)
          {
            return HlsTimedMetadataId3Frame::TDRL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsTimedMetadataId3Frame>(hashCode);
          }

          return HlsTimedMetadataId3Frame::NOT_SET;
        }

        Aws::String GetNameForHlsTimedMetadataId3Frame(HlsTimedMetadataId3Frame enumValue)
        {
          switch(enumValue)
          {
          case HlsTimedMetadataId3Frame::NONE:
            return "NONE";
          case HlsTimedMetadataId3Frame::PRIV:
            return "PRIV";
          case HlsTimedMetadataId3Frame::TDRL:
            return "TDRL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace HlsTimedMetadataId3FrameMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
