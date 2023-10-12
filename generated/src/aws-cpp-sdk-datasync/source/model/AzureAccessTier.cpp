/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/AzureAccessTier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace AzureAccessTierMapper
      {

        static constexpr uint32_t HOT_HASH = ConstExprHashingUtils::HashString("HOT");
        static constexpr uint32_t COOL_HASH = ConstExprHashingUtils::HashString("COOL");
        static constexpr uint32_t ARCHIVE_HASH = ConstExprHashingUtils::HashString("ARCHIVE");


        AzureAccessTier GetAzureAccessTierForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOT_HASH)
          {
            return AzureAccessTier::HOT;
          }
          else if (hashCode == COOL_HASH)
          {
            return AzureAccessTier::COOL;
          }
          else if (hashCode == ARCHIVE_HASH)
          {
            return AzureAccessTier::ARCHIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AzureAccessTier>(hashCode);
          }

          return AzureAccessTier::NOT_SET;
        }

        Aws::String GetNameForAzureAccessTier(AzureAccessTier enumValue)
        {
          switch(enumValue)
          {
          case AzureAccessTier::NOT_SET:
            return {};
          case AzureAccessTier::HOT:
            return "HOT";
          case AzureAccessTier::COOL:
            return "COOL";
          case AzureAccessTier::ARCHIVE:
            return "ARCHIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AzureAccessTierMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
