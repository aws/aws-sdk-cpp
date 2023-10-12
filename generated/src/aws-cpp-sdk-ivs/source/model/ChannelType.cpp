/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/ChannelType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IVS
  {
    namespace Model
    {
      namespace ChannelTypeMapper
      {

        static constexpr uint32_t BASIC_HASH = ConstExprHashingUtils::HashString("BASIC");
        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");
        static constexpr uint32_t ADVANCED_SD_HASH = ConstExprHashingUtils::HashString("ADVANCED_SD");
        static constexpr uint32_t ADVANCED_HD_HASH = ConstExprHashingUtils::HashString("ADVANCED_HD");


        ChannelType GetChannelTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_HASH)
          {
            return ChannelType::BASIC;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return ChannelType::STANDARD;
          }
          else if (hashCode == ADVANCED_SD_HASH)
          {
            return ChannelType::ADVANCED_SD;
          }
          else if (hashCode == ADVANCED_HD_HASH)
          {
            return ChannelType::ADVANCED_HD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelType>(hashCode);
          }

          return ChannelType::NOT_SET;
        }

        Aws::String GetNameForChannelType(ChannelType enumValue)
        {
          switch(enumValue)
          {
          case ChannelType::NOT_SET:
            return {};
          case ChannelType::BASIC:
            return "BASIC";
          case ChannelType::STANDARD:
            return "STANDARD";
          case ChannelType::ADVANCED_SD:
            return "ADVANCED_SD";
          case ChannelType::ADVANCED_HD:
            return "ADVANCED_HD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelTypeMapper
    } // namespace Model
  } // namespace IVS
} // namespace Aws
