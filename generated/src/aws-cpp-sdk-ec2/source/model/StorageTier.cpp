/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/StorageTier.h>
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
      namespace StorageTierMapper
      {

        static constexpr uint32_t archive_HASH = ConstExprHashingUtils::HashString("archive");
        static constexpr uint32_t standard_HASH = ConstExprHashingUtils::HashString("standard");


        StorageTier GetStorageTierForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == archive_HASH)
          {
            return StorageTier::archive;
          }
          else if (hashCode == standard_HASH)
          {
            return StorageTier::standard;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageTier>(hashCode);
          }

          return StorageTier::NOT_SET;
        }

        Aws::String GetNameForStorageTier(StorageTier enumValue)
        {
          switch(enumValue)
          {
          case StorageTier::NOT_SET:
            return {};
          case StorageTier::archive:
            return "archive";
          case StorageTier::standard:
            return "standard";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageTierMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
