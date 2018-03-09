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

#include <aws/mediaconvert/model/HlsCaptionLanguageSetting.h>
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
      namespace HlsCaptionLanguageSettingMapper
      {

        static const int INSERT_HASH = HashingUtils::HashString("INSERT");
        static const int OMIT_HASH = HashingUtils::HashString("OMIT");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        HlsCaptionLanguageSetting GetHlsCaptionLanguageSettingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSERT_HASH)
          {
            return HlsCaptionLanguageSetting::INSERT;
          }
          else if (hashCode == OMIT_HASH)
          {
            return HlsCaptionLanguageSetting::OMIT;
          }
          else if (hashCode == NONE_HASH)
          {
            return HlsCaptionLanguageSetting::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsCaptionLanguageSetting>(hashCode);
          }

          return HlsCaptionLanguageSetting::NOT_SET;
        }

        Aws::String GetNameForHlsCaptionLanguageSetting(HlsCaptionLanguageSetting enumValue)
        {
          switch(enumValue)
          {
          case HlsCaptionLanguageSetting::INSERT:
            return "INSERT";
          case HlsCaptionLanguageSetting::OMIT:
            return "OMIT";
          case HlsCaptionLanguageSetting::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace HlsCaptionLanguageSettingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
