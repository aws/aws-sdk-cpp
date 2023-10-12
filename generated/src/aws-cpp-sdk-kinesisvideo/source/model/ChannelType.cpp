/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/ChannelType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideo
  {
    namespace Model
    {
      namespace ChannelTypeMapper
      {

        static constexpr uint32_t SINGLE_MASTER_HASH = ConstExprHashingUtils::HashString("SINGLE_MASTER");
        static constexpr uint32_t FULL_MESH_HASH = ConstExprHashingUtils::HashString("FULL_MESH");


        ChannelType GetChannelTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_MASTER_HASH)
          {
            return ChannelType::SINGLE_MASTER;
          }
          else if (hashCode == FULL_MESH_HASH)
          {
            return ChannelType::FULL_MESH;
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
          case ChannelType::SINGLE_MASTER:
            return "SINGLE_MASTER";
          case ChannelType::FULL_MESH:
            return "FULL_MESH";
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
  } // namespace KinesisVideo
} // namespace Aws
