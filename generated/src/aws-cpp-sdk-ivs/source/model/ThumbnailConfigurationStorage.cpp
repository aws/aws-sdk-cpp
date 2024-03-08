/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/ThumbnailConfigurationStorage.h>
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
      namespace ThumbnailConfigurationStorageMapper
      {

        static const int SEQUENTIAL_HASH = HashingUtils::HashString("SEQUENTIAL");
        static const int LATEST_HASH = HashingUtils::HashString("LATEST");


        ThumbnailConfigurationStorage GetThumbnailConfigurationStorageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEQUENTIAL_HASH)
          {
            return ThumbnailConfigurationStorage::SEQUENTIAL;
          }
          else if (hashCode == LATEST_HASH)
          {
            return ThumbnailConfigurationStorage::LATEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThumbnailConfigurationStorage>(hashCode);
          }

          return ThumbnailConfigurationStorage::NOT_SET;
        }

        Aws::String GetNameForThumbnailConfigurationStorage(ThumbnailConfigurationStorage enumValue)
        {
          switch(enumValue)
          {
          case ThumbnailConfigurationStorage::NOT_SET:
            return {};
          case ThumbnailConfigurationStorage::SEQUENTIAL:
            return "SEQUENTIAL";
          case ThumbnailConfigurationStorage::LATEST:
            return "LATEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThumbnailConfigurationStorageMapper
    } // namespace Model
  } // namespace IVS
} // namespace Aws
