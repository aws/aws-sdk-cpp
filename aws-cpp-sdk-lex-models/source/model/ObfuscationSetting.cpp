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

#include <aws/lex-models/model/ObfuscationSetting.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace ObfuscationSettingMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int DEFAULT_OBFUSCATION_HASH = HashingUtils::HashString("DEFAULT_OBFUSCATION");


        ObfuscationSetting GetObfuscationSettingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return ObfuscationSetting::NONE;
          }
          else if (hashCode == DEFAULT_OBFUSCATION_HASH)
          {
            return ObfuscationSetting::DEFAULT_OBFUSCATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObfuscationSetting>(hashCode);
          }

          return ObfuscationSetting::NOT_SET;
        }

        Aws::String GetNameForObfuscationSetting(ObfuscationSetting enumValue)
        {
          switch(enumValue)
          {
          case ObfuscationSetting::NONE:
            return "NONE";
          case ObfuscationSetting::DEFAULT_OBFUSCATION:
            return "DEFAULT_OBFUSCATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObfuscationSettingMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
