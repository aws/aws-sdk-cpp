/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/BlockPublicAccessMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace BlockPublicAccessModeMapper
      {

        static const int off_HASH = HashingUtils::HashString("off");
        static const int block_bidirectional_HASH = HashingUtils::HashString("block-bidirectional");
        static const int block_ingress_HASH = HashingUtils::HashString("block-ingress");


        BlockPublicAccessMode GetBlockPublicAccessModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == off_HASH)
          {
            return BlockPublicAccessMode::off;
          }
          else if (hashCode == block_bidirectional_HASH)
          {
            return BlockPublicAccessMode::block_bidirectional;
          }
          else if (hashCode == block_ingress_HASH)
          {
            return BlockPublicAccessMode::block_ingress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BlockPublicAccessMode>(hashCode);
          }

          return BlockPublicAccessMode::NOT_SET;
        }

        Aws::String GetNameForBlockPublicAccessMode(BlockPublicAccessMode enumValue)
        {
          switch(enumValue)
          {
          case BlockPublicAccessMode::NOT_SET:
            return {};
          case BlockPublicAccessMode::off:
            return "off";
          case BlockPublicAccessMode::block_bidirectional:
            return "block-bidirectional";
          case BlockPublicAccessMode::block_ingress:
            return "block-ingress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BlockPublicAccessModeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
