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

#include <aws/mediaconvert/model/PresetListBy.h>
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
      namespace PresetListByMapper
      {

        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int CREATION_DATE_HASH = HashingUtils::HashString("CREATION_DATE");
        static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");


        PresetListBy GetPresetListByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return PresetListBy::NAME;
          }
          else if (hashCode == CREATION_DATE_HASH)
          {
            return PresetListBy::CREATION_DATE;
          }
          else if (hashCode == SYSTEM_HASH)
          {
            return PresetListBy::SYSTEM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PresetListBy>(hashCode);
          }

          return PresetListBy::NOT_SET;
        }

        Aws::String GetNameForPresetListBy(PresetListBy enumValue)
        {
          switch(enumValue)
          {
          case PresetListBy::NAME:
            return "NAME";
          case PresetListBy::CREATION_DATE:
            return "CREATION_DATE";
          case PresetListBy::SYSTEM:
            return "SYSTEM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PresetListByMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
