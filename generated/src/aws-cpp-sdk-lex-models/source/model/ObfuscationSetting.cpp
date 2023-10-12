/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t DEFAULT_OBFUSCATION_HASH = ConstExprHashingUtils::HashString("DEFAULT_OBFUSCATION");


        ObfuscationSetting GetObfuscationSettingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ObfuscationSetting::NOT_SET:
            return {};
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
