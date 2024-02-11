/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ObfuscationSettingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace ObfuscationSettingTypeMapper
      {

        static const int None_HASH = HashingUtils::HashString("None");
        static const int DefaultObfuscation_HASH = HashingUtils::HashString("DefaultObfuscation");


        ObfuscationSettingType GetObfuscationSettingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_HASH)
          {
            return ObfuscationSettingType::None;
          }
          else if (hashCode == DefaultObfuscation_HASH)
          {
            return ObfuscationSettingType::DefaultObfuscation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObfuscationSettingType>(hashCode);
          }

          return ObfuscationSettingType::NOT_SET;
        }

        Aws::String GetNameForObfuscationSettingType(ObfuscationSettingType enumValue)
        {
          switch(enumValue)
          {
          case ObfuscationSettingType::NOT_SET:
            return {};
          case ObfuscationSettingType::None:
            return "None";
          case ObfuscationSettingType::DefaultObfuscation:
            return "DefaultObfuscation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObfuscationSettingTypeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
